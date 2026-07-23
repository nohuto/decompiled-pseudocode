/*
 * XREFs of sub_180046AF0 @ 0x180046AF0
 * Callers:
 *     sub_1800468D4 @ 0x1800468D4 (sub_1800468D4.c)
 * Callees:
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlGetParentLocaleName @ 0x180047A90 (RtlGetParentLocaleName.c)
 */

__int64 __fastcall sub_180046AF0(__int64 a1, const WCHAR *a2, _UNICODE_STRING *a3, _BYTE *a4)
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
  if ( (int)sub_180044C70(a1, a2, 0, &Lcid) < 0 )
    goto LABEL_5;
  v10 = 28LL * (__int16)Lcid;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  if ( ((*(_WORD *)(v10 + v11 + 4) - 4096) & 0xFBFF) == 0 )
    *a4 = 1;
  LOWORD(Lcid) = *(_WORD *)(v10 + v11 + 8) >> 14;
  v14 = *(_WORD *)(v10 + v11 + 10);
  v4 = sub_18004576C(a1, &Lcid, a3);
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
