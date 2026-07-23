/*
 * XREFs of sub_18003AB88 @ 0x18003AB88
 * Callers:
 *     sub_180004ED8 @ 0x180004ED8 (sub_180004ED8.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 * Callees:
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 *     sub_18003AAAC @ 0x18003AAAC (sub_18003AAAC.c)
 *     RtlInitString @ 0x18003AB50 (RtlInitString.c)
 *     sub_18003BB58 @ 0x18003BB58 (sub_18003BB58.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18003AB88(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  ULONG_PTR *v7; // r14
  const CHAR *v9; // rsi
  int v10; // esi
  _STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-C8h] BYREF
  char v14; // [rsp+BCh] [rbp-4Ch]

  *a3 = 0LL;
  v7 = (ULONG_PTR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  if ( *v7 )
  {
    return (unsigned int)sub_180030264(*v7, a3, 0LL);
  }
  else
  {
    v9 = (const CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
    if ( !a4 )
      a4 = *(_DWORD *)(a1 + 272);
    sub_18003BE90(*(_QWORD *)(a1 + 80), a4 | 1LL, Path);
    RtlInitString(&DestinationString, v9);
    v10 = sub_18003BB58(&DestinationString, Path, a1, a1, 3, a3);
    if ( v10 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
        *v7 = *(_QWORD *)(*a3 + 48);
      sub_18003AAAC(a1, a2, *a3, a5);
    }
    if ( v14 )
      RtlReleasePath(Path[0]);
  }
  return (unsigned int)v10;
}
