/*
 * XREFs of sub_14044AC38 @ 0x14044AC38
 * Callers:
 *     sub_14044ABD4 @ 0x14044ABD4 (sub_14044ABD4.c)
 * Callees:
 *     sub_14044AD50 @ 0x14044AD50 (sub_14044AD50.c)
 *     WbVerifyVirtualAddressSignature @ 0x140503C14 (WbVerifyVirtualAddressSignature.c)
 *     sub_14056585C @ 0x14056585C (sub_14056585C.c)
 *     sub_1405763A4 @ 0x1405763A4 (sub_1405763A4.c)
 */

__int64 __fastcall sub_14044AC38(__int64 a1, _DWORD *a2)
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
    v6 = sub_14044AD50((_DWORD)v5, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (unsigned int)&Mdl, (__int64)&v8);
    if ( v6 >= 0 )
    {
      v6 = sub_14056585C(
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
  sub_1405763A4(Mdl);
  return (unsigned int)v6;
}
