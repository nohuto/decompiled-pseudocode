/*
 * XREFs of KiFindReadyThread @ 0x1400A74E0
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400F7A90 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1400A7600 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400A7660 (KiCheckForMaxOverQuotaScb.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14014C8CC (KiRemoveThreadFromReadyQueue.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140248000 (KiConvertDynamicHeteroPolicy.c)
 */

_QWORD *__fastcall KiFindReadyThread(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // r12d
  unsigned int v10; // eax
  _QWORD **v11; // r14
  _QWORD *v12; // rsi
  unsigned int v13; // eax
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  _QWORD *result; // rax
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+78h] [rbp+10h]
  unsigned int v24; // [rsp+88h] [rbp+20h]

  v23 = a2;
  v6 = a1;
  if ( a2 )
    v7 = a2 + 22912;
  else
    v7 = a3 + 16;
  v8 = *(_QWORD *)(v6 + 200);
  v9 = 64;
  v21 = v7;
LABEL_4:
  _BitScanReverse(&v10, a4);
  a4 ^= 1 << v10;
  v11 = (_QWORD **)(v7 + 16LL * v10);
  v24 = v10;
  v12 = *v11;
  while ( 1 )
  {
    v13 = *((unsigned __int8 *)v12 - 91);
    v14 = v12 - 27;
    v15 = v12[45];
    if ( v13 >= 5 )
    {
      v13 = KiConvertDynamicHeteroPolicy(v12 - 27, a2, v6);
      v6 = a1;
    }
    if ( v13 )
    {
      v19 = *(_QWORD *)(v6 + 192);
      v20 = 3 * ((int)v13 + 8LL);
      a2 = v15 & *(_QWORD *)(v19 + 8 * v20);
      if ( a2 )
        v15 &= *(_QWORD *)(v19 + 8 * v20);
    }
    if ( (v15 & v8) != 0 )
    {
      v17 = v14[13];
      if ( !v17 || !(*(unsigned int *)(v6 + 216) + v17) || !(unsigned __int8)KiCheckForMaxOverQuotaScb() )
        break;
    }
    v12 = (_QWORD *)*v12;
    --v9;
    if ( v12 == v11 || !v9 )
    {
      if ( !a4 || !v9 )
        return 0LL;
      v7 = v21;
      goto LABEL_4;
    }
  }
  if ( v23 )
    KiRemoveThreadFromReadyQueue(v23, v12, v24);
  else
    KiRemoveThreadFromSharedReadyQueue(a3, v12 - 27, v24);
  result = v12 - 27;
  *((_DWORD *)v14 + 134) = *(_DWORD *)(v18 + 36);
  return result;
}
