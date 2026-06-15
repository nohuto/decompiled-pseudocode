/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x18007C23C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001553C (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UISessionInternalEvents@@@2@_K@Z @ 0x18002583C (-CallDestructors@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CCom.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rbp
  size_t v9; // r8
  const void *v10; // rdx
  void *v11; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  result = ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::CallDestructors(
             *a1 + 8 * a2,
             1uLL);
  v8 = v5 - v2;
  if ( v8 )
  {
    result = *a1;
    v9 = 8 * v8;
    v10 = (const void *)(*a1 + 8 * v2);
    v11 = (void *)(*a1 + 8 * a2);
    if ( 8 * v8 )
    {
      if ( !v11 || !v10 )
      {
        *(_DWORD *)_o__errno(v11, v10, v9, v7) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      result = (__int64)memmove(v11, v10, v9);
    }
  }
  --a1[1];
  return result;
}
