/*
 * XREFs of ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x18003DFE4
 * Callers:
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003DBA8 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x18003E0C8 (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x18003E144 (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x18003E094 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 */

__int64 __fastcall CGameEntry::MarkConsumed(CGameEntry *this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  v6 = CGameEntry::VerifyAvailable(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x557,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  *((_DWORD *)this + 8) -= v4;
  *((_QWORD *)this + 2) += v4;
  if ( a3 )
  {
    v9 = *((_DWORD *)this + 8) & 3;
    if ( v9 )
    {
      v10 = 4 - v9;
      v11 = CGameEntry::VerifyAvailable(this, 4 - v9);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x561,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\knowngamelist.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
      *((_DWORD *)this + 8) &= 0xFFFFFFFC;
      *((_QWORD *)this + 2) += v10;
    }
  }
  return 0LL;
}
