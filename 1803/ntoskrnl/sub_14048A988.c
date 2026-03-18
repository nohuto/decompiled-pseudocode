/*
 * XREFs of sub_14048A988 @ 0x14048A988
 * Callers:
 *     sub_14048A924 @ 0x14048A924 (sub_14048A924.c)
 * Callees:
 *     sub_14048AAA0 @ 0x14048AAA0 (sub_14048AAA0.c)
 *     WbVerifyVirtualAddressSignature @ 0x140539FCC (WbVerifyVirtualAddressSignature.c)
 *     sub_14053A0A8 @ 0x14053A0A8 (sub_14053A0A8.c)
 *     sub_14053AB64 @ 0x14053AB64 (sub_14053AB64.c)
 */

__int64 __fastcall sub_14048A988(__int64 a1, _DWORD *a2)
{
  int v2; // esi
  void *v5; // rsi
  int v6; // edi
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF
  PMDL Mdl; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2[1];
  v8 = 0LL;
  v5 = (void *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl = 0LL;
  v6 = WbVerifyVirtualAddressSignature(v5);
  if ( v6 >= 0 )
  {
    v6 = sub_14048AAA0((_DWORD)v5, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (unsigned int)&Mdl, (__int64)&v8);
    if ( v6 >= 0 )
    {
      v6 = sub_14053A0A8(
             1,
             (_DWORD)v5,
             v8,
             a2[2] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 48) + 72LL,
             a2[1] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 48) + 80LL);
      if ( v6 >= 0 )
        *a2 &= 0xFFFFFC03;
    }
  }
  sub_14053AB64(Mdl);
  return (unsigned int)v6;
}
