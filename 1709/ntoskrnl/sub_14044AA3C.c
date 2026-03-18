/*
 * XREFs of sub_14044AA3C @ 0x14044AA3C
 * Callers:
 *     sub_14044A9A8 @ 0x14044A9A8 (sub_14044A9A8.c)
 * Callees:
 *     ApplyRelocations @ 0x14000C760 (ApplyRelocations.c)
 *     sub_14044AD50 @ 0x14044AD50 (sub_14044AD50.c)
 *     WbVerifyVirtualAddressSignature @ 0x140503C14 (WbVerifyVirtualAddressSignature.c)
 *     sub_14056585C @ 0x14056585C (sub_14056585C.c)
 *     sub_1405763A4 @ 0x1405763A4 (sub_1405763A4.c)
 */

__int64 __fastcall sub_14044AA3C(__int64 *a1, int a2, _DWORD *a3)
{
  void *v6; // r14
  int v7; // ebx
  __int64 v8; // r15
  PMDL Mdl; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+20h] BYREF

  v11 = 0LL;
  Mdl = 0LL;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v7 = WbVerifyVirtualAddressSignature(v6);
    if ( v7 >= 0 )
    {
      v7 = sub_14044AD50((_DWORD)v6, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v11);
      if ( v7 >= 0 )
      {
        v8 = v11;
        if ( !a2
          || (v7 = ApplyRelocations(
                     a1[5],
                     *(_DWORD *)(a1[6] + 48),
                     a1[4],
                     *(_QWORD *)(a1[6] + 56) - a1[4],
                     (__int64)v6,
                     v11,
                     a3[2] & 0xFFFFFFF),
              v7 >= 0) )
        {
          v7 = sub_14056585C(0, (_DWORD)v6, v8, a3[2] & 0xFFFFFFF, a1[6] + 72, a3[1] & 0xFFFFFFF, a1[6] + 80);
          if ( v7 >= 0 && a2 )
            v7 = ApplyRelocations(
                   a1[5],
                   *(_DWORD *)(a1[6] + 48),
                   a1[4],
                   a1[4] - *(_QWORD *)(a1[6] + 56),
                   (__int64)v6,
                   v8,
                   a3[2] & 0xFFFFFFF);
        }
      }
    }
  }
  sub_1405763A4(Mdl);
  return (unsigned int)v7;
}
