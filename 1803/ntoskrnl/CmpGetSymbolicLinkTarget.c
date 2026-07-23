/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x1404A9C80
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x140008980 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1400C18B4 (RtlUnicodeStringCat.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x1404A38E0 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyStackDeleted @ 0x1404A5D2C (CmpIsKeyStackDeleted.c)
 *     CmpGetValueData @ 0x1404A6CE0 (CmpGetValueData.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1404AB0A4 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpComputeComponentHashes @ 0x140513000 (CmpComputeComponentHashes.c)
 *     CmpUnlockHashEntryByKcb @ 0x14054DE30 (CmpUnlockHashEntryByKcb.c)
 *     CmpValidateComponents @ 0x1405554A0 (CmpValidateComponents.c)
 *     CmpCompareUnicodeString @ 0x1405706A4 (CmpCompareUnicodeString.c)
 *     CmpGetComponentNameAtIndex @ 0x140573538 (CmpGetComponentNameAtIndex.c)
 *     CmpConstructAndCacheName @ 0x14057FA5C (CmpConstructAndCacheName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8)
{
  __int64 v8; // rdi
  unsigned int v10; // r13d
  char v12; // si
  __int64 v13; // r8
  __int16 v14; // ax
  bool v15; // r15
  __int64 v16; // r14
  char v17; // cl
  unsigned __int64 v18; // rsi
  __int64 v19; // r14
  __int16 i; // bx
  ULONG_PTR v21; // rax
  unsigned int v22; // ebx
  unsigned int v23; // edi
  unsigned int v24; // r14d
  unsigned int v25; // ecx
  __int64 v26; // r12
  unsigned __int16 *v27; // rax
  unsigned __int16 v28; // bx
  wchar_t *v29; // rsi
  char v30; // r13
  unsigned __int16 v31; // r9
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int16 v34; // r10
  unsigned __int64 v35; // r11
  unsigned __int16 v36; // dx
  _WORD *v37; // rax
  __int16 v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  char *v41; // r10
  UNICODE_STRING *v42; // rbx
  void *v43; // rcx
  ULONG_PTR v44; // rbx
  int NameInListWithStatus; // edi
  __int64 v46; // r9
  wchar_t *Buffer; // rbx
  _SLIST_ENTRY *v48; // rdx
  __int64 v50; // rcx
  __int16 v51; // ax
  __int64 KcbAtLayerHeight; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // edi
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v59; // edx
  __int64 v60; // rbx
  unsigned __int16 Length; // di
  UNICODE_STRING v62; // xmm6
  __int16 v63; // r8
  wchar_t *v64; // rax
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v66; // cx
  __int16 v67; // bx
  ULONG_PTR v68; // r15
  __int64 v69; // r15
  const UNICODE_STRING *v70; // rax
  UNICODE_STRING *v71; // rbx
  void *v72; // rcx
  int v73; // ebx
  __int64 v74; // rax
  int v75; // ebx
  unsigned int v76; // ebx
  __int64 v77; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  __int16 j; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v81[6]; // [rsp+4Ah] [rbp-BEh] BYREF
  __int64 v82; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v86; // [rsp+78h] [rbp-90h]
  unsigned int v87; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v88; // [rsp+80h] [rbp-88h]
  __int16 v89[2]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v90[3]; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v91; // [rsp+98h] [rbp-70h] BYREF
  __int64 v92; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v93[2]; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v94; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v95; // [rsp+C8h] [rbp-40h]
  __int64 v96; // [rsp+D0h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-20h]
  ULONG_PTR *v99; // [rsp+F0h] [rbp-18h]
  _WORD v100[4]; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t *v101; // [rsp+100h] [rbp-8h]
  __int64 v102; // [rsp+108h] [rbp+0h]
  PPRIVILEGE_SET v103[5]; // [rsp+110h] [rbp+8h] BYREF
  PSLIST_ENTRY v104[22]; // [rsp+138h] [rbp+30h] BYREF

  v8 = a5;
  LOWORD(v10) = a3;
  v98 = a7;
  v95 = a2;
  v88 = a1;
  v102 = a5;
  v99 = a8;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  BugCheckParameter2 = 0LL;
  v12 = 0;
  j = 256;
  v96 = 0LL;
  v82 = 0LL;
  *(_QWORD *)&v90[1] = 0LL;
  v87 = 0;
  v91 = 0xFFFFFFFFLL;
  DestinationString = -1;
  v93[0] = 0xFFFFFFFFLL;
  v81[0] = 0;
  v92 = 0xFFFFFFFFLL;
  memset(v104, 0, 0xA8uLL);
  memset(v103, 0, 0x20uLL);
  WORD1(v103[0]) = -1;
  v14 = *(_WORD *)(a1 + 2);
  v15 = !a5 && !v14;
  _mm_lfence();
  if ( v14 >= 2 )
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (v14 - 2));
  else
    v16 = *(_QWORD *)(a1 + 8LL * v14 + 8);
  if ( !v15 || (*(_DWORD *)(v16 + 4) & 8) == 0 )
  {
LABEL_60:
    if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(a6 + 168);
      *(_DWORD *)(a6 + 160) |= 1u;
    }
    v50 = v88;
    v51 = *(_WORD *)(v88 + 2);
    v86 = v51;
    if ( v51 < 0 )
    {
LABEL_143:
      v46 = v82;
      goto LABEL_144;
    }
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v50, v51);
      v53 = KcbAtLayerHeight;
      if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        goto LABEL_143;
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) == -1 )
        goto LABEL_151;
      if ( !CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 280), v8) )
        break;
      if ( *(_DWORD *)(v53 + 272) )
      {
        NameInListWithStatus = CmpFindNameInListWithStatus(
                                 *(_QWORD *)(v53 + 24),
                                 (unsigned int *)(v53 + 272),
                                 (__int64)&CmSymbolicLinkValueName,
                                 0,
                                 0LL,
                                 (__int64)&DestinationString);
        goto LABEL_67;
      }
      DestinationString = -1;
