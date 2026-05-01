/*
 * XREFs of ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x18003E0C8
 * Callers:
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003DBA8 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x18003DFE4 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x18003E094 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 */

__int64 __fastcall CGameEntry::ReadUShort(CGameEntry *this, unsigned __int16 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CGameEntry::VerifyAvailable(this, 2u);
  if ( v4 < 0 )
  {
    v5 = 1396LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  *a2 = **((_WORD **)this + 2);
  v4 = CGameEntry::MarkConsumed(this, 2u, 0);
  if ( v4 < 0 )
  {
    v5 = 1400LL;
    goto LABEL_3;
  }
  return 0LL;
}
