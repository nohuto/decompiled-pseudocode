/*
 * XREFs of sub_140547C50 @ 0x140547C50
 * Callers:
 *     sub_140547BEC @ 0x140547BEC (sub_140547BEC.c)
 * Callees:
 *     sub_140547D68 @ 0x140547D68 (sub_140547D68.c)
 *     sub_1405484E0 @ 0x1405484E0 (sub_1405484E0.c)
 *     sub_1405485C4 @ 0x1405485C4 (sub_1405485C4.c)
 *     sub_1405493A8 @ 0x1405493A8 (sub_1405493A8.c)
 */

__int64 __fastcall sub_140547C50(__int64 a1, _DWORD *a2)
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
  v6 = sub_1405484E0(v5);
  if ( v6 >= 0 )
  {
    v6 = sub_1405493A8((_DWORD)v5, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (unsigned int)&Mdl, (__int64)&v8);
    if ( v6 >= 0 )
    {
      v6 = sub_1405485C4(
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
  sub_140547D68(Mdl);
  return (unsigned int)v6;
}
