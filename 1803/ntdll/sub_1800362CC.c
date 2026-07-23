/*
 * XREFs of sub_1800362CC @ 0x1800362CC
 * Callers:
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 *     sub_180036174 @ 0x180036174 (sub_180036174.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlGetUILanguageInfo @ 0x1800E7C80 (RtlGetUILanguageInfo.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800FA3F0 (RtlpRefreshCachedUILanguage.c)
 *     sub_1800FB5E4 @ 0x1800FB5E4 (sub_1800FB5E4.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     sub_180036414 @ 0x180036414 (sub_180036414.c)
 */

__int64 __fastcall sub_1800362CC(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
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
      v15 = (WCHAR *)sub_180036414(v12, 85LL);
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
            v9 = sub_1800352EC(a1, String.Buffer, 0, a4);
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
