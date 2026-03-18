/*
 * XREFs of ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C012C518
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012B6A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ApiSetGetPTPShellTarget @ 0x1C013CD04 (ApiSetGetPTPShellTarget.c)
 */

bool __fastcall CPTPProcessor::ShellEndpointExists(CPTPProcessor *this)
{
  _OWORD *PTPShellTarget; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  bool v12; // bl
  _OWORD v14[12]; // [rsp+20h] [rbp-268h] BYREF
  _BYTE v15[192]; // [rsp+E0h] [rbp-1A8h] BYREF
  _DWORD v16[52]; // [rsp+1A0h] [rbp-E8h] BYREF

  PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v15);
  v2 = PTPShellTarget[1];
  v14[0] = *PTPShellTarget;
  v3 = PTPShellTarget[2];
  v14[1] = v2;
  v4 = PTPShellTarget[3];
  v14[2] = v3;
  v5 = PTPShellTarget[4];
  v14[3] = v4;
  v6 = PTPShellTarget[5];
  v14[4] = v5;
  v7 = PTPShellTarget[6];
  v14[5] = v6;
  v14[6] = v7;
  v8 = PTPShellTarget[7];
  PTPShellTarget += 8;
  v14[7] = v8;
  v9 = PTPShellTarget[1];
  v14[8] = *PTPShellTarget;
  v10 = PTPShellTarget[2];
  v14[9] = v9;
  v11 = PTPShellTarget[3];
  v14[10] = v10;
  v14[11] = v11;
  CInputDest::CInputDest((CInputDest *)v16, (const struct CInputDest *)v14);
  v12 = v16[0] != 0;
  CInputDest::SetEmpty((CInputDest *)v16);
  return v12;
}
