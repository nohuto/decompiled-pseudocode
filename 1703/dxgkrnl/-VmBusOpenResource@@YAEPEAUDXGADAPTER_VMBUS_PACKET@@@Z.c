/*
 * XREFs of ?VmBusOpenResource@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E320
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkOpenResource @ 0x1C00FFEE0 (DxgkOpenResource.c)
 */

unsigned __int8 __fastcall VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  void *v5; // rbp
  unsigned int v6; // eax
  unsigned int v8; // r12d
  _DWORD *v9; // r14
  unsigned __int128 v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD v19[10]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *((_QWORD *)a1 + 9);
  v3 = 0;
  v5 = 0LL;
  v6 = *(_DWORD *)(v2 + 24);
  if ( v6 > 0xFFFF )
    return 0;
  v8 = 4 * v6 + 8;
  v9 = operator new(v8, a2, 1, (enum _POOL_TYPE)512);
  if ( !v9 )
    return 0;
  v10 = *(unsigned int *)(v2 + 24) * (unsigned __int128)0x50u;
  if ( !is_mul_ok(*(unsigned int *)(v2 + 24), 0x50uLL) )
    *(_QWORD *)&v10 = -1LL;
  v11 = operator new(v10, DWORD2(v10), 1, PagedPool);
  if ( v11 && ((v13 = *(_DWORD *)(v2 + 28)) == 0 || (v5 = operator new(v13, 0x4B677844u, PagedPool)) != 0LL) )
  {
    memset(v19, 0, 0x48uLL);
    v19[0] = *(_QWORD *)(v2 + 16);
    LODWORD(v19[1]) = *(_DWORD *)(v2 + 24);
    LODWORD(v19[8]) = *(_DWORD *)(v2 + 28);
    v19[2] = v11;
    v19[7] = v5;
    v14 = DxgkOpenResource(v19);
    v12 = v14;
    if ( v14 >= 0 )
    {
      *v9 = HIDWORD(v19[8]);
      if ( *(_DWORD *)(v2 + 24) )
      {
        do
        {
          v18 = v3++;
          v9[v18 + 2] = v11[20 * v18];
        }
        while ( v3 < *(_DWORD *)(v2 + 24) );
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v17 + 24) = v12;
      WdLogEvent5_WdError(v17);
    }
  }
  else
  {
    LODWORD(v12) = -1073741801;
  }
  v9[1] = v12;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v9, v8);
  operator delete[](v9);
  operator delete[](v11);
  operator delete[](v5);
  return 1;
}
