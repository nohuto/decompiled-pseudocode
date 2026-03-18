/*
 * XREFs of ObDuplicateObject @ 0x1404B6D20
 * Callers:
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     NtDuplicateObject @ 0x1404B6B60 (NtDuplicateObject.c)
 *     PspCopyAndFixupParameters @ 0x1404EA450 (PspCopyAndFixupParameters.c)
 *     PspPropagateHandle @ 0x1404F3D60 (PspPropagateHandle.c)
 *     CmpCreateEmptyHiveClone @ 0x1406F753C (CmpCreateEmptyHiveClone.c)
 *     DbgkpOpenHandles @ 0x14070E8C4 (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14071BE50 (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ObpFilterOperation @ 0x14003EC18 (ObpFilterOperation.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404B7360 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x1404B7560 (ExCreateHandleEx.c)
 *     RtlMapGenericMask @ 0x1404C8DF0 (RtlMapGenericMask.c)
 *     SeCreateAccessState @ 0x1404D2BF0 (SeCreateAccessState.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     ObpDecrementHandleCount @ 0x140519894 (ObpDecrementHandleCount.c)
 *     ObpGrantAccess @ 0x14053E3CC (ObpGrantAccess.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14055E214 (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x140577208 (SeAuditHandleCreation.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     ObpPostInterceptHandleDuplicate @ 0x140759F64 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x14078D694 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1407A75F0 (EtwTraceDuplicateHandle.c)
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
  unsigned __int8 v9; // bl
  unsigned int v12; // edi
  char v13; // r13
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ebx
  int v18; // ebx
  __int64 v19; // rax
  ACCESS_MASK v20; // r12d
  ACCESS_MASK v21; // edx
  int v22; // edi
  int v23; // ecx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r8
  int v27; // eax
  struct _SECURITY_SUBJECT_CONTEXT *v28; // rdi
  int v29; // ebx
  int v30; // r12d
  ULONG_PTR v31; // r14
  __int64 v32; // r13
  int v33; // ebx
  PACCESS_TOKEN ClientToken; // rax
  bool v36; // [rsp+40h] [rbp-C0h]
  char v37; // [rsp+41h] [rbp-BFh]
  unsigned int v38; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h]
  char *v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h]
  _QWORD v47[2]; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+90h] [rbp-70h] BYREF
  ACCESS_MASK v49; // [rsp+94h] [rbp-6Ch]
  ULONG_PTR BugCheckParameter1a; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  _BYTE v52[56]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v53[160]; // [rsp+E0h] [rbp-20h] BYREF
  char v54[224]; // [rsp+180h] [rbp+80h] BYREF

  v9 = a8;
  Handle = a2;
  BugCheckParameter1a = BugCheckParameter1;
  if ( (a6 & 0x200) != 0 && !a8 )
    a3 = PsInitialSystemProcess;
  v12 = a6 & 0xFFFFFDFF;
  if ( a4 )
    *a4 = 0LL;
  v13 = a7;
  v14 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  v15 = *(_QWORD *)(BugCheckParameter1 + 720);
  if ( a3 )
  {
    if ( ((v15 & 1) != 0 || (a3->SecureState.SecureHandle & 1) != 0)
      && ((_KPROCESS *)BugCheckParameter1 != KeGetCurrentThread()->ApcState.Process
       || a3 != KeGetCurrentThread()->ApcState.Process) )
    {
      return 3221225506LL;
    }
  }
  else if ( (v15 & 1) != 0 )
  {
    return 3221225506LL;
  }
  v16 = ObReferenceProcessHandleTable(BugCheckParameter1);
  if ( !v16 )
    return 3221225738LL;
  v41 = ObpReferenceProcessObjectByHandle(
          (_DWORD)Handle,
          BugCheckParameter1,
          v16,
          v9,
          1850237519,
          (__int64)&Object,
          (__int64)&v48,
          (__int64)&v45);
  v17 = v41;
  if ( v41 < 0 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    return v17;
  }
  v18 = v48;
  if ( (v48 & 4) == 0 )
    v45 = 0;
  if ( !a3 )
  {
    if ( (v13 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v52);
      NtClose(Handle);
      KiUnstackDetachProcess((__int64)v52, 0LL);
      v17 = v41;
    }
    else
    {
      v17 = -1073741811;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v17;
  }
  v19 = ObReferenceProcessHandleTable(a3);
  v51 = v19;
  if ( v19 )
  {
    v36 = v19 == ObpKernelHandleTable;
    v20 = v49;
    if ( v14 )
    {
      v21 = v49;
      AccessMask = v49;
    }
    else
    {
      v21 = AccessMask;
    }
    if ( (v13 & 4) != 0 )
      v22 = v18;
    else
      v22 = v18 & 0xC | v12;
    v23 = v22 | 8;
    if ( (v13 & 8) == 0 )
      v23 = v22;
    v40 = v23;
    v24 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
    v43 = (char *)Object - 48;
    v25 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v24];
    v46 = v25;
    v26 = v25 + 76;
    v44 = v25 + 76;
    if ( (v21 & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v25 + 76));
      v21 = AccessMask;
      v26 = v44;
    }
    else
    {
      v44 = v25 + 76;
    }
    v27 = v21 & (*(_DWORD *)(v25 + 92) | 0x1000000);
    v28 = 0LL;
    v38 = v27;
    v37 = 0;
    if ( (~v20 & v27) != 0 )
    {
      if ( (v18 & 8) != 0 || *(_UNKNOWN **)(v46 + 152) != &SeDefaultObjectMethod )
      {
        v29 = v40;
        v30 = -1073741790;
        goto LABEL_27;
      }
      if ( KeGetCurrentThread()->ApcState.Process != a3 )
      {
        KiStackAttachProcess(a3, 0, (__int64)v52);
        v26 = v44;
        v37 = 1;
      }
      SeCreateAccessState(v53, v54, v38, v26);
      v29 = v40;
      v28 = (struct _SECURITY_SUBJECT_CONTEXT *)v53;
      v30 = ObpGrantAccess(2LL, Object, v53, a8, v40, &v38);
      if ( v30 < 0 )
      {
LABEL_25:
        if ( v37 )
          KiUnstackDetachProcess((__int64)v52, 0LL);
LABEL_27:
        v31 = BugCheckParameter1a;
        if ( (v13 & 1) != 0 )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)v52);
          NtClose(Handle);
          KiUnstackDetachProcess((__int64)v52, 0LL);
        }
        if ( v30 < 0 )
        {
          if ( v28 )
          {
LABEL_62:
            SepDeleteAccessState((__int64)v28);
            SeReleaseSubjectContext(v28 + 1);
          }
        }
        else
        {
          if ( v28 )
          {
            v29 = v40;
            if ( BYTE2(v28->ImpersonationLevel) )
            {
              v29 = v40 | 4;
              v45 = *(_DWORD *)(*(_QWORD *)&v28[2].ImpersonationLevel + 28LL);
            }
          }
          v47[1] = v47;
          v47[0] = v47;
          if ( !ObpFilterOperation(v46) )
            goto LABEL_32;
          v41 = v38;
          v30 = ObpPreInterceptHandleDuplicate((_DWORD)Object, v36, (unsigned int)&v41, v31, (__int64)a3, (__int64)v47);
          if ( v30 >= 0 )
          {
            if ( !v36 )
              v38 = v41;
LABEL_32:
            v32 = ExCreateHandleEx(v51, (_DWORD)v43, v38, v29, (__int64)&v45);
            if ( v32 )
            {
              if ( v28 )
                SeAuditHandleCreation((__int64)v28);
              if ( (v29 & 4) != 0 )
              {
                if ( v28 )
                {
                  ClientToken = v28[1].ClientToken;
                  if ( !ClientToken )
                    ClientToken = v28[1].PrimaryToken;
                }
                else
                {
                  ClientToken = 0LL;
                }
                if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL, ClientToken) )
                  SeAuditHandleDuplication(Handle, v32, v31, a3);
              }
            }
            else
            {
              ObpDecrementHandleCount((ULONG_PTR)a3);
              ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
              v30 = -1073741670;
            }
            if ( v36 )
              v32 |= 0xFFFFFFFF80000000uLL;
            if ( a4 )
              *a4 = v32;
            if ( v28 )
            {
              SepDeleteAccessState((__int64)v28);
              SeReleaseSubjectContext(v28 + 1);
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v31 + 760));
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)&a3[1].ProfileListHead.Blink);
            v33 = (int)Object;
            if ( (_QWORD *)v47[0] != v47 )
              ObpPostInterceptHandleDuplicate((_DWORD)Object, v36, v30, v38, (__int64)v47);
            if ( (xmmword_14044C2D0 & 0x40) != 0 && v30 >= 0 )
              EtwTraceDuplicateHandle(
                (_DWORD)Handle,
                v32,
                v33,
                *(_DWORD *)(v31 + 736),
                a3[1].Header.WaitListHead.Flink,
                v46);
            return (unsigned int)v30;
          }
          ObpDecrementHandleCount((ULONG_PTR)a3);
          if ( v28 )
            goto LABEL_62;
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v31 + 760));
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&a3[1].ProfileListHead.Blink);
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
        return (unsigned int)v30;
      }
    }
    else
    {
      v29 = v40;
    }
    v30 = ObpIncrementHandleCountEx(2, (unsigned int)&v38, (_DWORD)a3, (_DWORD)Object, a8, v29, 0LL);
    goto LABEL_25;
  }
  if ( (v13 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v52);
    NtClose(Handle);
    KiUnstackDetachProcess((__int64)v52, 0LL);
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
  return 3221225738LL;
}
