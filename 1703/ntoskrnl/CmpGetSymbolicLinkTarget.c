/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x1404FFA30
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x140026D10 (RtlUnicodeStringCat.c)
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     RtlUnicodeStringCopy @ 0x14007FB50 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateWorker_0 @ 0x14008C0E0 (RtlUnicodeStringValidateWorker_0.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpValidateComponents @ 0x14044742C (CmpValidateComponents.c)
 *     CmpGetComponentNameAtIndex @ 0x140447470 (CmpGetComponentNameAtIndex.c)
 *     CmpConstructAndCacheName @ 0x140459200 (CmpConstructAndCacheName.c)
 *     CmpFindNameInListWithStatus @ 0x1404905C4 (CmpFindNameInListWithStatus.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmpUnlockHashEntryByKcb @ 0x1404CFE70 (CmpUnlockHashEntryByKcb.c)
 *     CmpCompareUnicodeString @ 0x1404D3620 (CmpCompareUnicodeString.c)
 *     CmpIsKeyStackDeleted @ 0x1404D4080 (CmpIsKeyStackDeleted.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140500604 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpComputeComponentHashes @ 0x140500780 (CmpComputeComponentHashes.c)
 *     CmpGetValueData @ 0x1405031D0 (CmpGetValueData.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
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
  unsigned int v9; // r13d
  char v10; // r15
  __int64 v11; // rdx
  wchar_t *v12; // rdx
  int v13; // edx
  __int64 v14; // r8
  bool v15; // r14
  __int16 v16; // ax
  __int64 v17; // rdi
  char v18; // cl
  unsigned __int64 v19; // rsi
  ULONG_PTR v20; // rdi
  __int64 v21; // r14
  __int16 i; // bx
  void *v23; // rcx
  unsigned int v24; // ebx
  unsigned int v25; // edi
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
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int16 v43; // dx
  unsigned __int64 v44; // r11
  unsigned __int16 v45; // ax
  _WORD *v46; // rcx
  __int16 v47; // r10
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r8
  char *v50; // r9
  UNICODE_STRING *v51; // rbx
  void *v52; // rcx
  int NameInListWithStatus; // esi
  __int64 v54; // r9
  wchar_t *Buffer; // rbx
  _SLIST_ENTRY *v56; // rdx
  __int64 v58; // rax
  __int16 v59; // si
  __int64 KcbAtLayerHeight; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // edx
  unsigned int v65; // esi
  __int64 v66; // r13
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v68; // edx
  __int64 v69; // rbx
  void (__fastcall *v70)(__int64, char *); // rax
  unsigned __int16 Length; // si
  UNICODE_STRING v72; // xmm6
  wchar_t *v73; // r12
  ULONG_PTR v74; // r14
  __int16 v75; // r8
  wchar_t *v76; // rcx
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v78; // ax
  __int16 v79; // bx
  unsigned int v80; // ebx
  __int64 v81; // r14
  const UNICODE_STRING *v82; // rax
  UNICODE_STRING *v83; // rbx
  void *v84; // rcx
  int v85; // ebx
  __int64 v86; // rax
  int v87; // ebx
  unsigned int v88; // ebx
  __int64 v89; // rax
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  __int16 v92; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v93[6]; // [rsp+4Ah] [rbp-BEh] BYREF
  __int64 v94; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int DestinationString_4; // [rsp+64h] [rbp-A4h]
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v99; // [rsp+78h] [rbp-90h] BYREF
  wchar_t *v100; // [rsp+80h] [rbp-88h] BYREF
  __int16 v101[2]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v102[3]; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v103; // [rsp+98h] [rbp-70h]
  UNICODE_STRING v104; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v105; // [rsp+B8h] [rbp-50h]
  char v106[8]; // [rsp+C0h] [rbp-48h] BYREF
  char v107[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v108; // [rsp+D0h] [rbp-38h]
  char v109[8]; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING SourceString; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v111; // [rsp+F0h] [rbp-18h]
  ULONG_PTR *v112; // [rsp+F8h] [rbp-10h]
  _WORD v113[4]; // [rsp+100h] [rbp-8h] BYREF
  wchar_t *v114; // [rsp+108h] [rbp+0h]
  PPRIVILEGE_SET v115[5]; // [rsp+110h] [rbp+8h] BYREF
  PSLIST_ENTRY v116[22]; // [rsp+138h] [rbp+30h] BYREF

  LOWORD(v9) = a3;
  v111 = a6;
  v105 = a2;
  *(_QWORD *)&v102[1] = a1;
  v112 = a7;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  v92 = 1;
  BugCheckParameter4 = 0LL;
  v10 = 0;
  HvpGetCellContextReinitialize((__int64)v106);
  v108 = v11;
  DestinationString = -1;
  v94 = v11;
  HvpGetCellContextReinitialize((__int64)v109);
  v100 = v12;
  v93[0] = (_BYTE)v12;
  LODWORD(v99) = (_DWORD)v12;
  HvpGetCellContextReinitialize((__int64)v107);
  memset(v116, v13, 0xA8uLL);
  memset(v115, 0, 0x20uLL);
  WORD1(v115[0]) = -1;
  v15 = !a5 && !*(_WORD *)(a1 + 2);
  v16 = *(_WORD *)(a1 + 2);
  _mm_lfence();
  if ( v16 >= 2 )
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (v16 - 2));
  else
    v17 = *(_QWORD *)(a1 + 8LL * v16 + 8);
  if ( !v15 || (*(_DWORD *)(v17 + 4) & 8) == 0 )
    goto LABEL_68;
  v18 = 0;
  BugCheckParameter4 = *(_QWORD *)(v17 + 96);
  v19 = *(_QWORD *)(BugCheckParameter4 + 288);
  if ( (v19 & 1) != 0 )
  {
    v18 = 1;
    v19 &= ~1uLL;
  }
  if ( !v19 || v18 )
  {
LABEL_68:
    v58 = *(_QWORD *)&v102[1];
    v59 = *(_WORD *)(*(_QWORD *)&v102[1] + 2LL);
    LOWORD(DestinationString_4) = v59;
    if ( v59 < 0 )
      goto LABEL_147;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v58, (unsigned __int16)v59);
      v103 = KcbAtLayerHeight;
      if ( *(_WORD *)(KcbAtLayerHeight + 58) && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        goto LABEL_147;
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      {
        if ( !CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 280), a5) )
        {
          v61 = v103;
          v62 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v103 + 24) + 8LL))(
                  *(_QWORD *)(v103 + 24),
                  *(unsigned int *)(v103 + 32),
                  v106);
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v61 + 24),
                                   (unsigned int *)(v62 + 36),
                                   (__int64)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&DestinationString);
          (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v103 + 24) + 16LL))(*(_QWORD *)(v103 + 24), v106);
