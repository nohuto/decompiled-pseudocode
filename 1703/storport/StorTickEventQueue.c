/*
 * XREFs of StorTickEventQueue @ 0x1C001AE98
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C001AE20 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0018C0C (RaidDriverGetName.c)
 *     RaidAdapterRequestComplete @ 0x1C002CF98 (RaidAdapterRequestComplete.c)
 *     RaidUnitAbortSrb @ 0x1C003C4E8 (RaidUnitAbortSrb.c)
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C0040688 (StorEtwHwTimeoutDetectedEvent.c)
 *     StorEtwMiniportBugAbortTimeoutEvent @ 0x1C00413E8 (StorEtwMiniportBugAbortTimeoutEvent.c)
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C0041618 (StorEtwMiniportBugResetBrokenEvent.c)
 */

__int64 __fastcall StorTickEventQueue(_DWORD *a1)
{
  unsigned int v2; // edi
  USHORT HighestNodeNumber; // ax
  unsigned int v4; // r14d
  unsigned int v5; // r13d
  unsigned int v6; // esi
  KSPIN_LOCK *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v12; // r14d
  char v13; // al
  KSPIN_LOCK *v14; // rsi
  KSPIN_LOCK *v15; // r15
  KSPIN_LOCK v16; // rbx
  __int64 v17; // r8
  KSPIN_LOCK v18; // r14
  ULONGLONG v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // [rsp+30h] [rbp-98h]
  __int64 v31; // [rsp+38h] [rbp-90h]
  unsigned int v32; // [rsp+40h] [rbp-88h]
  unsigned int v33; // [rsp+44h] [rbp-84h]
  __int64 v34; // [rsp+48h] [rbp-80h]
  __int64 v35; // [rsp+50h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-70h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+60h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-60h] BYREF
  char v39; // [rsp+D0h] [rbp+8h]
  char v40; // [rsp+D8h] [rbp+10h]
  char v41; // [rsp+E0h] [rbp+18h]

  v2 = 0;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v4 = a1[1];
  v5 = HighestNodeNumber + 1;
  v32 = v4;
  if ( (*a1 & 1) == 0 )
  {
    v6 = 0;
    if ( HighestNodeNumber == -1 )
      return v2;
    v7 = (KSPIN_LOCK *)(a1 + 28);
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v7 - 1, &LockHandle);
      v10 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 > 0xFFFFFFFD )
      {
LABEL_5:
        v2 = 0;
        goto LABEL_6;
      }
      if ( v10 )
      {
        if ( v10 <= v4 )
        {
          *(_DWORD *)v7 = 0;
          goto LABEL_83;
        }
        *(_DWORD *)v7 = v10 - v4;
      }
      if ( *(_DWORD *)v7 )
        goto LABEL_5;
LABEL_83:
      StorEtwHwTimeoutDetectedEvent(*(v7 - 6) - 48, 0LL, v8, v9);
      v2 = -1073741643;
      *(_DWORD *)v7 = -2;
