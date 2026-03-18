/*
 * XREFs of ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1400078B4
 * Callers:
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x140007688 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyA(char *a1, __int64 a2, const char *a3)
{
  unsigned int v3; // r10d
  int v4; // r9d
  __int64 v5; // r11
  __int64 v6; // r8
  char v7; // al
  __int64 result; // rax

  v3 = 0;
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    result = (unsigned int)v4;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v5 = 2147483646 - a2;
      v6 = a3 - a1;
      while ( v5 + a2 )
      {
        v7 = a1[v6];
        if ( !v7 )
          break;
        *a1++ = v7;
        if ( !--a2 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      --a1;
      v3 = -2147024774;
    }
    *a1 = 0;
    return v3;
  }
  return result;
}
