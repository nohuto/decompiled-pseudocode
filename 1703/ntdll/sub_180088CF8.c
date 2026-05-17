/*
 * XREFs of sub_180088CF8 @ 0x180088CF8
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     sub_18005C0F4 @ 0x18005C0F4 (sub_18005C0F4.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLcidToLocaleName @ 0x1800454D0 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180046220 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x180047A90 (RtlGetParentLocaleName.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_180088CF8(unsigned __int16 a1, _WORD *a2)
{
  PCWSTR v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  unsigned __int16 *v6; // rsi
  int ParentLocaleName; // eax
  int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-39h] BYREF
  PCWSTR SourceString; // [rsp+28h] [rbp-31h]
  __int64 v12; // [rsp+30h] [rbp-29h] BYREF
  PCWSTR v13; // [rsp+38h] [rbp-21h]
  int v14; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v15[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v16[32]; // [rsp+68h] [rbp+Fh] BYREF

  v2 = 0LL;
  v10 = 0LL;
  SourceString = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v4 = a1;
  *a2 = 0;
  v13 = (PCWSTR)v16;
  WORD1(v12) = 30;
  v5 = RtlLcidToLocaleName(a1, (__int64)&v12, 2, 0);
  if ( v5 >= 0 )
    goto LABEL_3;
  if ( v5 == -1073741789 )
  {
    v13 = 0LL;
    WORD1(v12) = 0;
    v5 = RtlLcidToLocaleName(v4, (__int64)&v12, 2, 1);
  }
  if ( v5 >= 0 )
  {
LABEL_3:
    v6 = (unsigned __int16 *)v13;
    SourceString = (PCWSTR)v15;
    WORD1(v10) = 30;
    ParentLocaleName = RtlGetParentLocaleName((unsigned __int16 *)v13, (__int64)&v10, 6, 0);
    v8 = ParentLocaleName;
    if ( ParentLocaleName < 0 )
    {
      if ( ParentLocaleName == -1073741789 )
      {
        SourceString = 0LL;
        WORD1(v10) = 0;
        v8 = RtlGetParentLocaleName(v6, (__int64)&v10, 6, 1);
      }
      if ( v8 < 0 )
        goto LABEL_5;
    }
    if ( (_WORD)v10 )
    {
      v2 = SourceString;
      v8 = RtlLocaleNameToLcid(SourceString, &v14, 3);
      if ( v8 >= 0 )
        *a2 = v14;
    }
    else
    {
LABEL_5:
      v2 = SourceString;
    }
  }
  else
  {
    v6 = (unsigned __int16 *)v13;
    v8 = -1073741811;
  }
  if ( v2 != (PCWSTR)v15 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)SourceString);
    v6 = (unsigned __int16 *)v13;
  }
  if ( v6 != (unsigned __int16 *)v16 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v13);
  return (unsigned int)v8;
}
