/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x14047EAB0
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     RtlUnicodeStringValidateWorker @ 0x140016F20 (RtlUnicodeStringValidateWorker.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x1400AF93C (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x14011F290 (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpUnlockHashEntryByKcb @ 0x140472AB8 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpFindNameInListWithStatus @ 0x140479488 (CmpFindNameInListWithStatus.c)
 *     CmpGetValueData @ 0x14047E060 (CmpGetValueData.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpComputeComponentHashes @ 0x140564870 (CmpComputeComponentHashes.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmpIsKeyStackDeleted @ 0x140569C20 (CmpIsKeyStackDeleted.c)
 *     CmpCompareUnicodeString @ 0x140581BD0 (CmpCompareUnicodeString.c)
 *     CmpValidateComponents @ 0x140583938 (CmpValidateComponents.c)
 *     CmpGetComponentNameAtIndex @ 0x14058397C (CmpGetComponentNameAtIndex.c)
 *     CmpConstructAndCacheName @ 0x140598A9C (CmpConstructAndCacheName.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        ULONG_PTR *a7)
{
  __int64 v7; // rdi
  unsigned int v9; // r13d
  char v10; // r15
  __int64 v11; // rdx
  wchar_t *v12; // rdx
  int v13; // edx
  __int64 v14; // r8
  bool v15; // r14
  __int16 v16; // ax
  __int64 v17; // rsi
  char v18; // cl
  unsigned __int64 v19; // rdi
  ULONG_PTR v20; // r14
  __int64 v21; // rsi
  __int16 i; // bx
  ULONG_PTR v23; // rcx
  unsigned int v24; // ebx
  unsigned int v25; // esi
  unsigned int v26; // r13d
  unsigned int j; // ecx
  unsigned __int16 *v28; // rax
  size_t v29; // rdx
  ULONG v30; // r8d
  wchar_t *v31; // r12
  size_t v32; // rdx
  ULONG v33; // r8d
  unsigned __int16 v34; // r10
  __int16 v35; // r10
  __int64 v36; // r11
  char *v37; // rdx
  unsigned __int64 v38; // rax
  signed __int64 v39; // r8
  __int64 v40; // r11
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  unsigned __int16 v43; // cx
  unsigned __int64 v44; // r9
  unsigned __int16 v45; // ax
  _WORD *v46; // rdx
  __int16 v47; // r10
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r8
  char *v50; // r11
  UNICODE_STRING *v51; // rbx
  void *v52; // rcx
  ULONG_PTR v53; // rsi
  int v54; // ebx
  int NameInListWithStatus; // edi
  __int64 v56; // r9
  wchar_t *Buffer; // rbx
  _SLIST_ENTRY *v58; // rdx
  __int16 v60; // ax
  __int64 KcbAtLayerHeight; // rax
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  unsigned int v66; // edi
  __int64 v67; // r13
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v69; // edx
  __int64 v70; // rbx
  void (__fastcall *v71)(__int64, char *); // rax
  unsigned __int16 Length; // di
  UNICODE_STRING v73; // xmm6
  wchar_t *v74; // r12
  ULONG_PTR v75; // r14
  __int16 v76; // r8
  wchar_t *v77; // rcx
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v79; // ax
  __int16 v80; // bx
  unsigned int v81; // ebx
  __int64 v82; // r14
  const UNICODE_STRING *v83; // rax
  UNICODE_STRING *v84; // rbx
  void *v85; // rcx
  int v86; // ebx
  __int64 v87; // rax
  int v88; // ebx
  unsigned int v89; // ebx
  __int64 v90; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  __int16 v93; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v94[6]; // [rsp+4Ah] [rbp-BEh] BYREF
  __int64 v95; // [rsp+50h] [rbp-B8h]
  ULONG_PTR v96; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v99; // [rsp+78h] [rbp-90h] BYREF
  wchar_t *v100; // [rsp+80h] [rbp-88h] BYREF
  __int64 v101; // [rsp+88h] [rbp-80h]
  __int16 v102[2]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD BugCheckParameter2[3]; // [rsp+94h] [rbp-74h] BYREF
  ULONG_PTR v104; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING v105; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v106; // [rsp+B8h] [rbp-50h]
  char v107[8]; // [rsp+C0h] [rbp-48h] BYREF
  char v108[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v109; // [rsp+D0h] [rbp-38h]
  char v110[8]; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING SourceString; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v112; // [rsp+F0h] [rbp-18h]
  ULONG_PTR *v113; // [rsp+F8h] [rbp-10h]
  _WORD v114[4]; // [rsp+100h] [rbp-8h] BYREF
  wchar_t *v115; // [rsp+108h] [rbp+0h]
  PPRIVILEGE_SET v116[5]; // [rsp+110h] [rbp+8h] BYREF
  PSLIST_ENTRY v117[22]; // [rsp+138h] [rbp+30h] BYREF

  v7 = a1;
  LOWORD(v9) = a3;
  v112 = a6;
  v106 = a2;
  v101 = a1;
  v113 = a7;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  v93 = 1;
  v96 = 0LL;
  v10 = 0;
  HvpGetCellContextReinitialize((__int64)v107);
  v109 = v11;
  DestinationString = -1;
  v95 = v11;
  HvpGetCellContextReinitialize((__int64)v110);
  v100 = v12;
  v94[0] = (_BYTE)v12;
  LODWORD(v99) = (_DWORD)v12;
  HvpGetCellContextReinitialize((__int64)v108);
  memset(v117, v13, 0xA8uLL);
  memset(v116, 0, 0x20uLL);
  WORD1(v116[0]) = -1;
  v15 = !a5 && !*(_WORD *)(v7 + 2);
  v16 = *(_WORD *)(v7 + 2);
  _mm_lfence();
  if ( v16 >= 2 )
    v17 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL * (v16 - 2));
  else
    v17 = *(_QWORD *)(v7 + 8LL * v16 + 8);
  if ( !v15 || (*(_DWORD *)(v17 + 4) & 8) == 0 )
  {
LABEL_70:
    v60 = *(_WORD *)(v7 + 2);
    LOWORD(BugCheckParameter2[1]) = v60;
    if ( v60 < 0 )
      goto LABEL_154;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v7, (unsigned __int16)v60);
      v62 = KcbAtLayerHeight;
      v104 = KcbAtLayerHeight;
      if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        goto LABEL_154;
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      {
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 280)) )
        {
          if ( !*(_DWORD *)(v62 + 272) )
          {
            DestinationString = -1;
            goto LABEL_160;
          }
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v62 + 24),
                                   (unsigned int *)(v62 + 272),
                                   (__int64)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&DestinationString);
        }
        else
        {
          v63 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v62 + 24) + 8LL))(
                  *(_QWORD *)(v62 + 24),
                  *(unsigned int *)(v62 + 32),
                  v107);
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v62 + 24),
                                   (unsigned int *)(v63 + 36),
                                   (__int64)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&DestinationString);
          (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v104 + 24) + 16LL))(*(_QWORD *)(v104 + 24), v107);
        }
        if ( NameInListWithStatus >= 0 )
        {
          v56 = *(_QWORD *)(v104 + 24);
          v95 = v56;
          goto LABEL_77;
        }
        if ( NameInListWithStatus != -1073741772 )
          goto LABEL_144;
      }
