/*
 * XREFs of ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180064E04
 * Callers:
 *     ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180036A78 (--0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection.c)
 * Callees:
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1800B1990 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800B66E4 (--0CMmcssTask@@QEAA@XZ.c)
 *     ??0CEnergyReporter@@QEAA@XZ @ 0x1800CA4C0 (--0CEnergyReporter@@QEAA@XZ.c)
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
  CEnergyReporter::CEnergyReporter((CComposition *)((char *)this + 80));
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 160));
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 344);
  *((_DWORD *)this + 96) = 1;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 424);
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 456);
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_QWORD *)this + 67) = a5;
  *((_QWORD *)this + 71) = a6;
  *((_QWORD *)this + 69) = a2;
  *((_QWORD *)this + 70) = a3;
  *((_QWORD *)this + 72) = a4;
  *((_DWORD *)this + 148) = 0;
  InitializeSRWLock((PSRWLOCK)this + 73);
  *((_DWORD *)this + 154) = 2;
  *((_QWORD *)this + 75) = (char *)this + 632;
  *((_QWORD *)this + 76) = (char *)this + 632;
  *(_QWORD *)((char *)this + 620) = 2LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)this + 168) = 0;
  *((_QWORD *)this + 85) = (char *)this + 712;
  *((_QWORD *)this + 86) = (char *)this + 712;
  *((_DWORD *)this + 174) = 1;
  *(_QWORD *)((char *)this + 700) = 1LL;
  *((_QWORD *)this + 90) = (char *)this + 752;
  *((_QWORD *)this + 91) = (char *)this + 752;
  *((_DWORD *)this + 184) = 2;
  *(_QWORD *)((char *)this + 740) = 2LL;
  *((_QWORD *)this + 96) = (char *)this + 800;
  *((_QWORD *)this + 97) = (char *)this + 800;
  *((_DWORD *)this + 196) = 16;
  *(_QWORD *)((char *)this + 788) = 16LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_DWORD *)this + 238) = 0;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_DWORD *)this + 254) = 0;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *((_DWORD *)this + 270) = 0;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 137) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_DWORD *)this + 278) = 0;
  *((_QWORD *)this + 140) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 142) = 0LL;
  *((_DWORD *)this + 286) = 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 16,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 154) = 0LL;
  *((_QWORD *)this + 156) = 0LL;
  *((_DWORD *)this + 310) = 0;
  *((_DWORD *)this + 314) = 0;
  v10 = *((_QWORD *)this + 71);
  *(_QWORD *)((char *)this + 324) = this;
  if ( v10 )
    *(_QWORD *)(v10 + 16) = this;
  *((_BYTE *)this + 1361) = 1;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return this;
}