LABEL_73:
          if ( NameInListWithStatus >= 0 )
          {
            v54 = *(_QWORD *)(v103 + 24);
            v94 = v54;
            goto LABEL_75;
          }
          if ( NameInListWithStatus != -1073741772 )
            goto LABEL_157;
          v59 = DestinationString_4;
          goto LABEL_154;
        }
        if ( *(_DWORD *)(v103 + 272) )
        {
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v103 + 24),
                                   (unsigned int *)(v103 + 272),
                                   (__int64)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&DestinationString);
          goto LABEL_73;
        }
        DestinationString = -1;
      }
LABEL_154:
      v58 = *(_QWORD *)&v102[1];
      LOWORD(DestinationString_4) = --v59;
      if ( v59 < 0 )
      {
        v54 = v94;
LABEL_75:
        if ( DestinationString == -1 )
          goto LABEL_148;
        v63 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v54 + 8))(v54, DestinationString, v109);
        v108 = v63;
        if ( (*(_BYTE *)(v63 + 16) & 2) == 0 && *(_DWORD *)(v63 + 12) == 6 )
        {
          if ( !(unsigned __int8)CmpGetValueData(
                                   v94,
                                   DestinationString,
                                   v63,
                                   (unsigned int)&v99,
                                   (__int64)&v100,
                                   (__int64)v93,
                                   (__int64)v107) )
          {
            NameInListWithStatus = -1073741670;
LABEL_157:
            v54 = v94;
            goto LABEL_53;
          }
          if ( (unsigned int)v99 <= 0xFFFF && (v99 & 1) == 0 )
          {
            v9 = (__int16)v9;
            v14 = (unsigned int)a4;
            v64 = v9;
            SourceString.Buffer = v100;
            SourceString.Length = v99;
            SourceString.MaximumLength = v99;
            v65 = (unsigned __int16)v99;
            DestinationString_4 = (__int16)v9;
            LODWORD(v103) = v14;
            if ( (__int16)v9 < (unsigned int)v14 )
            {
              v66 = v105;
              do
              {
                ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v66, v64);
                v64 = v68 + 1;
                v65 += *ComponentNameAtIndex + 2;
              }
              while ( v64 < (unsigned int)v14 );
              v9 = DestinationString_4;
            }
            if ( v65 <= 0xFFFF )
            {
              DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v65, 0x36364D43u);
              Buffer = DestinationString_8.Buffer;
              if ( !DestinationString_8.Buffer )
              {
                NameInListWithStatus = -1073741670;
                goto LABEL_162;
              }
              DestinationString_8.Length = 0;
              DestinationString_8.MaximumLength = v65;
              RtlUnicodeStringCopy(&DestinationString_8, &SourceString);
              if ( v93[0] )
              {
                ExFreePoolWithTag(v100, 0);
                v69 = v94;
              }
              else
              {
                v69 = v94;
                (*(void (__fastcall **)(__int64, char *))(v94 + 16))(v94, v107);
              }
              v70 = *(void (__fastcall **)(__int64, char *))(v69 + 16);
              v100 = 0LL;
              v70(v69, v109);
              v108 = 0LL;
              CmpUnlockKcbStack(*(__int64 *)&v102[1]);
              Length = DestinationString_8.Length;
              v72 = DestinationString_8;
              LOBYTE(v92) = 0;
              v73 = DestinationString_8.Buffer;
              if ( !v15 )
                goto LABEL_139;
              v74 = 0LL;
              v104 = DestinationString_8;
              v114 = DestinationString_8.Buffer;
              v75 = 0;
              v113[0] = 0;
              v113[1] = DestinationString_8.MaximumLength;
              if ( DestinationString_8.Length )
              {
                v76 = v104.Buffer;
                MaximumLength = v104.MaximumLength;
                v78 = v104.Length;
                while ( *v76 == 92 )
                {
                  ++v76;
                  v78 -= 2;
                  MaximumLength -= 2;
                  v104.Buffer = v76;
                  v75 += 2;
                  v104.Length = v78;
                  v104.MaximumLength = MaximumLength;
                  v113[0] = v75;
                  if ( !v78 )
                    goto LABEL_99;
                }
                if ( v78 )
                {
                  while ( *v76 != 92 )
                  {
                    ++v76;
                    v78 -= 2;
                    MaximumLength -= 2;
                    v104.Buffer = v76;
                    v75 += 2;
                    v104.Length = v78;
                    v104.MaximumLength = MaximumLength;
                    v113[0] = v75;
                    if ( !v78 )
                      goto LABEL_99;
                  }
                  do
                  {
                    if ( *v76 != 92 )
                      break;
                    ++v76;
                    MaximumLength -= 2;
                    v78 -= 2;
                  }
                  while ( v78 );
                  v104.Length = v78;
                  v104.Buffer = v76;
                  v104.MaximumLength = MaximumLength;
                }
LABEL_99:
                v74 = 0LL;
              }
              if ( (unsigned int)CmpCompareUnicodeString((__int64)v113, (__int64)&CmRegistryRootName, 2)
                || (int)CmpComputeComponentHashes(&v104, v101, v116) < 0
                || (v79 = v101[0], (int)CmpValidateComponents(v101[0], (__int64)v116) < 0)
                || (int)CmpPerformCompleteKcbCacheLookup(
                          *((PVOID *)CmpRegistryRootObject + 1),
                          0LL,
                          (__int64)&BugCheckParameter4,
                          (__int64)&v92 + 1,
                          (__int64)v102) < 0 )
              {
LABEL_139:
                v74 = BugCheckParameter4;
LABEL_106:
                BugCheckParameter4 = v74;
              }
              else
              {
                if ( LOWORD(v102[0]) != v79 )
                {
                  CmpDereferenceKeyControlBlock(BugCheckParameter4);
                  goto LABEL_106;
                }
                v74 = BugCheckParameter4;
                if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v115, BugCheckParameter4) >= 0 )
                {
                  CmpLockKcbStackShared((__int64)v115);
                  v85 = CmpConstructAndCacheName(v74, 0LL);
                  CmpUnlockKcbStack((__int64)v115);
                  if ( v85 >= 0 )
                  {
                    if ( HIBYTE(v92) )
                    {
                      CmpUnlockHashEntryByKcb(v74);
                      HIBYTE(v92) = 0;
                    }
                    CmpLockKcbStackTopExclusiveRestShared(*(__int64 *)&v102[1]);
                    LOBYTE(v92) = 1;
                    if ( !CmpIsKeyStackDeleted(*(__int64 *)&v102[1], 0LL) )
                    {
                      v86 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v17 + 24) + 8LL))(
                              *(_QWORD *)(v17 + 24),
                              *(unsigned int *)(v17 + 32),
                              v106);
                      v87 = CmpFindNameInListWithStatus(
                              *(_QWORD *)(v17 + 24),
                              (unsigned int *)(v86 + 36),
                              (__int64)&CmSymbolicLinkValueName,
                              0,
                              0LL,
                              (__int64)&DestinationString);
                      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v17 + 24) + 16LL))(
                        *(_QWORD *)(v17 + 24),
                        v106);
                      if ( v87 >= 0 )
                      {
                        v88 = DestinationString;
                        v94 = *(_QWORD *)(v17 + 24);
                        v89 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v94 + 8))(
                                v94,
                                DestinationString,
                                v109);
                        v108 = v89;
                        if ( *(_DWORD *)(v89 + 12) == 6 )
                        {
                          if ( (unsigned __int8)CmpGetValueData(
                                                  v94,
                                                  v88,
                                                  v89,
                                                  (unsigned int)&v99,
                                                  (__int64)&v100,
                                                  (__int64)v93,
                                                  (__int64)v107) )
                          {
                            if ( (unsigned int)v99 <= 0xFFFF && (v99 & 1) == 0 )
                            {
                              SourceString.Length = v99;
                              SourceString.MaximumLength = v99;
                              SourceString.Buffer = v100;
                              if ( !(unsigned int)CmpCompareUnicodeString(
                                                    (__int64)&DestinationString_8,
                                                    (__int64)&SourceString,
                                                    0) )
                              {
                                CmpCleanUpKcbValueCache(v17);
                                *(_QWORD *)(v17 + 96) = v74;
                                if ( !(unsigned __int8)CmpReferenceKeyControlBlockUnsafe(v74) )
                                {
                                  v74 = 0LL;
                                  BugCheckParameter4 = 0LL;
                                }
                                *(_WORD *)(v17 + 4) |= 8u;
                                CmpUnlockKcbStack(*(__int64 *)&v102[1]);
                                LOBYTE(v92) = 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v80 = v103;
              if ( v9 < (unsigned int)v103 )
              {
                v81 = v105;
                while ( 1 )
                {
                  v82 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v81, v9);
                  DestinationString_8.Length = Length + 2;
                  v73[(unsigned __int64)Length >> 1] = 92;
                  RtlUnicodeStringCat(&DestinationString_8, v82);
                  if ( ++v9 >= v80 )
                    break;
                  v73 = DestinationString_8.Buffer;
                  Length = DestinationString_8.Length;
                }
                v72 = DestinationString_8;
                v74 = BugCheckParameter4;
              }
              v83 = (UNICODE_STRING *)v111;
              v84 = *(void **)(v111 + 8);
              if ( v84 )
              {
                ExFreePoolWithTag(v84, 0);
                v83->Buffer = 0LL;
              }
              if ( HIBYTE(v92) )
                CmpUnlockHashEntryByKcb(v74);
              BugCheckParameter4 = 0LL;
              *v112 = v74;
              *v83 = v72;
              RtlInitUnicodeString(&DestinationString_8, 0LL);
              v54 = v94;
              NameInListWithStatus = 0;
              goto LABEL_53;
            }
          }
        }
