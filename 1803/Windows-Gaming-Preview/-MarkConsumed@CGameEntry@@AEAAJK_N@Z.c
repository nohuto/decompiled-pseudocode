/*
 * XREFs of ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x180040110
 * Callers:
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003FCE8 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x1800401F4 (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x180040270 (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x1800401C0 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 */

__int64 __fastcall CGameEntry::MarkConsumed(CGameEntry *this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2;
  v6 = CGameEntry::VerifyAvailable(this, a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x566,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v9 = *((_DWORD *)this + 8);
  *((_QWORD *)this + 2) += v4;
  v10 = v9 - v4;
  *((_DWORD *)this + 8) = v10;
  if ( a3 )
  {
    v11 = v10 & 3;
    if ( v11 )
    {
      v12 = 4 - v11;
      v13 = CGameEntry::VerifyAvailable(this, 4 - v11);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x570,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v13);
        return v14;
      }
      *((_DWORD *)this + 8) &= 0xFFFFFFFC;
      *((_QWORD *)this + 2) += v12;
    }
  }
  return 0LL;
}