LABEL_150:
      v50 = v88;
LABEL_151:
      v51 = --v86;
      if ( v86 < 0 )
      {
        v46 = v82;
LABEL_69:
        if ( DestinationString == -1 )
          goto LABEL_144;
        v55 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v46 + 8))(v46, DestinationString, v93);
        v96 = v55;
        if ( (*(_BYTE *)(v55 + 16) & 2) != 0 || *(_DWORD *)(v55 + 12) != 6 )
          goto LABEL_143;
        if ( !CmpGetValueData(v82, DestinationString, v55, &v87, (__int64)&v90[1], (__int64)v81, (__int64)&v92) )
        {
          v46 = v82;
          NameInListWithStatus = -1073741670;
          goto LABEL_45;
        }
        if ( v87 > 0xFFFF || (v87 & 1) != 0 )
          goto LABEL_143;
        v10 = (__int16)v10;
        v56 = (unsigned int)(__int16)v10;
        SourceString.Buffer = *(wchar_t **)&v90[1];
        SourceString.Length = v87;
        SourceString.MaximumLength = v87;
        v57 = (unsigned __int16)v87;
        if ( (__int16)v10 < (unsigned int)a4 )
        {
          v13 = v95;
          do
          {
            ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v13, v56);
            v56 = (unsigned int)(v59 + 1);
            v57 += *ComponentNameAtIndex + 2;
          }
          while ( (unsigned int)v56 < a4 );
        }
        if ( v57 > 0xFFFF )
          goto LABEL_143;
        DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v57, 0x36364D43u);
        Buffer = DestinationString_8.Buffer;
        if ( !DestinationString_8.Buffer )
        {
          NameInListWithStatus = -1073741670;
          goto LABEL_157;
        }
        DestinationString_8.Length = 0;
        DestinationString_8.MaximumLength = v57;
        RtlUnicodeStringCopy(&DestinationString_8, &SourceString);
        if ( v81[0] )
        {
          ExFreePoolWithTag(*(PVOID *)&v90[1], 0);
          v60 = v82;
        }
        else
        {
          v60 = v82;
          (*(void (__fastcall **)(__int64, __int64 *))(v82 + 16))(v82, &v92);
        }
        *(_QWORD *)&v90[1] = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD *))(v60 + 16))(v60, v93);
        v96 = 0LL;
        CmpUnlockKcbStack(v88);
        Length = DestinationString_8.Length;
        v62 = DestinationString_8;
        HIBYTE(j) = 0;
        if ( !v15 )
          goto LABEL_130;
        v63 = 0;
        v101 = DestinationString_8.Buffer;
        v94 = DestinationString_8;
        v100[0] = 0;
        v100[1] = DestinationString_8.MaximumLength;
        if ( DestinationString_8.Length )
        {
          v64 = v94.Buffer;
          MaximumLength = v94.MaximumLength;
          v66 = v94.Length;
          while ( *v64 == 92 )
          {
            ++v64;
            v66 -= 2;
            MaximumLength -= 2;
            v94.Buffer = v64;
            v63 += 2;
            v94.Length = v66;
            v94.MaximumLength = MaximumLength;
            v100[0] = v63;
            if ( !v66 )
              goto LABEL_92;
          }
          if ( v66 )
          {
            while ( *v64 != 92 )
            {
              ++v64;
              v66 -= 2;
              MaximumLength -= 2;
              v94.Buffer = v64;
              v63 += 2;
              v94.Length = v66;
              v94.MaximumLength = MaximumLength;
              v100[0] = v63;
              if ( !v66 )
                goto LABEL_92;
            }
            do
            {
              if ( *v64 != 92 )
                break;
              ++v64;
              MaximumLength -= 2;
              v66 -= 2;
            }
            while ( v66 );
            v94.Buffer = v64;
            v94.Length = v66;
            v94.MaximumLength = MaximumLength;
          }
        }
