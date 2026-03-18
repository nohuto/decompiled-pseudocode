/*
 * XREFs of ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C008A1DC
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

void __fastcall ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v7; // rbp
  _QWORD *v9; // rsi
  int v10; // edx
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v7 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      176,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  v9 = a5;
  *a5 = a3;
  if ( (int)IsEditionGetLogicalPointForMouseCaptureButtonEventSupported() >= 0 )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
    LOBYTE(a5) = 0;
    UserAtomicCheck::RegisterStack((UserAtomicCheck *)&a5);
    EditionGetLogicalPointForMouseCaptureButtonEvent(a1, v7, a3, a4, &v11);
    *v9 = v11;
    if ( !(_BYTE)a5 )
    {
      LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&a5);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      14,
      177,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
}
