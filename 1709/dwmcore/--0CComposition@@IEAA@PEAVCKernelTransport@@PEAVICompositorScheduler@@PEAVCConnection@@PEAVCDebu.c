/*
 * XREFs of ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x1801271B8
 * Callers:
 *     ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18012FB0C (--0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection.c)
 * Callees:
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x18011D8E0 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x180130124 (--0CMmcssTask@@QEAA@XZ.c)
 */

CComposition *__fastcall CComposition::CComposition(
        CComposition *this,
        struct CKernelTransport *a2,
        struct ICompositorScheduler *a3,
        struct CConnection *a4,
        struct CDebugFrameCounter *a5,
        struct CoRenderHost *a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CComposition::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = this;
  *((_QWORD *)this + 15) = 0LL;
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 136));
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((__int64)this + 304, v10, v11, v12);
  *((_DWORD *)this + 86) = 1;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((__int64)this + 376, v13, v14, v15);
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((__int64)this + 408, v16, v17, v18);
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 61) = a5;
  *((_QWORD *)this + 67) = a6;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_QWORD *)this + 65) = a2;
  *((_QWORD *)this + 66) = a3;
  *((_QWORD *)this + 68) = a4;
  *((_DWORD *)this + 140) = 0;
  InitializeSRWLock((PSRWLOCK)this + 69);
  *((_DWORD *)this + 146) = 2;
  *((_QWORD *)this + 71) = (char *)this + 600;
  *((_QWORD *)this + 72) = (char *)this + 600;
  *(_QWORD *)((char *)this + 588) = 2LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 81) = (char *)this + 680;
  *((_QWORD *)this + 82) = (char *)this + 680;
  *((_DWORD *)this + 166) = 1;
  *(_QWORD *)((char *)this + 668) = 1LL;
  *((_QWORD *)this + 86) = (char *)this + 720;
  *((_QWORD *)this + 87) = (char *)this + 720;
  *((_DWORD *)this + 176) = 2;
  *(_QWORD *)((char *)this + 708) = 2LL;
  *((_QWORD *)this + 92) = (char *)this + 768;
  *((_QWORD *)this + 93) = (char *)this + 768;
  *((_DWORD *)this + 188) = 16;
  *(_QWORD *)((char *)this + 756) = 16LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_DWORD *)this + 230) = 0;
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
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 1088),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData,
    0LL);
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 148) = 0LL;
  *((_DWORD *)this + 294) = 0;
  *((_DWORD *)this + 298) = 0;
  v19 = *((_QWORD *)this + 67);
  *((_BYTE *)this + 1298) = 0;
  if ( v19 )
    *(_QWORD *)(v19 + 16) = this;
  *((_BYTE *)this + 1297) = 1;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return this;
}
