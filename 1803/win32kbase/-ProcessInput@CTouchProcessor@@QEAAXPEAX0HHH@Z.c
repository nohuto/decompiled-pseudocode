/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0119C5C
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C0127A70 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C010EE34 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z @ 0x1C010FA38 (-CreateInputPointerNodesForFrame@CTouchProcessor@@AEAA_NPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01195AC (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0119E20 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetSanitizeRIMCOMPLETEFRAME @ 0x1C01413A4 (ApiSetSanitizeRIMCOMPLETEFRAME.c)
 */

void __fastcall CTouchProcessor::ProcessInput(CTouchProcessor *this, void *a2, struct RIMCOMPLETEFRAME *a3)
{
  CTouchProcessor *v3; // rdi
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // r9
  struct CPointerInputFrame *v7; // rax
  struct CPointerInputFrame *v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx

  v3 = gpTouchProcessor;
  CInpLockGuard::LockExclusive((PERESOURCE *)gpTouchProcessor + 9);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xAu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  if ( ApiSetSanitizeRIMCOMPLETEFRAME(a3) )
  {
    v7 = CTouchProcessor::CommitRimCompleteFrame(v3, a3, 0, 0);
    v8 = v7;
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v7 + 11);
      v9 = (_QWORD *)((char *)v7 + 24);
      v10 = (_QWORD *)((char *)gptiCurrent + 1112);
      v11 = *((_QWORD *)gptiCurrent + 139);
      if ( *(struct tagTHREADINFO **)(v11 + 8) != (struct tagTHREADINFO *)((char *)gptiCurrent + 1112) )
        __fastfail(3u);
      *v9 = v11;
      v9[1] = v10;
      *(_QWORD *)(v11 + 8) = v9;
      *v10 = v9;
      if ( CTouchProcessor::CreateInputPointerNodesForFrame(v3, v8) )
      {
        if ( CTouchProcessor::ProcessDelayZonePalmRejection(v3, v8) )
        {
          CTouchProcessor::ProcessInputPostDelayZonePalmRejection(v3, v8);
          v5 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v6 = 17;
            goto LABEL_17;
          }
        }
      }
      else
      {
        WPP_RECORDER_SF_(*((_QWORD *)v3 + 1), 2u, 0xBu, 0xFu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
        v5 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v6 = 16;
          goto LABEL_17;
        }
      }
    }
    else
    {
      WPP_RECORDER_SF_(*((_QWORD *)v3 + 1), 2u, 0xBu, 0xDu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
      v5 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v6 = 14;
        goto LABEL_17;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)v3 + 1), 2u, 0xBu, 0xBu, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 12;
LABEL_17:
      WPP_RECORDER_SF_(
        (__int64)v5->DeviceExtension,
        5u,
        0xBu,
        v6,
        (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    }
  }
  CInpLockGuard::UnLock((PERESOURCE *)v3 + 9);
}
