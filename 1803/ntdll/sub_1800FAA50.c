/*
 * XREFs of sub_1800FAA50 @ 0x1800FAA50
 * Callers:
 *     sub_1800F86F8 @ 0x1800F86F8 (sub_1800F86F8.c)
 *     sub_1800FA6F0 @ 0x1800FA6F0 (sub_1800FA6F0.c)
 * Callees:
 *     sub_1800353C4 @ 0x1800353C4 (sub_1800353C4.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006FC80 @ 0x18006FC80 (sub_18006FC80.c)
 */

__int64 __fastcall sub_1800FAA50(__int64 a1, __int64 a2, WCHAR *a3, __int16 a4)
{
  __int64 v8; // r8
  int v9; // edi
  __int16 v11[2]; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-34h] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-30h] BYREF

  v11[0] = -1;
  RtlInitUnicodeString(&String, a3);
  if ( RtlCultureNameToLCID(&String, &Lcid) )
  {
    LOBYTE(v8) = 1;
    v9 = sub_1800353C4(a1, a3, v8, v11);
    if ( v9 >= 0 )
    {
      *(_WORD *)(a2 + 4) = Lcid;
      *(_WORD *)(a2 + 6) = v11[0];
      *(_WORD *)a2 = a4;
      *(_WORD *)(a2 + 2) = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = 0;
      if ( (a4 & 0x2000) == 0 )
        sub_18006FC80(a1, a2, a3);
    }
  }
  else
  {
    return (unsigned int)-1073020924;
  }
  return (unsigned int)v9;
}