LABEL_6:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v2 != -1073741643 )
      {
        ++v6;
        v7 += 7;
        if ( v6 < v5 )
          continue;
      }
      return v2;
    }
  }
  v41 = 1;
  v12 = 0;
  v40 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  while ( 1 )
  {
    v33 = 0;
    v13 = 0;
    v39 = 0;
    if ( v5 )
      break;
LABEL_75:
    v41 = 0;
    if ( !v13 || v12 >= 0x64 )
      return v2;
  }
  v14 = (KSPIN_LOCK *)(a1 + 24);
  while ( 1 )
  {
    v31 = 0LL;
    v15 = v14 - 2;
    v34 = 0LL;
    v30 = v12 + 1;
    v16 = 0LL;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v14 + 1, &LockHandle);
    if ( v41 )
      *v14 = *v15;
    v18 = *v14;
    if ( (KSPIN_LOCK *)*v14 == v15 )
      goto LABEL_45;
    v16 = v18 - 64;
    v19 = *(_QWORD *)(v18 + 24) + (unsigned int)(5000000 * *(_DWORD *)(v18 + 16));
    if ( v19 > UnbiasedInterruptTime || (*(_BYTE *)(v16 + 16) & 0x1C) == 0x10 )
    {
      *v14 = (KSPIN_LOCK)v15;
LABEL_45:
      LODWORD(v21) = 0;
LABEL_46:
      v23 = 0LL;
      goto LABEL_47;
    }
    v20 = *(_QWORD *)(v16 + 224);
    if ( v19 < *(_QWORD *)(v20 + 2624) )
    {
      v35 = 0LL;
      BugCheckParameter2 = 0LL;
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(v20 + 24) + 16LL), (__int64)&v35);
      if ( MiniportBugActionPolicy == 1 )
      {
        StorEtwMiniportBugResetBrokenEvent(
          v18 - 64,
          *(_QWORD *)(*(_QWORD *)(v16 + 224) + 2624LL) - *(_QWORD *)(v18 + 24),
          &v35);
      }
      else if ( MiniportBugActionPolicy == 2 )
      {
        KeBugCheckEx(0xF0u, 1uLL, BugCheckParameter2, *(_QWORD *)(v16 + 168), *(_QWORD *)(*(_QWORD *)(v16 + 224) + 8LL));
      }
    }
    if ( (*a1 & 4) == 0 )
    {
      LODWORD(v21) = 0;
      v2 = -1073741643;
      goto LABEL_46;
    }
    v22 = *(_DWORD *)(v16 + 776);
    if ( v22 == 3 )
    {
      v23 = 0LL;
      v39 = 0;
      LODWORD(v21) = 0;
      v2 = -1073741643;
    }
    else if ( v22 )
    {
      LODWORD(v21) = 0;
      v23 = 0LL;
      if ( (*(_BYTE *)(v16 + 17) & 4) != 0 )
      {
        v39 = 1;
        *v14 = *(_QWORD *)*v14;
      }
    }
    else
    {
      v39 = 1;
      *v14 = *(_QWORD *)*v14;
      v24 = *(_QWORD *)(v16 + 168);
      v23 = *(_QWORD *)(v16 + 224);
      v31 = v23;
      v34 = v24;
      v25 = *(_BYTE *)(v24 + 2);
      if ( v25 == 40 )
        v21 = *(unsigned int *)(v24 + 20);
      else
        v21 = v25;
      if ( (unsigned int)v21 > 0x20 || (v26 = 0x1000D0000LL, !_bittest64(&v26, v21)) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 776), 1, 0) )
        {
          v23 = 0LL;
          v31 = 0LL;
          v34 = 0LL;
          if ( (*(_BYTE *)(v16 + 17) & 4) == 0 )
            *v14 = (KSPIN_LOCK)v15;
        }
      }
    }
LABEL_47:
    if ( (*a1 & 4) == 0 )
    {
      if ( v2 == -1073741643 )
      {
        *((_DWORD *)v14 + 4) = -2;
LABEL_62:
        if ( v16 && *(_DWORD *)(v16 + 776) != 3 )
        {
          StorEtwHwTimeoutDetectedEvent(v16, (*(unsigned __int8 *)a1 >> 2) & 1, v17, v23);
          v40 = 1;
        }
        goto LABEL_65;
      }
      v27 = *((_DWORD *)v14 + 4);
      v17 = v32;
      if ( v27 )
      {
        if ( v27 > v32 )
          *((_DWORD *)v14 + 4) = v27 - v32;
        else
          *((_DWORD *)v14 + 4) = 0;
      }
      if ( !*((_DWORD *)v14 + 4) )
      {
        v28 = *(v14 - 4);
        if ( (*(_DWORD *)(v28 + 48) & 1) != 0 )
        {
          *((_DWORD *)v14 + 4) = v32;
        }
        else
        {
          v16 = v28 - 48;
          *((_DWORD *)v14 + 4) = -2;
          v2 = -1073741643;
        }
      }
    }
    if ( v2 == -1073741643 || !v40 && v23 )
      goto LABEL_62;
LABEL_65:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v2 == -1073741643 )
      goto LABEL_73;
    if ( v31 )
    {
      if ( (_DWORD)v21 == 16 )
      {
        v2 = -1073741643;
        StorEtwMiniportBugAbortTimeoutEvent(v16);
        v12 = v30;
        v13 = 0;
        goto LABEL_75;
      }
      if ( (unsigned int)(v21 - 18) > 1 && (_DWORD)v21 != 32 )
      {
        *(_BYTE *)(v16 + 17) |= 4u;
        if ( (int)RaidUnitAbortSrb(v31, v34) < 0 )
          break;
      }
    }
    v14 += 7;
    ++v33;
    v12 = v30;
    if ( v33 >= v5 )
      goto LABEL_74;
  }
  *(_BYTE *)(v16 + 17) &= ~4u;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 776), 0, 1) == 4 )
  {
    LOBYTE(v29) = 1;
    RaidAdapterRequestComplete(*(_QWORD *)(v31 + 24), v16, v29);
    v2 = 0;
LABEL_73:
    v12 = v30;
LABEL_74:
    v13 = v39;
    goto LABEL_75;
  }
  return (unsigned int)-1073741643;
}
