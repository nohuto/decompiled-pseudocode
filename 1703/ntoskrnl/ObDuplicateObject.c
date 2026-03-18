/*
 * XREFs of ObDuplicateObject @ 0x140517550
 * Callers:
 *     PspCopyAndFixupParameters @ 0x14049C2C0 (PspCopyAndFixupParameters.c)
 *     NtDuplicateObject @ 0x140517390 (NtDuplicateObject.c)
 *     PspPropagateHandle @ 0x140544FEC (PspPropagateHandle.c)
 *     DbgkpOpenHandles @ 0x14067EFEC (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14068B520 (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     ObpFilterOperation @ 0x1400B03E0 (ObpFilterOperation.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ObpPreInterceptHandleDuplicate @ 0x140446FF4 (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditHandleCreation @ 0x140458A5C (SeAuditHandleCreation.c)
 *     RtlMapGenericMask @ 0x140472660 (RtlMapGenericMask.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     ObpGrantAccess @ 0x1404F37F4 (ObpGrantAccess.c)
 *     SeCreateAccessState @ 0x1404F4470 (SeCreateAccessState.c)
 *     ObpDecrementHandleCount @ 0x1404F5E48 (ObpDecrementHandleCount.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140517B10 (ObpReferenceProcessObjectByHandle.c)
 *     ExCreateHandleEx @ 0x140517CF0 (ExCreateHandleEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1406C2114 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x1406F1884 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x14070A7F8 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObDuplicateObject(
        struct _EX_RUNDOWN_REF *a1,
        void *a2,
        ULONG_PTR a3,
        __int64 *a4,
        ACCESS_MASK AccessMask,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  unsigned int v10; // edi
  char v11; // r14
  ACCESS_MASK v12; // r12d
  int v13; // esi
  unsigned __int64 Count; // r8
  unsigned int v15; // ebx
  NTSTATUS v16; // ebx
  struct _EX_RUNDOWN_REF *v17; // r13
  unsigned __int64 v18; // rax
  ACCESS_MASK v19; // r13d
  NTSTATUS v20; // edi
  __int64 v21; // rsi
  int v22; // eax
  __int64 ClientToken; // r12
  struct _ACCESS_STATE *v24; // rsi
  _KPROCESS *v25; // rbx
  int v26; // r13d
  bool v27; // zf
  ULONG_PTR v28; // r14
  __int64 v29; // rbx
  ULONG_PTR v30; // rdi
  int v31; // esi
  __int64 v33; // r13
  void *v34; // r8
  char v35; // al
  unsigned int v36; // ebx
  struct _EX_RUNDOWN_REF *p_Blink; // rcx
  void **v38; // rdx
  char v39; // al
  unsigned __int8 v40; // [rsp+40h] [rbp-C0h]
  char v41; // [rsp+41h] [rbp-BFh]
  ACCESS_MASK v42; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v45; // [rsp+58h] [rbp-A8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h]
  PEX_RUNDOWN_REF RunRef; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h]
  _QWORD v52[2]; // [rsp+90h] [rbp-70h] BYREF
  NTSTATUS v53; // [rsp+A0h] [rbp-60h] BYREF
  ACCESS_MASK v54; // [rsp+A4h] [rbp-5Ch]
  PEX_RUNDOWN_REF v55; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v56; // [rsp+B0h] [rbp-50h]
  $5BC46E0569261879018906DEC3127961 v57; // [rsp+B8h] [rbp-48h] BYREF
  struct _ACCESS_STATE v58; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v59[28]; // [rsp+190h] [rbp+90h] BYREF

  v45 = a3;
  Handle = a2;
  BugCheckParameter1 = (ULONG_PTR)a1;
  if ( (a6 & 0x200) != 0 && !a8 )
    v45 = (ULONG_PTR)PsInitialSystemProcess;
  v10 = a6 & 0xFFFFFDFF;
  if ( a4 )
    *a4 = 0LL;
  v11 = a7;
  v12 = AccessMask;
  v13 = a7 & 2;
  if ( (a7 & 2) == 0 && (AccessMask & 0xCE00000) != 0 )
    return 3221225506LL;
  RunRef = a1 + 95;
  if ( !ExAcquireRundownProtection(a1 + 95) )
    return 3221225738LL;
  Count = a1[131].Count;
  if ( !Count )
  {
    ExReleaseRundownProtection(RunRef);
    return 3221225738LL;
  }
  v44 = ObpReferenceProcessObjectByHandle(
          (_DWORD)Handle,
          (_DWORD)a1,
          Count,
          a8,
          1850237519,
          (__int64)&Object,
          (__int64)&v53,
          (__int64)&v50);
  v15 = v44;
  if ( v44 < 0 )
  {
    ExReleaseRundownProtection(RunRef);
    return v15;
  }
  else
  {
    v16 = v53;
    if ( (v53 & 4) == 0 )
      v50 = 0;
    v17 = (struct _EX_RUNDOWN_REF *)v45;
    if ( v45 )
    {
      v55 = (PEX_RUNDOWN_REF)(v45 + 760);
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v45 + 760)) )
      {
        v18 = v17[131].Count;
        v56 = v18;
        if ( v18 )
        {
          v19 = v54;
          v40 = v18 == ObpKernelHandleTable;
          if ( v13 )
          {
            v12 = v54;
            AccessMask = v54;
          }
          if ( (v11 & 4) != 0 )
            v20 = v16;
          else
            v20 = v16 & 0xC | v10;
          if ( (v11 & 8) != 0 )
            v20 |= 8u;
          v48 = (__int64)Object - 48;
          v21 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
          v51 = v21;
          if ( (v12 & 0xF0000000) != 0 )
          {
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v21 + 76));
            v12 = AccessMask;
          }
          v22 = v12 & (*(_DWORD *)(v21 + 92) | 0x1000000);
          ClientToken = 0LL;
          v42 = v22;
          v24 = 0LL;
          v41 = 0;
          if ( (~v19 & v22) != 0 )
          {
            if ( (v16 & 8) != 0
              || (v33 = v51,
                  *(__int64 (__fastcall **)(_QWORD *, int, DWORD *, void *, ULONG *, PGENERIC_MAPPING, POOL_TYPE, GENERIC_MAPPING *))(v51 + 152) != SeDefaultObjectMethod) )
            {
              v25 = (_KPROCESS *)v45;
              v26 = -1073741790;
              goto LABEL_26;
            }
            v25 = (_KPROCESS *)v45;
            if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v45 )
            {
              KiStackAttachProcess((_KPROCESS *)v45, 0, (__int64)&v57);
              v41 = 1;
            }
            SeCreateAccessState(&v58, v59, v42, (GENERIC_MAPPING *)(v33 + 76));
            v24 = &v58;
            v26 = ObpGrantAccess(2, (char *)Object, &v58, a8, v20, &v42);
            if ( v26 < 0 )
            {
LABEL_24:
              if ( v41 )
                KiUnstackDetachProcess(&v57, 0LL);
LABEL_26:
              v27 = (v11 & 1) == 0;
              v28 = BugCheckParameter1;
              if ( !v27 )
              {
                KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v57);
                NtClose(Handle);
                KiUnstackDetachProcess(&v57, 0LL);
              }
              if ( v26 < 0 )
              {
                if ( v24 )
                {
                  SepDeleteAccessState((__int64)v24);
                  SeReleaseSubjectContext(&v24->SubjectSecurityContext);
                }
                ExReleaseRundownProtection(RunRef);
                p_Blink = v55;
              }
              else
              {
                if ( v24 && v24->GenerateOnClose )
                {
                  v20 |= 4u;
                  v50 = *((_DWORD *)v24->AuxData + 7);
                }
                v52[1] = v52;
                v52[0] = v52;
                if ( !ObpFilterOperation(v51) )
                  goto LABEL_31;
                v44 = v42;
                v26 = ObpPreInterceptHandleDuplicate((__int64)Object, v40, &v44, v28, (__int64)v25, (__int64)v52);
                if ( v26 >= 0 )
                {
                  if ( !v40 )
                    v42 = v44;
LABEL_31:
                  v29 = ExCreateHandleEx(v56, v48, v42, v20, (__int64)&v50);
                  if ( v29 )
                  {
                    if ( v24 )
                    {
                      v34 = 0LL;
                      v35 = *(_BYTE *)(v48 + 26);
                      if ( (v35 & 0x20) != 0 )
                      {
                        v38 = (void **)(v48 - ObpInfoMaskToOffset[v35 & 0x3F]);
                        if ( v38 )
                          v34 = *v38;
                      }
                      SeAuditHandleCreation((__int64)v24, (void *)v29, v34);
                    }
                    if ( (v20 & 4) != 0 )
                    {
                      if ( v24 )
                      {
                        ClientToken = (__int64)v24->SubjectSecurityContext.ClientToken;
                        if ( !ClientToken )
                          ClientToken = (__int64)v24->SubjectSecurityContext.PrimaryToken;
                      }
                      v39 = SeAuditingWithTokenForSubcategory(123, ClientToken);
                      v30 = v45;
                      if ( v39 )
                        SeAuditHandleDuplication(Handle, v29, v28, v45);
                    }
                    else
                    {
                      v30 = v45;
                    }
                  }
                  else
                  {
                    v30 = v45;
                    ObpDecrementHandleCount((_KPROCESS *)v45, v48);
                    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
                    v26 = -1073741670;
                  }
                  if ( v40 )
                    v29 |= 0xFFFFFFFF80000000uLL;
                  if ( a4 )
                    *a4 = v29;
                  if ( v24 )
                  {
                    SepDeleteAccessState((__int64)v24);
                    SeReleaseSubjectContext(&v24->SubjectSecurityContext);
                  }
                  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v28 + 760));
                  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v30 + 760));
                  v31 = (int)Object;
                  if ( (_QWORD *)v52[0] != v52 )
                    ObpPostInterceptHandleDuplicate((_DWORD)Object, v40, v26, v42, (__int64)v52);
                  if ( (xmmword_1403E4010 & 0x40) != 0 && v26 >= 0 )
                    EtwTraceDuplicateHandle(
                      (_DWORD)Handle,
                      v29,
                      v31,
                      *(_DWORD *)(v28 + 736),
                      *(_DWORD *)(v30 + 736),
                      v51);
                  return (unsigned int)v26;
                }
                ObpDecrementHandleCount(v25, v48);
                if ( v24 )
                {
                  SepDeleteAccessState((__int64)v24);
                  SeReleaseSubjectContext(&v24->SubjectSecurityContext);
                }
                ExReleaseRundownProtection(RunRef);
                p_Blink = (struct _EX_RUNDOWN_REF *)&v25[1].ProfileListHead.Blink;
              }
              ExReleaseRundownProtection(p_Blink);
              ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
              return (unsigned int)v26;
            }
          }
          else
          {
            v25 = (_KPROCESS *)v45;
          }
          v26 = ObpIncrementHandleCountEx(2, (unsigned int)&v42, (_DWORD)v25, (_DWORD)Object, a8, v20, 0LL);
          goto LABEL_24;
        }
        ExReleaseRundownProtection(v17 + 95);
      }
      if ( (v11 & 1) != 0 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v57);
        NtClose(Handle);
        KiUnstackDetachProcess(&v57, 0LL);
      }
      ExReleaseRundownProtection(RunRef);
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return 3221225738LL;
    }
    if ( (v11 & 1) != 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v57);
      NtClose(Handle);
      KiUnstackDetachProcess(&v57, 0LL);
      v36 = v44;
    }
    else
    {
      v36 = -1073741811;
    }
    ExReleaseRundownProtection(RunRef);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v36;
  }
}
