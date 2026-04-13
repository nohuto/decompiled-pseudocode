/*
 * XREFs of _Wcscoll @ 0x1800C01C4
 * Callers:
 *     ?do_compare@?$collate@_W@std@@MEBAHPEB_W000@Z @ 0x1800B6B90 (-do_compare@-$collate@_W@std@@MEBAHPEB_W000@Z.c)
 * Callees:
 *     _GetLocaleHandleByColl @ 0x1800AD6F8 (_GetLocaleHandleByColl.c)
 *     _GetLocaleHandleById @ 0x1800AD6FC (_GetLocaleHandleById.c)
 *     __crtCompareStringW_Stub @ 0x1800AD778 (__crtCompareStringW_Stub.c)
 */

int __cdecl Wcscoll(const wchar_t *a1, const wchar_t *a2, const wchar_t *a3, const wchar_t *a4, const _Collvec *a5)
{
  signed __int64 v6; // rsi
  const wchar_t *v7; // r14
  signed __int64 v8; // rdi
  int v9; // ebx
  __int64 LocaleHandleByColl; // rax
  unsigned int v11; // ebp
  int v12; // eax
  char *v13; // r15
  wchar_t v14; // cx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ebx

  v6 = a2 - a1;
  v7 = a3;
  v8 = a4 - a3;
  v9 = 1;
  if ( a5 )
    LocaleHandleByColl = GetLocaleHandleByColl(&a5->_Page);
  else
    LocaleHandleByColl = GetLocaleHandleById(1u);
  v11 = LocaleHandleByColl;
  if ( LocaleHandleByColl )
  {
    v16 = ___lc_collate_cp_func();
    v17 = _crtCompareStringW_Stub(v11, 0x1000u, (__int64)a1, v6, (__int64)v7, v8, v16);
    if ( v17 )
    {
      return v17 - 2;
    }
    else
    {
      v9 = 0x7FFFFFFF;
      *_errno() = 22;
    }
  }
  else
  {
    v12 = v8;
    if ( (int)v6 < (int)v8 )
      v12 = v6;
    if ( v12 <= 0 )
    {
LABEL_11:
      v15 = 0;
    }
    else
    {
      v13 = (char *)((char *)a1 - (char *)v7);
      while ( 1 )
      {
        v14 = *(const wchar_t *)((char *)v7 + (_QWORD)v13);
        if ( v14 != *v7 )
          break;
        ++v7;
        if ( --v12 <= 0 )
          goto LABEL_11;
      }
      v15 = v14 < *v7 ? -1 : 1;
    }
    if ( v15 || (_DWORD)v6 == (_DWORD)v8 )
    {
      return v15;
    }
    else if ( (int)v6 < (int)v8 )
    {
      return -1;
    }
  }
  return v9;
}
