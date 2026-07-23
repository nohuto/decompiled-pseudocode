/*
 * XREFs of sub_180044B58 @ 0x180044B58
 * Callers:
 *     sub_18004101C @ 0x18004101C (sub_18004101C.c)
 *     sub_1800FB084 @ 0x1800FB084 (sub_1800FB084.c)
 * Callees:
 *     sub_180044560 @ 0x180044560 (sub_180044560.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180047438 @ 0x180047438 (sub_180047438.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180044B58(__int64 a1, __int64 a2, unsigned int *a3, wchar_t *a4, unsigned int a5)
{
  __int64 v7; // r12
  DWORD v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  DWORD Lcid; // [rsp+20h] [rbp-30h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-28h] BYREF
  WCHAR SourceString[4]; // [rsp+38h] [rbp-18h] BYREF
  __int16 v15; // [rsp+40h] [rbp-10h]

  *(_QWORD *)SourceString = 0LL;
  v15 = 0;
  Lcid = 0;
  if ( a2 && a1 && a3 )
  {
    v7 = *a3;
    if ( *(_WORD *)(a2 + 4) )
    {
      v8 = *(unsigned __int16 *)(a2 + 4);
    }
    else
    {
      if ( *(__int16 *)(a2 + 6) <= 0 )
        return (unsigned int)-1073741595;
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * *(__int16 *)(a2 + 6))));
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return (unsigned int)-1073741811;
      v8 = Lcid;
    }
    v9 = sub_180044560(v8, 0x10u, -4, (char *)SourceString);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( v8 != 4096 && *a3 && *a3 <= a5 && (unsigned __int8)sub_180047438(a4, DestinationString.Buffer) )
      return v9;
    v10 = v7 + (DestinationString.Length >> 1) + 1;
    if ( a4 && (unsigned int)v7 < v10 )
    {
      if ( v10 < a5 )
      {
        memmove(&a4[v7], DestinationString.Buffer, DestinationString.Length);
        a4[v10 - 1] = 0;
LABEL_15:
        *a3 = v10;
        return v9;
      }
    }
    else if ( v10 < a5 )
    {
      goto LABEL_15;
    }
    if ( a4 )
      v9 = -1073741789;
    goto LABEL_15;
  }
  return 3221225485LL;
}