LABEL_92:
        if ( (unsigned int)CmpCompareUnicodeString(v100, &CmRegistryRootName, 2LL)
          || (int)CmpComputeComponentHashes(&v94, v89, v104) < 0
          || (v67 = v89[0], (int)CmpValidateComponents((unsigned int)v89[0], v104) < 0)
          || (int)CmpPerformCompleteKcbCacheLookup(
                    *((_QWORD *)CmpRegistryRootObject + 1),
                    0LL,
                    (__int64)&BugCheckParameter2,
                    (__int64)&j,
                    (__int64)v90) < 0 )
        {
LABEL_130:
          v68 = BugCheckParameter2;
        }
        else if ( LOWORD(v90[0]) == v67 )
        {
          v68 = BugCheckParameter2;
          if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v103, BugCheckParameter2) >= 0 )
          {
            CmpLockKcbStackShared((__int64)v103);
            v73 = CmpConstructAndCacheName(v68, 0LL);
            CmpUnlockKcbStack((__int64)v103);
            if ( v73 >= 0 )
            {
              if ( (_BYTE)j )
              {
                CmpUnlockHashEntryByKcb(v68);
                LOBYTE(j) = 0;
              }
              CmpLockKcbStackTopExclusiveRestShared(v88);
              HIBYTE(j) = 1;
              if ( !CmpIsKeyStackDeleted(v88, 0LL) )
              {
                v74 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v16 + 24) + 8LL))(
                        *(_QWORD *)(v16 + 24),
                        *(unsigned int *)(v16 + 32),
                        &v91);
                v75 = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v16 + 24),
                        (unsigned int *)(v74 + 36),
                        (__int64)&CmSymbolicLinkValueName,
                        0,
                        0LL,
                        (__int64)&DestinationString);
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v16 + 24) + 16LL))(*(_QWORD *)(v16 + 24), &v91);
                if ( v75 >= 0 )
                {
                  v76 = DestinationString;
                  v82 = *(_QWORD *)(v16 + 24);
                  v77 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v82 + 8))(v82, DestinationString, v93);
                  v96 = v77;
                  if ( *(_DWORD *)(v77 + 12) == 6
                    && CmpGetValueData(v82, v76, v77, &v87, (__int64)&v90[1], (__int64)v81, (__int64)&v92)
                    && v87 <= 0xFFFF
                    && (v87 & 1) == 0 )
                  {
                    SourceString.Length = v87;
                    SourceString.MaximumLength = v87;
                    SourceString.Buffer = *(wchar_t **)&v90[1];
                    if ( !(unsigned int)CmpCompareUnicodeString(&DestinationString_8, &SourceString, 0LL) )
                    {
                      CmpCleanUpKcbValueCache(v16);
                      *(_QWORD *)(v16 + 96) = v68;
                      if ( !(unsigned __int8)CmpReferenceKeyControlBlockUnsafe(v68) )
                      {
                        v68 = 0LL;
                        BugCheckParameter2 = 0LL;
                      }
                      *(_WORD *)(v16 + 4) |= 8u;
                      CmpUnlockKcbStack(v88);
                      HIBYTE(j) = 0;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          CmpDereferenceKeyControlBlock(BugCheckParameter2);
          v68 = 0LL;
          BugCheckParameter2 = 0LL;
        }
        if ( (__int16)v10 < (unsigned int)a4 )
        {
          v69 = v95;
          while ( 1 )
          {
            v70 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v69, v10);
            DestinationString_8.Length = Length + 2;
            DestinationString_8.Buffer[(unsigned __int64)Length >> 1] = 92;
            RtlUnicodeStringCat(&DestinationString_8, v70);
            if ( ++v10 >= a4 )
              break;
            Length = DestinationString_8.Length;
          }
          v62 = DestinationString_8;
          v68 = BugCheckParameter2;
        }
        v71 = (UNICODE_STRING *)v98;
        v72 = *(void **)(v98 + 8);
        if ( v72 )
        {
          ExFreePoolWithTag(v72, 0);
          v71->Buffer = 0LL;
        }
        if ( (_BYTE)j )
          CmpUnlockHashEntryByKcb(v68);
        BugCheckParameter2 = 0LL;
        *v99 = v68;
        *v71 = v62;
        RtlInitUnicodeString(&DestinationString_8, 0LL);
        v46 = v82;
        NameInListWithStatus = 0;
        goto LABEL_45;
      }
    }
    v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v53 + 24) + 8LL))(
            *(_QWORD *)(v53 + 24),
            *(unsigned int *)(v53 + 32),
            &v91);
    NameInListWithStatus = CmpFindNameInListWithStatus(
                             *(_QWORD *)(v53 + 24),
                             (unsigned int *)(v54 + 36),
                             (__int64)&CmSymbolicLinkValueName,
                             0,
                             0LL,
                             (__int64)&DestinationString);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v53 + 24) + 16LL))(*(_QWORD *)(v53 + 24), &v91);
