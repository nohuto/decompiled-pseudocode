/*
 * XREFs of ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012C0A0
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012B6A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0047F04 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C012C040 (-Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z.c)
 *     ApiSetEditionSpeedHitTest @ 0x1C013C7E8 (ApiSetEditionSpeedHitTest.c)
 *     ApiSetGetPTPShellTarget @ 0x1C013CD04 (ApiSetGetPTPShellTarget.c)
 */

void __fastcall CPTPProcessor::SetHitTestResult(CPTPProcessor *this, struct CPointerInputFrame *a2, char a3)
{
  unsigned int v3; // ebx
  __int128 *PTPShellTarget; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  CHitTestState *v17; // rdi
  int v18; // edx
  int v19; // r8d
  __int128 *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  _DWORD *v31; // rsi
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int128 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int128 v43; // [rsp+100h] [rbp+0h]
  _BYTE v44[192]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v45[208]; // [rsp+1D0h] [rbp+D0h] BYREF

  v3 = 0;
  if ( a3 )
  {
    PTPShellTarget = (__int128 *)ApiSetGetPTPShellTarget(v44);
    v7 = PTPShellTarget[1];
    v32 = *PTPShellTarget;
    v8 = PTPShellTarget[2];
    v33 = v7;
    v9 = PTPShellTarget[3];
    v34 = v8;
    v10 = PTPShellTarget[4];
    v35 = v9;
    v11 = PTPShellTarget[5];
    v36 = v10;
    v12 = PTPShellTarget[6];
    v37 = v11;
    v38 = v12;
    v13 = PTPShellTarget[7];
    PTPShellTarget += 8;
    v39 = v13;
    v14 = PTPShellTarget[1];
    v40 = *PTPShellTarget;
    v15 = PTPShellTarget[2];
    v41 = v14;
    v16 = PTPShellTarget[3];
    v42 = v15;
    v43 = v16;
    CInputDest::CInputDest((CInputDest *)v45, (const struct CInputDest *)&v32);
    v17 = (CPTPProcessor *)((char *)this + 528);
LABEL_7:
    CHitTestState::Set(v17, (const struct CInputDest *)v45, 0, 0);
    CInputDest::SetEmpty((CInputDest *)v45);
    goto LABEL_8;
  }
  v17 = (CPTPProcessor *)((char *)this + 528);
  if ( *((_DWORD *)this + 132)
    && (CInputDest::TestWindowFlag((CPTPProcessor *)((char *)this + 528), 1152) || CInputDest::TestWindowFlag(v17, 896)) )
  {
    CInputDest::SetEmpty(v17);
    v20 = (__int128 *)ApiSetEditionSpeedHitTest(
                        (unsigned int)v44,
                        v18,
                        v19,
                        *((_QWORD *)this + 92),
                        (__int64)this + 744);
    v21 = v20[1];
    v32 = *v20;
    v22 = v20[2];
    v33 = v21;
    v23 = v20[3];
    v34 = v22;
    v24 = v20[4];
    v35 = v23;
    v25 = v20[5];
    v36 = v24;
    v26 = v20[6];
    v37 = v25;
    v38 = v26;
    v27 = v20[7];
    v20 += 8;
    v39 = v27;
    v28 = v20[1];
    v40 = *v20;
    v29 = v20[2];
    v41 = v28;
    v30 = v20[3];
    v42 = v29;
    v43 = v30;
    CInputDest::CInputDest((CInputDest *)v45, (const struct CInputDest *)&v32);
    goto LABEL_7;
  }
LABEL_8:
  if ( *((_DWORD *)a2 + 12) )
  {
    v31 = (_DWORD *)(*((_QWORD *)a2 + 12) + 404LL);
    do
    {
      CInputDest::operator=((__int64)(v31 - 95), (__int64)v17);
      ++v3;
      *v31 = *((_DWORD *)this + 182);
      v31 += 152;
    }
    while ( v3 < *((_DWORD *)a2 + 12) );
  }
}
