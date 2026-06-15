/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180086BFC
 * Callers:
 *     ?RemoveAce@CDacl@ATL@@UEAAXI@Z @ 0x180086BF0 (-RemoveAce@CDacl@ATL@@UEAAXI@Z.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x18002EA60 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbp
  const void *v7; // rdx
  void *v8; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
    (void ***)(*a1 + 8 * a2),
    1LL);
  v6 = v5 - v2;
  if ( v6 )
  {
    v7 = (const void *)(*a1 + 8 * v2);
    v8 = (void *)(*a1 + 8 * a2);
    if ( 8 * v6 )
    {
      if ( !v8 || !v7 )
      {
        *(_DWORD *)_o__errno(v8, v7) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v8, v7, 8 * v6);
    }
  }
  --a1[1];
}
