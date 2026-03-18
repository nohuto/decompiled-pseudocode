/*
 * XREFs of sub_140547A4C @ 0x140547A4C
 * Callers:
 *     sub_1405479B8 @ 0x1405479B8 (sub_1405479B8.c)
 * Callees:
 *     ApplyRelocations @ 0x14003A558 (ApplyRelocations.c)
 *     sub_140547D68 @ 0x140547D68 (sub_140547D68.c)
 *     sub_1405484E0 @ 0x1405484E0 (sub_1405484E0.c)
 *     sub_1405485C4 @ 0x1405485C4 (sub_1405485C4.c)
 *     sub_1405493A8 @ 0x1405493A8 (sub_1405493A8.c)
 */

__int64 __fastcall sub_140547A4C(__int64 *a1, int a2, _DWORD *a3)
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
    v7 = sub_1405484E0(v6);
    if ( v7 >= 0 )
    {
      v7 = sub_1405493A8((_DWORD)v6, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v11);
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
          v7 = sub_1405485C4(0, (_DWORD)v6, v8, a3[2] & 0xFFFFFFF, a1[6] + 72, a3[1] & 0xFFFFFFF, a1[6] + 80);
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
  sub_140547D68(Mdl);
  return (unsigned int)v7;
}
