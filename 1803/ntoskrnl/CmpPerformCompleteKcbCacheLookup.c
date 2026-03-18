/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x1405A5560
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404959F8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpUnlockHashEntry @ 0x14049D070 (CmpUnlockHashEntry.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14049D18C (CmpLockHashEntrySharedByKcb.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404A8AD0 (CmpLockHashEntryExclusiveByKcb.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     CmpUnlockHashEntryByKcb @ 0x14054DE30 (CmpUnlockHashEntryByKcb.c)
 *     CmpRecordParseFailure @ 0x14056D188 (CmpRecordParseFailure.c)
 *     CmpCompareUnicodeString @ 0x1405706A4 (CmpCompareUnicodeString.c)
 *     CmpGetComponentNameAtIndex @ 0x140573538 (CmpGetComponentNameAtIndex.c)
 *     CmpWaitForHiveMount @ 0x140647A90 (CmpWaitForHiveMount.c)
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
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int16 v10; // r9
  unsigned int v11; // r13d
  ULONG_PTR v12; // r14
  signed __int32 v13; // eax
  char v14; // r12
  ULONG_PTR v15; // rdi
  __int16 v16; // dx
  signed __int32 v17; // ecx
  signed __int32 v18; // ett
  ULONG_PTR v19; // r15
  unsigned int v20; // r14d
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // r13
  int v24; // eax
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r9
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 v30; // rsi
  __int64 v31; // rcx
  ULONG_PTR v32; // rcx
  __int16 v33; // r9
  ULONG_PTR v35; // r12
  __int64 v36; // rcx
  unsigned __int8 *v37; // r15
  unsigned __int16 v38; // bp
  WCHAR *v39; // r14
  unsigned __int16 v40; // di
  WCHAR v41; // ax
  int v42; // esi
  int v43; // edx
  signed __int32 v44; // eax
  signed __int32 v45; // ett
  unsigned int v46; // r8d
  ULONG_PTR v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  signed __int32 v51; // eax
  signed __int32 v52; // ecx
  signed __int32 v53; // ett
  __int64 v54; // rcx
  int v55; // ebx
  unsigned __int32 v56; // eax
  unsigned __int32 v57; // edx
  char v58; // bp
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // edi
  _DWORD *v62; // rbx
  __int64 ComponentNameAtIndex; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  int v66; // edx
  unsigned int v67; // ebx
  void *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  ULONG_PTR v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  ULONG_PTR v84; // rcx
  char v85; // [rsp+30h] [rbp-98h]
  __int16 v86; // [rsp+32h] [rbp-96h]
  __int16 v87; // [rsp+34h] [rbp-94h]
  unsigned int v88; // [rsp+38h] [rbp-90h]
  volatile signed __int32 *v89; // [rsp+40h] [rbp-88h]
  volatile signed __int32 *P; // [rsp+48h] [rbp-80h]
  __int64 v91; // [rsp+50h] [rbp-78h]
  __int64 v92; // [rsp+58h] [rbp-70h]
  ULONG_PTR v93; // [rsp+68h] [rbp-60h]
  _WORD v94[4]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v95; // [rsp+78h] [rbp-50h]
  unsigned int v97; // [rsp+D8h] [rbp+10h]
  unsigned int v98; // [rsp+E0h] [rbp+18h]

  v98 = a3;
  v97 = a2;
  v8 = 0;
  v93 = BugCheckParameter2;
  v9 = a4;
  v86 = 0;
  v10 = 0;
  v11 = a2;
  v12 = BugCheckParameter2;
  while ( 1 )
  {
    v13 = *(_DWORD *)v12;
    v14 = 0;
    v15 = *(_QWORD *)(v12 + 24);
    v16 = 0;
    P = (volatile signed __int32 *)v15;
    v87 = 0;
    v17 = *(_DWORD *)v12 + 1;
    v85 = 0;
    if ( *(_DWORD *)v12 == -1 )
    {
LABEL_123:
      v8 = -1073741670;
      CmpRecordParseFailure((__int64)a5, 393472, -1073741670);
      if ( v12 == BugCheckParameter2 )
        return v8;
      v84 = v12;
      goto LABEL_125;
    }
    while ( 1 )
    {
      if ( v17 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v18 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v17, v13);
      if ( v18 == v13 )
        break;
      v17 = v13 + 1;
      if ( v13 == -1 )
        goto LABEL_123;
    }
    v19 = v12;
    v89 = (volatile signed __int32 *)v12;
    v20 = v11;
    v88 = v11;
    v21 = *(_DWORD *)(v93 + 8);
    if ( v11 >= a3 )
      goto LABEL_21;
    v22 = v11;
    v92 = v11;
LABEL_7:
    if ( v20 >= 8 )
    {
      v22 = v92;
      v23 = *(_QWORD *)(v9 + 160) + 16 * (v20 - 8 + 6LL);
    }
    else
    {
      v23 = v9 + 16 * (v20 + 2LL);
    }
    if ( v20 >= 8 )
      v24 = *(_DWORD *)(*(_QWORD *)(v9 + 160) + 4LL * (v20 - 8));
    else
      v24 = *(_DWORD *)(v9 + 4 * v22);
    v21 = v24 + 37 * v21;
    v25 = (101027 * (v21 ^ (v21 >> 9))) ^ ((unsigned __int64)(101027 * (v21 ^ (v21 >> 9))) >> 9);
    ExAcquirePushLockSharedEx(*(_QWORD *)(v15 + 1640) + 24LL * ((unsigned int)v25 & (*(_DWORD *)(v15 + 1648) - 1)), 0LL);
    _m_prefetchw((const void *)(v15 + 4288));
    v28 = *(_DWORD *)(v15 + 4288);
    if ( !v28 )
LABEL_112:
      KeBugCheckEx(0x51u, 0x17uLL, v15, 9uLL, v21);
    while ( 1 )
    {
      v29 = v28;
      v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 4288), v28 + 1, v28);
      if ( v29 == v28 )
        break;
      if ( !v28 )
        goto LABEL_112;
    }
    v30 = *(_QWORD *)(*(_QWORD *)(v15 + 1640) + 24LL * ((unsigned int)v25 & (*(_DWORD *)(v15 + 1648) - 1)) + 16);
    v91 = v30;
    if ( v30 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)v30 == v21 )
        {
          v35 = v30 - 8;
          if ( *(_QWORD *)(v30 + 56) == v19 )
          {
            v36 = *(_QWORD *)(v35 + 72);
            v37 = (unsigned __int8 *)(v36 + 26);
            if ( (*(_DWORD *)v36 & 1) != 0 )
            {
              v38 = *(_WORD *)v23 >> 1;
              v39 = *(WCHAR **)(v23 + 8);
              v40 = *(_WORD *)(v36 + 24);
              if ( v38 )
              {
                while ( 1 )
                {
                  if ( !v40 )
                  {
LABEL_35:
                    v30 = v91;
                    goto LABEL_36;
                  }
                  v41 = *v39++;
                  v42 = *v37++;
                  if ( v41 != (_WORD)v42 )
                  {
                    if ( v41 >= 0x61u )
                    {
                      if ( v41 > 0x7Au )
                        v41 = RtlUpcaseUnicodeChar(v41);
                      else
                        v41 -= 32;
                    }
                    v43 = v41 - v42;
                    if ( v41 != v42 )
                      break;
                  }
                  --v40;
                  if ( !--v38 )
                    goto LABEL_35;
                }
                v30 = v91;
              }
              else
              {
LABEL_36:
                v43 = v38 - v40;
              }
              if ( !v43 )
              {
LABEL_38:
                if ( !v35 )
                {
LABEL_16:
                  LODWORD(v25) = (101027 * (v21 ^ (v21 >> 9))) ^ ((101027 * (v21 ^ (v21 >> 9))) >> 9);
                  v15 = (ULONG_PTR)P;
                  break;
                }
                v44 = *(_DWORD *)v35;
                if ( *(_DWORD *)v35 )
                {
                  while ( v44 != -1 )
                  {
                    v45 = v44;
                    v44 = _InterlockedCompareExchange((volatile signed __int32 *)v35, v44 + 1, v44);
                    if ( v45 == v44 )
                      goto LABEL_42;
                    if ( !v44 )
                      goto LABEL_68;
                  }
LABEL_95:
                  CmpUnlockHashEntry((PVOID)P, v21, v26, v27);
                  v16 = v87;
                  v19 = (ULONG_PTR)v89;
                  v9 = a4;
                  goto LABEL_49;
                }
LABEL_68:
                ExAcquirePushLockSharedEx(v35 + 40, 0LL);
                _InterlockedIncrement((volatile signed __int32 *)(v35 + 48));
                v58 = CmpReferenceKeyControlBlock(v35);
                v61 = *(_DWORD *)(v35 + 4) & 0x80000;
                if ( *(struct _KTHREAD **)(v35 + 48) == KeGetCurrentThread() )
                  *(_QWORD *)(v35 + 48) = 0LL;
                else
                  _InterlockedDecrement((volatile signed __int32 *)(v35 + 48));
                ExReleasePushLockEx(v35 + 40, 0LL, v59, v60);
                if ( v61 && (*(_DWORD *)(v35 + 4) & 0x80000) != 0 )
                  CmpFreeKeyControlBlock(v35);
                if ( !v58 )
                  goto LABEL_95;
LABEL_42:
                v46 = v98;
                v15 = (ULONG_PTR)P;
                if ( v88 == v98 - 1 )
                {
                  v85 = 1;
                }
                else
                {
                  v47 = *((_QWORD *)P + 205)
                      + 24LL
                      * (((101027 * (v21 ^ (v21 >> 9))) ^ ((101027 * (v21 ^ (v21 >> 9))) >> 9)) & (*((_DWORD *)P + 412)
                                                                                                 - 1));
                  *(_QWORD *)(v47 + 8) = 0LL;
                  ExReleasePushLockEx(v47, 0LL, v98, v27);
                  if ( _InterlockedExchangeAdd(P + 1072, 0xFFFFFFFF) == 1 )
                    CmpDeleteHive(P);
                  v46 = v98;
                }
                if ( _InterlockedExchangeAdd(v89, 0xFFFFFFFF) == 1 )
                  KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
                v19 = v35;
                v9 = a4;
                v16 = v87 + 1;
                v89 = (volatile signed __int32 *)v35;
                ++v87;
                if ( (*(_DWORD *)(v35 + 176) & 0x100000) != 0
                  || (v20 = v88 + 1, v22 = v92 + 1, v88 = v20, ++v92, v20 >= v46) )
                {
LABEL_49:
                  v8 = 0;
                  goto LABEL_20;
                }
                goto LABEL_7;
              }
            }
            else
            {
              v94[0] = *(_WORD *)(v36 + 24);
              v94[1] = v94[0];
              v95 = v36 + 26;
              if ( !(unsigned int)CmpCompareUnicodeString(v23, (__int64)v94, 2) )
                goto LABEL_38;
            }
            v19 = (ULONG_PTR)v89;
          }
        }
        v30 = *(_QWORD *)(v30 + 8);
        v91 = v30;
        if ( !v30 )
          goto LABEL_16;
      }
    }
    v31 = (unsigned int)v25 & (*(_DWORD *)(v15 + 1648) - 1);
    v8 = 0;
    v32 = *(_QWORD *)(v15 + 1640) + 24 * v31;
    *(_QWORD *)(v32 + 8) = 0LL;
    ExReleasePushLockEx(v32, 0LL, v26, v27);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 4288), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((_QWORD *)v15);
    v19 = (ULONG_PTR)v89;
    v16 = v87;
    v9 = a4;
