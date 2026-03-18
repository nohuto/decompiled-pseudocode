/*
 * XREFs of BgpRasGetGlyphAdvanceWidth @ 0x140267788
 * Callers:
 *     BgpFoGetAdvanceWidth @ 0x1402664A0 (BgpFoGetAdvanceWidth.c)
 *     BgpFoGetStringAdvanceWidth @ 0x1402664AC (BgpFoGetStringAdvanceWidth.c)
 *     BcpDisplayCriticalString @ 0x140266788 (BcpDisplayCriticalString.c)
 * Callees:
 *     RaspGetXExtent @ 0x14015DE2C (RaspGetXExtent.c)
 */

__int64 __fastcall BgpRasGetGlyphAdvanceWidth(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4, _BYTE *a5)
{
  _BYTE *v5; // rbx
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-38h]
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    v5 = v8;
    memset(v8, 0, 24);
  }
  result = RaspGetXExtent(a2, a1, a3, a4, v7, (__int64)v5);
  *((_QWORD *)v5 + 2) = 0LL;
  return result;
}
