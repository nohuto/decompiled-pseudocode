/*
 * XREFs of KiExpireTimerTable @ 0x140154548
 * Callers:
 *     KiTimerExpiration @ 0x1401543F4 (KiTimerExpiration.c)
 * Callees:
 *     KiRemoveEntryTimer @ 0x1400C825C (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiProcessExpiredTimerList @ 0x140108660 (KiProcessExpiredTimerList.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall KiExpireTimerTable(__int64 a1, __int64 a2, int a3, int a4, int a5, unsigned __int64 a6, int *a7)
{
  int v8; // edx
  int v9; // r15d
  unsigned int v10; // ecx
  int v11; // edx
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rbx
  _QWORD *v15; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rax
  ULONG_PTR v19; // rsi
  ULONG_PTR BugCheckParameter4; // rcx
  char v21; // al
  __int64 v22; // rcx
  char v23; // al
  unsigned int v24; // [rsp+30h] [rbp-68h]
  int v26; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+18h]
  int v28; // [rsp+B8h] [rbp+20h]

  v8 = a5;
  v9 = a3 - 1;
  v10 = a3 + a4 - 1;
  LOBYTE(a5) = -64;
  v11 = v10 + v8;
  v27 = v10;
  v12 = 0;
  v28 = v11;
  v13 = 0LL;
  do
  {
    v14 = 32 * ((unsigned __int8)++v9 + 16LL);
    if ( v12 <= v10 || *(_QWORD *)(v14 + a2 + 24) <= a6 )
    {
      v15 = (_QWORD *)(v14 + a2 + 8);
      if ( v15 != (_QWORD *)*v15 )
      {
        do
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = 0;
          while ( 1 )
          {
            KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + a2), 0LL) )
              break;
            KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
            do
              KeYieldProcessorEx(&v26);
            while ( *(_QWORD *)(v14 + a2) );
          }
          do
          {
            v17 = (_QWORD *)*v15;
            if ( v15 == (_QWORD *)*v15 )
              goto LABEL_13;
            v18 = *(v17 - 1);
            v19 = (ULONG_PTR)(v17 - 4);
            if ( v18 > a6 )
            {
              *(_QWORD *)(v14 + a2 + 24) = v18;
LABEL_13:
              _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
              KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
              goto LABEL_14;
            }
            KiRemoveEntryTimer(a2, v19, (unsigned __int8)v9);
            BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8 * v13), v19);
            if ( BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v19, BugCheckParameter4);
            v24 = 0;
            v21 = v13 ^ a5;
            v13 = (unsigned int)(v13 + 1);
            v22 = v21 & 0x3Fu ^ (unsigned __int8)a5;
            v23 = v22 ^ *(_BYTE *)(v19 + 3);
            LOBYTE(a5) = v22;
            HIBYTE(v24) = v23;
            _InterlockedXor((volatile signed __int32 *)v19, v24);
          }
          while ( (_DWORD)v13 != 64 );
          _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
          KiProcessExpiredTimerList(a1, a7, a2, 0x40u);
          v13 = 0LL;
        }
        while ( v15 != (_QWORD *)*v15 );
LABEL_14:
        v11 = v28;
        v10 = v27;
      }
      ++v12;
    }
  }
  while ( v9 != v11 );
  if ( (_DWORD)v13 )
    KiProcessExpiredTimerList(a1, a7, a2, v13);
}
