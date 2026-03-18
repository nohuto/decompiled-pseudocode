/*
 * XREFs of ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C00FD024
 * Callers:
 *     SetImeHotKey @ 0x1C00FCEEC (SetImeHotKey.c)
 * Callees:
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C00FD0A4 (-GetHotKeyLangID@@YAGK@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByKeyWithLang(
        struct _tagIMEHOTKEYOBJ *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int16 a5)
{
  __int64 v5; // r10
  int v6; // r11d
  int v8; // ecx
  int v9; // edx
  unsigned __int16 HotKeyLangID; // ax

  v5 = gpImeHotKeyListHeader;
  v6 = a2;
  while ( 1 )
  {
    if ( !v5 )
      return 0LL;
    if ( *(_DWORD *)(v5 + 12) == a4 )
    {
      v8 = *(_DWORD *)(v5 + 16);
      v9 = 0;
      if ( (v8 & 0x400) != 0 )
      {
        v9 = 1;
      }
      else if ( (*(_DWORD *)(v5 + 16) & 0xF) != v6 )
      {
        goto LABEL_4;
      }
      if ( (*(_DWORD *)(v5 + 16) & 0xC000) == a3 || ((unsigned __int16)a3 & (unsigned __int16)v8 & 0xC000) != 0 )
        v9 = 1;
      if ( v9 )
      {
        HotKeyLangID = GetHotKeyLangID(*(_DWORD *)(v5 + 8));
        if ( a5 == HotKeyLangID || !HotKeyLangID )
          return (struct _tagIMEHOTKEYOBJ *)v5;
      }
    }
LABEL_4:
    v5 = *(_QWORD *)v5;
  }
}
