/*
 * XREFs of ApiSetEditionUpdateAsyncKeyState @ 0x1C0088738
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

void __fastcall ApiSetEditionUpdateAsyncKeyState(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  int v6; // edx
  char v7; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      166,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionUpdateAsyncKeyStateSupported() >= 0 )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
    v7 = 0;
    UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v7);
    EditionUpdateAsyncKeyState(a1, v4, a3);
    if ( !v7 )
    {
      LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v7);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      14,
      167,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
}
