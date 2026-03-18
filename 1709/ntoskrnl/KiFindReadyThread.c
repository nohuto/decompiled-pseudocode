/*
 * XREFs of KiFindReadyThread @ 0x140006FD4
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x14006EE10 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400070C8 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1400D1604 (KiRemoveThreadFromReadyQueue.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140125400 (KiCheckForMaxOverQuotaScb.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14020A308 (KiConvertDynamicHeteroPolicy.c)
 */

_QWORD *__fastcall KiFindReadyThread(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // r14d
  unsigned int v10; // eax
  _QWORD **v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rcx
  _QWORD *result; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+70h] [rbp+8h]
  __int64 v21; // [rsp+78h] [rbp+10h]
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v5 = a2 + 22912;
  v7 = a2;
  if ( !a2 )
    v5 = a3 + 16;
  v8 = *(_QWORD *)(a1 + 200);
  v9 = 64;
  v21 = v8;
  v20 = v5;
  while ( 2 )
  {
    _BitScanReverse(&v10, a4);
    a4 ^= 1 << v10;
    v11 = (_QWORD **)(v5 + 16LL * v10);
    v23 = v10;
    v12 = *v11;
    do
    {
      v13 = v12 - 27;
      v14 = *((unsigned __int8 *)v12 - 91);
      v15 = v12[45];
      if ( v14 >= 5 )
      {
        v14 = KiConvertDynamicHeteroPolicy(v12 - 27, a2, a1);
        v8 = v21;
      }
      if ( v14 )
      {
        v18 = *(_QWORD *)(a1 + 192);
        v19 = 3 * ((int)v14 + 8LL);
        a2 = v15 & *(_QWORD *)(v18 + 8 * v19);
        if ( a2 )
          v15 &= *(_QWORD *)(v18 + 8 * v19);
      }
      if ( (v15 & v8) != 0 )
      {
        v16 = v13[13];
        if ( !v16 || !(*(unsigned int *)(a1 + 216) + v16) || !(unsigned __int8)KiCheckForMaxOverQuotaScb() )
        {
          if ( v7 )
            KiRemoveThreadFromReadyQueue(v7, v12, v23);
          else
            KiRemoveThreadFromSharedReadyQueue(a3, v12 - 27, v23);
          result = v12 - 27;
          *((_DWORD *)v13 + 134) = *(_DWORD *)(a1 + 36);
          return result;
        }
      }
      v12 = (_QWORD *)*v12;
      --v9;
    }
    while ( v12 != v11 && v9 );
    if ( a4 && v9 )
    {
      v5 = v20;
      continue;
    }
    break;
  }
  return 0LL;
}
