/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01223C0
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01225D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0083ACC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C00A11AC (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00D5190 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00D51C0 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0118298 (-GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01182FC (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C012683C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ApiSetEditionGetTopLevelWindowWithComponentUI @ 0x1C013ADF0 (ApiSetEditionGetTopLevelWindowWithComponentUI.c)
 *     ApiSetEditionPointerActivate @ 0x1C013B8EC (ApiSetEditionPointerActivate.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(PERESOURCE *this, struct CPointerInfoNode *a2)
{
  int v4; // ecx
  _OWORD *v5; // rsi
  struct tagWND *CompositionWindowUIOwner; // rax
  __int64 TopLevelWindowWithComponentUI; // rax
  bool v8; // zf
  int v9; // edx
  __int128 v10; // xmm1
  __int64 v11; // r9
  int v12; // r8d
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  _OWORD *v19; // rsi
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _BYTE v23[64]; // [rsp+30h] [rbp-128h] BYREF
  _OWORD v24[13]; // [rsp+70h] [rbp-E8h] BYREF

  if ( (*((_DWORD *)gptiCurrent + 274) & 0x2000) == 0 )
  {
    v4 = *((_DWORD *)a2 + 1);
    if ( (v4 & 0x200) != 0 && (*(_DWORD *)a2 & 0x400) != 0 && (v4 & 0x80u) != 0 )
    {
      if ( *((_DWORD *)a2 + 125) )
      {
        v5 = (_OWORD *)((char *)a2 + 408);
        if ( CInputDest::IsEqualByWindowHandle((__int64)a2 + 408, *((void **)a2 + 34), 1) )
        {
          CompositionWindowUIOwner = CInputDest::GetCompositionWindowUIOwner((CInputDest *)v5);
          if ( CompositionWindowUIOwner )
          {
            TopLevelWindowWithComponentUI = ApiSetEditionGetTopLevelWindowWithComponentUI(CompositionWindowUIOwner);
            if ( TopLevelWindowWithComponentUI && (*(_BYTE *)(TopLevelWindowWithComponentUI + 71) & 8) != 0 )
            {
              v8 = (*((_DWORD *)a2 + 65) & 0x10000) == 0;
              *((_DWORD *)a2 + 56) = -2;
              if ( !v8 )
              {
                CInputDest::CInputDest((CInputDest *)v24, (const struct CInputDest *)v5);
                CTouchProcessor::SetPointerCapture(this, *((_QWORD *)a2 + 2), v24, 1LL, -2, 0);
                CInputDest::~CInputDest((CInputDest *)v24);
              }
            }
            else if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
            {
              CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v23, (struct CInputDest *)v5);
              CInpLockGuard::UnLock((CInpLockGuard *)(this + 25));
              v9 = *((_DWORD *)a2 + 1);
              v10 = v5[1];
              v11 = *((_QWORD *)a2 + 2);
              v12 = *((unsigned __int16 *)a2 + 112);
              v24[0] = *v5;
              v13 = v5[2];
              v24[1] = v10;
              v14 = v5[3];
              v24[2] = v13;
              v15 = v5[4];
              v24[3] = v14;
              v16 = v5[5];
              v24[4] = v15;
              v17 = v5[6];
              v24[5] = v16;
              v24[6] = v17;
              v18 = v5[7];
              v19 = v5 + 8;
              v24[7] = v18;
              v20 = v19[1];
              v24[8] = *v19;
              v21 = v19[2];
              v24[9] = v20;
              v22 = v19[3];
              v24[10] = v21;
              v24[11] = v22;
              ApiSetEditionPointerActivate((unsigned int)v24, -__CFSHR__(v9, 8), v12, v11, (__int64)a2 + 240);
              CInpLockGuard::LockExclusive(this + 25);
              CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v23);
            }
          }
        }
      }
    }
  }
}
