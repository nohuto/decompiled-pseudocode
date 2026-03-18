/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C001EAE4
 * Callers:
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C001EAB0 (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0021C20 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0021CA8 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C0099890 (--_GCInputManager@@IEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
  {
    result = Win32FreePool(v4, a2, a3);
    *a1 = 0LL;
  }
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 2) = 0;
  return result;
}
