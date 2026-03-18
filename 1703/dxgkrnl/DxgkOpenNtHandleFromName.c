/*
 * XREFs of DxgkOpenNtHandleFromName @ 0x1C0198FD0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DxgkOpenNtHandleFromName(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  ULONG64 v5; // rcx
  int v6; // edi
  _QWORD *v7; // r8
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2075);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  LOBYTE(a3) = 1;
  v6 = ObOpenObjectByName(*(_QWORD *)(v4 + 8), g_pDxgkSharedAllocationObjectType, a3, 0LL, *(_OWORD *)v4, 0LL, &v9);
  if ( v6 >= 0 )
  {
    v7 = (_QWORD *)(a1 + 16);
    v5 = MmUserProbeAddress;
    if ( a1 + 16 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = v9;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v5, &EventProfilerExit, (__int64)v7, 2075);
  return (unsigned int)v6;
}
