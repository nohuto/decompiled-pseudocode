/*
 * XREFs of VrpComparePath @ 0x1406A96C8
 * Callers:
 *     VrpFindNamespaceNode @ 0x1406A5DA0 (VrpFindNamespaceNode.c)
 * Callees:
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     VrpGetNextToken @ 0x1406A9810 (VrpGetNextToken.c)
 */

__int64 __fastcall VrpComparePath(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  unsigned int v7; // r11d
  unsigned __int16 v8; // di
  unsigned int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  wchar_t *Str1; // [rsp+28h] [rbp-18h]
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  wchar_t *Str2; // [rsp+38h] [rbp-8h]
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v11 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Str1 = 0LL;
  v13 = 0LL;
  Str2 = 0LL;
  while ( 1 )
  {
    VrpGetNextToken(a1, &v15, &v11);
    VrpGetNextToken(a2, &v16, &v13);
    v8 = v13;
    if ( !(_WORD)v11 && !(_WORD)v13 )
      break;
    v9 = (unsigned __int16)v11;
    if ( (unsigned __int16)v11 >= (unsigned __int16)v13 )
      v9 = (unsigned __int16)v13;
    v7 = wcsnicmp(Str1, Str2, (unsigned __int64)v9 >> 1);
    if ( v7 )
      goto LABEL_11;
    v7 = (unsigned __int16)v11 - v8;
    if ( (unsigned __int16)v11 != v8 )
    {
      if ( !(_WORD)v11 || v8 )
      {
LABEL_11:
        v4 = 0LL;
        break;
      }
      break;
    }
    ++v4;
  }
  if ( a3 )
    *a3 = v4;
  return v7;
}
