/*
 * XREFs of PspCreateProcess @ 0x1405E9350
 * Callers:
 *     NtCreateProcessEx @ 0x1405C442C (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspCreateObjectHandle @ 0x1404B84AC (PspCreateObjectHandle.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     SeQuerySigningPolicy @ 0x1404F40E0 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x1404F4708 (PspReferenceTokenForNewProcess.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140577B58 (PspGetProcessProtectionRequirementsFromImage.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG_PTR a4,
        KPROCESSOR_MODE AccessMode,
        int a6,
        HANDLE Handle,
        void *a8,
        __int64 a9)
{
  PVOID v11; // r12
  int ProcessProtectionRequirementsFromImage; // esi
  PVOID v13; // r14
  int v14; // r9d
  char v15; // bl
  int v16; // eax
  int v17; // r15d
  char v18; // al
  PVOID v19; // rbx
  NTSTATUS result; // eax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  bool v24; // cf
  __int64 v25; // rdx
  char v26; // [rsp+80h] [rbp-248h] BYREF
  char v27; // [rsp+81h] [rbp-247h] BYREF
  char v28; // [rsp+82h] [rbp-246h] BYREF
  char v29; // [rsp+83h] [rbp-245h]
  char v30; // [rsp+84h] [rbp-244h]
  int v31; // [rsp+88h] [rbp-240h]
  __int64 v32; // [rsp+90h] [rbp-238h]
  PVOID v33; // [rsp+98h] [rbp-230h] BYREF
  unsigned int v34; // [rsp+A0h] [rbp-228h]
  PVOID v35; // [rsp+A8h] [rbp-220h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-218h]
  PVOID v37; // [rsp+B8h] [rbp-210h]
  PVOID Object; // [rsp+C0h] [rbp-208h] BYREF
  PVOID v39; // [rsp+C8h] [rbp-200h] BYREF
  int v40; // [rsp+D0h] [rbp-1F8h] BYREF
  HANDLE v41; // [rsp+D8h] [rbp-1F0h]
  _BYTE v42[400]; // [rsp+F0h] [rbp-1D8h] BYREF

  v34 = a2;
  v36 = a1;
  v41 = a8;
  v32 = a9;
  if ( (a6 & 0xFFF94040) != 0
    || (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 && AccessMode
    || (a6 & 0x4000) != 0 && (a6 & 0x2000) == 0 )
  {
    return -1073741811;
  }
  v31 = a6 & 0x800;
  if ( (a6 & 0x2000) != 0 )
  {
    if ( (a6 & 0x800) == 0 )
      return -1073741811;
  }
  else if ( (a6 & 0x800) == 0 )
  {
    goto LABEL_6;
  }
  if ( AccessMode )
    return -1073741811;
  if ( a3 )
  {
    if ( *(_QWORD *)(a3 + 8) )
      return -1073741811;
    v21 = *(_QWORD *)(a3 + 16);
    if ( !v21
      || !*(_QWORD *)(v21 + 8)
      || !*(_WORD *)v21
      || *(_DWORD *)(a3 + 24) != 512
      || *(_QWORD *)(a3 + 32)
      || *(_QWORD *)(a3 + 40) )
    {
      return -1073741811;
    }
  }
  if ( Handle || a8 || !a4 )
    return -1073741811;
LABEL_6:
  if ( (a6 & 0x20000) != 0 && (AccessMode || (a6 & 0x800) == 0) )
    return -1073741811;
  memset(v42, 0, sizeof(v42));
  v42[388] = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&v42[384] = v22;
    }
    else
    {
      v22 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v23 = v22 & 0x1DF2;
    else
      v23 = v22 & 0x11FF2;
    *(_DWORD *)&v42[384] = v23;
  }
  if ( Handle )
  {
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &v39, 0LL);
    v11 = v39;
    v37 = v39;
    if ( result < 0 )
      return result;
  }
  else
  {
    v11 = 0LL;
    v37 = 0LL;
  }
  if ( !a4 )
  {
    v13 = 0LL;
    v35 = 0LL;
LABEL_13:
    ProcessProtectionRequirementsFromImage = PspReferenceTokenForNewProcess(
                                               (struct _KPROCESS *)v13,
                                               (void *)v32,
                                               AccessMode,
                                               &v33);
    if ( ProcessProtectionRequirementsFromImage < 0 )
      goto LABEL_30;
    if ( v13 )
    {
      if ( v11 )
      {
        v26 = 0;
        ProcessProtectionRequirementsFromImage = SeQuerySigningPolicy(v33, 0LL, 0, 0, &v27, &v28, &v26);
        if ( ProcessProtectionRequirementsFromImage < 0 )
          goto LABEL_29;
        v29 = v27;
        if ( (unsigned __int8)v27 > 1u || (v15 = v26) != 0 )
        {
LABEL_73:
          ProcessProtectionRequirementsFromImage = -1073741637;
          goto LABEL_29;
        }
      }
      else
      {
        v15 = *((_BYTE *)v13 + 1738);
        v26 = v15;
        v28 = *((_BYTE *)v13 + 1737);
        v29 = *((_BYTE *)v13 + 1736);
        v27 = v29;
      }
    }
    else
    {
      v15 = 114;
      v26 = 114;
      v29 = 30;
      v27 = 30;
      v28 = 28;
    }
    if ( !v11 )
      goto LABEL_18;
    ProcessProtectionRequirementsFromImage = PspGetProcessProtectionRequirementsFromImage((__int64)v11);
    if ( ProcessProtectionRequirementsFromImage >= 0 )
    {
      if ( v15 == v30 )
      {
LABEL_18:
        if ( v31 )
        {
          v24 = v32 != 0;
          v32 = -v32;
          if ( a3 )
            v25 = *(_QWORD *)(a3 + 16);
          else
            LODWORD(v25) = 0;
          LOBYTE(v14) = v15;
          ProcessProtectionRequirementsFromImage = PsCreateMinimalProcess(
                                                     (int)v13,
                                                     v25,
                                                     0,
                                                     v14,
                                                     (PVOID)((unsigned __int64)v33 & -(__int64)v24),
                                                     a6,
                                                     0,
                                                     0LL,
                                                     0LL,
                                                     v36);
        }
        else
        {
          v16 = PspAllocateProcess(
                  (__int64)v13,
                  AccessMode,
                  (char *)a3,
                  v15,
                  v29,
                  v28,
                  v11,
                  v33,
                  a6,
                  0,
                  0LL,
                  v32 != 0,
                  0LL,
                  (__int64)&v40,
                  &Object);
          ProcessProtectionRequirementsFromImage = v16;
          if ( v16 >= 0 )
          {
            v17 = v16;
            v31 = v16;
            v18 = 1;
            if ( v40 )
              v18 = 3;
            v19 = Object;
            ProcessProtectionRequirementsFromImage = PspInsertProcess(
                                                       (char *)Object,
                                                       (struct _KPROCESS *)v13,
                                                       v34,
                                                       a6,
                                                       v41,
                                                       v18,
                                                       0LL,
                                                       (struct _ACCESS_STATE *)v42);
            if ( ProcessProtectionRequirementsFromImage >= 0 )
            {
              ProcessProtectionRequirementsFromImage = PspCreateObjectHandle(
                                                         v19,
                                                         (__int64)v42,
                                                         (struct _OBJECT_TYPE *)PsProcessType);
              if ( ProcessProtectionRequirementsFromImage >= 0 )
              {
                *(_QWORD *)v36 = *(_QWORD *)&v42[392];
                ProcessProtectionRequirementsFromImage = v17;
              }
              SepDeleteAccessState((__int64)v42);
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v42[32]);
            }
            if ( ProcessProtectionRequirementsFromImage < 0 )
              PspRundownSingleProcess((__int64)v19, 0);
            ObfDereferenceObjectWithTag(v19, 0x72437350u);
          }
        }
        goto LABEL_29;
      }
      goto LABEL_73;
    }
LABEL_29:
    ObfDereferenceObject(v33);
LABEL_30:
    if ( v13 )
      ObfDereferenceObjectWithTag(v13, 0x72437350u);
    goto LABEL_32;
  }
  ProcessProtectionRequirementsFromImage = ObpReferenceObjectByHandleWithTag(
                                             a4,
                                             128,
                                             (__int64)PsProcessType,
                                             AccessMode,
                                             0x72437350u,
                                             &v35,
                                             0LL,
                                             0LL);
  if ( ProcessProtectionRequirementsFromImage >= 0 )
  {
    v13 = v35;
    goto LABEL_13;
  }
LABEL_32:
  if ( v11 )
    ObfDereferenceObject(v11);
  return ProcessProtectionRequirementsFromImage;
}
