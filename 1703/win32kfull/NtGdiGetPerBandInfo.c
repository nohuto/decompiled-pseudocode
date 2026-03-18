/*
 * XREFs of NtGdiGetPerBandInfo @ 0x1C0102730
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C01027C0 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetPerBandInfo(HDC a1, _PERBANDINFO *a2)
{
  unsigned int PerBandInfo; // r8d
  _BYTE *v5; // rdx
  _PERBANDINFO v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *a2;
  }
  PerBandInfo = GreGetPerBandInfo(a1, &v6);
  if ( PerBandInfo - 1 <= 0xFFFFFFFD )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v5 = (_BYTE *)W32UserProbeAddress;
    *v5 = *v5;
    v5[19] = v5[19];
    *a2 = v6;
  }
  return PerBandInfo;
}
