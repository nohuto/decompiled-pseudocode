/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     CmpUnlockHashEntryByKcb @ 0x140472AB8 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockHashEntry @ 0x140478118 (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140478770 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlock @ 0x140563480 (CmpReferenceKeyControlBlock.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405704E4 (CmpLockHashEntrySharedByKcb.c)
 *     CmpRecordParseFailure @ 0x14057F118 (CmpRecordParseFailure.c)
 *     CmpCompareUnicodeString @ 0x140581BD0 (CmpCompareUnicodeString.c)
 *     CmpGetComponentNameAtIndex @ 0x14058397C (CmpGetComponentNameAtIndex.c)
 *     CmpWaitForHiveMount @ 0x1405DE638 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        ULONG_PTR *a6,
        char *a7,
        _WORD *a8)
{
  __int64 v8; // rsi
  unsigned int v9; // ebp
  __int16 v10; // r12
  ULONG_PTR v11; // r14
  signed __int32 v12; // eax
  char v13; // r13
  ULONG_PTR v14; // rdi
  __int16 v15; // dx
  signed __int32 v16; // ecx
  signed __int32 v17; // ett
  ULONG_PTR v18; // r15
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // r13
  int v23; // eax
  unsigned __int64 v24; // rsi
  __int64 v25; // rbp
  ULONG_PTR v26; // rcx
  ULONG_PTR v28; // r12
  __int64 v29; // rcx
  unsigned __int8 *v30; // r15
  unsigned __int16 v31; // si
  WCHAR *v32; // r14
  unsigned __int16 v33; // di
  WCHAR v34; // ax
  int v35; // ebp
  int v36; // edx
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  unsigned int v39; // r8d
  ULONG_PTR v40; // rcx
  signed __int32 v41; // eax
  signed __int32 v42; // ecx
  signed __int32 v43; // ett
  __int64 v44; // rcx
  int v45; // ebx
  unsigned __int32 v46; // eax
  unsigned __int32 v47; // edx
  char v48; // bp
  int v49; // edi
  __int64 ComponentNameAtIndex; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // rdx
  _DWORD *v55; // rcx
  unsigned int v56; // ebx
  void *v57; // rsi
  __int64 v58; // rax
  ULONG_PTR v59; // rdi
  __int64 v60; // rdx
  ULONG_PTR v61; // rcx
  char v62; // [rsp+30h] [rbp-A8h]
  __int16 v63; // [rsp+32h] [rbp-A6h]
  __int16 v64; // [rsp+34h] [rbp-A4h]
  unsigned int v65; // [rsp+38h] [rbp-A0h]
  unsigned int v66; // [rsp+40h] [rbp-98h]
  PVOID P; // [rsp+48h] [rbp-90h]
  __int64 v68; // [rsp+50h] [rbp-88h]
  ULONG_PTR v69; // [rsp+58h] [rbp-80h]
  __int64 v70; // [rsp+60h] [rbp-78h]
  ULONG_PTR v71; // [rsp+68h] [rbp-70h]
  int v72; // [rsp+70h] [rbp-68h]
  unsigned __int64 v73; // [rsp+78h] [rbp-60h]
  _WORD v74[4]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v75; // [rsp+88h] [rbp-50h]
  unsigned int v77; // [rsp+E8h] [rbp+10h]
  unsigned int v78; // [rsp+F0h] [rbp+18h]

  v78 = a3;
  v77 = a2;
  v8 = a4;
  v71 = BugCheckParameter2;
  v9 = a2;
  v66 = 0;
  v10 = 0;
  v63 = 0;
  v11 = BugCheckParameter2;
  while ( 2 )
  {
    v12 = *(_DWORD *)v11;
    v13 = 0;
    v14 = *(_QWORD *)(v11 + 24);
    v15 = 0;
    P = (PVOID)v14;
    v64 = 0;
    v16 = *(_DWORD *)v11 + 1;
    v62 = 0;
    if ( *(_DWORD *)v11 == -1 )
    {
LABEL_120:
      v66 = -1073741670;
      CmpRecordParseFailure(a5, 393472LL);
      if ( v11 == BugCheckParameter2 )
        return v66;
      v61 = v11;
LABEL_122:
      CmpDereferenceKeyControlBlock(v61);
      return v66;
    }
    while ( 1 )
    {
      if ( v16 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v17 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v16, v12);
      if ( v17 == v12 )
        break;
      v16 = v12 + 1;
      if ( v12 == -1 )
        goto LABEL_120;
    }
    v18 = v11;
    v69 = v11;
    v19 = v9;
    v65 = v9;
    v20 = *(_DWORD *)(v71 + 8);
    if ( v9 >= a3 )
      goto LABEL_20;
    v21 = v9;
    v70 = v9;
    while ( 2 )
    {
      if ( v19 >= 8 )
      {
        v21 = v70;
        v22 = *(_QWORD *)(v8 + 160) + 16 * (v19 - 8 + 6LL);
      }
      else
      {
        v22 = v8 + 16 * (v19 + 2LL);
      }
      if ( v19 >= 8 )
        v23 = *(_DWORD *)(*(_QWORD *)(v8 + 160) + 4LL * (v19 - 8));
      else
        v23 = *(_DWORD *)(v8 + 4 * v21);
      v20 = v23 + 37 * v20;
      v73 = 101027 * (v20 ^ (v20 >> 9));
      v24 = v73 ^ (v73 >> 9);
      v72 = v24;
      ExAcquirePushLockSharedEx(
        *(_QWORD *)(v14 + 2800) + 24LL * ((unsigned int)v24 & (*(_DWORD *)(v14 + 2808) - 1)),
        0LL);
      if ( !CmpReferenceHive(v14) )
        KeBugCheckEx(0x51u, 0x17uLL, v14, 9uLL, v20);
      v25 = *(_QWORD *)(*(_QWORD *)(v14 + 2800) + 24LL * ((unsigned int)v24 & (*(_DWORD *)(v14 + 2808) - 1)) + 16);
      v68 = v25;
      if ( !v25 )
      {
LABEL_16:
        v26 = *(_QWORD *)(v14 + 2800) + 24LL * ((unsigned int)v24 & (*(_DWORD *)(v14 + 2808) - 1));
        *(_QWORD *)(v26 + 8) = 0LL;
        ExReleasePushLockEx(v26, 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 5496), 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PERESOURCE *)v14);
        goto LABEL_18;
      }
      while ( 1 )
      {
        if ( *(_DWORD *)v25 != v20 )
          goto LABEL_14;
        v28 = v25 - 8;
        if ( *(_QWORD *)(v25 + 56) != v18 )
          goto LABEL_14;
        v29 = *(_QWORD *)(v28 + 72);
        if ( (*(_DWORD *)v29 & 1) != 0 )
          break;
        v75 = v29 + 26;
        v74[0] = *(_WORD *)(v29 + 24);
        v74[1] = v74[0];
        if ( !(unsigned int)CmpCompareUnicodeString(v22, v74, 2LL) )
          goto LABEL_37;
LABEL_14:
        v25 = *(_QWORD *)(v25 + 8);
        v68 = v25;
        if ( !v25 )
          goto LABEL_15;
      }
      v30 = (unsigned __int8 *)(v29 + 26);
      v31 = *(_WORD *)v22 >> 1;
      v32 = *(WCHAR **)(v22 + 8);
      v33 = *(_WORD *)(v29 + 24);
      if ( v31 )
      {
        while ( 1 )
        {
          if ( !v33 )
          {
LABEL_34:
            v25 = v68;
            goto LABEL_35;
          }
          v34 = *v32++;
          v35 = *v30++;
          if ( v34 != (_WORD)v35 )
          {
            if ( v34 >= 0x61u )
            {
              if ( v34 > 0x7Au )
                v34 = RtlUpcaseUnicodeChar(v34);
              else
                v34 -= 32;
            }
            v36 = v34 - v35;
            if ( v34 != v35 )
              break;
          }
          --v33;
          if ( !--v31 )
            goto LABEL_34;
        }
        v25 = v68;
      }
      else
      {
LABEL_35:
        v36 = v31 - v33;
      }
      v18 = v69;
      if ( v36 )
        goto LABEL_14;
LABEL_37:
      if ( !v28 )
      {
LABEL_15:
        LODWORD(v24) = v72;
        v14 = (ULONG_PTR)P;
        goto LABEL_16;
      }
      v37 = *(_DWORD *)v28;
      if ( !*(_DWORD *)v28 )
      {
LABEL_67:
        ExAcquirePushLockSharedEx(v28 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 48));
        v48 = CmpReferenceKeyControlBlock(v28);
        v49 = *(_DWORD *)(v28 + 4) & 0x80000;
        if ( *(struct _KTHREAD **)(v28 + 48) == KeGetCurrentThread() )
          *(_QWORD *)(v28 + 48) = 0LL;
        else
          _InterlockedDecrement((volatile signed __int32 *)(v28 + 48));
        ExReleasePushLockEx(v28 + 40, 0LL);
        if ( v49 && (*(_DWORD *)(v28 + 4) & 0x80000) != 0 )
          CmpFreeKeyControlBlock(v28);
        if ( !v48 )
          goto LABEL_91;
LABEL_41:
        v39 = v78;
        v14 = (ULONG_PTR)P;
        if ( v65 == v78 - 1 )
        {
          v62 = 1;
        }
        else
        {
          v40 = *((_QWORD *)P + 350) + 24 * ((unsigned int)(*((_DWORD *)P + 702) - 1) & (v73 ^ (v73 >> 9)));
          *(_QWORD *)(v40 + 8) = 0LL;
          ExReleasePushLockEx(v40, 0LL);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1374, 0xFFFFFFFF) == 1 )
            CmpDeleteHive((PERESOURCE *)P);
          v39 = v78;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v18, 0xFFFFFFFF) == 1 )
          KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
        v18 = v28;
        v8 = a4;
        v15 = v64 + 1;
        v69 = v28;
        ++v64;
        if ( (*(_DWORD *)(v28 + 176) & 0x100000) != 0 )
          goto LABEL_19;
        v19 = v65 + 1;
        v21 = v70 + 1;
        v65 = v19;
        ++v70;
        if ( v19 >= v39 )
          goto LABEL_19;
        continue;
      }
      break;
    }
    while ( v37 != -1 )
    {
      v38 = v37;
      v37 = _InterlockedCompareExchange((volatile signed __int32 *)v28, v37 + 1, v37);
      if ( v38 == v37 )
        goto LABEL_41;
      if ( !v37 )
        goto LABEL_67;
    }
