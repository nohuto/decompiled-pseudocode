/*
 * XREFs of KiTimer2Expiration @ 0x1400E8E30
 * Callers:
 *     KiRetireDpcList @ 0x1401073A0 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x140154320 (KiTimerExpirationDpc.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140005910 (KiSendClockInterruptToClockOwner.c)
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x140087660 (KiUpdateTimer2Flags.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 *     KiInsertTimer2 @ 0x1400BBA54 (KiInsertTimer2.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KiCheckAndRearmForceIdle @ 0x1400D14A4 (KiCheckAndRearmForceIdle.c)
 *     KiRemoveTimer2 @ 0x1400E9160 (KiRemoveTimer2.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x1400EA6A4 (KiShouldActivateHRTimerClock.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v8; // rsi
  char v9; // r15
  unsigned int v10; // r13d
  unsigned __int64 v11; // rax
  signed __int64 v12; // r12
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rbx
  signed __int32 v17; // edx
  signed __int32 v18; // eax
  signed __int32 v19; // edx
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rbx
  char v24; // al
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // edx
  char inserted; // al
  char v30; // r8
  char v31[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-90h] BYREF
  _QWORD **v33; // [rsp+40h] [rbp-88h]
  signed __int64 v34; // [rsp+48h] [rbp-80h]
  __int64 v35; // [rsp+50h] [rbp-78h]
  __int64 v36; // [rsp+58h] [rbp-70h]
  _QWORD v37[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-58h] BYREF
  char v39; // [rsp+78h] [rbp-50h]

  result = KiNextTimer2DueTime;
  v5 = a4;
  v36 = a4;
  v35 = a1;
  v8 = a1;
  if ( a2 < KiNextTimer2DueTime )
    return result;
  v33 = &v32;
  v9 = 0;
  v32 = &v32;
  KxAcquireSpinLock(&KiTimer2CollectionLock);
  v10 = 0;
  v11 = 4LL;
  if ( !a3 )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      v38 = a2;
      v37[0] = &v38;
      v39 = 1;
      v37[1] = 16LL;
      EtwTraceKernelEvent((int)v37, 1, 0x40020000u, 3920, 1538);
    }
    v10 = 1;
    v11 = 2LL;
  }
  v12 = v10;
  v34 = v11;
  if ( v10 < v11 )
  {
    v13 = (unsigned __int64)&KiTimer2Collections + 24 * v10;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( (v14 & 1) == 0 )
        break;
      if ( v14 != 1 )
      {
        v15 = v14 ^ (v13 | 1);
        goto LABEL_12;
      }
LABEL_22:
      ++v10;
      ++v12;
      v13 += 24LL;
      if ( v12 >= v34 )
      {
        v8 = v35;
        v5 = v36;
        goto LABEL_24;
      }
    }
    v15 = *(_QWORD *)(v13 + 8);
LABEL_12:
    while ( v15 )
    {
      v16 = (_QWORD *)(v15 - 24 * ((unsigned __int64)v10 >> 1));
      if ( a2 < v16[6] )
        break;
      KiRemoveTimer2(v16 - 3);
      v17 = *((_DWORD *)v16 - 6);
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)v16 - 6, v17 & 0xFFFFF0FF | 0x200, v17);
      if ( v17 != v18 )
      {
        do
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange((volatile signed __int32 *)v16 - 6, v18 & 0xFFFFF0FF | 0x200, v18);
        }
        while ( v19 != v18 );
      }
      v20 = v33;
      if ( *v33 != &v32 )
        __fastfail(3u);
      v16[1] = v33;
      *v16 = &v32;
      *v20 = v16;
      v21 = *(_QWORD *)(v13 + 8);
      v33 = (_QWORD **)v16;
      if ( (v21 & 1) != 0 )
      {
        if ( v21 == 1 )
          goto LABEL_22;
        v15 = v21 ^ (v13 | 1);
      }
      else
      {
        v15 = v21;
      }
    }
    goto LABEL_22;
  }
LABEL_24:
  KxReleaseSpinLock(&KiTimer2CollectionLock);
  v22 = v32;
  if ( v32 == &v32 )
    goto LABEL_38;
  do
  {
    v23 = (__int64)(v22 - 3);
    v22 = (_QWORD *)*v22;
    KiAcquireKobjectLockSafe(v23);
    v24 = *(_BYTE *)(v23 + 1);
    v25 = (volatile signed __int32 *)v23;
    if ( (v24 & 2) == 0 )
    {
      v28 = 0;
      if ( (v24 & 8) != 0 )
      {
        inserted = KiInsertTimer2(v23, 0, (__int64)v31);
        v25 = (volatile signed __int32 *)v23;
        if ( !inserted )
          goto LABEL_26;
        v30 = 0;
        v28 = 1;
      }
      else
      {
        v30 = 4;
      }
      KiUpdateTimer2Flags(v25, v28, v30);
      continue;
    }
LABEL_26:
    if ( (*(_BYTE *)(v23 + 129) & 2) != 0 )
      v9 = 1;
    KiExpireTimer2(v25, v8, a2, v5);
  }
  while ( v22 != &v32 );
  if ( v9 )
    KiCheckAndRearmForceIdle(v27, v26);
LABEL_38:
  if ( *(_QWORD *)(v8 + 11528) )
    KiProcessThreadWaitList(v8, 1u, 0);
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_1403B44C8);
  if ( (_BYTE)result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
