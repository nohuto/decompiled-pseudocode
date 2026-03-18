/*
 * XREFs of MiEliminateZeroPages @ 0x1404D4270
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404D3670 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400A5D30 (MiInitializeTbFlushList.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     MiConvertAndFlushWsleVas @ 0x1400E6890 (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall MiEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rsi
  unsigned __int64 i; // rdi
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  int v12; // [rsp+50h] [rbp-E8h] BYREF
  char v13; // [rsp+54h] [rbp-E4h]
  unsigned int v14; // [rsp+58h] [rbp-E0h]
  int v15; // [rsp+5Ch] [rbp-DCh]

  v6 = MiTbFlushType(a1);
  MiInitializeTbFlushList((__int64)&v12, v6, 20);
  v13 |= 4u;
  result = MiGetPteAddress(a2);
  v8 = result;
  for ( i = a3 >> 12; i; --i )
  {
    v10 = (_QWORD *)a2;
    v11 = (_QWORD *)(a2 + 4088);
    do
    {
      result = *v10 | *v11;
      if ( result )
        break;
      ++v10;
      --v11;
    }
    while ( v10 <= v11 );
    if ( v10 > v11 )
    {
      MiInsertTbFlushEntry(&v12, a2, 1LL, 0);
      result = v14;
      if ( v15 == v14 )
      {
        result = MiConvertAndFlushWsleVas(a1, (__int64)&v12);
        v15 = 0;
      }
    }
    v8 += 8LL;
    a2 += 4096LL;
  }
  if ( v15 )
    return MiConvertAndFlushWsleVas(a1, (__int64)&v12);
  return result;
}
