/*
 * XREFs of imp_WdfSpinLockRelease @ 0x1C0001750
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00689B0 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfSpinLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  unsigned __int64 v3; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v5; // rsi
  __int16 v6; // dx
  struct _KTHREAD **v7; // r8
  struct _KTHREAD *_a3; // r10
  const void *v9; // rax
  const void *v10; // rax
  unsigned __int64 v11; // r8
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-18h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-18h]
  FxSpinLock *pLock; // [rsp+58h] [rbp+10h] BYREF

  if ( !SpinLock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1024uLL);
  v3 = ~SpinLock & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( (SpinLock & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v3;
    v3 -= Offset;
  }
  if ( *(_WORD *)(v3 + 8) == 4132 )
  {
    pLock = (FxSpinLock *)v3;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v3, (void **)&pLock, (void *)SpinLock, 0x1024u, Offset);
    v3 = (unsigned __int64)pLock;
  }
  v5 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
  if ( *(_BYTE *)(v3 + 121) )
  {
    WPP_IFR_SF_q(v5, 2u, 2u, 0xBu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    FxVerifierDbgBreakPoint(v5);
  }
  else
  {
    v6 = *(_WORD *)(v3 + 10);
    if ( v6 != 128 )
    {
      v7 = (struct _KTHREAD **)(v3 + 128);
      if ( v3 != -128LL )
      {
        _a3 = *v7;
        if ( *v7 != KeGetCurrentThread() )
        {
          if ( _a3 )
          {
            v10 = (const void *)((unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL);
            _a2a = KeGetCurrentThread();
            if ( !v6 )
              v10 = 0LL;
            WPP_IFR_SF_qqq(v5, 2u, 2u, 0xBu, WPP_FxSpinLock_cpp_Traceguids, v10, _a2a, _a3);
          }
          else
          {
            v9 = (const void *)((unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL);
            _a2 = KeGetCurrentThread();
            if ( !v6 )
              v9 = 0LL;
            WPP_IFR_SF_qq(v5, 2u, 2u, 0xAu, WPP_FxSpinLock_cpp_Traceguids, v9, _a2);
          }
          v11 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !*(_WORD *)(v3 + 10) )
            v11 = 0LL;
          FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v3 + 16), WDF_INVALID_LOCK_OPERATION, v11, 1uLL);
        }
        *(_QWORD *)(*(_QWORD *)(v3 + 136) + 16LL) = MEMORY[0xFFFFF78000000320]
                                                  - *(_QWORD *)(*(_QWORD *)(v3 + 136) + 8LL);
        *(_QWORD *)(v3 + 136) += 24LL;
        if ( *(_QWORD *)(v3 + 136) >= v3 + 384 )
          *(_QWORD *)(v3 + 136) = v3 + 144;
        *v7 = 0LL;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 112), *(_BYTE *)(v3 + 120));
  }
}
