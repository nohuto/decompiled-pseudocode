/*
 * XREFs of CheckImeHotKey @ 0x1C00CA8EC
 * Callers:
 *     xxxImmProcessKey @ 0x1C00CA748 (xxxImmProcessKey.c)
 * Callees:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C00C99F8 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall CheckImeHotKey(__int64 a1, int a2, int a3)
{
  __int64 v4; // rsi
  struct _tagIMEHOTKEYOBJ *result; // rax
  char v6; // dl
  int v7; // r10d
  struct _tagIMEHOTKEYOBJ *v8; // rcx
  unsigned int v9; // r10d
  unsigned int v10; // eax
  int v11; // eax
  int v12; // r8d

  v4 = a3 & 0x80000000;
  if ( a3 < 0 )
  {
    if ( dword_1C032C7E8 != a2 )
    {
      dword_1C032C7E8 = 0;
      return 0LL;
    }
    dword_1C032C7E8 = 0;
  }
  v6 = *(_BYTE *)(a1 + 232);
  v7 = ((v6 & 0x10) != 0 ? 0x8002 : 0) | ((v6 & 0x40) != 0 ? 0x4002 : 0) | ((*(_BYTE *)(a1 + 233) & 1) != 0 ? 0x8001 : 0) | ((*(_BYTE *)(a1 + 233) & 4) != 0 ? 0x4001 : 0);
  v8 = (v6 & 4) != 0 ? (struct _tagIMEHOTKEYOBJ *)0x4004 : 0LL;
  v9 = ((v6 & 1) != 0 ? 0x8004 : 0) | (unsigned int)v8 | v7;
  if ( (unsigned int)(a2 - 16) <= 2 )
  {
    v10 = (v9 & 5) + (((unsigned __int8)(v9 & 7) >> 1) & 5);
    v8 = (struct _tagIMEHOTKEYOBJ *)(v10 & 3);
    if ( (_DWORD)v8 + (v10 >> 2) == 1 )
    {
      v11 = dword_1C032CA84;
      if ( (a3 & 0x40000000) == 0 )
        v11 = v9 & 7;
      dword_1C032CA84 = v11;
    }
  }
  else
  {
    dword_1C032CA84 = 0;
  }
  result = FindImeHotKeyByKey(v8, v9 & 0xF, (unsigned __int16)v9 & 0xC000, a2);
  if ( !result )
    return 0LL;
  if ( v4 )
  {
    v12 = *((_DWORD *)result + 4);
    if ( (v12 & 0x40801) != 264193 && (v12 & 0x10804) != 67588 && (v12 & 0x20802) != 133122 )
    {
      if ( (v12 & 0x800) == 0 )
        return 0LL;
    }
    else if ( dword_1C032CA84 != (v12 & 7) )
    {
      return 0LL;
    }
    dword_1C032CA84 = 0;
    return result;
  }
  if ( (*((_DWORD *)result + 4) & 0x800) != 0 )
  {
    dword_1C032C7E8 = a2;
    return 0LL;
  }
  return result;
}
