/*
 * XREFs of ?GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z @ 0x18003C340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 *     memset @ 0x18004207E (memset.c)
 */

__int64 __fastcall CQueryKnownGameList::GetVersion2Header(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderV2 *a2)
{
  _OWORD *v3; // rcx
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((_DWORD *)this + 9) >= 2u )
    {
      v3 = (_OWORD *)((char *)this + 32);
      if ( v3 )
      {
        *(_OWORD *)a2 = *v3;
        *((_OWORD *)a2 + 1) = v3[1];
      }
      else
      {
        memset(a2, 0, 0x20uLL);
        *(_DWORD *)_o__errno(v4) = 22;
        invalid_parameter_noinfo();
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)0x8007000DLL);
      return 2147942413LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
