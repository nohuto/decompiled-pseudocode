/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x140533590
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14043D1E4 (CmpLockHashEntrySharedByKcb.c)
 *     CmpRecordParseFailure @ 0x140444E0C (CmpRecordParseFailure.c)
 *     CmpGetComponentNameAtIndex @ 0x140447470 (CmpGetComponentNameAtIndex.c)
 *     CmpUnlockHashEntry @ 0x140490B2C (CmpUnlockHashEntry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404916C8 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404CCC8C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockHashEntryByKcb @ 0x1404CFE70 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404D001C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpCompareUnicodeString @ 0x1404D3620 (CmpCompareUnicodeString.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 *     CmpReferenceKeyControlBlock @ 0x14054CCC0 (CmpReferenceKeyControlBlock.c)
 *     CmpWaitForHiveMount @ 0x1405CB154 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        volatile signed __int32 *P,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 *a6,
        char *a7,
        _WORD *a8)
{
  __int64 v8; // rbp
  unsigned int v9; // r13d
  __int16 v10; // r12
  volatile signed __int32 *v11; // r14
  signed __int32 v12; // eax
  __int16 v13; // dx
  ULONG_PTR v14; // rsi
  signed __int32 v15; // ecx
  signed __int32 v16; // ett
  unsigned __int64 v17; // r15
  unsigned int v18; // r14d
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // r13
  int v22; // eax
  unsigned __int64 v23; // rdi
  __int64 v24; // rbp
  ULONG_PTR v25; // r12
  __int64 v26; // rcx
  unsigned __int8 *v27; // r15
  unsigned __int16 v28; // si
  WCHAR *v29; // r14
  unsigned __int16 v30; // di
  WCHAR v31; // ax
  int v32; // ebp
  int v33; // edx
  signed __int32 v34; // eax
  signed __int32 v35; // ett
  unsigned int v36; // r8d
  ULONG_PTR v37; // rcx
  ULONG_PTR v38; // rcx
  signed __int32 v40; // eax
  signed __int32 v41; // ecx
  signed __int32 v42; // ett
  __int64 v43; // rcx
  int v44; // ebx
  unsigned __int32 v45; // eax
  unsigned __int32 v46; // edx
  char v47; // bp
  int v48; // edi
  __int64 ComponentNameAtIndex; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // eax
  int v53; // edx
  _DWORD *v54; // rcx
  unsigned int v55; // ebx
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdx
  int v60; // r8d
  ULONG_PTR v61; // rcx
  char v62; // [rsp+30h] [rbp-A8h]
  __int16 v63; // [rsp+32h] [rbp-A6h]
  __int16 v64; // [rsp+34h] [rbp-A4h]
  unsigned int v65; // [rsp+38h] [rbp-A0h]
  unsigned int v66; // [rsp+40h] [rbp-98h]
  __int64 v67; // [rsp+48h] [rbp-90h]
  __int64 v68; // [rsp+50h] [rbp-88h]
  ULONG_PTR v69; // [rsp+58h] [rbp-80h]
  __int64 v70; // [rsp+60h] [rbp-78h]
  volatile signed __int32 *v71; // [rsp+68h] [rbp-70h]
  unsigned __int64 v72; // [rsp+70h] [rbp-68h]
  _WORD v73[4]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v74; // [rsp+80h] [rbp-58h]
  unsigned int v76; // [rsp+E8h] [rbp+10h]
  unsigned int v77; // [rsp+F0h] [rbp+18h]

  v77 = a3;
  v76 = a2;
  v8 = a4;
  v71 = P;
  v9 = a2;
  v66 = 0;
  v10 = 0;
  v63 = 0;
  v11 = P;
  while ( 2 )
  {
    v12 = *v11;
    v13 = 0;
    v14 = *((_QWORD *)v11 + 3);
    v67 = v14;
    v64 = 0;
    v15 = *v11 + 1;
    v62 = 0;
    if ( *v11 == -1 )
    {
LABEL_128:
      v66 = -1073741670;
      CmpRecordParseFailure((__int64)a5, 393472, -1073741670);
      if ( v11 == P )
        return v66;
      v61 = (ULONG_PTR)v11;
LABEL_130:
      CmpDereferenceKeyControlBlock(v61);
      return v66;
    }
    while ( 1 )
    {
      if ( v15 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v16 = v12;
      v12 = _InterlockedCompareExchange(v11, v15, v12);
      if ( v16 == v12 )
        break;
      v15 = v12 + 1;
      if ( v12 == -1 )
        goto LABEL_128;
    }
    v17 = (unsigned __int64)v11;
    v69 = (ULONG_PTR)v11;
    v18 = v9;
    v65 = v9;
    v19 = *((_DWORD *)v71 + 2);
    if ( v9 >= a3 )
      goto LABEL_45;
    v20 = v9;
    v70 = v9;
    while ( 2 )
    {
      if ( v18 >= 8 )
      {
        v20 = v70;
        v21 = *(_QWORD *)(v8 + 160) + 16 * (v18 - 8 + 6LL);
      }
      else
      {
        v21 = v8 + 16 * (v18 + 2LL);
      }
      if ( v18 >= 8 )
        v22 = *(_DWORD *)(*(_QWORD *)(v8 + 160) + 4LL * (v18 - 8));
      else
        v22 = *(_DWORD *)(v8 + 4 * v20);
      v19 = v22 + 37 * v19;
      v72 = 101027 * (v19 ^ (v19 >> 9));
      v23 = v72 ^ (v72 >> 9);
      ExAcquirePushLockSharedEx(
        *(_QWORD *)(v14 + 2800) + 24LL * ((unsigned int)v23 & (*(_DWORD *)(v14 + 2808) - 1)),
        0LL);
      if ( !CmpReferenceHive(v14) )
        KeBugCheckEx(0x51u, 0x17uLL, v14, 9uLL, v19);
      v24 = *(_QWORD *)(*(_QWORD *)(v14 + 2800) + 24LL * ((unsigned int)v23 & (*(_DWORD *)(v14 + 2808) - 1)) + 16);
      v68 = v24;
      if ( !v24 )
      {
LABEL_41:
        v38 = *(_QWORD *)(v14 + 2800)
            + 24
            * ((unsigned int)(*(_DWORD *)(v14 + 2808) - 1) & ((101027 * (v19 ^ (v19 >> 9))) ^ ((unsigned __int64)(101027 * (v19 ^ (v19 >> 9))) >> 9)));
        *(_QWORD *)(v38 + 8) = 0LL;
        ExReleasePushLockEx(v38, 0LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 5496), 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v14);
        goto LABEL_43;
      }
      while ( 1 )
      {
        if ( *(_DWORD *)v24 != v19 )
          goto LABEL_39;
        v25 = v24 - 8;
        if ( *(_QWORD *)(v24 + 56) != v17 )
          goto LABEL_39;
        v26 = *(_QWORD *)(v25 + 72);
        if ( (*(_DWORD *)v26 & 1) != 0 )
          break;
        v74 = v26 + 26;
        v73[0] = *(_WORD *)(v26 + 24);
        v73[1] = v73[0];
        if ( !(unsigned int)CmpCompareUnicodeString(v21, (__int64)v73, 2) )
          goto LABEL_27;
LABEL_39:
        v24 = *(_QWORD *)(v24 + 8);
        v68 = v24;
        if ( !v24 )
          goto LABEL_40;
      }
      v27 = (unsigned __int8 *)(v26 + 26);
      v28 = *(_WORD *)v21 >> 1;
      v29 = *(WCHAR **)(v21 + 8);
      v30 = *(_WORD *)(v26 + 24);
      if ( v28 )
      {
        while ( 1 )
        {
          if ( !v30 )
          {
LABEL_24:
            v24 = v68;
            goto LABEL_25;
          }
          v31 = *v29++;
          v32 = *v27++;
          if ( v31 != (_WORD)v32 )
          {
            if ( v31 >= 0x61u )
            {
              if ( v31 > 0x7Au )
                v31 = RtlUpcaseUnicodeChar(v31);
              else
                v31 -= 32;
            }
            v33 = v31 - v32;
            if ( v31 != v32 )
              break;
          }
          --v30;
          if ( !--v28 )
            goto LABEL_24;
        }
        v24 = v68;
      }
      else
      {
LABEL_25:
        v33 = v28 - v30;
      }
      v17 = v69;
      if ( v33 )
        goto LABEL_39;
LABEL_27:
      if ( !v25 )
      {
LABEL_40:
        v14 = v67;
        goto LABEL_41;
      }
      v34 = *(_DWORD *)v25;
      if ( !*(_DWORD *)v25 )
      {
LABEL_71:
        if ( (*(_DWORD *)(v25 + 4) & 0x100000) != 0 )
          *(_DWORD *)(v25 + 60) = CmpLockTableAdd(v25, 0);
        ExAcquirePushLockSharedEx(v25 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 48));
        v47 = CmpReferenceKeyControlBlock(v25);
        v48 = *(_DWORD *)(v25 + 4) & 0x80000;
        if ( *(struct _KTHREAD **)(v25 + 48) == KeGetCurrentThread() )
          *(_QWORD *)(v25 + 48) = 0LL;
        else
          _InterlockedDecrement((volatile signed __int32 *)(v25 + 48));
        ExReleasePushLockEx(v25 + 40, 0LL);
        if ( (*(_DWORD *)(v25 + 4) & 0x100000) != 0 )
          CmpLockTableRemove(v25, *(_DWORD *)(v25 + 60));
        if ( v48 && (*(_DWORD *)(v25 + 4) & 0x80000) != 0 )
          CmpFreeKeyControlBlock(v25);
        if ( !v47 )
          goto LABEL_99;
LABEL_31:
        v36 = v77;
        v14 = v67;
        if ( v65 == v77 - 1 )
        {
          v62 = 1;
        }
        else
        {
          v37 = *(_QWORD *)(v67 + 2800) + 24 * ((unsigned int)(*(_DWORD *)(v67 + 2808) - 1) & (v72 ^ (v72 >> 9)));
          *(_QWORD *)(v37 + 8) = 0LL;
          ExReleasePushLockEx(v37, 0LL);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 5496), 0xFFFFFFFF) == 1 )
            CmpDeleteHive(v67);
          v36 = v77;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17, 0xFFFFFFFF) == 1 )
          KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
        v17 = v25;
        v8 = a4;
        v13 = v64 + 1;
        v69 = v25;
        ++v64;
        if ( (*(_DWORD *)(v25 + 176) & 0x100000) != 0 )
          goto LABEL_44;
        v18 = v65 + 1;
        v20 = v70 + 1;
        v65 = v18;
        ++v70;
        if ( v18 >= v36 )
          goto LABEL_44;
        continue;
      }
      break;
    }
    while ( v34 != -1 )
    {
      v35 = v34;
      v34 = _InterlockedCompareExchange((volatile signed __int32 *)v25, v34 + 1, v34);
      if ( v35 == v34 )
        goto LABEL_31;
      if ( !v34 )
        goto LABEL_71;
    }