LABEL_160:
      v60 = --LOWORD(BugCheckParameter2[1]);
      if ( SLOWORD(BugCheckParameter2[1]) < 0 )
      {
        v56 = v95;
LABEL_77:
        if ( DestinationString == -1 )
          goto LABEL_155;
        v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v56 + 8))(v56, DestinationString, v110);
        v109 = v64;
        if ( (*(_BYTE *)(v64 + 16) & 2) == 0 && *(_DWORD *)(v64 + 12) == 6 )
        {
          if ( !CmpGetValueData(
                  v95,
                  DestinationString,
                  v64,
                  (unsigned int *)&v99,
                  (__int64)&v100,
                  (__int64)v94,
                  (__int64)v108) )
          {
            v56 = v95;
            NameInListWithStatus = -1073741670;
            goto LABEL_55;
          }
          if ( (unsigned int)v99 <= 0xFFFF && (v99 & 1) == 0 )
          {
            v9 = (__int16)v9;
            v14 = (unsigned int)a4;
            v65 = (unsigned int)(__int16)v9;
            SourceString.Buffer = v100;
            SourceString.Length = v99;
            SourceString.MaximumLength = v99;
            v66 = (unsigned __int16)v99;
            BugCheckParameter2[1] = (__int16)v9;
            LODWORD(v104) = v14;
            if ( (__int16)v9 < (unsigned int)v14 )
            {
              v67 = v106;
              do
              {
                ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v67, v65);
                v65 = (unsigned int)(v69 + 1);
                v66 += *ComponentNameAtIndex + 2;
              }
              while ( (unsigned int)v65 < (unsigned int)v14 );
              v9 = BugCheckParameter2[1];
            }
            if ( v66 <= 0xFFFF )
            {
              DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v66, 0x36364D43u);
              Buffer = DestinationString_8.Buffer;
              if ( !DestinationString_8.Buffer )
              {
                NameInListWithStatus = -1073741670;
                goto LABEL_168;
              }
              DestinationString_8.Length = 0;
              DestinationString_8.MaximumLength = v66;
              RtlUnicodeStringCopy(&DestinationString_8, &SourceString);
              if ( v94[0] )
              {
                ExFreePoolWithTag(v100, 0);
                v70 = v95;
              }
              else
              {
                v70 = v95;
                (*(void (__fastcall **)(__int64, char *))(v95 + 16))(v95, v108);
              }
              v71 = *(void (__fastcall **)(__int64, char *))(v70 + 16);
              v100 = 0LL;
              v71(v70, v110);
              v109 = 0LL;
              CmpUnlockKcbStack(v101);
              Length = DestinationString_8.Length;
              v73 = DestinationString_8;
              LOBYTE(v93) = 0;
              v74 = DestinationString_8.Buffer;
              if ( !v15 )
                goto LABEL_140;
              v75 = 0LL;
              v105 = DestinationString_8;
              v115 = DestinationString_8.Buffer;
              v76 = 0;
              v114[0] = 0;
              v114[1] = DestinationString_8.MaximumLength;
              if ( DestinationString_8.Length )
              {
                v77 = v105.Buffer;
                MaximumLength = v105.MaximumLength;
                v79 = v105.Length;
                while ( *v77 == 92 )
                {
                  ++v77;
                  v79 -= 2;
                  MaximumLength -= 2;
                  v105.Buffer = v77;
                  v76 += 2;
                  v105.Length = v79;
                  v105.MaximumLength = MaximumLength;
                  v114[0] = v76;
                  if ( !v79 )
                    goto LABEL_101;
                }
                if ( v79 )
                {
                  while ( *v77 != 92 )
                  {
                    ++v77;
                    v79 -= 2;
                    MaximumLength -= 2;
                    v105.Buffer = v77;
                    v76 += 2;
                    v105.Length = v79;
                    v105.MaximumLength = MaximumLength;
                    v114[0] = v76;
                    if ( !v79 )
                      goto LABEL_101;
                  }
                  do
                  {
                    if ( *v77 != 92 )
                      break;
                    ++v77;
                    MaximumLength -= 2;
                    v79 -= 2;
                  }
                  while ( v79 );
                  v105.Length = v79;
                  v105.Buffer = v77;
                  v105.MaximumLength = MaximumLength;
                }
LABEL_101:
                v75 = 0LL;
              }
              if ( (unsigned int)CmpCompareUnicodeString(v114, &CmRegistryRootName, 2LL)
                || (int)CmpComputeComponentHashes(&v105, v102, v117) < 0
                || (v80 = v102[0], (int)CmpValidateComponents((unsigned int)v102[0], v117) < 0)
                || (int)CmpPerformCompleteKcbCacheLookup(
                          *((_QWORD *)CmpRegistryRootObject + 1),
                          0LL,
                          (__int64)&v96,
                          (__int64)&v93 + 1,
                          (__int64)BugCheckParameter2) < 0 )
              {
LABEL_140:
                v75 = v96;
LABEL_108:
                v96 = v75;
              }
              else
              {
                if ( LOWORD(BugCheckParameter2[0]) != v80 )
                {
                  CmpDereferenceKeyControlBlock(v96);
                  goto LABEL_108;
                }
                v75 = v96;
                if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v116, v96) >= 0 )
                {
                  CmpLockKcbStackShared((__int64)v116);
                  v86 = CmpConstructAndCacheName(v75, 0LL);
                  CmpUnlockKcbStack((__int64)v116);
                  if ( v86 >= 0 )
                  {
                    if ( HIBYTE(v93) )
                    {
                      CmpUnlockHashEntryByKcb(v75);
                      HIBYTE(v93) = 0;
                    }
                    CmpLockKcbStackTopExclusiveRestShared(v101);
                    LOBYTE(v93) = 1;
                    if ( !(unsigned __int8)CmpIsKeyStackDeleted(v101, 0LL) )
                    {
                      v87 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v17 + 24) + 8LL))(
                              *(_QWORD *)(v17 + 24),
                              *(unsigned int *)(v17 + 32),
                              v107);
                      v88 = CmpFindNameInListWithStatus(
                              *(_QWORD *)(v17 + 24),
                              (unsigned int *)(v87 + 36),
                              (__int64)&CmSymbolicLinkValueName,
                              0,
                              0LL,
                              (__int64)&DestinationString);
                      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v17 + 24) + 16LL))(
                        *(_QWORD *)(v17 + 24),
                        v107);
                      if ( v88 >= 0 )
                      {
                        v89 = DestinationString;
                        v95 = *(_QWORD *)(v17 + 24);
                        v90 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v95 + 8))(
                                v95,
                                DestinationString,
                                v110);
                        v109 = v90;
                        if ( *(_DWORD *)(v90 + 12) == 6
                          && CmpGetValueData(
                               v95,
                               v89,
                               v90,
                               (unsigned int *)&v99,
                               (__int64)&v100,
                               (__int64)v94,
                               (__int64)v108)
                          && (unsigned int)v99 <= 0xFFFF
                          && (v99 & 1) == 0 )
                        {
                          SourceString.Length = v99;
                          SourceString.MaximumLength = v99;
                          SourceString.Buffer = v100;
                          if ( !(unsigned int)CmpCompareUnicodeString(&DestinationString_8, &SourceString, 0LL) )
                          {
                            CmpCleanUpKcbValueCache(v17);
                            *(_QWORD *)(v17 + 96) = v75;
                            if ( !(unsigned __int8)CmpReferenceKeyControlBlockUnsafe(v75) )
                            {
                              v75 = 0LL;
                              v96 = 0LL;
                            }
                            *(_WORD *)(v17 + 4) |= 8u;
                            CmpUnlockKcbStack(v101);
                            LOBYTE(v93) = 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
              v81 = v104;
              if ( v9 < (unsigned int)v104 )
              {
                v82 = v106;
                while ( 1 )
                {
                  v83 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v82, v9);
                  DestinationString_8.Length = Length + 2;
                  v74[(unsigned __int64)Length >> 1] = 92;
                  RtlUnicodeStringCat(&DestinationString_8, v83);
                  if ( ++v9 >= v81 )
                    break;
                  v74 = DestinationString_8.Buffer;
                  Length = DestinationString_8.Length;
                }
                v73 = DestinationString_8;
                v75 = v96;
              }
              v84 = (UNICODE_STRING *)v112;
              v85 = *(void **)(v112 + 8);
              if ( v85 )
              {
                ExFreePoolWithTag(v85, 0);
                NameInListWithStatus = 0;
                v84->Buffer = 0LL;
              }
              else
              {
                NameInListWithStatus = 0;
              }
              if ( HIBYTE(v93) )
                CmpUnlockHashEntryByKcb(v75);
              v96 = 0LL;
              *v113 = v75;
              *v84 = v73;
              RtlInitUnicodeString(&DestinationString_8, 0LL);
              v56 = v95;
              goto LABEL_55;
            }
          }
        }
