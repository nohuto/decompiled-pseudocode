/*
 * XREFs of MiWriteValidPteVolatile @ 0x1400FDBE0
 * Callers:
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 *     MiWriteWsle @ 0x14006D3C8 (MiWriteWsle.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiSetVaAge @ 0x1400FDA60 (MiSetVaAge.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14010A810 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiLockOwnedProtoPage @ 0x14010B370 (MiLockOwnedProtoPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiWriteValidPteVolatile(volatile signed __int64 *a1, int a2, unsigned __int8 a3)
{
  signed __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r10
  int v7; // edx
  unsigned __int64 v8; // rcx
  signed __int64 v9; // rtt

  result = *a1;
  v5 = a2 & 1;
  v6 = a2 & 0x80000000;
  v7 = a2 & 2;
  do
  {
    v8 = result;
    if ( v6 )
      v8 = result ^ (result ^ ((unsigned __int64)a3 << 56)) & 0x7F00000000000000LL;
    if ( v5 )
      v8 |= 0x20uLL;
    if ( v7 )
      v8 |= 0x42uLL;
    v9 = result;
    result = _InterlockedCompareExchange64(a1, v8, result);
  }
  while ( v9 != result );
  return result;
}
