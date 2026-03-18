/*
 * XREFs of ObDuplicateObject @ 0x140507760
 * Callers:
 *     PspCopyAndFixupParameters @ 0x14045F34C (PspCopyAndFixupParameters.c)
 *     NtDuplicateObject @ 0x1405075A0 (NtDuplicateObject.c)
 *     PspPropagateHandle @ 0x14053B49C (PspPropagateHandle.c)
 *     DbgkpOpenHandles @ 0x1406AA164 (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406B71C0 (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ObpDecrementHandleCount @ 0x140487254 (ObpDecrementHandleCount.c)
 *     ObpGrantAccess @ 0x1404881A4 (ObpGrantAccess.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObpIncrementHandleCountEx @ 0x1404B1770 (ObpIncrementHandleCountEx.c)
 *     RtlMapGenericMask @ 0x1404C0550 (RtlMapGenericMask.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140507D70 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x140507F60 (ExCreateHandleEx.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14057B1E0 (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x140595FF8 (SeAuditHandleCreation.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1406F0B94 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x140729304 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x140745678 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObDuplicateObject(
        ULONG_PTR BugCheckParameter1,
        void *a2,
        PEPROCESS a3,
        __int64 *a4,
        ACCESS_MASK AccessMask,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  unsigned int v11; // edi
  char v12; // r13
  int v13; // r14d
  char v14; // al
  struct _EX_RUNDOWN_REF *v15; // rbx
  __int64 v16; // r8
  int v17; // ebx
  unsigned __int64 v18; // rax
  ACCESS_MASK v19; // r12d
  ACCESS_MASK v20; // edx
  int v21; // edi
  int v22; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // eax
  struct _ACCESS_STATE *v26; // rdi
  NTSTATUS v27; // r12d
  int v28; // ebx
  ULONG_PTR v29; // r14
  int v30; // ebx
  int v31; // r13d
  __int64 v32; // r12
  int v33; // edi
  struct _EX_RUNDOWN_REF *v35; // rcx
  __int64 v36; // rbx
  PACCESS_TOKEN ClientToken; // rax
  bool v38; // [rsp+40h] [rbp-C0h]
  char v39; // [rsp+41h] [rbp-BFh]
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+4Ch] [rbp-B4h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h]
  _QWORD v48[2]; // [rsp+78h] [rbp-88h] BYREF
  int v49; // [rsp+88h] [rbp-78h] BYREF
  ACCESS_MASK v50; // [rsp+8Ch] [rbp-74h]
  ULONG_PTR BugCheckParameter1a; // [rsp+90h] [rbp-70h]
  PEX_RUNDOWN_REF p_Blink; // [rsp+98h] [rbp-68h]
  PEX_RUNDOWN_REF RunRef; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-58h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v55; // [rsp+B0h] [rbp-50h] BYREF
  struct _ACCESS_STATE v56; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v57[28]; // [rsp+180h] [rbp+80h] BYREF

  Handle = a2;
  BugCheckParameter1a = BugCheckParameter1;
  if ( (a6 & 0x200) != 0 && !a8 )
    a3 = PsInitialSystemProcess;
  v11 = a6 & 0xFFFFFDFF;
  if ( a4 )
    *a4 = 0LL;
  v12 = a7;
  v13 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  v14 = *(_BYTE *)(BugCheckParameter1 + 720);
  if ( a3 )
  {
    if ( ((v14 & 1) != 0 || (a3->SecureState.SecureHandle & 1) != 0)
      && ((_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process
       || a3 != KeGetCurrentThread()->ApcState.Process) )
    {
      return 3221225506LL;
    }
  }
  else if ( (v14 & 1) != 0 )
  {
    return 3221225506LL;
  }
  v15 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
  RunRef = (PEX_RUNDOWN_REF)(BugCheckParameter1 + 760);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    return 3221225738LL;
  v16 = *(_QWORD *)(BugCheckParameter1 + 1048);
  if ( !v16 )
  {
    ExReleaseRundownProtection_0(v15);
    return 3221225738LL;
  }
  v42 = ObpReferenceProcessObjectByHandle(
          (_DWORD)Handle,
          BugCheckParameter1,
          v16,
          a8,
          1850237519,
          (__int64)&Object,
          (__int64)&v49,
          (__int64)&v46);
  if ( (v42 & 0x80000000) != 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    return v42;
  }
  v17 = v49;
  if ( (v49 & 4) == 0 )
    v46 = 0;
  if ( !a3 )
  {
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v55);
      NtClose(Handle);
      KiUnstackDetachProcess(&v55, 0LL);
      v28 = v42;
    }
    else
    {
      v28 = -1073741811;
    }
    v35 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
LABEL_62:
    ExReleaseRundownProtection_0(v35);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return (unsigned int)v28;
  }
  p_Blink = (PEX_RUNDOWN_REF)&a3[1].ProfileListHead.Blink;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&a3[1].ProfileListHead.Blink) )
  {
LABEL_83:
    if ( (v12 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v55);
      NtClose(Handle);
      KiUnstackDetachProcess(&v55, 0LL);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return 3221225738LL;
  }
  v18 = a3[1].ActiveProcessors.Bitmap[5];
  v54 = v18;
  if ( !v18 )
  {
    ExReleaseRundownProtection_0(p_Blink);
    goto LABEL_83;
  }
  v38 = v18 == ObpKernelHandleTable;
  v19 = v50;
  if ( v13 )
  {
    v20 = v50;
    AccessMask = v50;
  }
  else
  {
    v20 = AccessMask;
  }
  if ( (v12 & 4) != 0 )
    v21 = v17;
  else
    v21 = v17 & 0xC | v11;
  v22 = v21 | 8;
  if ( (v12 & 8) == 0 )
    v22 = v21;
  v42 = v22;
  v23 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v45 = (__int64)Object - 48;
  v24 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v23];
  v47 = v24;
  if ( (v20 & 0xF0000000) != 0 )
  {
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v24 + 76));
    v20 = AccessMask;
  }
  v25 = v20 & (*(_DWORD *)(v24 + 92) | 0x1000000);
  v26 = 0LL;
  v40 = v25;
  v39 = 0;
  if ( (~v19 & v25) == 0 )
  {
    v27 = v42;
LABEL_26:
    v28 = ObpIncrementHandleCountEx(2u, (__int64)&v40, (ULONG_PTR)a3, (__int64)Object, a8, v27, 0LL);
    v41 = v28;
    goto LABEL_27;
  }
  if ( (v17 & 8) != 0
    || (v36 = v47,
        *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, ULONG *, __int64 *, POOL_TYPE, GENERIC_MAPPING *))(v47 + 152) != SeDefaultObjectMethod) )
  {
    v27 = v42;
    v28 = -1073741790;
    v41 = -1073741790;
    goto LABEL_29;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a3 )
  {
    KiStackAttachProcess(a3, 0, (__int64)&v55);
    v39 = 1;
  }
  SeCreateAccessState(&v56, v57, v40, (GENERIC_MAPPING *)(v36 + 76));
  v27 = v42;
  v26 = &v56;
  v41 = ObpGrantAccess(2, (char *)Object, &v56, a8, v42, (ACCESS_MASK *)&v40);
  v28 = v41;
  if ( v41 >= 0 )
    goto LABEL_26;
LABEL_27:
  if ( v39 )
    KiUnstackDetachProcess(&v55, 0LL);
LABEL_29:
  v29 = BugCheckParameter1a;
  if ( (v12 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)&v55);
    NtClose(Handle);
    KiUnstackDetachProcess(&v55, 0LL);
  }
  if ( v28 < 0 )
  {
    if ( v26 )
    {
      SepDeleteAccessState((__int64)v26);
      SeReleaseSubjectContext(&v26->SubjectSecurityContext);
    }
    ExReleaseRundownProtection_0(RunRef);
    v35 = p_Blink;
    goto LABEL_62;
  }
  v30 = v27;
  if ( v26 && v26->GenerateOnClose )
  {
    v30 = v27 | 4;
    v46 = *((_DWORD *)v26->AuxData + 7);
  }
  v48[1] = v48;
  v48[0] = v48;
  if ( (*(_BYTE *)(v47 + 66) & 0x40) == 0 || *(_QWORD *)(v47 + 200) == v47 + 200 )
  {
    v31 = v41;
LABEL_35:
    v32 = ExCreateHandleEx(v54, v45, v40, v30, (__int64)&v46);
    if ( v32 )
    {
      if ( v26 )
        SeAuditHandleCreation((__int64)v26);
      if ( (v30 & 4) != 0 )
      {
        if ( v26 )
        {
          ClientToken = v26->SubjectSecurityContext.ClientToken;
          if ( !ClientToken )
            ClientToken = v26->SubjectSecurityContext.PrimaryToken;
        }
        else
        {
          ClientToken = 0LL;
        }
        if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, ClientToken) )
          SeAuditHandleDuplication(Handle, v32, v29, a3);
      }
    }
    else
    {
      ObpDecrementHandleCount(a3, v45);
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      v31 = -1073741670;
    }
    if ( v38 )
      v32 |= 0xFFFFFFFF80000000uLL;
    if ( a4 )
      *a4 = v32;
    if ( v26 )
    {
      SepDeleteAccessState((__int64)v26);
      SeReleaseSubjectContext(&v26->SubjectSecurityContext);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v29 + 760));
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&a3[1].ProfileListHead.Blink);
    v33 = (int)Object;
    if ( (_QWORD *)v48[0] != v48 )
      ObpPostInterceptHandleDuplicate((_DWORD)Object, v38, v31, v40, (__int64)v48);
    if ( (xmmword_140401150 & 0x40) != 0 && v31 >= 0 )
      EtwTraceDuplicateHandle((_DWORD)Handle, v32, v33, *(_DWORD *)(v29 + 736), a3[1].Header.WaitListHead.Flink, v47);
    return (unsigned int)v31;
  }
  v41 = v40;
  v31 = ObpPreInterceptHandleDuplicate((_DWORD)Object, v38, (unsigned int)&v41, v29, (__int64)a3, (__int64)v48);
  if ( v31 >= 0 )
  {
    if ( !v38 )
      v40 = v41;
    goto LABEL_35;
  }
  ObpDecrementHandleCount(a3, v45);
  if ( v26 )
  {
    SepDeleteAccessState((__int64)v26);
    SeReleaseSubjectContext(&v26->SubjectSecurityContext);
  }
  ExReleaseRundownProtection_0(RunRef);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&a3[1].ProfileListHead.Blink);
  ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
  return (unsigned int)v31;
}
