/*
 * XREFs of CmpWalkOneLevel @ 0x140480060
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpUnlockHashEntry @ 0x140478118 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpPopulateKcbStack @ 0x14047EA38 (CmpPopulateKcbStack.c)
 *     CmpFindSubKeyInRoot @ 0x14047FAD0 (CmpFindSubKeyInRoot.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404814F0 (CmpFindSubKeyInLeafWithStatus.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     CmpDoCompareKeyName @ 0x140481960 (CmpDoCompareKeyName.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockHashEntryShared @ 0x140562B08 (CmpLockHashEntryShared.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 *     CmpRecordParseFailure @ 0x14057F118 (CmpRecordParseFailure.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1405979A8 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFindKcbInHashEntryByName @ 0x14068F9BC (CmpFindKcbInHashEntryByName.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        _BYTE *a5,
        __m128i *a6,
        char a7,
        ULONG_PTR a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r12
  __int64 v12; // r14
  ULONG_PTR v14; // r10
  unsigned int v15; // ebx
  __int16 v16; // di
  __int64 v17; // r15
  __int16 v18; // si
  __int64 v19; // r15
  ULONG_PTR v20; // r15
  ULONG_PTR v21; // rdi
  __int16 v22; // di
  __int64 v23; // rsi
  __int16 v24; // dx
  __int64 v25; // r8
  __int16 v26; // si
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rsi
  int SubKeyInLeafWithStatus; // r14d
  unsigned int v34; // eax
  _WORD *v35; // r15
  int v36; // r12d
  __int16 v37; // ax
  WCHAR *v38; // rsi
  __int64 v39; // r14
  WCHAR v40; // ax
  unsigned __int16 v41; // si
  int v42; // eax
  unsigned __int8 v43; // al
  ULONG_PTR v44; // r12
  __int16 v45; // di
  ULONG_PTR v46; // rsi
  bool v47; // r15
  __int16 v48; // r15
  unsigned __int64 v49; // rbx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdi
  ULONG_PTR v53; // rcx
  int v55; // eax
  unsigned int v56; // eax
  __int64 NextElement; // rax
  __int64 v58; // r9
  int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 KcbAtLayerHeight; // rsi
  void *v65; // r14
  ULONG_PTR KcbInHashEntryByName; // rax
  char v67; // al
  void *v68; // rcx
  __int16 v69; // [rsp+50h] [rbp-69h]
  ULONG_PTR v70; // [rsp+58h] [rbp-61h]
  __int16 v71; // [rsp+60h] [rbp-59h]
  __int16 v72; // [rsp+62h] [rbp-57h]
  unsigned int i; // [rsp+64h] [rbp-55h] BYREF
  _DWORD v74[2]; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v75; // [rsp+70h] [rbp-49h]
  int v76; // [rsp+74h] [rbp-45h]
  __int64 v77; // [rsp+78h] [rbp-41h]
  _BYTE v78[8]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v79; // [rsp+88h] [rbp-31h]
  __int64 v80; // [rsp+90h] [rbp-29h]
  __int64 v81; // [rsp+98h] [rbp-21h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v83[8]; // [rsp+A8h] [rbp-11h] BYREF
  __m128i v84; // [rsp+B0h] [rbp-9h]

  v11 = a1;
  v12 = a4;
  HvpGetCellContextReinitialize((__int64)v78);
  v14 = 0LL;
  v15 = a8;
  v16 = *(_WORD *)(v11 + 58) - 1;
  v69 = -1;
  v17 = 0LL;
  v70 = 0LL;
  if ( v16 >= 0 )
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, (unsigned __int16)v16);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 24), (unsigned int)a8);
      v65 = *(void **)(KcbAtLayerHeight + 24);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v65, (unsigned int)a8, KcbAtLayerHeight, a6);
      v70 = KcbInHashEntryByName;
      v17 = KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
        break;
      CmpUnlockHashEntry(v65, a8);
      if ( --v16 < 0 )
      {
        v12 = a4;
        v14 = 0LL;
        goto LABEL_2;
      }
    }
    v67 = CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    v68 = *(void **)(KcbAtLayerHeight + 24);
    if ( !v67 )
    {
      CmpUnlockHashEntry(v68, a8);
      SubKeyInLeafWithStatus = -1073741670;
      CmpRecordParseFailure(a11, 327936LL);
      return (unsigned int)SubKeyInLeafWithStatus;
    }
    CmpUnlockHashEntry(v68, a8);
    CmpPopulateKcbStack(a4, v17);
    v18 = *(_WORD *)(v17 + 58) + 1;
    v14 = 0LL;
  }
  else
  {
LABEL_2:
    *(_WORD *)(v12 + 2) = -1;
    v18 = 0;
  }
  v72 = v18;
  if ( v18 <= *(__int16 *)(v11 + 58) )
  {
    do
    {
      if ( v18 >= 2 )
        v19 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v18 - 2));
      else
        v19 = *(_QWORD *)(a2 + 8LL * v18 + 8);
      v20 = *(_QWORD *)(v19 + 24);
      v21 = *(_QWORD *)(v20 + 2800)
          + 24
          * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027
                                                                                          * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v20 + 2808) - 1));
      ExAcquirePushLockExclusiveEx(v21, 0LL);
      *(_QWORD *)(v21 + 8) = KeGetCurrentThread();
      if ( !CmpReferenceHive(v20) )
        KeBugCheckEx(0x51u, 0x17uLL, v20, 0xCuLL, (unsigned int)a8);
      v69 = v18++;
    }
    while ( v18 <= *(__int16 *)(v11 + 58) );
    v17 = v70;
    v14 = 0LL;
  }
  v22 = 0;
  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    do
    {
      if ( v22 >= 2 )
        v23 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v22 - 2));
      else
        v23 = *(_QWORD *)(a2 + 8LL * v22 + 8);
      ExAcquirePushLockSharedEx(v23 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 48));
      ++v22;
    }
    while ( v22 <= *(__int16 *)(a2 + 2) );
    v14 = 0LL;
  }
  v24 = *(_WORD *)(a2 + 2);
  v81 = 0LL;
  if ( v24 < 0 )
    goto LABEL_118;
  while ( 1 )
  {
    if ( v24 >= 2 )
      v25 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v24 - 2));
    else
      v25 = *(_QWORD *)(a2 + 8LL * v24 + 8);
    if ( *(_WORD *)(v25 + 58) && *(_BYTE *)(v25 + 57) == 1 )
      goto LABEL_118;
    if ( *(_DWORD *)(v25 + 32) != -1 )
      break;
    if ( --v24 < 0 )
      goto LABEL_118;
  }
  if ( a9 )
  {
    NextElement = CmListGetNextElement(*(_QWORD *)(a2 + 8) + 200LL, &v81, 32LL);
    if ( NextElement )
    {
      while ( 1 )
      {
        v59 = *(_DWORD *)(NextElement + 68);
        if ( v59 == 2 || v59 == 11 )
          break;
        NextElement = CmListGetNextElement(v58 + 200, &v81, 32LL);
        if ( !NextElement )
          goto LABEL_20;
      }
      if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) )
      {
        v14 = 0LL;
        goto LABEL_20;
      }
LABEL_118:
      v60 = 328192LL;
      goto LABEL_114;
    }
  }
LABEL_20:
  if ( !*(_QWORD *)(v11 + 232) )
    goto LABEL_21;
  if ( !(unsigned __int8)CmEqualTrans(a9) )
  {
    v60 = 328448LL;
LABEL_114:
    SubKeyInLeafWithStatus = -1073741772;
LABEL_115:
    CmpRecordParseFailure(a11, v60);
    goto LABEL_116;
  }
  v14 = 0LL;
LABEL_21:
  if ( (*(_DWORD *)(v11 + 176) & 0x20000) != 0 )
  {
    v60 = 328704LL;
    goto LABEL_114;
  }
  if ( v17 )
  {
    v26 = *(_WORD *)(v17 + 58) + 1;
    v71 = v26;
  }
  else
  {
    v26 = v14;
    v71 = v14;
  }
  if ( v26 > *(__int16 *)(v11 + 58) )
  {
LABEL_88:
    if ( a10 )
    {
      --v69;
      *a5 = 1;
    }
    else
    {
      *a5 = 0;
    }
    v44 = v14;
    v70 = v14;
    SubKeyInLeafWithStatus = v14;
    *a3 = v17;
    goto LABEL_58;
  }
  while ( 2 )
  {
    if ( v26 >= 2 )
      v27 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v26 - 2));
    else
      v27 = *(_QWORD *)(a2 + 8LL * v26 + 8);
    v28 = *(unsigned int *)(v27 + 32);
    v80 = v27;
    if ( (_DWORD)v28 == -1 )
    {
      v42 = -1;
      goto LABEL_53;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(*(_QWORD *)(v27 + 24) + 8LL))(
            *(_QWORD *)(v27 + 24),
            v28,
            v78);
    v30 = *(_QWORD *)(v27 + 24);
    v31 = v29;
    v79 = v29;
    if ( (*(_DWORD *)(v30 + 144) & 0x8001) == 0 && (*(_BYTE *)(v29 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      (*(void (__fastcall **)(__int64, _BYTE *))(v30 + 16))(v30, v78);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v27 + 24) + 2848LL), 1u);
      v61 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v27 + 24) + 8LL))(
              *(_QWORD *)(v27 + 24),
              *(unsigned int *)(v27 + 32),
              v78);
      v62 = *(unsigned int *)(v27 + 32);
      v63 = *(_QWORD *)(v27 + 24);
      v31 = v61;
      v79 = v61;
      CmpUpdateKeyNodeAccessBits(v63, v61, v62);
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v27 + 24) + 2848LL));
    }
    v32 = *(_QWORD *)(v27 + 24);
    v74[1] = 0;
    SubKeyInLeafWithStatus = -1073741772;
    v77 = v32;
    v76 = -1;
    v34 = 0;
    v74[0] = -1;
    v75 = 0;
    if ( !*(_DWORD *)(v32 + 192) )
      goto LABEL_50;
    while ( !*(_DWORD *)(v31 + 4LL * v34 + 20) )
    {
LABEL_48:
      v34 = v75 + 1;
      v75 = v34;
      if ( v34 >= *(_DWORD *)(v32 + 192) )
        goto LABEL_49;
    }
    v35 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v32 + 8))(
                     v32,
                     *(unsigned int *)(v31 + 4LL * v34 + 28),
                     v74);
    if ( !v35 )
      goto LABEL_105;
    if ( *v35 != 26994 )
      goto LABEL_35;
    if ( (int)CmpFindSubKeyInRoot(v32, (__int64)v35, (int)a6, &i) < 0 )
    {
      SubKeyInLeafWithStatus = -1073741670;
      goto LABEL_96;
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(v32 + 16))(v32, v74);
    if ( i == -1 )
    {
LABEL_47:
      v31 = v79;
      goto LABEL_48;
    }
    v35 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v32 + 8))(v32, i, v74);
    if ( v35 )
    {
LABEL_35:
      if ( *v35 == 26732 )
      {
        v36 = 0;
        v37 = _mm_cvtsi128_si32(*a6);
        v84 = *a6;
        if ( v37 )
        {
          v38 = (WCHAR *)v84.m128i_i64[1];
          v39 = (unsigned __int16)(((unsigned __int16)(v37 - 1) >> 1) + 1);
          do
          {
            v40 = *v38;
            if ( *v38 >= 0x61u )
            {
              if ( v40 > 0x7Au )
                v40 = RtlUpcaseUnicodeChar(v40);
              else
                v40 -= 32;
            }
            ++v38;
            v36 = v40 + 37 * v36;
            --v39;
          }
          while ( v39 );
        }
        v41 = 0;
        for ( i = -1; v41 < v35[1]; ++v41 )
        {
          if ( v36 == *(_DWORD *)&v35[4 * v41 + 4] )
          {
            v55 = CmpDoCompareKeyName(v77, a6, *(unsigned int *)&v35[4 * v41 + 2]);
            if ( v55 == 2 )
            {
              v32 = v77;
              SubKeyInLeafWithStatus = -1073741670;
              goto LABEL_96;
            }
            if ( !v55 )
            {
              v56 = *(_DWORD *)&v35[4 * v41 + 2];
              v32 = v77;
              SubKeyInLeafWithStatus = 0;
              i = v56;
              goto LABEL_94;
            }
          }
        }
        v32 = v77;
        SubKeyInLeafWithStatus = -1073741772;
      }
      else
      {
        SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(
                                   v32,
                                   (_DWORD)v35,
                                   (_DWORD)a6,
                                   (unsigned int)&i,
                                   (__int64)v83);
        if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
        {
LABEL_96:
          (*(void (__fastcall **)(__int64, _DWORD *))(v32 + 16))(v32, v74);
          goto LABEL_49;
        }
        v56 = i;
LABEL_94:
        if ( v56 != -1 )
        {
          v76 = v56;
          SubKeyInLeafWithStatus = 0;
          goto LABEL_96;
        }
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(v32 + 16))(v32, v74);
      goto LABEL_47;
    }
LABEL_105:
    SubKeyInLeafWithStatus = -1073741670;
LABEL_49:
    v11 = a1;
LABEL_50:
    v27 = v80;
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v80 + 24) + 16LL))(*(_QWORD *)(v80 + 24), v78);
    if ( SubKeyInLeafWithStatus == -1073741772 )
    {
      v42 = -1;
      goto LABEL_52;
    }
    if ( SubKeyInLeafWithStatus < 0 )
    {
      v60 = 328960LL;
      goto LABEL_115;
    }
    v42 = v76;
    if ( v76 != -1 )
    {
      v17 = v70;
      goto LABEL_80;
    }
LABEL_52:
    v17 = v70;
LABEL_53:
    if ( *(_WORD *)(v11 + 58) || a10 )
    {
LABEL_80:
      SubKeyInLeafWithStatus = CmpCreateKeyControlBlock(
                                 *(_QWORD *)(v27 + 24),
                                 v42,
                                 v27,
                                 v17,
                                 0,
                                 (__int64)a6,
                                 a7,
                                 a8,
                                 (__int64)&v82);
      if ( SubKeyInLeafWithStatus >= 0 )
      {
        if ( v17 )
          CmpDereferenceKeyControlBlockUnsafe(v17);
        v17 = v82;
        v14 = 0LL;
        v70 = v82;
        v82 = 0LL;
        ++*(_WORD *)(a4 + 2);
        if ( v71 >= 2 )
          *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (v71 - 2)) = v17;
        else
          *(_QWORD *)(a4 + 8LL * v71 + 8) = v17;
        if ( v71 != *(_WORD *)(v11 + 58) )
        {
          CmpUnlockHashEntry(*(PVOID *)(v80 + 24), a8);
          ++v72;
          v14 = 0LL;
        }
        v26 = v71 + 1;
        v71 = v26;
        if ( v26 > *(__int16 *)(v11 + 58) )
          goto LABEL_88;
        continue;
      }
      v60 = 329472LL;
      goto LABEL_115;
    }
    break;
  }
  SubKeyInLeafWithStatus = -1073741772;
  if ( !a11 )
  {
LABEL_116:
    v44 = v70;
    goto LABEL_58;
  }
  v43 = *(_BYTE *)(a11 + 202);
  v44 = v70;
  if ( v43 < 4u )
  {
    *(_DWORD *)(a11 + 4LL * v43 + 204) = 329216;
    *(_DWORD *)(a11 + 4LL * (unsigned __int8)(*(_BYTE *)(a11 + 202))++ + 220) = -1073741772;
  }
LABEL_58:
  v45 = 0;
  if ( *(__int16 *)(a2 + 2) >= 0 )
  {
    do
    {
      if ( v45 >= 2 )
        v46 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * (v45 - 2));
      else
        v46 = *(_QWORD *)(a2 + 8LL * v45 + 8);
      v47 = (*(_DWORD *)(v46 + 4) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v46 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v46 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v46 + 48));
      ExReleasePushLockEx(v46 + 40, 0LL);
      if ( v47 && (*(_DWORD *)(v46 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v46);
      ++v45;
    }
    while ( v45 <= *(__int16 *)(a2 + 2) );
    v15 = a8;
  }
  v48 = v72;
  if ( v72 <= v69 )
  {
    v49 = (101027 * (v15 ^ (v15 >> 9))) ^ ((unsigned __int64)(101027 * (v15 ^ (v15 >> 9))) >> 9);
    v50 = a2 + 8 + 8LL * v72;
    do
    {
      if ( v48 >= 2 )
        v51 = *(_QWORD *)(a2 + 24) + 8LL * (v48 - 2);
      else
        v51 = v50;
      v52 = *(_QWORD *)(*(_QWORD *)v51 + 24LL);
      v53 = *(_QWORD *)(v52 + 2800) + 24LL * ((unsigned int)v49 & (*(_DWORD *)(v52 + 2808) - 1));
      *(_QWORD *)(v53 + 8) = 0LL;
      ExReleasePushLockEx(v53, 0LL);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 5496), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((PERESOURCE *)v52);
      ++v48;
      v50 += 8LL;
    }
    while ( v48 <= v69 );
    v44 = v70;
  }
  if ( v44 )
    CmpDereferenceKeyControlBlock(v44);
  return (unsigned int)SubKeyInLeafWithStatus;
}
