/*
 * XREFs of MiSetVadFlags @ 0x1400E4A50
 * Callers:
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiRemoveSecureEntry @ 0x1400E46F0 (MiRemoveSecureEntry.c)
 *     MiAddSecureEntry @ 0x140593490 (MiAddSecureEntry.c)
 * Callees:
 *     MiLockVadCore @ 0x1400E4AF0 (MiLockVadCore.c)
 */

__int64 __fastcall MiSetVadFlags(__int64 a1, char a2, char a3)
{
  unsigned __int8 v6; // al
  int v7; // r9d
  int v8; // r8d
  int v9; // esi
  unsigned __int8 v10; // r10
  signed __int32 v11; // eax
  int v12; // edi
  unsigned int v13; // ecx
  signed __int32 v14; // ett
  __int64 result; // rax

  v6 = MiLockVadCore(a1);
  v7 = a2 & 1;
  v8 = a2 & 2;
  v9 = a3 & 1;
  v10 = v6;
  v11 = *(_DWORD *)(a1 + 48);
  v12 = a2 & 4;
  do
  {
    v13 = v11;
    if ( v7 )
      v13 = v11 & 0xF7FFFFFF | (v9 << 27);
    if ( v8 )
      v13 = (v9 << 28) | v13 & 0xEFFFFFFF;
    if ( v12 )
      v13 = (v9 << 29) | v13 & 0xDFFFFFFF;
    v14 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v13, v11);
  }
  while ( v14 != v11 );
  _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0x3FFFFFFFu);
  result = v10;
  __writecr8(v10);
  return result;
}
