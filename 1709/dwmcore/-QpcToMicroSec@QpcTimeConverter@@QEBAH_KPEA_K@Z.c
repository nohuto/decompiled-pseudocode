/*
 * XREFs of ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180197760
 * Callers:
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18019856C (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEA_K@Z @ 0x18019874C (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x18019E350 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x18019EB80 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QpcTimeConverter::QpcToMicroSec(QpcTimeConverter *this, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( *(_QWORD *)this )
  {
    *a3 = *((_QWORD *)this + 1) * (a2 / *(_QWORD *)this)
        + *((_QWORD *)this + 1) * (a2 - *(_QWORD *)this * (a2 / *(_QWORD *)this)) / *(_QWORD *)this;
    return 1LL;
  }
  else
  {
    *a3 = 0LL;
    return 0LL;
  }
}
