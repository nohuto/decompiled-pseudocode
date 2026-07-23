/*
 * XREFs of sub_1800FAF00 @ 0x1800FAF00
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     sub_1800EC5DC @ 0x1800EC5DC (sub_1800EC5DC.c)
 *     sub_1800FAD34 @ 0x1800FAD34 (sub_1800FAD34.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800FAD34 @ 0x1800FAD34 (sub_1800FAD34.c)
 *     sub_1800FB4E4 @ 0x1800FB4E4 (sub_1800FB4E4.c)
 */

__int64 __fastcall sub_1800FAF00(__int64 a1, __int64 a2, const WCHAR *a3, char a4, __int64 a5)
{
  __int64 v9; // rbx
  __int16 v10; // r10
  __int16 v11; // r9
  __int16 i; // r8
  __int16 v13; // dx
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 )
    return 3221225485LL;
  if ( (int)sub_1800FB4E4(a1, a3, 0LL, &Lcid) >= 0 )
  {
    v10 = Lcid;
    v11 = 0;
    for ( i = 0; i < 8; i += 2 )
    {
      v13 = (*(_WORD *)(a2 + 8) >> i) & 3;
      if ( v13 == 2 )
      {
        v14 = *(__int16 *)(a2 + 2LL * v11 + 12);
        if ( *(_WORD *)(28 * v14 + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 6) == (_WORD)Lcid )
        {
          v15 = 28LL * (__int16)v14;
          v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
          *(_OWORD *)v9 = *(_OWORD *)(v15 + v16);
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(v15 + v16 + 16);
          *(_DWORD *)(v9 + 24) = *(_DWORD *)(v15 + v16 + 24);
          return 0LL;
        }
      }
      else if ( *(_WORD *)(a2 + 2LL * v11 + 12) != (_WORD)Lcid && v13 != 3 )
      {
        result = 0LL;
        *(_QWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_DWORD *)(v9 + 24) = 0;
        *(_WORD *)(v9 + 6) = v10;
        return result;
      }
      ++v11;
    }
  }
  if ( a4
    && (RtlInitUnicodeString(&DestinationString, a3), RtlCultureNameToLCID(&DestinationString, &Lcid))
    && Lcid != 4096 )
  {
    return sub_1800FAD34(a1, a2, Lcid, 0, v9);
  }
  else
  {
    return 3221225524LL;
  }
}
