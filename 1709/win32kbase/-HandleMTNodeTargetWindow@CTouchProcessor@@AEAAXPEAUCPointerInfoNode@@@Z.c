/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0121A10
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0121C2C (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0018360 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C011710C (-GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01171A4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0125E1C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C012745C (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionGetTopLevelWindowWithComponentUI @ 0x1C013A0B4 (ApiSetEditionGetTopLevelWindowWithComponentUI.c)
 *     ApiSetEditionPointerActivate @ 0x1C013AA5C (ApiSetEditionPointerActivate.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(struct _ERESOURCE **this, struct CPointerInfoNode *a2)
{
  int v4; // ecx
  _OWORD *v5; // rsi
  struct tagWND *CompositionWindowUIOwner; // rax
  __int64 TopLevelWindowWithComponentUI; // rax
  bool v8; // zf
  __int64 v9; // r8
  __int64 v10; // r9
  struct _ERESOURCE *v11; // rcx
  int v12; // edx
  __int128 v13; // xmm1
  __int64 v14; // r9
  int v15; // r8d
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  _OWORD *v22; // rsi
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  _BYTE v26[64]; // [rsp+30h] [rbp-128h] BYREF
  _OWORD v27[13]; // [rsp+70h] [rbp-E8h] BYREF

  if ( (*((_DWORD *)gptiCurrent + 296) & 0x2000) == 0 )
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
                CInputDest::CInputDest((CInputDest *)v27, (const struct CInputDest *)v5);
                CTouchProcessor::SetPointerCapture(this, *((_QWORD *)a2 + 2), v27, 1LL, -2, 0);
                CInputDest::SetEmpty((CInputDest *)v27);
              }
            }
            else if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
            {
              CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v26, (struct CInputDest *)v5, v9, v10);
              v11 = this[28];
              this[32] = 0LL;
              ExReleaseResourceAndLeaveCriticalRegion(v11);
              v12 = *((_DWORD *)a2 + 1);
              v13 = v5[1];
              v14 = *((_QWORD *)a2 + 2);
              v15 = *((unsigned __int16 *)a2 + 112);
              v27[0] = *v5;
              v16 = v5[2];
              v27[1] = v13;
              v17 = v5[3];
              v27[2] = v16;
              v18 = v5[4];
              v27[3] = v17;
              v19 = v5[5];
              v27[4] = v18;
              v20 = v5[6];
              v27[5] = v19;
              v27[6] = v20;
              v21 = v5[7];
              v22 = v5 + 8;
              v27[7] = v21;
              v23 = v22[1];
              v27[8] = *v22;
              v24 = v22[2];
              v27[9] = v23;
              v25 = v22[3];
              v27[10] = v24;
              v27[11] = v25;
              ApiSetEditionPointerActivate((unsigned int)v27, -__CFSHR__(v12, 8), v15, v14, (__int64)a2 + 240);
              CInpLockGuard::LockExclusive(this + 28);
              CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v26);
            }
          }
        }
      }
    }
  }
}