LABEL_99:
    CmpUnlockHashEntry(v67, v19);
LABEL_43:
    v13 = v64;
    v8 = a4;
LABEL_44:
    v9 = v76;
    v10 = v63;
LABEL_45:
    if ( v71 != P && _InterlockedExchangeAdd(v71, 0xFFFFFFFF) == 1 )
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    v10 += v13;
    v9 += v13;
    v63 = v10;
    v76 = v9;
    if ( (*(_DWORD *)(v17 + 176) & 0x20000) == 0 )
    {
LABEL_47:
      *a6 = v17;
      *a7 = v62;
      *a8 = v10;
      return v66;
    }
    if ( (*(_DWORD *)(v17 + 4) & 0x100000) != 0 )
      *(_DWORD *)(v17 + 60) = CmpLockTableAdd(v17, 0);
    ExAcquirePushLockSharedEx(v17 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 48));
    if ( (*(_DWORD *)(v17 + 176) & 0x20000) == 0 )
      goto LABEL_83;
    v11 = *(volatile signed __int32 **)(v17 + 96);
    v71 = v11;
    v40 = *v11;
    v41 = *v11 + 1;
    if ( *v11 == -1 )
    {
LABEL_122:
      v66 = -1073741670;
      CmpRecordParseFailure((__int64)a5, 393728, -1073741670);
      goto LABEL_123;
    }
    while ( 1 )
    {
      if ( v41 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v42 = v40;
      v40 = _InterlockedCompareExchange(v11, v41, v40);
      if ( v42 == v40 )
        break;
      v41 = v40 + 1;
      if ( v40 == -1 )
        goto LABEL_122;
    }
    v43 = *((_QWORD *)v11 + 3);
    if ( (*(_DWORD *)(v43 + 144) & 0x20) == 0 || *(struct _KTHREAD **)(v43 + 5416) == KeGetCurrentThread() )
    {
      if ( (v11[1] & 0x40000) != 0 )
      {
        v54 = a5;
        v52 = -1073740763;
        v53 = 394496;
LABEL_119:
        v66 = v52;
        v60 = v52;
        goto LABEL_120;
      }
      v44 = *(_DWORD *)(v17 + 4) & 0x80000;
      if ( *(struct _KTHREAD **)(v17 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v17 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v17 + 48));
      ExReleasePushLockEx(v17 + 40, 0LL);
      if ( (*(_DWORD *)(v17 + 4) & 0x100000) != 0 )
        CmpLockTableRemove(v17, *(_DWORD *)(v17 + 60));
      if ( v44 && (*(_DWORD *)(v17 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v17);
      if ( v62 )
        CmpUnlockHashEntryByKcb(v17);
      v45 = *(_DWORD *)v17;
      if ( *(_DWORD *)v17 <= 1u )
      {
LABEL_109:
        v55 = *(_DWORD *)(v17 + 8);
        v56 = *(_QWORD *)(v17 + 24);
        CmpLockHashEntryExclusiveByKcb(v17);
        CmpLockKcbExclusive(v17);
        v57 = *(_QWORD *)(v17 + 184);
        v58 = 0LL;
        if ( v57 )
        {
          v59 = *(_QWORD *)(v57 + 24);
          if ( v59 )
          {
            v58 = *(_QWORD *)(v59 + 16);
            CmpUnlockKcb(v17);
            CmpLockKcbExclusive(v58);
            CmpLockKcbExclusive(v17);
          }
        }
        CmpDereferenceKeyControlBlockWithLock((volatile signed __int32 *)v17, 0);
        CmpUnlockKcb(v17);
        if ( v58 )
          CmpUnlockKcb(v58);
        CmpUnlockHashEntry(v56, v55);
      }
      else
      {
        while ( 1 )
        {
          v46 = v45;
          v45 = _InterlockedCompareExchange((volatile signed __int32 *)v17, v45 - 1, v45);
          if ( v45 == v46 )
            break;
          if ( v45 <= 1 )
            goto LABEL_109;
        }
      }
      if ( !v62 )
      {
        a3 = v77;
        continue;
      }
      v17 = (unsigned __int64)v11;
      CmpLockHashEntrySharedByKcb((ULONG_PTR)v11);
      CmpLockKcbShared((__int64)v11);
LABEL_83:
      CmpUnlockKcb(v17);
      goto LABEL_47;
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
        if ( (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v50, v51, a5 + 34) )
        {
          *a5 |= 0x100u;
          v52 = 259;
          v53 = 393984;
          v54 = a5;
          goto LABEL_119;
        }
      }
    }
  }
  v60 = -1073741772;
  v53 = 394240;
  v54 = a5;
LABEL_120:
  CmpRecordParseFailure((__int64)v54, v53, v60);
  CmpDereferenceKeyControlBlockUnsafe(v11);
LABEL_123:
  CmpUnlockKcb(v17);
  if ( v62 )
    CmpUnlockHashEntryByKcb(v17);
  if ( v17 )
  {
    v61 = v17;
    goto LABEL_130;
  }
  return v66;
}