LABEL_154:
        v56 = v95;
LABEL_155:
        NameInListWithStatus = -1073741772;
LABEL_55:
        Buffer = DestinationString_8.Buffer;
        if ( DestinationString_8.Buffer )
        {
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
LABEL_168:
          v56 = v95;
        }
        if ( v100 )
        {
          if ( v94[0] )
            ExFreePoolWithTag(v100, 0);
          else
            (*(void (__fastcall **)(__int64, char *))(v56 + 16))(v56, v108);
        }
        if ( v109 )
          (*(void (__fastcall **)(__int64, char *, __int64, __int64))(v95 + 16))(v95, v110, v14, v56);
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        if ( (_BYTE)v93 )
          CmpUnlockKcbStack(v101);
        goto LABEL_63;
      }
      v7 = v101;
    }
  }
  v18 = 0;
  v96 = *(_QWORD *)(v17 + 96);
  v19 = *(_QWORD *)(v96 + 288);
  if ( (v19 & 1) != 0 )
  {
    v18 = 1;
    v19 &= ~1uLL;
  }
  if ( !v19 || v18 )
  {
    v7 = v101;
    goto LABEL_70;
  }
  v20 = v96;
  v104 = v96;
  if ( !(unsigned __int8)CmpReferenceKeyControlBlockUnsafe(v96) )
  {
    v96 = 0LL;
    NameInListWithStatus = -1073741670;
LABEL_144:
    v56 = v95;
    goto LABEL_55;
  }
  v21 = v101;
  for ( i = 0; i <= *(__int16 *)(v21 + 2); ++i )
  {
    if ( i >= 2 )
      v23 = *(_QWORD *)(*(_QWORD *)(v21 + 24) + 8LL * (i - 2));
    else
      v23 = *(_QWORD *)(v21 + 8LL * i + 8);
    CmpUnlockKcb(v23);
  }
  LOBYTE(v93) = 0;
  *(_QWORD *)&BugCheckParameter2[1] = v96 + 40;
  ExAcquirePushLockSharedEx(v96 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v96 + 48));
  v24 = *(unsigned __int16 *)v19;
  v10 = 1;
  v25 = (__int16)v9;
  v26 = a4;
  for ( j = v25; j < a4; ++j )
  {
    if ( j >= 8 )
      v28 = (unsigned __int16 *)(*(_QWORD *)(v106 + 160) + 16 * (j - 8 + 6LL));
    else
      v28 = (unsigned __int16 *)(v106 + 16 * (j + 2LL));
    v24 += *v28 + 2;
  }
  if ( v24 > 0xFFFF )
    goto LABEL_154;
  DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v24, 0x36364D43u);
  v31 = DestinationString_8.Buffer;
  if ( DestinationString_8.Buffer )
  {
    v10 = 0;
    DestinationString_8.MaximumLength = v24;
    DestinationString_8.Length = 0;
    if ( RtlUnicodeStringValidateWorker(&DestinationString_8, v29, v30) >= 0 )
    {
      if ( RtlUnicodeStringValidateWorker((PCUNICODE_STRING)v19, v32, v33) >= 0 )
      {
        v37 = *(char **)(v19 + 8);
        v38 = (unsigned __int64)*(unsigned __int16 *)v19 >> 1;
        if ( v36 )
        {
          v39 = (char *)v31 - v37;
          v40 = v36 - v38;
          do
          {
            if ( !v38 )
              break;
            --v38;
            *(_WORD *)&v37[v39] = *(_WORD *)v37;
            ++v35;
            v37 += 2;
          }
          while ( v38 + v40 );
        }
      }
      v34 = 2 * v35;
      DestinationString_8.Length = v34;
    }
    if ( v25 < v26 )
    {
      do
      {
        if ( v25 >= 8 )
          v41 = *(_QWORD *)(v106 + 160) + 16 * (v25 - 8 + 6LL);
        else
          v41 = v106 + 16 * (v25 + 2LL);
        v42 = v34;
        v34 += 2;
        DestinationString_8.Length = v34;
        v31[v42 >> 1] = 92;
        if ( (v34 & 1) == 0 && (v24 & 1) == 0 && v34 <= (unsigned __int16)v24 && (_WORD)v24 != 0xFFFF )
        {
          v43 = *(_WORD *)v41;
          v44 = (unsigned __int64)v34 >> 1;
          v116[4] = (PPRIVILEGE_SET)v44;
          if ( (v43 & 1) == 0 )
          {
            v45 = *(_WORD *)(v41 + 2);
            if ( (v45 & 1) == 0 && v43 <= v45 && v45 != 0xFFFF )
            {
              v46 = *(_WORD **)(v41 + 8);
              if ( v46 || !v43 && !v45 )
              {
                v47 = 0;
                v48 = (unsigned __int64)v43 >> 1;
                v49 = ((unsigned __int64)(unsigned __int16)v24 >> 1) - v44;
                if ( v49 )
                {
                  v50 = (char *)v31 + 2 * v44 - (_QWORD)v46;
                  do
                  {
                    if ( !v48 )
                      break;
                    --v48;
                    *(_WORD *)&v50[(_QWORD)v46] = *v46;
                    ++v47;
                    ++v46;
                    --v49;
                  }
                  while ( v49 );
                }
                v34 = 2 * (v44 + v47);
                DestinationString_8.Length = v34;
              }
            }
          }
        }
        ++v25;
      }
      while ( v25 < v26 );
      v20 = v104;
    }
    v51 = (UNICODE_STRING *)v112;
    v52 = *(void **)(v112 + 8);
    if ( v52 )
    {
      ExFreePoolWithTag(v52, 0);
      v51->Buffer = 0LL;
    }
    *v51 = DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    v53 = v96;
    v54 = *(_DWORD *)(v96 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(v20 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(v20 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v20 + 48));
    ExReleasePushLockEx(*(ULONG_PTR *)&BugCheckParameter2[1], 0LL);
    if ( v54 && (*(_DWORD *)(v53 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(v96);
    *v113 = v96;
    v96 = 0LL;
    NameInListWithStatus = 0;
    v56 = 0LL;
    goto LABEL_55;
  }
  NameInListWithStatus = -1073741670;
LABEL_63:
  if ( v96 )
  {
    if ( v10 )
      CmpUnlockKcb(v96);
    CmpDereferenceKeyControlBlock(v96);
  }
  if ( v116[3] )
    MiDeleteSubsection(v116[3]);
  v58 = v117[20];
  if ( v117[20] )
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
      RtlpInterlockedPushEntrySList(&P->ListHead, v58);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v58);
    }
  }
  return (unsigned int)NameInListWithStatus;
}
