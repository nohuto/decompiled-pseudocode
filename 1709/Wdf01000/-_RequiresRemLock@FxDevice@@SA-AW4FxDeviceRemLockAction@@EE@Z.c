/*
 * XREFs of ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C003AF24
 * Callers:
 *     ?Dispatch@FxDefaultIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C003AEA0 (-Dispatch@FxDefaultIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0063BB0 (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C007DAFC (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::_RequiresRemLock(unsigned __int8 MajorCode, unsigned __int8 MinorCode)
{
  __int64 result; // rax

  if ( MajorCode < 0x16u )
    return 3LL;
  if ( MajorCode > 0x17u )
  {
    if ( MajorCode == 27 )
    {
      result = 2LL;
      if ( MinorCode == 2 )
        return result;
      return 1LL;
    }
    return 3LL;
  }
  return 1LL;
}
