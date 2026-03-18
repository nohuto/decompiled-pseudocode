/*
 * XREFs of ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C01267B0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0125780 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01408AC (ApiSetGetPTPShellTarget.c)
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
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  bool v11; // bl
  _OWORD v13[11]; // [rsp+20h] [rbp-238h] BYREF
  _BYTE v14[176]; // [rsp+D0h] [rbp-188h] BYREF
  _DWORD v15[48]; // [rsp+180h] [rbp-D8h] BYREF

  PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v14);
  v2 = PTPShellTarget[1];
  v13[0] = *PTPShellTarget;
  v3 = PTPShellTarget[2];
  v13[1] = v2;
  v4 = PTPShellTarget[3];
  v13[2] = v3;
  v5 = PTPShellTarget[4];
  v13[3] = v4;
  v6 = PTPShellTarget[5];
  v13[4] = v5;
  v7 = PTPShellTarget[6];
  v13[5] = v6;
  v8 = PTPShellTarget[8];
  v13[6] = v7;
  v13[7] = PTPShellTarget[7];
  v9 = PTPShellTarget[9];
  v13[8] = v8;
  v10 = PTPShellTarget[10];
  v13[9] = v9;
  v13[10] = v10;
  CInputDest::CInputDest((CInputDest *)v15, (const struct tagINPUTDEST *)v13);
  v11 = v15[0] != 0;
  CInputDest::SetEmpty((CInputDest *)v15);
  return v11;
}
