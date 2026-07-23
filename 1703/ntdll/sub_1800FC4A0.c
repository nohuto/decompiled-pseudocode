/*
 * XREFs of sub_1800FC4A0 @ 0x1800FC4A0
 * Callers:
 *     sub_1800FA748 @ 0x1800FA748 (sub_1800FA748.c)
 *     sub_1800FC140 @ 0x1800FC140 (sub_1800FC140.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18006E760 @ 0x18006E760 (sub_18006E760.c)
 *     sub_1800FB4E4 @ 0x1800FB4E4 (sub_1800FB4E4.c)
 */

__int64 __fastcall sub_1800FC4A0(__int64 a1, __int64 a2, const WCHAR *a3, __int16 a4)
{
  int v8; // edi
  __int16 v10[2]; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-34h] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-30h] BYREF

  v10[0] = -1;
  RtlInitUnicodeString(&String, a3);
  if ( RtlCultureNameToLCID(&String, &Lcid) )
  {
    v8 = sub_1800FB4E4(a1, a3, 1, v10);
    if ( v8 >= 0 )
    {
      *(_WORD *)(a2 + 4) = Lcid;
      *(_WORD *)(a2 + 6) = v10[0];
      *(_WORD *)a2 = a4;
      *(_WORD *)(a2 + 2) = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = 0;
      if ( (a4 & 0x2000) == 0 )
        sub_18006E760(a1, a2, a3);
    }
  }
  else
  {
    return (unsigned int)-1073020924;
  }
  return (unsigned int)v8;
}
