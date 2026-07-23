/*
 * XREFs of sub_180045B5C @ 0x180045B5C
 * Callers:
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_180044D64 @ 0x180044D64 (sub_180044D64.c)
 *     sub_180045AEC @ 0x180045AEC (sub_180045AEC.c)
 *     RtlGetUILanguageInfo @ 0x1800EBC90 (RtlGetUILanguageInfo.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FBE40 (RtlpRefreshCachedUILanguage.c)
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     sub_180045488 @ 0x180045488 (sub_180045488.c)
 */

__int64 __fastcall sub_180045B5C(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  char v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  WCHAR *v15; // rax
  WCHAR *v16; // rdi
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF

  result = 3221225524LL;
  v9 = -1073741772;
  v10 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 != 4096 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = 0LL;
    if ( !*(_WORD *)(v11 + 6) )
    {
LABEL_13:
      v15 = (WCHAR *)sub_180045488(v12, 0x55u);
      v16 = v15;
      if ( v15 )
      {
        String.Buffer = v15;
        *(_DWORD *)&String.Length = 11141120;
        if ( a3 )
        {
          String.Buffer = v15;
          *(_DWORD *)&String.Length = 11141120;
          if ( RtlLCIDToCultureName(a2, &String) )
            v9 = sub_180044C70(a1, String.Buffer, 0, a4);
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v16);
        if ( v10 && v9 == -1073741772 )
          return 3221225659LL;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return v9;
    }
    v13 = *(_QWORD *)(v11 + 16);
    while ( 1 )
    {
      v14 = 28LL * (int)v12;
      if ( *(_WORD *)(v14 + v13 + 4) == a2 )
      {
        if ( (*(_WORD *)(v14 + v13) & 0x1020) == 0x20 )
        {
          if ( a4 )
            *a4 = v12;
          return 0LL;
        }
        if ( (*(_WORD *)(v14 + v13) & 0x1000) != 0 )
          v10 = 1;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (int)v12 >= *(unsigned __int16 *)(v11 + 6) )
        goto LABEL_13;
    }
  }
  return result;
}
