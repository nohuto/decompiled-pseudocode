/*
 * XREFs of StorTickEventQueue @ 0x1C0011AC0
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0011A40 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0011818 (RaidDriverGetName.c)
 *     RaidAdapterRequestComplete @ 0x1C00275A8 (RaidAdapterRequestComplete.c)
 *     RaidUnitAbortSrb @ 0x1C003C440 (RaidUnitAbortSrb.c)
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C00408DC (StorEtwHwTimeoutDetectedEvent.c)
 *     StorEtwMiniportBugAbortTimeoutEvent @ 0x1C00415B8 (StorEtwMiniportBugAbortTimeoutEvent.c)
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C00417E0 (StorEtwMiniportBugResetBrokenEvent.c)
 */

__int64 __fastcall StorTickEventQueue(_DWORD *a1)
{
  unsigned __int64 v1; // r13
  unsigned int v3; // esi
  USHORT HighestNodeNumber; // ax
  unsigned int v5; // r14d
  unsigned int v6; // ebp
  unsigned int v7; // edi
  KSPIN_LOCK *v8; // rbx
  unsigned int v9; // eax
  unsigned int v11; // r12d
  char v12; // al
  KSPIN_LOCK *v13; // r15
  KSPIN_LOCK *v14; // r12
  KSPIN_LOCK v15; // rdi
  KSPIN_LOCK v16; // rcx
  __int64 v17; // rdx
  ULONGLONG v18; // rdx
  ULONG_PTR *v19; // r13
  ULONG_PTR v20; // r12
  ULONG_PTR v21; // rcx
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // [rsp+40h] [rbp-98h]
  __int64 v31; // [rsp+48h] [rbp-90h]
  __int64 v32; // [rsp+50h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-80h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+60h] [rbp-78h]
  __int64 v35; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  char v37; // [rsp+E0h] [rbp+8h]
  char v38; // [rsp+E8h] [rbp+10h]
  char v39; // [rsp+F0h] [rbp+18h]
  unsigned int v40; // [rsp+F8h] [rbp+20h]

  LODWORD(v1) = 0;
  v3 = 0;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v5 = a1[1];
  v6 = HighestNodeNumber + 1;
  if ( (*a1 & 1) == 0 )
  {
    v7 = 0;
    if ( HighestNodeNumber == -1 )
      return v3;
    v8 = (KSPIN_LOCK *)(a1 + 28);
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v8 - 1, &LockHandle);
      v9 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 > 0xFFFFFFFD )
      {
LABEL_5:
        v3 = 0;
        goto LABEL_6;
      }
      if ( v9 )
      {
        if ( v9 <= v5 )
        {
          *(_DWORD *)v8 = 0;
          goto LABEL_83;
        }
        v9 -= v5;
        *(_DWORD *)v8 = v9;
      }
      if ( v9 )
        goto LABEL_5;
LABEL_83:
      StorEtwHwTimeoutDetectedEvent(*(v8 - 6) - 48, 0LL);
      v3 = -1073741643;
      *(_DWORD *)v8 = -2;
