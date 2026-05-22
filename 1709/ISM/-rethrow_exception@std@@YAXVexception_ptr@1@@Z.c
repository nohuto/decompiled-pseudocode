/*
 * XREFs of ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1800077A8
 * Callers:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800078D8 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004D7E8 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180056074 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18006928C (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18009DA90 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 * Callees:
 *     ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x18000779C (-_RethrowException@exception_ptr@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::rethrow_exception(std::exception_ptr *a1)
{
  std::exception_ptr::_RethrowException(a1);
}
