/*
 * XREFs of ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0021CA8
 * Callers:
 *     ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0021D10 (--_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C008AE90 (--_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C001EAB0 (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C001EAE4 (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 *     ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x1C00224C8 (--1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(
        DirectComposition::CInteractionMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8

  v4 = (__int64 *)((char *)this + 248);
  *(_QWORD *)this = &DirectComposition::CInteractionMarshaler::`vftable';
  CStructDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo>::Reset(
    (__int64)this + 248,
    a2,
    a3);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(v4, v5, v6);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(
    (__int64 *)this + 29,
    v7,
    v8);
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 128));
  DirectComposition::CInteractionConfigurationGroup::~CInteractionConfigurationGroup((DirectComposition::CInteractionMarshaler *)((char *)this + 40));
}
