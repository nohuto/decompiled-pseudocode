/*
 * XREFs of ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0116C0C
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0116E28 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0066BA0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0109980 (-GetCompositionWindowUIOwner@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01099E4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x1C011C9A4 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C011D7D8 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionGetTopLevelWindowWithComponentUI @ 0x1C013E6E4 (ApiSetEditionGetTopLevelWindowWithComponentUI.c)
 *     ApiSetEditionPointerActivate @ 0x1C013F23C (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::HandleMTNodeTargetWindow(PERESOURCE *this, struct CPointerInfoNode *a2)
{
  int v4; // ecx
  struct tagWND *CompositionWindowUIOwner; // rax
  __int64 TopLevelWindowWithComponentUI; // rax
  bool v7; // zf
  int v8; // edx
  __int128 v9; // xmm1
  __int64 v10; // r9
  int v11; // r8d
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _BYTE v20[64]; // [rsp+30h] [rbp-1C8h] BYREF
  _OWORD v21[11]; // [rsp+70h] [rbp-188h] BYREF
  _BYTE v22[192]; // [rsp+120h] [rbp-D8h] BYREF

  if ( this[13] != (PERESOURCE)KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( (*((_DWORD *)gptiCurrent + 300) & 0x2000) == 0 )
  {
    v4 = *((_DWORD *)a2 + 1);
    if ( (v4 & 0x200) != 0 && (*(_DWORD *)a2 & 0x400) != 0 && (v4 & 0x80u) != 0 )
    {
      if ( *((_DWORD *)a2 + 119) )
      {
        if ( CInputDest::IsEqualByWindowHandle((__int64)a2 + 392, *((void **)a2 + 32), 1) )
        {
          CompositionWindowUIOwner = CInputDest::GetCompositionWindowUIOwner((struct CPointerInfoNode *)((char *)a2 + 392));
          if ( CompositionWindowUIOwner )
          {
            TopLevelWindowWithComponentUI = ApiSetEditionGetTopLevelWindowWithComponentUI(CompositionWindowUIOwner);
            if ( TopLevelWindowWithComponentUI
              && (*(_BYTE *)(*(_QWORD *)(TopLevelWindowWithComponentUI + 40) + 31LL) & 8) != 0 )
            {
              v7 = (*((_DWORD *)a2 + 61) & 0x10000) == 0;
              *((_DWORD *)a2 + 52) = -2;
              if ( !v7 )
              {
                CInputDest::CInputDest((CInputDest *)v22, (struct CPointerInfoNode *)((char *)a2 + 392));
                CTouchProcessor::SetPointerImplicitCapture(
                  (CTouchProcessor *)this,
                  *((_QWORD *)a2 + 2),
                  (const struct CInputDest *)v22,
                  -2,
                  0);
                CInputDest::SetEmpty((CInputDest *)v22);
              }
            }
            else if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate(a2) )
            {
              CThreadLockInputDest::CThreadLockInputDest(
                (CThreadLockInputDest *)v20,
                (struct CPointerInfoNode *)((char *)a2 + 392));
              CInpLockGuard::UnLock(this + 9);
              v8 = *((_DWORD *)a2 + 1);
              v9 = *(_OWORD *)((char *)a2 + 408);
              v10 = *((_QWORD *)a2 + 2);
              v11 = *((unsigned __int16 *)a2 + 104);
              v21[0] = *(_OWORD *)((char *)a2 + 392);
              v12 = *(_OWORD *)((char *)a2 + 424);
              v21[1] = v9;
              v13 = *(_OWORD *)((char *)a2 + 440);
              v21[2] = v12;
              v14 = *(_OWORD *)((char *)a2 + 456);
              v21[3] = v13;
              v15 = *(_OWORD *)((char *)a2 + 472);
              v21[4] = v14;
              v16 = *(_OWORD *)((char *)a2 + 488);
              v21[5] = v15;
              v17 = *(_OWORD *)((char *)a2 + 520);
              v21[6] = v16;
              v21[7] = *(_OWORD *)((char *)a2 + 504);
              v18 = *(_OWORD *)((char *)a2 + 536);
              v21[8] = v17;
              v19 = *(_OWORD *)((char *)a2 + 552);
              v21[9] = v18;
              v21[10] = v19;
              ApiSetEditionPointerActivate((unsigned int)v21, -__CFSHR__(v8, 8), v11, v10, (__int64)a2 + 224);
              CInpLockGuard::LockExclusive(this + 9);
              CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v20);
            }
          }
        }
      }
    }
  }
}
