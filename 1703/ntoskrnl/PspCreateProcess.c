/*
 * XREFs of PspCreateProcess @ 0x14045D9C0
 * Callers:
 *     NtCreateProcessEx @ 0x14041FB2C (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 * Callees:
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateObjectHandle @ 0x140541060 (PspCreateObjectHandle.c)
 *     SeQuerySigningPolicy @ 0x140545370 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14054581C (PspReferenceTokenForNewProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1405464A4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        _QWORD *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        HANDLE Handle,
        void *a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // bl
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  int v15; // eax
  PVOID v16; // r12
  _BYTE *v17; // r14
  __int64 v18; // rdx
  int SigningPolicy; // esi
  __int64 v20; // r8
  int v21; // r9d
  char v22; // bl
  char v23; // r13
  int Process; // eax
  int v25; // r15d
  char v26; // al
  PVOID v27; // rbx
  NTSTATUS result; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  char v31; // [rsp+70h] [rbp-248h] BYREF
  char v32; // [rsp+71h] [rbp-247h] BYREF
  char v33; // [rsp+72h] [rbp-246h] BYREF
  char v34; // [rsp+73h] [rbp-245h] BYREF
  KPROCESSOR_MODE v35; // [rsp+74h] [rbp-244h]
  int v36; // [rsp+78h] [rbp-240h]
  PVOID v37; // [rsp+80h] [rbp-238h] BYREF
  int v38; // [rsp+88h] [rbp-230h]
  __int64 v39; // [rsp+90h] [rbp-228h] BYREF
  __int64 v40; // [rsp+98h] [rbp-220h]
  _QWORD *v41; // [rsp+A0h] [rbp-218h]
  PVOID v42; // [rsp+A8h] [rbp-210h]
  PVOID Object; // [rsp+B0h] [rbp-208h] BYREF
  PVOID v44; // [rsp+B8h] [rbp-200h] BYREF
  int v45; // [rsp+C0h] [rbp-1F8h] BYREF
  HANDLE v46; // [rsp+C8h] [rbp-1F0h]
  _BYTE v47[400]; // [rsp+E0h] [rbp-1D8h] BYREF

  v38 = a2;
  v41 = a1;
  v46 = a7;
  v40 = a8;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v35 = PreviousMode;
  if ( (a5 & 0xFFFD4040) != 0
    || (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 && PreviousMode
    || (a5 & 0x6000) == 0x4000
    || (a5 & 0x2800) == 0x2000 )
  {
    return -1073741811;
  }
  v12 = a5 & 0x800;
  v36 = v12;
  if ( (a5 & 0x800) != 0 )
  {
    if ( PreviousMode )
      return -1073741811;
    if ( a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        return -1073741811;
      v29 = *(_QWORD *)(a3 + 16);
      if ( !v29
        || !*(_QWORD *)(v29 + 8)
        || !*(_WORD *)v29
        || *(_DWORD *)(a3 + 24)
        || *(_QWORD *)(a3 + 32)
        || *(_QWORD *)(a3 + 40) )
      {
        return -1073741811;
      }
      v12 = v36;
    }
    if ( Handle || a7 || !a4 )
      return -1073741811;
  }
  if ( (a5 & 0x20000) != 0 && (PreviousMode || !v12) )
    return -1073741811;
  memset(v47, 0, sizeof(v47));
  v47[388] = PreviousMode;
  if ( a3 )
  {
    if ( PreviousMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&v47[384] = v14;
    }
    else
    {
      v14 = *(_DWORD *)(a3 + 24);
    }
    if ( PreviousMode )
      v15 = v14 & 0x1DF2;
    else
      v15 = v14 & 0x11FF2;
    *(_DWORD *)&v47[384] = v15;
  }
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, PreviousMode, &v44, 0LL);
    v16 = v44;
    v42 = v44;
    if ( result < 0 )
      return result;
  }
  else
  {
    v16 = 0LL;
    v42 = 0LL;
  }
  if ( !a4 )
  {
    v17 = 0LL;
    v39 = 0LL;
    goto LABEL_17;
  }
  SigningPolicy = ObpReferenceObjectByHandleWithTag(a4, 1917023056, (__int64)&v39, 0LL, 0LL);
  if ( SigningPolicy >= 0 )
  {
    v17 = (_BYTE *)v39;
LABEL_17:
    LOBYTE(v13) = PreviousMode;
    SigningPolicy = PspReferenceTokenForNewProcess(v17, a8, v13, &v37);
    if ( SigningPolicy < 0 )
      goto LABEL_34;
    if ( v17 )
    {
      if ( v16 )
      {
        v31 = 0;
        SigningPolicy = SeQuerySigningPolicy(v37, 0LL, (ULONG_PTR)&v32, (__int64)&v33, (__int64)&v31);
        if ( SigningPolicy < 0 )
          goto LABEL_33;
        v23 = v32;
        if ( (unsigned __int8)v32 > 1u || (v22 = v31) != 0 )
        {
LABEL_72:
          SigningPolicy = -1073741637;
          goto LABEL_33;
        }
LABEL_21:
        if ( !v16 )
          goto LABEL_22;
        LOBYTE(v18) = v22;
        SigningPolicy = PspGetProcessProtectionRequirementsFromImage(v16, v18, &v34);
        if ( SigningPolicy >= 0 )
        {
          if ( v22 == v34 )
          {
LABEL_22:
            if ( v36 )
            {
              if ( a3 )
                v30 = *(_QWORD *)(a3 + 16);
              else
                v30 = 0LL;
              LOBYTE(v20) = v22;
              SigningPolicy = PsCreateMinimalProcess(
                                v17,
                                v30,
                                v20,
                                (unsigned __int64)v37 & -(__int64)(v40 != 0),
                                a5,
                                0LL,
                                v41);
            }
            else
            {
              LOBYTE(v21) = v22;
              LOBYTE(v18) = v35;
              Process = PspAllocateProcess(
                          (_DWORD)v17,
                          v18,
                          a3,
                          v21,
                          v23,
                          v33,
                          (__int64)v16,
                          (__int64)v37,
                          a5,
                          0LL,
                          v40 != 0,
                          0LL,
                          (__int64)&v45,
                          (__int64)&Object);
              SigningPolicy = Process;
              if ( Process >= 0 )
              {
                v25 = Process;
                v36 = Process;
                v26 = 1;
                if ( v45 )
                  v26 = 3;
                v27 = Object;
                SigningPolicy = PspInsertProcess(Object, v46, v26, 0LL, (__int64)v47);
                if ( SigningPolicy >= 0 )
                {
                  SigningPolicy = PspCreateObjectHandle(v27, v47, PsProcessType);
                  if ( SigningPolicy >= 0 )
                  {
                    *v41 = *(_QWORD *)&v47[392];
                    SigningPolicy = v25;
                  }
                  SepDeleteAccessState((__int64)v47);
                  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v47[32]);
                }
                if ( SigningPolicy < 0 )
                  PspRundownSingleProcess((ULONG_PTR)v27);
                ObfDereferenceObjectWithTag(v27, 0x72437350u);
              }
            }
            goto LABEL_33;
          }
          goto LABEL_72;
        }
LABEL_33:
        ObfDereferenceObject(v37);
LABEL_34:
        if ( v17 )
          ObfDereferenceObjectWithTag(v17, 0x72437350u);
        goto LABEL_36;
      }
      v22 = v17[1738];
      v31 = v22;
      v33 = v17[1737];
      v23 = v17[1736];
    }
    else
    {
      v22 = 114;
      v31 = 114;
      v23 = 30;
      v33 = 28;
    }
    v32 = v23;
    goto LABEL_21;
  }
LABEL_36:
  if ( v16 )
    ObfDereferenceObject(v16);
  return SigningPolicy;
}
