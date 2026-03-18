/*
 * XREFs of SetImeHotKey @ 0x1C01095CC
 * Callers:
 *     NtUserSetImeHotKey @ 0x1C0109560 (NtUserSetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C01096E4 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1C0109704 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1C0109784 (-GetHotKeyLangID@@YAGK@Z.c)
 */

__int64 __fastcall SetImeHotKey(struct _tagIMEHOTKEYOBJ *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v6; // edi
  int v7; // esi
  unsigned int v8; // ebx
  unsigned __int16 HotKeyLangID; // ax
  unsigned __int16 v10; // dx
  struct _tagIMEHOTKEYOBJ *v11; // rcx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // rax
  __int64 *v13; // rdx
  struct _tagIMEHOTKEYOBJ *v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  __int64 *ImeHotKeyByID; // rax
  __int64 v22; // r8
  __int64 *v23; // rcx
  __int64 *v24; // rax

  v6 = a3;
  v7 = a2;
  v8 = (unsigned int)a1;
  switch ( a5 )
  {
    case 1:
      ImeHotKeyByID = (__int64 *)FindImeHotKeyByID(a1, (unsigned int)a1);
      v13 = ImeHotKeyByID;
      if ( !ImeHotKeyByID )
      {
        v20 = 87LL;
        goto LABEL_33;
      }
      v23 = (__int64 *)gpImeHotKeyListHeader;
      if ( ImeHotKeyByID == (__int64 *)gpImeHotKeyListHeader )
      {
        gpImeHotKeyListHeader = *ImeHotKeyByID;
      }
      else
      {
        if ( !gpImeHotKeyListHeader )
          return 0LL;
        while ( 1 )
        {
          v24 = (__int64 *)*v23;
          if ( (__int64 *)*v23 == v13 )
            break;
          v23 = (__int64 *)*v23;
          if ( !v24 )
            return 0LL;
        }
        *v23 = *v13;
      }
      Win32FreePool(v13, v13, v22);
      return 1LL;
    case 2:
      if ( (_WORD)a3 != 231 )
      {
        HotKeyLangID = GetHotKeyLangID((unsigned int)a1);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(v11, v10 & 0xF, v10 & 0xC000, v6, HotKeyLangID);
        if ( !ImeHotKeyByKeyWithLang )
        {
          ImeHotKeyByKeyWithLang = FindImeHotKeyByID(v14, v8);
LABEL_6:
          if ( !ImeHotKeyByKeyWithLang )
          {
            v15 = Win32AllocPool(32LL, 1751741269LL);
            if ( v15 )
            {
              *(_QWORD *)v15 = 0LL;
              *(_DWORD *)(v15 + 8) = v8;
              *(_DWORD *)(v15 + 16) = v7;
              *(_DWORD *)(v15 + 12) = v6;
              *(_QWORD *)(v15 + 24) = a4;
              v16 = (__int64 *)gpImeHotKeyListHeader;
              if ( gpImeHotKeyListHeader )
              {
                while ( *v16 )
                  v16 = (__int64 *)*v16;
                *v16 = v15;
              }
              else
              {
                gpImeHotKeyListHeader = v15;
              }
              return 1LL;
            }
            v20 = 14LL;
            goto LABEL_33;
          }
          *((_DWORD *)ImeHotKeyByKeyWithLang + 4) = v7;
          *((_DWORD *)ImeHotKeyByKeyWithLang + 3) = v6;
          *((_QWORD *)ImeHotKeyByKeyWithLang + 3) = a4;
          return 1LL;
        }
        if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 2) == v8 )
          goto LABEL_6;
        v20 = 1409LL;
LABEL_33:
        UserSetLastError(v20, (__int64)v13);
      }
      break;
    case 3:
      v18 = (_QWORD *)gpImeHotKeyListHeader;
      if ( gpImeHotKeyListHeader )
      {
        do
        {
          v19 = (_QWORD *)*v18;
          Win32FreePool(v18, a2, a3);
          v18 = v19;
        }
        while ( v19 );
      }
      gpImeHotKeyListHeader = 0LL;
      return 1LL;
  }
  return 0LL;
}
