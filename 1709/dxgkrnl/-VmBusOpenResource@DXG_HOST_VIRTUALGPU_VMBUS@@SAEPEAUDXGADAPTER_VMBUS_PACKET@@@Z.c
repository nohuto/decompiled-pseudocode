/*
 * XREFs of ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194300
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkOpenResource @ 0x1C00EA830 (DxgkOpenResource.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  PVOID v2; // rbp
  unsigned int v4; // eax
  unsigned int v6; // r12d
  _DWORD *v7; // rsi
  SIZE_T v8; // rax
  _DWORD *v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v18[10]; // [rsp+20h] [rbp-78h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v2 = 0LL;
  v4 = *(_DWORD *)(v1 + 32);
  if ( v4 > 0x8000 )
    return 0;
  v6 = 4 * v4 + 8;
  v7 = operator new(v6, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v7 )
    return 0;
  v8 = 80LL * *(unsigned int *)(v1 + 32);
  if ( !is_mul_ok(*(unsigned int *)(v1 + 32), 0x50uLL) )
    v8 = -1LL;
  v9 = operator new(v8, 0x4B677844u, 1, PagedPool);
  if ( v9 && ((v11 = *(_DWORD *)(v1 + 36)) == 0 || (v2 = operator new(v11, 0x4B677844u, 1, PagedPool)) != 0LL) )
  {
    memset(v18, 0, 0x48uLL);
    v18[0] = *(_QWORD *)(v1 + 24);
    LODWORD(v18[1]) = *(_DWORD *)(v1 + 32);
    LODWORD(v18[8]) = *(_DWORD *)(v1 + 36);
    v18[2] = v9;
    v18[7] = v2;
    v14 = DxgkOpenResource((__int64)v18, v12, v13);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v17 = 0LL;
      for ( *v7 = HIDWORD(v18[8]); (unsigned int)v17 < *(_DWORD *)(v1 + 32); v17 = (unsigned int)(v17 + 1) )
        v7[v17 + 2] = v9[20 * v17];
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = v10;
      WdLogEvent5_WdError(v16);
    }
  }
  else
  {
    LODWORD(v10) = -1073741801;
  }
  v7[1] = v10;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v7, v6);
  ExFreePoolWithTag(v7, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return 1;
}