LABEL_91:
    CmpUnlockHashEntry(P, v20);
LABEL_18:
    v15 = v64;
    v8 = a4;
LABEL_19:
    v9 = v77;
    v10 = v63;
    v13 = v62;
LABEL_20:
    if ( v71 != BugCheckParameter2 && _InterlockedExchangeAdd((volatile signed __int32 *)v71, 0xFFFFFFFF) == 1 )
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    v10 += v15;
    v9 += v15;
    v63 = v10;
    v77 = v9;
    if ( (*(_DWORD *)(v18 + 176) & 0x20000) == 0 )
    {
LABEL_22:
      *a6 = v18;
      *a7 = v13;
      *a8 = v10;
      return v66;
    }
    ExAcquirePushLockSharedEx(v18 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 48));
    if ( (*(_DWORD *)(v18 + 176) & 0x20000) == 0 )
      goto LABEL_73;
    v11 = *(_QWORD *)(v18 + 96);
    v71 = v11;
    v41 = *(_DWORD *)v11;
    v42 = *(_DWORD *)v11 + 1;
    if ( *(_DWORD *)v11 == -1 )
    {
LABEL_114:
      v66 = -1073741670;
      CmpRecordParseFailure(a5, 393728LL);
      goto LABEL_115;
    }
    while ( 1 )
    {
      if ( v42 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v43 = v41;
      v41 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v42, v41);
      if ( v43 == v41 )
        break;
      v42 = v41 + 1;
      if ( v41 == -1 )
        goto LABEL_114;
    }
    v44 = *(_QWORD *)(v11 + 24);
    if ( (*(_DWORD *)(v44 + 144) & 0x20) == 0 || *(struct _KTHREAD **)(v44 + 5416) == KeGetCurrentThread() )
    {
      if ( (*(_DWORD *)(v11 + 4) & 0x40000) != 0 )
      {
        v55 = a5;
        v53 = -1073740763;
        v54 = 394496LL;
LABEL_111:
        v66 = v53;
        goto LABEL_112;
      }
      v45 = *(_DWORD *)(v18 + 4) & 0x80000;
      if ( *(struct _KTHREAD **)(v18 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v18 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v18 + 48));
      ExReleasePushLockEx(v18 + 40, 0LL);
      if ( v45 && (*(_DWORD *)(v18 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v18);
      if ( v13 )
        CmpUnlockHashEntryByKcb(v18);
      v46 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 <= 1u )
      {
LABEL_101:
        v56 = *(_DWORD *)(v18 + 8);
        v57 = *(void **)(v18 + 24);
        CmpLockHashEntryExclusiveByKcb(v18);
        CmpLockKcbExclusive(v18);
        v58 = *(_QWORD *)(v18 + 184);
        v59 = 0LL;
        if ( v58 )
        {
          v60 = *(_QWORD *)(v58 + 24);
          if ( v60 )
          {
            v59 = *(_QWORD *)(v60 + 16);
            CmpUnlockKcb(v18);
            CmpLockKcbExclusive(v59);
            CmpLockKcbExclusive(v18);
          }
        }
        CmpDereferenceKeyControlBlockWithLock(v18);
        CmpUnlockKcb(v18);
        if ( v59 )
          CmpUnlockKcb(v59);
        CmpUnlockHashEntry(v57, v56);
        v8 = a4;
      }
      else
      {
        while ( 1 )
        {
          v47 = v46;
          v46 = _InterlockedCompareExchange((volatile signed __int32 *)v18, v46 - 1, v46);
          if ( v46 == v47 )
            break;
          if ( v46 <= 1 )
            goto LABEL_101;
        }
      }
      if ( !v13 )
      {
        a3 = v78;
        continue;
      }
      v18 = v11;
      CmpLockHashEntrySharedByKcb(v11);
      ExAcquirePushLockSharedEx(v11 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 48));
LABEL_73:
      CmpUnlockKcb(v18);
      goto LABEL_22;
    }
    break;
  }
  v66 = -1073741772;
  if ( CmpLoadingSystemHivesActive )
  {
    if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
    {
      if ( a5 )
      {
        ComponentNameAtIndex = CmpGetComponentNameAtIndex(v8, v9 - 1);
        if ( (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v51, v52, a5 + 34) )
        {
          *a5 |= 0x100u;
          v53 = 259;
          v54 = 393984LL;
          v55 = a5;
          goto LABEL_111;
        }
      }
    }
  }
  v54 = 394240LL;
  v55 = a5;
LABEL_112:
  CmpRecordParseFailure(v55, v54);
  CmpDereferenceKeyControlBlockUnsafe(v11);
LABEL_115:
  CmpUnlockKcb(v18);
  if ( v13 )
    CmpUnlockHashEntryByKcb(v18);
  if ( v18 )
  {
    v61 = v18;
    goto LABEL_122;
  }
  return v66;
}
