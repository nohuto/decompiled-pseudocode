/*
 * XREFs of ?HandleDeactivation@CImmersiveWindowManager@@UEAAJW4IWM_ACTION_TYPE@@W4ZBID@@@Z @ 0x18002E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z @ 0x18002F308 (-_DeactivatePrevActiveApp@CImmersiveWindowManager@@AEAAJW4ZBID@@@Z.c)
 */

__int64 __fastcall CImmersiveWindowManager::HandleDeactivation(__int64 a1, int a2, __int64 a3)
{
  int ActiveApp; // r9d
  int v5; // edx

  ActiveApp = -2147024809;
  v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      ActiveApp = 0;
      if ( !*(_BYTE *)(a1 + 72)
        || (ActiveApp = CImmersiveWindowManager::_DeactivatePrevActiveApp(a1 - 128, (unsigned int)a3, a3, 0LL),
            ActiveApp >= 0) )
      {
        if ( *(_BYTE *)(a1 + 72) )
          goto LABEL_9;
      }
    }
  }
  else if ( *(_BYTE *)(a1 + 72) )
  {
    ActiveApp = CImmersiveWindowManager::_DeactivatePrevActiveApp(a1 - 128, 0LL, a3, 2147942487LL);
    if ( ActiveApp >= 0 )
LABEL_9:
      *(_BYTE *)(a1 + 72) = 0;
  }
  return (unsigned int)ActiveApp;
}
