/*
 * XREFs of KiTimer2Expiration @ 0x140092BD0
 * Callers:
 *     KiRetireDpcList @ 0x140094770 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x14020C0F0 (KiTimerExpirationDpc.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x14005DBF0 (KiRemoveTimer2.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     KiExpireTimer2 @ 0x1400E2E30 (KiExpireTimer2.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiInsertTimer2 @ 0x1400E339C (KiInsertTimer2.c)
 *     KiUpdateTimer2Flags @ 0x1400E344C (KiUpdateTimer2Flags.c)
 *     KiSendClockInterruptToClockOwner @ 0x14010F0C8 (KiSendClockInterruptToClockOwner.c)
 *     KiProcessThreadWaitList @ 0x1401122C0 (KiProcessThreadWaitList.c)
 *     KiCheckAndRearmForceIdle @ 0x14013171C (KiCheckAndRearmForceIdle.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiTimer2Expiration(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 result; // rax
  unsigned int v9; // ebp
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r12
  _QWORD *v13; // rsi
  unsigned __int64 i; // rbx
  _QWORD *v15; // rbx
  _QWORD *v16; // rbx
  char v17; // r14
  __int64 v18; // rsi
  _QWORD *v19; // rdi
  char v20; // al
  signed __int32 v21; // edx
  signed __int32 v22; // eax
  _QWORD *v23; // rax
  signed __int32 v24; // edx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  char inserted; // al
  __int64 v28; // r8
  char v29[8]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-80h] BYREF
  _QWORD **v31; // [rsp+40h] [rbp-78h]
  int v32; // [rsp+48h] [rbp-70h]
  __int64 v33; // [rsp+50h] [rbp-68h]
  _QWORD v34[2]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-50h] BYREF
  char v36; // [rsp+70h] [rbp-48h]
  __int64 v37; // [rsp+80h] [rbp-38h]

  result = KiNextTimer2DueTime;
  v33 = a4;
  if ( a2 >= KiNextTimer2DueTime )
  {
    v37 = v4;
    LOBYTE(v4) = 0;
    v31 = &v30;
    v32 = v4;
    v30 = &v30;
    KxAcquireSpinLock(&KiTimer2CollectionLock);
    v9 = 0;
    v10 = 4;
    if ( !a3 )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        v35 = a2;
        v34[0] = &v35;
        v36 = 1;
        v34[1] = 16LL;
        EtwTraceKernelEvent((unsigned int)v34, 1, 1073872896, 3920, 1538);
      }
      v9 = 1;
      v10 = 2;
    }
    v11 = v9;
    v12 = v10;
    v13 = (_QWORD *)((char *)&unk_140371248 + 24 * v9);
    do
    {
      for ( i = *v13 & 0xFFFFFFFFFFFFFFFEuLL; i; i = *v13 & 0xFFFFFFFFFFFFFFFEuLL )
      {
        v15 = (_QWORD *)(i - 24 * ((unsigned __int64)v9 >> 1));
        if ( a2 < v15[6] )
          break;
        KiRemoveTimer2((__int64)(v15 - 3));
        v21 = *((_DWORD *)v15 - 6);
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)v15 - 6, v21 & 0xFFFFF0FF | 0x200, v21);
        if ( v21 != v22 )
        {
          do
          {
            v24 = v22;
            v22 = _InterlockedCompareExchange((volatile signed __int32 *)v15 - 6, v22 & 0xFFFFF0FF | 0x200, v22);
          }
          while ( v24 != v22 );
        }
        v23 = v31;
        if ( *v31 != &v30 )
          __fastfail(3u);
        v15[1] = v31;
        *v15 = &v30;
        *v23 = v15;
        v31 = (_QWORD **)v15;
      }
      ++v9;
      ++v11;
      v13 += 3;
    }
    while ( v11 < v12 );
    KxReleaseSpinLock(&KiTimer2CollectionLock);
    v16 = v30;
    if ( v30 != &v30 )
    {
      v17 = v32;
      v18 = v33;
      while ( 1 )
      {
        v19 = v16 - 3;
        v16 = (_QWORD *)*v16;
        KiAcquireKobjectLockSafe(v19);
        v20 = *((_BYTE *)v19 + 1);
        if ( (v20 & 2) != 0 )
        {
          if ( (*((_BYTE *)v19 + 129) & 2) != 0 )
            v17 = 1;
        }
        else
        {
          v25 = 0LL;
          v26 = v19;
          if ( (v20 & 8) == 0 )
          {
            v28 = 4LL;
            goto LABEL_39;
          }
          inserted = KiInsertTimer2(v19, 0LL, v29);
          v26 = v19;
          if ( inserted )
          {
            v28 = 0LL;
            v25 = 1LL;
LABEL_39:
            KiUpdateTimer2Flags(v26, v25, v28);
            goto LABEL_13;
          }
          if ( (*((_BYTE *)v19 + 129) & 2) != 0 )
            v17 = 1;
        }
        KiExpireTimer2(v19, a1, a2, v18);
LABEL_13:
        if ( v16 == &v30 )
        {
          if ( v17 )
            KiCheckAndRearmForceIdle();
          break;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 11528) )
      KiProcessThreadWaitList(a1, 1LL, 0LL, 2LL);
    result = (unsigned __int8)KiHRTimerClockActive;
    if ( !KiHRTimerClockActive )
    {
      result = MEMORY[0xFFFFF78000000008] + KeMaximumIncrement;
      if ( qword_140371268 < result )
        return KiSendClockInterruptToClockOwner(MEMORY[0xFFFFF78000000008], qword_140371268);
    }
  }
  return result;
}
