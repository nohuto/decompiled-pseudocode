/*
 * XREFs of KiExpireTimerTable @ 0x14020BD88
 * Callers:
 *     KiTimerExpiration @ 0x14020BF44 (KiTimerExpiration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiProcessExpiredTimerList @ 0x1400939C0 (KiProcessExpiredTimerList.c)
 *     KiRemoveEntryTimer @ 0x140129C3C (KiRemoveEntryTimer.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
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
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rax
  ULONG_PTR v18; // rsi
  ULONG_PTR BugCheckParameter4; // rcx
  char v20; // al
  __int64 v21; // rcx
  char v22; // al
  unsigned int v23; // [rsp+30h] [rbp-68h]
  unsigned int v25; // [rsp+A8h] [rbp+10h]
  int v26; // [rsp+B0h] [rbp+18h]
  int v27; // [rsp+B8h] [rbp+20h] BYREF

  v8 = a5;
  v9 = a3 - 1;
  v10 = a3 + a4 - 1;
  LOBYTE(a5) = -64;
  v11 = v10 + v8;
  v25 = v10;
  v12 = 0;
  v26 = v11;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = 32 * ((unsigned __int8)++v9 + 16LL);
    if ( v12 <= v10 || *(_QWORD *)(v14 + a2 + 24) <= a6 )
    {
      v15 = (_QWORD *)(v14 + a2 + 8);
      if ( v15 != (_QWORD *)*v15 )
      {
        while ( 2 )
        {
          v27 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + a2), 0LL) )
          {
            do
              KeYieldProcessorEx(&v27);
            while ( *(_QWORD *)(v14 + a2) );
          }
          do
          {
            v16 = (_QWORD *)*v15;
            if ( v15 == (_QWORD *)*v15 )
              goto LABEL_16;
            v17 = *(v16 - 1);
            v18 = (ULONG_PTR)(v16 - 4);
            if ( v17 > a6 )
            {
              *(_QWORD *)(v14 + a2 + 24) = v17;
LABEL_16:
              _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
              goto LABEL_17;
            }
            KiRemoveEntryTimer(a2, v18, (unsigned __int8)v9);
            BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8 * v13), v18);
            if ( BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v18, BugCheckParameter4);
            v23 = 0;
            v20 = v13 ^ a5;
            v13 = (unsigned int)(v13 + 1);
            v21 = v20 & 0x3Fu ^ (unsigned __int8)a5;
            v22 = v21 ^ *(_BYTE *)(v18 + 3);
            LOBYTE(a5) = v21;
            HIBYTE(v23) = v22;
            _InterlockedXor((volatile signed __int32 *)v18, v23);
          }
          while ( (_DWORD)v13 != 64 );
          _InterlockedAnd64((volatile signed __int64 *)(v14 + a2), 0LL);
          KiProcessExpiredTimerList(a1, a7, a2, 0x40u);
          v13 = 0LL;
          if ( v15 != (_QWORD *)*v15 )
            continue;
          break;
        }
LABEL_17:
        v11 = v26;
      }
      ++v12;
    }
    if ( v9 == v11 )
      break;
    v10 = v25;
  }
  if ( (_DWORD)v13 )
    KiProcessExpiredTimerList(a1, a7, a2, v13);
}
