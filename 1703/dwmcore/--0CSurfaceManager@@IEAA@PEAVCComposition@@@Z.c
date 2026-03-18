/*
 * XREFs of ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x1800B5ED8
 * Callers:
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x1800CB5BC (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 * Callees:
 *     ??0CLegacySurfaceManager@@QEAA@XZ @ 0x1800B0230 (--0CLegacySurfaceManager@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800B66E4 (--0CMmcssTask@@QEAA@XZ.c)
 */

CSurfaceManager *__fastcall CSurfaceManager::CSurfaceManager(CSurfaceManager *this, struct CComposition *a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 24),
    CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  CLegacySurfaceManager::CLegacySurfaceManager((CSurfaceManager *)((char *)this + 96));
  *((_QWORD *)this + 50) = a2;
  *(_QWORD *)this = &CSurfaceManager::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 2) = &CSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 12) = &CSurfaceManager::`vftable'{for `CLegacySurfaceManager'};
  CMmcssTask::CMmcssTask((CSurfaceManager *)((char *)this + 432));
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 64) = (char *)this + 544;
  *((_QWORD *)this + 65) = (char *)this + 544;
  *((_DWORD *)this + 132) = 2;
  *((_DWORD *)this + 133) = 2;
  return this;
}
