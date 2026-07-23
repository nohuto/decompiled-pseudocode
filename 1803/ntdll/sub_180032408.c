/*
 * XREFs of sub_180032408 @ 0x180032408
 * Callers:
 *     sub_1800321EC @ 0x1800321EC (sub_1800321EC.c)
 * Callees:
 *     RtlGetParentLocaleName @ 0x180031240 (RtlGetParentLocaleName.c)
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     sub_180035DEC @ 0x180035DEC (sub_180035DEC.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_180032408(__int64 a1, const WCHAR *a2, _UNICODE_STRING *a3, _BYTE *a4)
{
  int v4; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+50h] [rbp+8h] BYREF
  __int16 v14; // [rsp+54h] [rbp+Ch]

  v4 = 0;
  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  *a4 = 0;
  if ( (int)sub_1800352EC(a1, a2, 0LL, &Lcid) < 0 )
    goto LABEL_5;
  v10 = 28LL * (__int16)Lcid;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  if ( ((*(_WORD *)(v10 + v11 + 4) - 4096) & 0xFBFF) == 0 )
    *a4 = 1;
  LOWORD(Lcid) = *(_WORD *)(v10 + v11 + 8) >> 14;
  v14 = *(_WORD *)(v10 + v11 + 10);
  v4 = sub_180035DEC(a1, &Lcid, a3);
  if ( v4 < 0 )
  {
LABEL_5:
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) && ((Lcid - 4096) & 0xFFFFFBFF) == 0 )
      *a4 = 1;
    if ( !*a4 )
      return (unsigned int)RtlGetParentLocaleName(a2, a3, 6u, 0);
  }
  return (unsigned int)v4;
}
