/*
 * XREFs of PspCreateProcess @ 0x140599DF0
 * Callers:
 *     NtCreateProcessEx @ 0x140599D60 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateObjectHandle @ 0x1404D5D14 (PspCreateObjectHandle.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140538F14 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 *     PspReferenceTokenForNewProcess @ 0x14053A8C4 (PspReferenceTokenForNewProcess.c)
 *     SeQuerySigningPolicy @ 0x14053A940 (SeQuerySigningPolicy.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        _QWORD *a1,
        ACCESS_MASK a2,
        __int64 a3,
        ULONG_PTR a4,
        KPROCESSOR_MODE AccessMode,
        int a6,
        HANDLE Handle,
        void *a8,
        __int64 a9)
{
  int v11; // eax
  PVOID v12; // r12
  int SigningPolicy; // esi
  PVOID v14; // r14
  __int64 v15; // r8
  char v16; // bl
  int v17; // eax
  NTSTATUS result; // eax
  int v19; // r15d
  char v20; // al
  PVOID v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  bool v25; // cf
  __int64 v26; // rdx
  char v27; // [rsp+80h] [rbp-248h] BYREF
  char v28; // [rsp+81h] [rbp-247h] BYREF
  unsigned __int8 v29[6]; // [rsp+82h] [rbp-246h] BYREF
  int v30; // [rsp+88h] [rbp-240h]
  __int64 v31; // [rsp+90h] [rbp-238h]
  PVOID Object; // [rsp+98h] [rbp-230h] BYREF
  ACCESS_MASK v33; // [rsp+A0h] [rbp-228h]
  PVOID v34; // [rsp+A8h] [rbp-220h] BYREF
  _QWORD *v35; // [rsp+B0h] [rbp-218h]
  PVOID v36; // [rsp+B8h] [rbp-210h]
  PVOID v37; // [rsp+C0h] [rbp-208h] BYREF
  PVOID v38; // [rsp+C8h] [rbp-200h] BYREF
  int v39; // [rsp+D0h] [rbp-1F8h] BYREF
  HANDLE v40; // [rsp+D8h] [rbp-1F0h]
  _BYTE AccessState[400]; // [rsp+F0h] [rbp-1D8h] BYREF

  v33 = a2;
  v35 = a1;
  v40 = a8;
  v31 = a9;
  if ( (a6 & 0xFFF94040) != 0
    || (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 && AccessMode )
  {
    return -1073741811;
  }
  if ( (a6 & 0x4000) != 0 )
  {
    if ( (a6 & 0x2000) == 0 )
      return -1073741811;
  }
  else if ( (a6 & 0x2000) == 0 )
  {
    goto LABEL_5;
  }
  if ( (a6 & 0x800) == 0 )
    return -1073741811;
LABEL_5:
  v11 = a6 & 0x800;
  v30 = v11;
  if ( (a6 & 0x800) != 0 )
  {
    if ( AccessMode )
      return -1073741811;
    if ( a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        return -1073741811;
      v22 = *(_QWORD *)(a3 + 16);
      if ( !v22
        || !*(_QWORD *)(v22 + 8)
        || !*(_WORD *)v22
        || *(_DWORD *)(a3 + 24) != 512
        || *(_QWORD *)(a3 + 32)
        || *(_QWORD *)(a3 + 40) )
      {
        return -1073741811;
      }
      v11 = v30;
    }
    if ( Handle || a8 || !a4 )
      return -1073741811;
  }
  if ( (a6 & 0x20000) != 0 && (AccessMode || !v11) )
    return -1073741811;
  memset(AccessState, 0, sizeof(AccessState));
  AccessState[388] = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&AccessState[384] = v23;
    }
    else
    {
      v23 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v24 = v23 & 0x1DF2;
    else
      v24 = v23 & 0x11FF2;
    *(_DWORD *)&AccessState[384] = v24;
  }
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &v38, 0LL);
    v12 = v38;
    v36 = v38;
    if ( result < 0 )
      return result;
  }
  else
  {
    v12 = 0LL;
    v36 = 0LL;
  }
  if ( !a4 )
  {
    v14 = 0LL;
    v34 = 0LL;
LABEL_13:
    SigningPolicy = PspReferenceTokenForNewProcess((struct _KPROCESS *)v14, (void *)v31, AccessMode, &Object);
    if ( SigningPolicy < 0 )
      goto LABEL_21;
    if ( v14 )
    {
      if ( v12 )
      {
        v27 = 0;
        SigningPolicy = SeQuerySigningPolicy(Object, 0LL, 0, 0, (unsigned __int8 *)&v28, v29, (unsigned __int8 *)&v27);
        if ( SigningPolicy < 0 )
          goto LABEL_20;
        if ( (unsigned __int8)v28 > 1u || (v16 = v27) != 0 )
        {
LABEL_74:
          SigningPolicy = -1073741637;
          goto LABEL_20;
        }
      }
      else
      {
        v16 = *((_BYTE *)v14 + 1738);
        v27 = v16;
        v29[0] = *((_BYTE *)v14 + 1737);
        v28 = *((_BYTE *)v14 + 1736);
      }
    }
    else
    {
      v16 = 114;
      v27 = 114;
      v28 = 30;
      v29[0] = 28;
    }
    if ( !v12 )
      goto LABEL_18;
    SigningPolicy = PspGetProcessProtectionRequirementsFromImage((__int64)v12);
    if ( SigningPolicy >= 0 )
    {
      if ( v16 == v29[1] )
      {
LABEL_18:
        if ( v30 )
        {
          v25 = v31 != 0;
          v31 = -v31;
          if ( a3 )
            v26 = *(_QWORD *)(a3 + 16);
          else
            v26 = 0LL;
          LOBYTE(v15) = v16;
          SigningPolicy = PsCreateMinimalProcess(
                            v14,
                            v26,
                            v15,
                            (unsigned __int64)Object & -(__int64)v25,
                            a6,
                            0,
                            0LL,
                            0LL,
                            v35);
        }
        else
        {
          v17 = PspAllocateProcess(
                  (__int64)v14,
                  AccessMode,
                  (void *)a3,
                  v16,
                  v28,
                  v29[0],
                  v12,
                  Object,
                  a6,
                  0,
                  0LL,
                  v31 != 0,
                  0LL,
                  (__int64)&v39,
                  &v37);
          SigningPolicy = v17;
          if ( v17 >= 0 )
          {
            v19 = v17;
            v30 = v17;
            v20 = 1;
            if ( v39 )
              v20 = 3;
            v21 = v37;
            SigningPolicy = PspInsertProcess(
                              (char *)v37,
                              (__int64)v14,
                              v33,
                              a6,
                              v40,
                              v20,
                              0LL,
                              (PACCESS_STATE)AccessState);
            if ( SigningPolicy >= 0 )
            {
              SigningPolicy = PspCreateObjectHandle(v21, (__int64)AccessState, (struct _OBJECT_TYPE *)PsProcessType);
              if ( SigningPolicy >= 0 )
              {
                *v35 = *(_QWORD *)&AccessState[392];
                SigningPolicy = v19;
              }
              SepDeleteAccessState((__int64)AccessState);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&AccessState[32]);
            }
            if ( SigningPolicy < 0 )
              PspRundownSingleProcess((ULONG_PTR)v21, 0);
            ObfDereferenceObjectWithTag(v21, 0x72437350u);
          }
        }
        goto LABEL_20;
      }
      goto LABEL_74;
    }
LABEL_20:
    ObfDereferenceObject(Object);
LABEL_21:
    if ( v14 )
      ObfDereferenceObjectWithTag(v14, 0x72437350u);
    goto LABEL_23;
  }
  SigningPolicy = ObpReferenceObjectByHandleWithTag(
                    a4,
                    128,
                    (__int64)PsProcessType,
                    AccessMode,
                    1917023056,
                    &v34,
                    0LL,
                    0LL);
  if ( SigningPolicy >= 0 )
  {
    v14 = v34;
    goto LABEL_13;
  }
LABEL_23:
  if ( v12 )
    ObfDereferenceObject(v12);
  return SigningPolicy;
}
