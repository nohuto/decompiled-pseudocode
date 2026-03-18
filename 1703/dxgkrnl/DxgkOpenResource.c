/*
 * XREFs of DxgkOpenResource @ 0x1C00FFEE0
 * Callers:
 *     ?VmBusOpenResource@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E320 (-VmBusOpenResource@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 */

__int64 __fastcall DxgkOpenResource(unsigned int *a1, __int64 a2, __int64 a3)
{
  __m128i *v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // ebx
  __int64 v7; // r8

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2005);
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    v4 = (__m128i *)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v4 = (__m128i *)MmUserProbeAddress;
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(*v4, 4));
  }
  else
  {
    v5 = a1[1];
  }
  v6 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCE>(a1, v5);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C006E790, &EventProfilerExit, v7, 2005);
  return v6;
}
