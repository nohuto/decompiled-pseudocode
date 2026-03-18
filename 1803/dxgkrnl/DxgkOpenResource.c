/*
 * XREFs of DxgkOpenResource @ 0x1C00C0FA0
 * Callers:
 *     ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01805E0 (-VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00C0868 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 */

__int64 __fastcall DxgkOpenResource(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  __m128i v5; // xmm2
  unsigned int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // r8
  int v10; // [rsp+28h] [rbp-70h] BYREF
  __int64 v11; // [rsp+30h] [rbp-68h]
  __int128 v12; // [rsp+50h] [rbp-48h]
  __int128 v13; // [rsp+60h] [rbp-38h]
  __int128 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+80h] [rbp-18h]

  v11 = 0LL;
  v10 = 2005;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2005);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v10, 2005);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v4 = a1;
    if ( a1 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v5 = *(__m128i *)v4;
    v12 = *(_OWORD *)(v4 + 16);
    v13 = *(_OWORD *)(v4 + 32);
    v14 = *(_OWORD *)(v4 + 48);
    v15 = *(_QWORD *)(v4 + 64);
    v6 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 4);
  }
  v7 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(a1, v6);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(qword_1C0079010, &EventProfilerExit, v8, v10);
  return v7;
}
