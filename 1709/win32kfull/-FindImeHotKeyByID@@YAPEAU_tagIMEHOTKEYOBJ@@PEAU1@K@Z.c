/*
 * XREFs of ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C01096E4
 * Callers:
 *     SetImeHotKey @ 0x1C01095CC (SetImeHotKey.c)
 *     NtUserGetImeHotKey @ 0x1C01E5A10 (NtUserGetImeHotKey.c)
 * Callees:
 *     <none>
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByID(struct _tagIMEHOTKEYOBJ *a1, int a2)
{
  struct _tagIMEHOTKEYOBJ *result; // rax

  for ( result = (struct _tagIMEHOTKEYOBJ *)gpImeHotKeyListHeader;
        result && *((_DWORD *)result + 2) != a2;
        result = *(struct _tagIMEHOTKEYOBJ **)result )
  {
    ;
  }
  return result;
}