LABEL_67:
    if ( NameInListWithStatus >= 0 )
    {
      v46 = *(_QWORD *)(v53 + 24);
      v82 = v46;
      goto LABEL_69;
    }
    if ( NameInListWithStatus != -1073741772 )
      goto LABEL_44;
    v8 = v102;
    goto LABEL_150;
  }
  v17 = 0;
  BugCheckParameter2 = *(_QWORD *)(v16 + 96);
  v18 = *(_QWORD *)(BugCheckParameter2 + 288);
  if ( (v18 & 1) != 0 )
  {
    v17 = 1;
    v18 &= ~1uLL;
  }
  if ( !v18 || v17 )
  {
    v12 = 0;
    goto LABEL_60;
  }
  if ( !(unsigned __int8)CmpReferenceKeyControlBlockUnsafe(BugCheckParameter2) )
  {
    NameInListWithStatus = -1073741670;
    BugCheckParameter2 = 0LL;
    v12 = 0;
    v46 = 0LL;
    goto LABEL_45;
  }
  v19 = v88;
  for ( i = 0; i <= *(__int16 *)(v19 + 2); ++i )
  {
    v21 = CmpGetKcbAtLayerHeight(v19, i);
    CmpUnlockKcb(v21);
  }
  ExAcquirePushLockSharedEx(BugCheckParameter2 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 48));
  v22 = *(unsigned __int16 *)v18;
  v23 = (__int16)v10;
  v24 = a4;
  v25 = (__int16)v10;
  v26 = v95;
  for ( j = 1; v25 < v24; ++v25 )
  {
    if ( v25 >= 8 )
      v27 = (unsigned __int16 *)(*(_QWORD *)(v95 + 160) + 16 * (v25 - 8 + 6LL));
    else
      v27 = (unsigned __int16 *)(v95 + 16 * (v25 + 2LL));
    v22 += *v27 + 2;
  }
  if ( v22 > 0xFFFF )
  {
    v12 = j;
    v46 = 0LL;
LABEL_144:
    NameInListWithStatus = -1073741772;
    goto LABEL_45;
  }
  DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x36364D43u);
  if ( !DestinationString_8.Buffer )
  {
    v12 = j;
    NameInListWithStatus = -1073741670;
    goto LABEL_53;
  }
  DestinationString_8.Length = 0;
  DestinationString_8.MaximumLength = v22;
  RtlUnicodeStringCopy(&DestinationString_8, (PCUNICODE_STRING)v18);
  if ( (__int16)v10 < v24 )
  {
    v28 = DestinationString_8.MaximumLength;
    v29 = DestinationString_8.Buffer;
    v30 = DestinationString_8.MaximumLength;
    v31 = DestinationString_8.Length;
    do
    {
      if ( v23 >= 8 )
        v32 = *(_QWORD *)(v26 + 160) + 16 * (v23 - 8 + 6LL);
      else
        v32 = v26 + 16 * (v23 + 2LL);
      v33 = v31;
      v31 += 2;
      DestinationString_8.Length = v31;
      v29[v33 >> 1] = 92;
      if ( (v31 & 1) == 0 && (v30 & 1) == 0 && v31 <= v28 && v28 != 0xFFFF && (v29 || !v31 && !v28) )
      {
        v34 = *(_WORD *)v32;
        v35 = (unsigned __int64)v31 >> 1;
        if ( (*(_WORD *)v32 & 1) == 0 )
        {
          v36 = *(_WORD *)(v32 + 2);
          if ( (v36 & 1) == 0 && v34 <= v36 && v36 != 0xFFFF )
          {
            v37 = *(_WORD **)(v32 + 8);
            if ( v37 || !v34 && !v36 )
            {
              v38 = 0;
              v39 = (unsigned __int64)v34 >> 1;
              v40 = ((unsigned __int64)v28 >> 1) - v35;
              if ( v40 )
              {
                v41 = (char *)v29 + 2 * v35 - (_QWORD)v37;
                do
                {
                  if ( !v39 )
                    break;
                  --v39;
                  *(_WORD *)((char *)v37 + (_QWORD)v41) = *v37;
                  ++v38;
                  ++v37;
                  --v40;
                }
                while ( v40 );
              }
              v31 = 2 * (v35 + v38);
              DestinationString_8.Length = v31;
            }
          }
        }
      }
      ++v23;
    }
    while ( v23 < v24 );
  }
  v42 = (UNICODE_STRING *)v98;
  v43 = *(void **)(v98 + 8);
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    v42->Buffer = 0LL;
  }
  *v42 = DestinationString_8;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  v44 = BugCheckParameter2;
  CmpUnlockKcb(BugCheckParameter2);
  v12 = 0;
  BugCheckParameter2 = 0LL;
  NameInListWithStatus = 0;
  *v99 = v44;
LABEL_44:
  v46 = v82;
LABEL_45:
  Buffer = DestinationString_8.Buffer;
  if ( DestinationString_8.Buffer )
  {
    ExFreePoolWithTag(DestinationString_8.Buffer, 0);
LABEL_157:
    v46 = v82;
  }
  if ( *(_QWORD *)&v90[1] )
  {
    if ( v81[0] )
      ExFreePoolWithTag(*(PVOID *)&v90[1], 0);
    else
      (*(void (__fastcall **)(__int64, __int64 *))(v46 + 16))(v46, &v92);
  }
  if ( v96 )
    (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(v82 + 16))(v82, v93, v13, v46);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  if ( HIBYTE(j) )
    CmpUnlockKcbStack(v88);
LABEL_53:
  if ( BugCheckParameter2 )
  {
    if ( v12 )
      CmpUnlockKcb(BugCheckParameter2);
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  }
  if ( v103[3] )
    CmSiFreeMemory(v103[3]);
  v48 = v104[20];
  if ( v104[20] )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[8].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v48);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v48);
    }
  }
  return (unsigned int)NameInListWithStatus;
}