LABEL_20:
    v11 = v97;
    v14 = v85;
    v10 = v86;
LABEL_21:
    if ( v93 != BugCheckParameter2 && _InterlockedExchangeAdd((volatile signed __int32 *)v93, 0xFFFFFFFF) == 1 )
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    v33 = v16 + v10;
    v11 += v16;
    v86 = v33;
    v97 = v11;
    if ( (*(_DWORD *)(v19 + 176) & 0x20000) == 0 )
      goto LABEL_23;
    ExAcquirePushLockSharedEx(v19 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 48));
    if ( (*(_DWORD *)(v19 + 176) & 0x20000) == 0 )
      goto LABEL_74;
    v12 = *(_QWORD *)(v19 + 96);
    v93 = v12;
    v51 = *(_DWORD *)v12;
    v52 = *(_DWORD *)v12 + 1;
    if ( *(_DWORD *)v12 == -1 )
      break;
    while ( 1 )
    {
      if ( v52 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v53 = v51;
      v51 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v52, v51);
      if ( v53 == v51 )
        break;
      v52 = v51 + 1;
      if ( v51 == -1 )
        goto LABEL_117;
    }
    v54 = *(_QWORD *)(v12 + 24);
    if ( (*(_DWORD *)(v54 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(v54 + 4208) != KeGetCurrentThread() )
    {
      v8 = -1073741772;
      v62 = a5;
      if ( CmpLoadingSystemHivesActive
        && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
        && a5
        && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v9, v11 - 1),
            (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v64, v65, a5 + 34)) )
      {
        *a5 |= 0x100u;
        v8 = 259;
        v66 = 393984;
      }
      else
      {
        v66 = 394240;
      }
      goto LABEL_115;
    }
    if ( (*(_DWORD *)(v12 + 4) & 0x40000) != 0 )
    {
      v62 = a5;
      v8 = -1073740763;
      v66 = 394496;
LABEL_115:
      CmpRecordParseFailure((__int64)v62, v66, v8);
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v12);
      goto LABEL_118;
    }
    v55 = *(_DWORD *)(v19 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(v19 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(v19 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v19 + 48));
    ExReleasePushLockEx(v19 + 40, 0LL, v49, v50);
    if ( v55 && (*(_DWORD *)(v19 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(v19);
    if ( v14 )
      CmpUnlockHashEntryByKcb(v19);
    v56 = *(_DWORD *)v19;
    if ( *(_DWORD *)v19 <= 1u )
    {
LABEL_105:
      v67 = *(_DWORD *)(v19 + 8);
      v68 = *(void **)(v19 + 24);
      CmpLockHashEntryExclusiveByKcb(v19);
      CmpLockKcbExclusive(v19);
      v72 = *(_QWORD *)(v19 + 184);
      v73 = 0LL;
      if ( v72 )
      {
        v74 = *(_QWORD *)(v72 + 24);
        if ( v74 )
        {
          v73 = *(_QWORD *)(v74 + 16);
          CmpUnlockKcb(v19, v69, v70, v71);
          CmpLockKcbExclusive(v73);
          CmpLockKcbExclusive(v19);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v19);
      CmpUnlockKcb(v19, v75, v76, v77);
      if ( v73 )
        CmpUnlockKcb(v73, v78, v79, v80);
      CmpUnlockHashEntry(v68, v67, v79, v80);
      v9 = a4;
    }
    else
    {
      while ( 1 )
      {
        v57 = v56;
        v56 = _InterlockedCompareExchange((volatile signed __int32 *)v19, v56 - 1, v56);
        if ( v56 == v57 )
          break;
        if ( v56 <= 1 )
          goto LABEL_105;
      }
    }
    if ( v14 )
    {
      v19 = v12;
      CmpLockHashEntrySharedByKcb(v12);
      ExAcquirePushLockSharedEx(v12 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
LABEL_74:
      CmpUnlockKcb(v19, v48, v49, v50);
      v33 = v86;
LABEL_23:
      *a6 = v19;
      *a7 = v14;
      *a8 = v33;
      return v8;
    }
    a3 = v98;
    v10 = v86;
  }
LABEL_117:
  v8 = -1073741670;
  CmpRecordParseFailure((__int64)a5, 393728, -1073741670);
LABEL_118:
  CmpUnlockKcb(v19, v81, v82, v83);
  if ( v14 )
    CmpUnlockHashEntryByKcb(v19);
  if ( v19 )
  {
    v84 = v19;
LABEL_125:
    CmpDereferenceKeyControlBlock(v84);
  }
  return v8;
}
