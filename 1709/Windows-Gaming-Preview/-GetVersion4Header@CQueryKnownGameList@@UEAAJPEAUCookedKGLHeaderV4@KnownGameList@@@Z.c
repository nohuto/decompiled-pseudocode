/*
 * XREFs of ?GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z @ 0x18003C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CQueryKnownGameList::GetVersion4Header(
        CQueryKnownGameList *this,
        struct KnownGameList::CookedKGLHeaderV4 *a2)
{
  __int64 result; // rax
  _OWORD *v3; // rax
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((_DWORD *)this + 9) >= 4u )
    {
      v3 = (_OWORD *)((char *)this + 32);
      v4 = 5LL;
      do
      {
        *(_OWORD *)a2 = *v3;
        *((_OWORD *)a2 + 1) = v3[1];
        *((_OWORD *)a2 + 2) = v3[2];
        *((_OWORD *)a2 + 3) = v3[3];
        *((_OWORD *)a2 + 4) = v3[4];
        *((_OWORD *)a2 + 5) = v3[5];
        *((_OWORD *)a2 + 6) = v3[6];
        a2 = (struct KnownGameList::CookedKGLHeaderV4 *)((char *)a2 + 128);
        v5 = v3[7];
        v3 += 8;
        *((_OWORD *)a2 - 1) = v5;
        --v4;
      }
      while ( v4 );
      *(_OWORD *)a2 = *v3;
      *((_OWORD *)a2 + 1) = v3[1];
      *((_OWORD *)a2 + 2) = v3[2];
      v6 = v3[3];
      result = 0LL;
      *((_OWORD *)a2 + 3) = v6;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x262,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
        (const char *)0x8007000DLL);
      return 2147942413LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x260,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  return result;
}