LABEL_6:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v3 != -1073741643 )
      {
        ++v7;
        v8 += 7;
        if ( v7 < v6 )
          continue;
      }
      return v3;
    }
  }
  v39 = 1;
  v11 = 0;
  v38 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  while ( 1 )
  {
    v12 = 0;
    v30 = 0;
    v37 = 0;
    if ( v6 )
      break;
LABEL_79:
    v39 = 0;
    if ( !v12 || v11 >= 0x64 )
      return v3;
  }
  v13 = (KSPIN_LOCK *)(a1 + 24);
  while ( 1 )
  {
    v40 = v11 + 1;
    v14 = v13 - 2;
    v31 = 0LL;
    v15 = 0LL;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v13 + 1, &LockHandle);
    if ( v39 )
    {
      v16 = *v14;
      *v13 = *v14;
    }
    else
    {
      v16 = *v13;
    }
    if ( (KSPIN_LOCK *)v16 == v14 )
    {
      v22 = 0LL;
    }
    else
    {
      v17 = (unsigned int)(5000000 * *(_DWORD *)(v16 + 16));
      v15 = v16 - 64;
      v35 = *(_QWORD *)(v16 + 24);
      v18 = v35 + v17;
      if ( v18 > UnbiasedInterruptTime || (*(_BYTE *)(v15 + 16) & 0x1C) == 0x10 )
      {
        *v13 = (KSPIN_LOCK)v14;
        v22 = 0LL;
      }
      else
      {
        v19 = *(ULONG_PTR **)(v15 + 224);
        v20 = v19[334];
        if ( v18 < v20 )
        {
          v21 = v19[3];
          v32 = 0LL;
          BugCheckParameter2 = 0LL;
          RaidDriverGetName(*(_QWORD *)(v21 + 16), (__int64)&v32);
          if ( MiniportBugActionPolicy == 1 )
          {
            StorEtwMiniportBugResetBrokenEvent(v15, v20 - v35, &v32);
          }
          else if ( MiniportBugActionPolicy == 2 )
          {
            KeBugCheckEx(0xF0u, 1uLL, BugCheckParameter2, *(_QWORD *)(v15 + 168), v19[1]);
          }
        }
        if ( (*a1 & 4) != 0 )
        {
          v23 = *(_DWORD *)(v15 + 776);
          if ( v23 == 3 )
          {
            LODWORD(v1) = 0;
            v3 = -1073741643;
            v22 = 0LL;
            v37 = 0;
          }
          else if ( v23 )
          {
            LODWORD(v1) = 0;
            v22 = 0LL;
            if ( (*(_BYTE *)(v15 + 17) & 4) != 0 )
            {
              v37 = 1;
              *v13 = *(_QWORD *)*v13;
            }
          }
          else
          {
            v37 = 1;
            *v13 = *(_QWORD *)*v13;
            v24 = *(_QWORD *)(v15 + 168);
            v22 = *(_QWORD *)(v15 + 224);
            v31 = v24;
            v25 = *(_BYTE *)(v24 + 2);
            if ( v25 == 40 )
              v1 = *(unsigned int *)(v24 + 20);
            else
              v1 = v25;
            if ( (unsigned int)v1 > 0x20 || (v26 = 0x1000D0000LL, !_bittest64(&v26, v1)) )
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 776), 1, 0) )
              {
                v22 = 0LL;
                v31 = 0LL;
                if ( (*(_BYTE *)(v15 + 17) & 4) == 0 )
                  *v13 = (KSPIN_LOCK)(v13 - 2);
              }
            }
          }
        }
        else
        {
          LODWORD(v1) = 0;
          v3 = -1073741643;
          v22 = 0LL;
        }
      }
    }
    if ( (*a1 & 4) != 0 )
      goto LABEL_58;
    if ( v3 == -1073741643 )
    {
      *((_DWORD *)v13 + 4) = -2;
      goto LABEL_61;
    }
    v27 = *((_DWORD *)v13 + 4);
    if ( !v27 )
      goto LABEL_55;
    if ( v27 > v5 )
    {
      v27 -= v5;
      *((_DWORD *)v13 + 4) = v27;
LABEL_55:
      if ( v27 )
        goto LABEL_58;
      goto LABEL_56;
    }
    *((_DWORD *)v13 + 4) = 0;
LABEL_56:
    v28 = *(v13 - 4);
    if ( (*(_DWORD *)(v28 + 48) & 1) != 0 )
    {
      *((_DWORD *)v13 + 4) = v5;
LABEL_58:
      if ( v3 != -1073741643 && (v38 || !v22) )
        goto LABEL_64;
      goto LABEL_61;
    }
    v15 = v28 - 48;
    *((_DWORD *)v13 + 4) = -2;
    v3 = -1073741643;
LABEL_61:
    if ( v15 && *(_DWORD *)(v15 + 776) != 3 )
    {
      StorEtwHwTimeoutDetectedEvent(v15, (*a1 & 4) != 0);
      v38 = 1;
    }
LABEL_64:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v3 == -1073741643 )
    {
      LODWORD(v1) = 0;
      goto LABEL_77;
    }
    if ( v22 )
    {
      if ( (_DWORD)v1 == 16 )
      {
        v3 = -1073741643;
        StorEtwMiniportBugAbortTimeoutEvent(v15);
        v11 = v40;
        v12 = 0;
        LODWORD(v1) = 0;
        goto LABEL_79;
      }
      if ( (unsigned int)(v1 - 18) > 1 && (_DWORD)v1 != 32 )
      {
        *(_BYTE *)(v15 + 17) |= 4u;
        if ( (int)RaidUnitAbortSrb(v22, v31) < 0 )
          break;
      }
    }
    v13 += 7;
    v11 = v40;
    LODWORD(v1) = 0;
    if ( ++v30 >= v6 )
      goto LABEL_78;
  }
  *(_BYTE *)(v15 + 17) &= ~4u;
  LODWORD(v1) = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 776), 0, 1) == 4 )
  {
    LOBYTE(v29) = 1;
    RaidAdapterRequestComplete(*(_QWORD *)(v22 + 24), v15, v29);
    v3 = 0;
LABEL_77:
    v11 = v40;
LABEL_78:
    v12 = v37;
    goto LABEL_79;
  }
  return (unsigned int)-1073741643;
}
