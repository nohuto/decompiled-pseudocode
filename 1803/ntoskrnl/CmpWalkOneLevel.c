/*
 * XREFs of CmpWalkOneLevel @ 0x1404AA800
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404959F8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmpUnlockHashEntry @ 0x14049D070 (CmpUnlockHashEntry.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpPopulateKcbStack @ 0x1404A5C10 (CmpPopulateKcbStack.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindSubKeyInRoot @ 0x1404A8BE0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404A8F60 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x1404A9790 (CmpDoCompareKeyName.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1404AB5BC (CmpFindKcbInHashEntryByName.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmpRecordParseFailure @ 0x14056D188 (CmpRecordParseFailure.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140581A64 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpLockHashEntryShared @ 0x1405E2210 (CmpLockHashEntryShared.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        __int64 a4,
        bool *a5,
        __m128i *a6,
        char a7,
        ULONG_PTR a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int16 v11; // di
  __int64 v12; // r14
  __int64 v14; // r12
  __int16 v15; // di
  ULONG_PTR v16; // r15
  unsigned int v17; // r14d
  __int16 v18; // si
  __int64 v19; // r14
  ULONG_PTR v20; // r14
  ULONG_PTR v21; // rdi
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int16 v24; // dx
  __int16 i; // di
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rdx
  _KPROCESS *Process; // rcx
  __int16 v30; // si
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r15
  unsigned int v36; // eax
  _WORD *v37; // r15
  int v38; // r12d
  __int16 v39; // ax
  WCHAR *v40; // rsi
  __int64 v41; // r14
  WCHAR v42; // ax
  unsigned __int16 v43; // si
  int v44; // eax
  unsigned __int8 v45; // al
  __int16 v46; // r12
  __int16 v47; // di
  ULONG_PTR v48; // rsi
  bool v49; // r15
  __int16 v50; // r15
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdi
  ULONG_PTR v54; // rcx
  int KeyControlBlock; // eax
  __int16 v57; // ax
  __int16 v58; // ax
  int v59; // eax
  unsigned int v60; // eax
  __int64 NextElement; // rax
  int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r14
  __int64 v66; // rax
  unsigned int v67; // r8d
  ULONG_PTR v68; // rcx
  __int64 v69; // rsi
  __int64 KcbAtLayerHeight; // rsi
  void *v71; // r14
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  char v75; // al
  __int64 v76; // r8
  __int64 v77; // r9
  void *v78; // rcx
  __int16 v79; // [rsp+50h] [rbp-69h]
  int SubKeyInLeafWithStatus; // [rsp+54h] [rbp-65h]
  __int16 v81; // [rsp+58h] [rbp-61h]
  __int16 v82; // [rsp+5Ah] [rbp-5Fh]
  unsigned int v83; // [rsp+5Ch] [rbp-5Dh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-59h]
  __int64 v85; // [rsp+68h] [rbp-51h]
  _DWORD v86[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v87; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v88; // [rsp+80h] [rbp-39h]
  int v89; // [rsp+84h] [rbp-35h]
  __int64 v90; // [rsp+88h] [rbp-31h]
  __int64 v91; // [rsp+90h] [rbp-29h]
  __int64 v92; // [rsp+98h] [rbp-21h] BYREF
  ULONG_PTR v93; // [rsp+A0h] [rbp-19h] BYREF
  int v94; // [rsp+A8h] [rbp-11h] BYREF
  __m128i v95; // [rsp+B0h] [rbp-9h]

  v11 = *(_WORD *)(a1 + 58);
  v12 = a4;
  v14 = a1;
  v87 = 0xFFFFFFFFLL;
  v79 = -1;
  v15 = v11 - 1;
  BugCheckParameter2 = 0LL;
  v16 = 0LL;
  if ( v15 >= 0 )
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, v15);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 24), (unsigned int)a8);
      v71 = *(void **)(KcbAtLayerHeight + 24);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v71, (unsigned int)a8, KcbAtLayerHeight, a6);
      BugCheckParameter2 = KcbInHashEntryByName;
      v16 = KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
        break;
      CmpUnlockHashEntry(v71, a8, v73, v74);
      if ( --v15 < 0 )
      {
        v12 = a4;
        goto LABEL_2;
      }
    }
    v75 = CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    v78 = *(void **)(KcbAtLayerHeight + 24);
    if ( !v75 )
    {
      CmpUnlockHashEntry(v78, a8, v76, v77);
      v17 = -1073741670;
      CmpRecordParseFailure(a11, 327936LL, 3221225626LL);
      return v17;
    }
    CmpUnlockHashEntry(v78, a8, v76, v77);
    CmpPopulateKcbStack(a4, v16);
    v18 = *(_WORD *)(v16 + 58) + 1;
    v17 = 0;
  }
  else
  {
LABEL_2:
    *(_WORD *)(v12 + 2) = -1;
    v17 = 0;
    v18 = 0;
  }
  v82 = v18;
  if ( v18 <= *(__int16 *)(v14 + 58) )
  {
    do
    {
      if ( v18 >= 2 )
        v19 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v18 - 2));
      else
        v19 = *(_QWORD *)(a2 + 8LL * v18 + 8);
      v20 = *(_QWORD *)(v19 + 24);
      v21 = *(_QWORD *)(v20 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v20 + 1648) - 1));
      ExAcquirePushLockExclusiveEx(v21, 0LL);
      *(_QWORD *)(v21 + 8) = KeGetCurrentThread();
      _m_prefetchw((const void *)(v20 + 4288));
      v22 = *(_DWORD *)(v20 + 4288);
      if ( !v22 )
LABEL_135:
        KeBugCheckEx(0x51u, 0x17uLL, v20, 0xCuLL, (unsigned int)a8);
      while ( 1 )
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 4288), v22 + 1, v22);
        if ( v23 == v22 )
          break;
        if ( !v22 )
          goto LABEL_135;
      }
      v79 = v18++;
    }
    while ( v18 <= *(__int16 *)(v14 + 58) );
    v16 = BugCheckParameter2;
    v17 = 0;
  }
  v24 = *(_WORD *)(a2 + 2);
  for ( i = 0; i <= v24; ++i )
  {
    if ( i >= 2 )
      v26 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (i - 2));
    else
      v26 = *(_QWORD *)(a2 + 8LL * i + 8);
    ExAcquirePushLockSharedEx(v26 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 48));
    v24 = *(_WORD *)(a2 + 2);
  }
  v92 = 0LL;
  if ( v24 < 0 )
    goto LABEL_119;
  while ( 1 )
  {
    if ( v24 >= 2 )
      v27 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v24 - 2));
    else
      v27 = *(_QWORD *)(a2 + 8LL * v24 + 8);
    if ( *(_WORD *)(v27 + 58) && *(_BYTE *)(v27 + 57) == 1 )
      goto LABEL_119;
    if ( *(_DWORD *)(v27 + 32) != -1 )
      break;
    if ( --v24 < 0 )
      goto LABEL_119;
  }
  if ( a9 )
  {
    NextElement = CmListGetNextElement(*(_QWORD *)(a2 + 8) + 200LL, &v92, 32LL);
    if ( NextElement )
    {
      do
      {
        v62 = *(_DWORD *)(NextElement + 68);
        if ( v62 == 2 || v62 == 11 )
          break;
        NextElement = CmListGetNextElement(a4 + 200, &v92, 32LL);
      }
      while ( NextElement );
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a9) )
      {
LABEL_119:
        v63 = 328192LL;
LABEL_120:
        v17 = -1073741772;
        SubKeyInLeafWithStatus = -1073741772;
LABEL_121:
        v64 = v17;
        goto LABEL_122;
      }
    }
  }
  v28 = *(_QWORD *)(v14 + 232);
  if ( v28 && !CmEqualTrans(a9, v28) )
  {
    v63 = 328448LL;
    goto LABEL_120;
  }
  if ( (*(_DWORD *)(v14 + 176) & 0x20000) != 0 )
  {
    v63 = 328704LL;
    goto LABEL_120;
  }
  if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
  {
    Process = (_KPROCESS *)qword_1403CA2E8;
    if ( !qword_1403CA2E8 )
      Process = KeGetCurrentThread()->ApcState.Process;
    KiStackAttachProcess(Process, 0, a11 + 168);
    *(_DWORD *)(a11 + 160) |= 1u;
  }
  if ( v16 )
  {
    v30 = *(_WORD *)(v16 + 58) + 1;
    v81 = v30;
  }
  else
  {
    v30 = 0;
    v81 = 0;
  }
  if ( v30 > *(__int16 *)(v14 + 58) )
  {
LABEL_92:
    BugCheckParameter2 = 0LL;
    SubKeyInLeafWithStatus = 0;
    v58 = v79 - 1;
    if ( !a10 )
      v58 = v79;
    v46 = v58;
    v79 = v58;
    *a5 = a10 != 0;
    *a3 = v16;
    goto LABEL_62;
  }
  while ( 2 )
  {
    if ( v30 >= 2 )
      v31 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v30 - 2));
    else
      v31 = *(_QWORD *)(a2 + 8LL * v30 + 8);
    v32 = *(unsigned int *)(v31 + 32);
    v90 = v31;
    if ( (_DWORD)v32 == -1 )
    {
      v44 = -1;
      goto LABEL_57;
    }
    v33 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v31 + 24) + 8LL))(
            *(_QWORD *)(v31 + 24),
            v32,
            &v87);
    v34 = *(_QWORD *)(v31 + 24);
    v35 = v33;
    v91 = v33;
    v85 = v34;
    if ( (*(_DWORD *)(v34 + 160) & 0x8001) == 0 )
    {
      if ( (*(_BYTE *)(v33 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v34 + 16))(v34, &v87);
        v65 = v90;
        ExAcquirePushLockSharedEx(*(_QWORD *)(v90 + 24) + 72LL, 0LL);
        v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v65 + 24) + 8LL))(
                *(_QWORD *)(v65 + 24),
                *(unsigned int *)(v65 + 32),
                &v87);
        v67 = *(_DWORD *)(v65 + 32);
        v68 = *(_QWORD *)(v65 + 24);
        v35 = v66;
        v91 = v66;
        CmpUpdateKeyNodeAccessBits(v68, v66, v67);
        v69 = *(_QWORD *)(v65 + 24);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v69 + 72));
        KeAbPostRelease(v69 + 72);
        v34 = *(_QWORD *)(v65 + 24);
      }
      v85 = v34;
    }
    v86[0] = -1;
    v86[1] = 0;
    v17 = -1073741772;
    SubKeyInLeafWithStatus = -1073741772;
    v89 = -1;
    v36 = 0;
    v88 = 0;
    if ( !*(_DWORD *)(v34 + 208) )
      goto LABEL_54;
    while ( !*(_DWORD *)(v35 + 4LL * v36 + 20) )
    {
LABEL_52:
      v36 = v88 + 1;
      v88 = v36;
      if ( v36 >= *(_DWORD *)(v34 + 208) )
        goto LABEL_53;
    }
    v37 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v34 + 8))(
                     v34,
                     *(unsigned int *)(v35 + 4LL * v36 + 28),
                     v86);
    if ( !v37 )
      goto LABEL_110;
    if ( *v37 == 26994 )
    {
      if ( (int)CmpFindSubKeyInRoot(v34, (__int64)v37, (int)a6, &v83) < 0 )
      {
        v17 = -1073741670;
        goto LABEL_100;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(v34 + 16))(v34, v86);
      if ( v83 == -1 )
        goto LABEL_51;
      v37 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v34 + 8))(v34, v83, v86);
      if ( !v37 )
      {
LABEL_110:
        v17 = -1073741670;
        SubKeyInLeafWithStatus = -1073741670;
        goto LABEL_53;
      }
    }
    if ( *v37 != 26732 )
    {
      SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(v34, (__int64)v37, (unsigned __int16 *)a6, &v83, &v94);
      v17 = SubKeyInLeafWithStatus;
      if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
        goto LABEL_101;
      v60 = v83;
LABEL_98:
      if ( v60 != -1 )
      {
        v89 = v60;
        v17 = 0;
        goto LABEL_100;
      }
      goto LABEL_50;
    }
    v38 = 0;
    v39 = _mm_cvtsi128_si32(*a6);
    v95 = *a6;
    if ( v39 )
    {
      v40 = (WCHAR *)v95.m128i_i64[1];
      v41 = (unsigned __int16)(((unsigned __int16)(v39 - 1) >> 1) + 1);
      do
      {
        v42 = *v40;
        if ( *v40 >= 0x61u )
        {
          if ( v42 > 0x7Au )
            v42 = RtlUpcaseUnicodeChar(v42);
          else
            v42 -= 32;
        }
        ++v40;
        v38 = v42 + 37 * v38;
        --v41;
      }
      while ( v41 );
    }
    v43 = 0;
    v83 = -1;
    if ( !v37[1] )
    {
LABEL_49:
      v34 = v85;
      v17 = -1073741772;
      SubKeyInLeafWithStatus = -1073741772;
LABEL_50:
      (*(void (__fastcall **)(__int64, _DWORD *))(v34 + 16))(v34, v86);
LABEL_51:
      v35 = v91;
      goto LABEL_52;
    }
    while ( 1 )
    {
      if ( v38 != *(_DWORD *)&v37[4 * v43 + 4] )
        goto LABEL_48;
      v59 = CmpDoCompareKeyName(v85, (const UNICODE_STRING *)a6, *(_DWORD *)&v37[4 * v43 + 2]);
      if ( v59 == 2 )
        break;
      if ( !v59 )
      {
        v60 = *(_DWORD *)&v37[4 * v43 + 2];
        v34 = v85;
        v17 = 0;
        SubKeyInLeafWithStatus = 0;
        v83 = v60;
        goto LABEL_98;
      }
LABEL_48:
      if ( ++v43 >= v37[1] )
        goto LABEL_49;
    }
    v34 = v85;
    v17 = -1073741670;
LABEL_100:
    SubKeyInLeafWithStatus = v17;
LABEL_101:
    (*(void (__fastcall **)(__int64, _DWORD *))(v34 + 16))(v34, v86);
LABEL_53:
    v14 = a1;
LABEL_54:
    v31 = v90;
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v90 + 24) + 16LL))(*(_QWORD *)(v90 + 24), &v87);
    if ( v17 == -1073741772 )
    {
      v44 = -1;
      goto LABEL_56;
    }
    if ( (v17 & 0x80000000) != 0 )
    {
      v63 = 328960LL;
      goto LABEL_121;
    }
    v44 = v89;
    if ( v89 != -1 )
    {
      v16 = BugCheckParameter2;
      goto LABEL_84;
    }
LABEL_56:
    v16 = BugCheckParameter2;
LABEL_57:
    if ( *(_WORD *)(v14 + 58) || a10 )
    {
LABEL_84:
      KeyControlBlock = CmpCreateKeyControlBlock(
                          *(_QWORD *)(v31 + 24),
                          v44,
                          v31,
                          v16,
                          0,
                          (__int64)a6,
                          a7,
                          a8,
                          (__int64)&v93);
      SubKeyInLeafWithStatus = KeyControlBlock;
      v17 = KeyControlBlock;
      if ( KeyControlBlock >= 0 )
      {
        if ( v16 )
          CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v16);
        v16 = v93;
        BugCheckParameter2 = v93;
        v93 = 0LL;
        ++*(_WORD *)(a4 + 2);
        if ( v81 >= 2 )
          *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (v81 - 2)) = v16;
        else
          *(_QWORD *)(a4 + 8LL * v81 + 8) = v16;
        v57 = *(_WORD *)(v14 + 58);
        if ( v81 != v57 )
        {
          CmpUnlockHashEntry(*(PVOID *)(v90 + 24), a8, v27, a4);
          ++v82;
          v57 = *(_WORD *)(v14 + 58);
        }
        v30 = v81 + 1;
        v17 = 0;
        v81 = v30;
        if ( v30 > v57 )
          goto LABEL_92;
        continue;
      }
      v64 = (unsigned int)KeyControlBlock;
      v63 = 329472LL;
LABEL_122:
      CmpRecordParseFailure(a11, v63, v64);
      goto LABEL_61;
    }
    break;
  }
  v17 = -1073741772;
  SubKeyInLeafWithStatus = -1073741772;
  v45 = *(_BYTE *)(a11 + 258);
  if ( v45 < 4u )
  {
    *(_DWORD *)(a11 + 4LL * v45 + 260) = 329216;
    *(_DWORD *)(a11 + 4LL * (unsigned __int8)(*(_BYTE *)(a11 + 258))++ + 276) = -1073741772;
  }
LABEL_61:
  v46 = v79;
LABEL_62:
  v47 = 0;
  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    do
    {
      if ( v47 >= 2 )
        v48 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v47 - 2));
      else
        v48 = *(_QWORD *)(a2 + 8LL * v47 + 8);
      v49 = (*(_DWORD *)(v48 + 4) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v48 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v48 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v48 + 48));
      ExReleasePushLockEx(v48 + 40, 0LL, v27, a4);
      if ( v49 && (*(_DWORD *)(v48 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v48);
      ++v47;
    }
    while ( v47 <= *(__int16 *)(a2 + 2) );
    v46 = v79;
  }
  v50 = v82;
  if ( v82 <= v46 )
  {
    v51 = a2 + 8 + 8LL * v82;
    do
    {
      if ( v50 >= 2 )
        v52 = *(_QWORD *)(a2 + 24) + 8LL * (v50 - 2);
      else
        v52 = v51;
      v53 = *(_QWORD *)(*(_QWORD *)v52 + 24LL);
      v54 = *(_QWORD *)(v53 + 1640)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v53 + 1648) - 1));
      *(_QWORD *)(v54 + 8) = 0LL;
      ExReleasePushLockEx(v54, 0LL, v27, a4);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 4288), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PVOID)v53);
      ++v50;
      v51 += 8LL;
    }
    while ( v50 <= v46 );
    v17 = SubKeyInLeafWithStatus;
  }
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlock(BugCheckParameter2);
  return v17;
}
