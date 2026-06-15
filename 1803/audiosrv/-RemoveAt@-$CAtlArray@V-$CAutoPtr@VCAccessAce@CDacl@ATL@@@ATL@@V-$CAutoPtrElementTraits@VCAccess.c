/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800BCF6C
 * Callers:
 *     ?RemoveAce@CDacl@ATL@@UEAAXI@Z @ 0x1800BCF60 (-RemoveAce@CDacl@ATL@@UEAAXI@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800B88BC (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 */

__int64 __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::RemoveAt(
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
  result = ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
             (__int64 (__fastcall ****)(_QWORD, __int64))(*a1 + 8 * a2),
             1LL);
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
