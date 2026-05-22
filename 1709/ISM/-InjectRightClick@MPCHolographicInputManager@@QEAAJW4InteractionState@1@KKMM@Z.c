/*
 * XREFs of ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z @ 0x1800580E0
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800390E0 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x18006C8E0 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectRightClick(
        __int64 a1,
        int a2,
        int a3,
        const char *a4,
        float a5,
        float a6)
{
  int v6; // ebx
  int v9; // ebx
  __int64 v10; // rdx
  __int16 v12; // ax
  _QWORD v13[357]; // [rsp+40h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B70h] [rbp+A68h]

  v6 = (int)a4;
  if ( !*(_BYTE *)(a1 + 3128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x2EF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  memset(v13, 0, 0xB20uLL);
  LODWORD(v13[0]) = 2;
  LOBYTE(v13[346]) = 1;
  BYTE2(v13[346]) = 1;
  HIDWORD(v13[0]) = a3;
  LODWORD(v13[84]) = v6;
  *(_OWORD *)&v13[87] = 0u;
  HIDWORD(v13[88]) = (int)a5;
  *(_DWORD *)((char *)&v13[87] + 2) = 1;
  HIDWORD(v13[89]) = 0;
  LODWORD(v13[89]) = (int)a6;
  if ( a2 == 1 )
  {
    v9 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v13);
    if ( v9 < 0 )
    {
      v10 = 771LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    v12 = 4;
  }
  else
  {
    v9 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v13);
    if ( v9 < 0 )
    {
      v10 = 779LL;
      goto LABEL_5;
    }
    v12 = 8;
  }
  WORD2(v13[87]) = v12;
  return MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v13);
}
