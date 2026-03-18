/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C000CC84
 * Callers:
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C000CC54 (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000EEE0 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C000EF54 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00908F0 (--_GCInputManager@@IEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = Win32FreePool(v2);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 2) = 0;
  return result;
}