LABEL_147:
        v54 = v94;
LABEL_148:
        NameInListWithStatus = -1073741772;
LABEL_53:
        Buffer = DestinationString_8.Buffer;
        if ( DestinationString_8.Buffer )
        {
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
LABEL_162:
          v54 = v94;
        }
        if ( v100 )
        {
          if ( v93[0] )
            ExFreePoolWithTag(v100, 0);
          else
            (*(void (__fastcall **)(__int64, char *))(v54 + 16))(v54, v107);
        }
        if ( v108 )
          (*(void (__fastcall **)(__int64, char *, __int64, __int64))(v94 + 16))(v94, v109, v14, v54);
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        if ( (_BYTE)v92 )
          CmpUnlockKcbStack(*(__int64 *)&v102[1]);
        goto LABEL_61;
      }
    }
  }
  v20 = BugCheckParameter4;
  if ( !(unsigned __int8)CmpReferenceKeyControlBlockUnsafe(BugCheckParameter4) )
  {
    NameInListWithStatus = -1073741670;
    BugCheckParameter4 = 0LL;
    v54 = 0LL;
    goto LABEL_53;
  }
  v21 = *(_QWORD *)&v102[1];
  for ( i = 0; i <= *(__int16 *)(v21 + 2); ++i )
  {
    if ( i >= 2 )
      v23 = *(void **)(*(_QWORD *)(v21 + 24) + 8LL * (i - 2));
    else
      v23 = *(void **)(v21 + 8LL * i + 8);
    CmpUnlockKcb(v23);
  }
  LOBYTE(v92) = 0;
  if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x100000) != 0 )
    *(_DWORD *)(BugCheckParameter4 + 60) = CmpLockTableAdd(BugCheckParameter4, 0);
  ExAcquirePushLockSharedEx(v20 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v20 + 48));
  v24 = *(unsigned __int16 *)v19;
  v10 = 1;
  v25 = (__int16)v9;
  v26 = a4;
  for ( j = v25; j < a4; ++j )
  {
    if ( j >= 8 )
      v28 = (unsigned __int16 *)(*(_QWORD *)(v105 + 160) + 16 * (j - 8 + 6LL));
    else
      v28 = (unsigned __int16 *)(v105 + 16 * (j + 2LL));
    v24 += *v28 + 2;
  }
  if ( v24 > 0xFFFF )
    goto LABEL_147;
  DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v24, 0x36364D43u);
  v31 = DestinationString_8.Buffer;
  if ( DestinationString_8.Buffer )
  {
    v10 = 0;
    DestinationString_8.MaximumLength = v24;
    DestinationString_8.Length = 0;
    if ( RtlUnicodeStringValidateWorker_0(&DestinationString_8, v29, v30) >= 0 )
    {
      if ( RtlUnicodeStringValidateWorker_0((PCUNICODE_STRING)v19, v32, v33) >= 0 )
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
          while ( v40 + v38 );
        }
      }
      v34 = 2 * v35;
      DestinationString_8.Length = v34;
    }
    for ( ; v25 < v26; ++v25 )
    {
      if ( v25 >= 8 )
        v41 = *(_QWORD *)(v105 + 160) + 16 * (v25 - 8 + 6LL);
      else
        v41 = v105 + 16 * (v25 + 2LL);
      v42 = v34;
      v34 += 2;
      DestinationString_8.Length = v34;
      v31[v42 >> 1] = 92;
      if ( (v34 & 1) == 0 && (v24 & 1) == 0 && v34 <= (unsigned __int16)v24 && (_WORD)v24 != 0xFFFF )
      {
        v43 = *(_WORD *)v41;
        v44 = (unsigned __int64)v34 >> 1;
        if ( (*(_WORD *)v41 & 1) == 0 )
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
    }
    v51 = (UNICODE_STRING *)v111;
    v52 = *(void **)(v111 + 8);
    if ( v52 )
    {
      ExFreePoolWithTag(v52, 0);
      v51->Buffer = 0LL;
    }
    *v51 = DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    CmpUnlockKcb((PVOID)BugCheckParameter4);
    *v112 = BugCheckParameter4;
    BugCheckParameter4 = 0LL;
    NameInListWithStatus = 0;
    v54 = 0LL;
    goto LABEL_53;
  }
  NameInListWithStatus = -1073741670;
LABEL_61:
  if ( BugCheckParameter4 )
  {
    if ( v10 )
      CmpUnlockKcb((PVOID)BugCheckParameter4);
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
  }
  if ( v115[3] )
    MiDeleteSubsection(v115[3]);
  v56 = v116[20];
  if ( v116[20] )
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
      RtlpInterlockedPushEntrySList(&P->ListHead, v56);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v56);
    }
  }
  return (unsigned int)NameInListWithStatus;
}
