/*
 * XREFs of sub_180041814 @ 0x180041814
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_1800CB310 @ 0x1800CB310 (sub_1800CB310.c)
 * Callees:
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     RtlInitString @ 0x1800404B0 (RtlInitString.c)
 *     sub_180041914 @ 0x180041914 (sub_180041914.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_1800420A8 @ 0x1800420A8 (sub_1800420A8.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180041814(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 *v7; // r14
  const CHAR *v9; // rsi
  int v10; // esi
  _STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-C8h] BYREF
  char v14; // [rsp+BCh] [rbp-4Ch]

  *a3 = 0LL;
  v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 8));
  if ( *v7 )
  {
    return (unsigned int)sub_18001FA3C(*v7, a3, 0LL);
  }
  else
  {
    v9 = (const CHAR *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
    if ( !a4 )
      a4 = *(_DWORD *)(a1 + 272);
    sub_180042054(*(_QWORD *)(a1 + 80), a4 | 1LL, Path);
    RtlInitString(&DestinationString, v9);
    v10 = sub_180041914((unsigned int)&DestinationString, (unsigned int)Path, a1, a1, 3, (__int64)a3);
    if ( v10 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 104) & 0x8000) == 0 )
        *v7 = *(_QWORD *)(*a3 + 48);
      sub_1800420A8(a1, a2, *a3, a5);
    }
    if ( v14 )
      RtlReleasePath(Path[0]);
  }
  return (unsigned int)v10;
}
