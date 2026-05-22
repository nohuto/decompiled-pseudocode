/*
 * XREFs of ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1800092C8
 * Callers:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18000766C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003ACE0 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?InitializeConstants@MPCSixDofProcessor@@EEAAXXZ @ 0x18003AE90 (-InitializeConstants@MPCSixDofProcessor@@EEAAXXZ.c)
 *     ?InitializeConstants@MPCProcessor@@EEAAXXZ @ 0x180045730 (-InitializeConstants@MPCProcessor@@EEAAXXZ.c)
 *     ?InitializeConstants@MPCHeadProcessor@@EEAAXXZ @ 0x180047D30 (-InitializeConstants@MPCHeadProcessor@@EEAAXXZ.c)
 *     ?InitializeConstants@MPCClickerProcessor@@EEAAXXZ @ 0x1800482C0 (-InitializeConstants@MPCClickerProcessor@@EEAAXXZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004D1DC (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x1800606E4 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x180076CD0 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 *     ?InitializeConstants@MPCGamepadProcessor@@EEAAXXZ @ 0x1800935D0 (-InitializeConstants@MPCGamepadProcessor@@EEAAXXZ.c)
 *     ?InitializeConstants@MPCMouseProcessor@@EEAAXXZ @ 0x180096E30 (-InitializeConstants@MPCMouseProcessor@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

std::exception_ptr *__fastcall std::exception_ptr::exception_ptr(
        std::exception_ptr *this,
        const struct std::exception_ptr *a2)
{
  __ExceptionPtrCopy(this, a2);
  return this;
}
