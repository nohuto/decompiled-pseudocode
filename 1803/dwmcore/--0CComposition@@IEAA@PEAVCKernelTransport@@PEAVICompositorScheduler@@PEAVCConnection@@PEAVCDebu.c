/*
 * XREFs of ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x1800340EC
 * Callers:
 *     ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180049344 (--0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x18001E8E4 (--0CMmcssTask@@QEAA@XZ.c)
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1800CCA50 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 */

CComposition *__fastcall CComposition::CComposition(
        CComposition *this,
        struct CKernelTransport *a2,
        struct ICompositorScheduler *a3,
        struct CConnection *a4,
        struct CDebugFrameCounter *a5,
        struct CoRenderHost *a6)
{
  __int64 v10; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CComposition::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = this;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 160));
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 328);
  *((_DWORD *)this + 92) = 1;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 400);
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 432);
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_QWORD *)this + 64) = a5;
  *((_QWORD *)this + 70) = a6;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = a2;
  *((_QWORD *)this + 69) = a3;
  *((_QWORD *)this + 71) = a4;
  *((_DWORD *)this + 146) = 0;
  InitializeSRWLock((PSRWLOCK)this + 72);
  *((_DWORD *)this + 152) = 2;
  *((_QWORD *)this + 74) = (char *)this + 624;
  *((_QWORD *)this + 75) = (char *)this + 624;
  *(_QWORD *)((char *)this + 612) = 2LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_DWORD *)this + 166) = 0;
  *((_QWORD *)this + 84) = (char *)this + 704;
  *((_QWORD *)this + 85) = (char *)this + 704;
  *((_DWORD *)this + 172) = 1;
  *(_QWORD *)((char *)this + 692) = 1LL;
  *((_QWORD *)this + 89) = (char *)this + 744;
  *((_QWORD *)this + 90) = (char *)this + 744;
  *((_DWORD *)this + 182) = 2;
  *(_QWORD *)((char *)this + 732) = 2LL;
  *((_QWORD *)this + 95) = (char *)this + 792;
  *((_QWORD *)this + 96) = (char *)this + 792;
  *((_DWORD *)this + 194) = 16;
  *(_QWORD *)((char *)this + 780) = 16LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_DWORD *)this + 236) = 0;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_DWORD *)this + 244) = 0;
  *((_QWORD *)this + 123) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_DWORD *)this + 260) = 0;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 268) = 0;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  *((_DWORD *)this + 276) = 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 1112),
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FreeTableData,
    0LL);
  *((_QWORD *)this + 149) = 0LL;
  *((_QWORD *)this + 151) = 0LL;
  *((_DWORD *)this + 300) = 0;
  *((_DWORD *)this + 304) = 0;
  *((_QWORD *)this + 165) = 0LL;
  v10 = *((_QWORD *)this + 70);
  *((_BYTE *)this + 1346) = 0;
  *((_BYTE *)this + 1348) = 0;
  if ( v10 )
    *(_QWORD *)(v10 + 16) = this;
  InitializeSListHead((PSLIST_HEADER)this + 83);
  *((_BYTE *)this + 1345) = 1;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return this;
}
