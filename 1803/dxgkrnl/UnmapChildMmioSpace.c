/*
 * XREFs of UnmapChildMmioSpace @ 0x1C0187760
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000BC00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall UnmapChildMmioSpace(__int64 a1, __int64 a2, void *a3, char a4)
{
  _QWORD *v4; // rbx
  volatile signed __int32 *v5; // rax
  unsigned __int64 v7; // rdx
  volatile signed __int64 *v8; // rax
  char v9; // al
  __int64 v10; // rbx
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  v5 = &g_VgpuNumVaToGpaMappings;
  if ( !a4 )
    v5 = &g_VgpuNumHpaToGpaMappings;
  v7 = -a2;
  _InterlockedDecrement(v5);
  v8 = &g_VgpuSizeVaToGpaMappings;
  if ( !a4 )
    v8 = &g_VgpuSizeHpaToGpaMappings;
  _InterlockedExchangeAdd64(v8, v7);
  v9 = *(_BYTE *)(a1 + 323);
  if ( (v9 & 8) != 0 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 456LL);
LABEL_9:
    v4 = (_QWORD *)(v10 + 88);
    goto LABEL_10;
  }
  if ( (v9 & 4) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 456);
    goto LABEL_9;
  }
LABEL_10:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v11, (struct DXGPUSHLOCK *const)(v4 + 1));
  VmbChannelUnmapChildMmioSpace(*v4, a3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  ExFreePoolWithTag(a3, 0x4B677844u);
}
