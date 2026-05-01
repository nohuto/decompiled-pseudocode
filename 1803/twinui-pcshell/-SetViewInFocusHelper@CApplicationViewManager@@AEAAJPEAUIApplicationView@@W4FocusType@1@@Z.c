/*
 * XREFs of ?SetViewInFocusHelper@CApplicationViewManager@@AEAAJPEAUIApplicationView@@W4FocusType@1@@Z @ 0x1800F4A7C
 * Callers:
 *     ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18013C8D0 (-SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 */

__int64 __fastcall CApplicationViewManager::SetViewInFocusHelper(__int64 a1, volatile signed __int64 *a2, int a3)
{
  RTL_SRWLOCK *v3; // rbx
  bool v7; // zf
  volatile signed __int64 **v8; // r14
  volatile signed __int64 *v9; // rdx

  v3 = (RTL_SRWLOCK *)(a1 + 520);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 520));
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v7 = a2 == *(volatile signed __int64 **)(a1 + 560);
      goto LABEL_6;
    }
  }
  else if ( a2 == *(volatile signed __int64 **)(a1 + 560) )
  {
    v7 = (*(_BYTE *)(a1 + 568) & 1) == 0;
LABEL_6:
    if ( v7 )
      goto LABEL_15;
  }
  v8 = (volatile signed __int64 **)(a1 + 560);
  v9 = *(volatile signed __int64 **)(a1 + 560);
  if ( v9 && v9 != a2 )
    CApplicationViewManager::RaiseApplicationViewChanged((CWinRTApplicationView *)(a1 + 136), v9, 9, (void *)a2);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)(a1 + 560), (CWinRTApplicationView *)a2);
  if ( a3 == 1 )
    *(_DWORD *)(a1 + 568) |= 1u;
  else
    *(_DWORD *)(a1 + 568) &= ~1u;
  if ( *v8 )
    CApplicationViewManager::RaiseApplicationViewChanged((CWinRTApplicationView *)(a1 + 136), *v8, 8 - (a3 != 1), 0LL);
LABEL_15:
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
