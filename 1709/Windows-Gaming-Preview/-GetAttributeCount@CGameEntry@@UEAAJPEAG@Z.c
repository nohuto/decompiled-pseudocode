/*
 * XREFs of ?GetAttributeCount@CGameEntry@@UEAAJPEAG@Z @ 0x18003D950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGameEntry::GetAttributeCount(CGameEntry *this, unsigned __int16 *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *((_WORD *)this + 26);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4BC,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
