/*
 * XREFs of IsGetMPCInputPostProcessorPresent @ 0x1800E262C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x1800040D8 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18001A088 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 *     ?IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180093590 (-IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 *     ?IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x180096AE0 (-IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800E26A0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetMPCInputPostProcessorPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180135EB0 == 1 )
    return 1;
  if ( dword_180135EB0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L">@", &v1) < 0 )
    return 0;
  result = v1;
  dword_180135EB0 = 2 - (v1 != 0);
  return result;
}
