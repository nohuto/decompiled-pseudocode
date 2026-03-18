/*
 * XREFs of ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x1801A1CB8
 * Callers:
 *     ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x1801A1A44 (-FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHM.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801A1F50 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801A2DEC (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     <none>
 */

struct CInteraction *__fastcall CManipulationContext::GetMCRoot(const struct CInteraction *a1)
{
  const struct CInteraction *i; // rax

  for ( i = (const struct CInteraction *)*((_QWORD *)a1 + 30); i; i = (const struct CInteraction *)*((_QWORD *)i + 30) )
    a1 = i;
  return a1;
}
