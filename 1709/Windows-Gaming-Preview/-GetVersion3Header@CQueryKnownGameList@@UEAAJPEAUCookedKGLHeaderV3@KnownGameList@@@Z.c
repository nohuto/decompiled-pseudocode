/*
 * XREFs of ?GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z @ 0x18003C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 *     memset @ 0x18004207E (memset.c)
 */

__int64 __fastcall CQueryKnownGameList::GetVersion3Header(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderV3 *a2)
{
  struct KnownGameList::CookedKGLHeaderV3 *v2; // r9
  _OWORD *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  if ( a2 )
  {
    if ( *((_DWORD *)this + 9) >= 3u )
    {
      v4 = (_OWORD *)((char *)this + 32);
      if ( this == (CQueryKnownGameList *)-32LL )
      {
        memset(a2, 0, 0x2B8uLL);
        *(_DWORD *)_o__errno(v7) = 22;
        invalid_parameter_noinfo();
      }
      else
      {
        v5 = 5LL;
        do
        {
          *(_OWORD *)v2 = *v4;
          *((_OWORD *)v2 + 1) = v4[1];
          *((_OWORD *)v2 + 2) = v4[2];
          *((_OWORD *)v2 + 3) = v4[3];
          *((_OWORD *)v2 + 4) = v4[4];
          *((_OWORD *)v2 + 5) = v4[5];
          *((_OWORD *)v2 + 6) = v4[6];
          v2 = (struct KnownGameList::CookedKGLHeaderV3 *)((char *)v2 + 128);
          v6 = v4[7];
          v4 += 8;
          *((_OWORD *)v2 - 1) = v6;
          --v5;
        }
        while ( v5 );
        *(_OWORD *)v2 = *v4;
        *((_OWORD *)v2 + 1) = v4[1];
        *((_OWORD *)v2 + 2) = v4[2];
        *((_QWORD *)v2 + 6) = *((_QWORD *)v4 + 6);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x257,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)0x8007000DLL);
      return 2147942413LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x255,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
