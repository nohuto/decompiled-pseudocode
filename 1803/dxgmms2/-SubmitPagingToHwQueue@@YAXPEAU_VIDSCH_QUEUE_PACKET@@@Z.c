/*
 * XREFs of ?SubmitPagingToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F5A0
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030F04 (-VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002FC04 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall SubmitPagingToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r14d
  _DWORD *v14; // rbx
  __int128 v15; // xmm0
  _OWORD v16[3]; // [rsp+20h] [rbp-30h] BYREF

  v1 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1 + 24);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 9;
  VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v4);
  v8 = 352LL * *(unsigned __int16 *)(v4 + 6);
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL);
  if ( !*(_BYTE *)(v8 + *(_QWORD *)(v9 + 2360) + 40) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v7);
    v10[5] = 0LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    v10[3] = 281LL;
    v10[4] = 24576LL;
    WdLogEvent5_WdCriticalError(v10);
    __debugbreak();
  }
  memset(v16, 0, sizeof(v16));
  v11 = *((_QWORD *)a1 + 35);
  *(_QWORD *)&v16[0] = *(_QWORD *)(v1 + 64);
  *((_QWORD *)&v16[0] + 1) = *((_QWORD *)a1 + 36);
  *(_QWORD *)&v16[1] = *(_QWORD *)(v11 + 96) + *((unsigned int *)a1 + 77);
  DWORD2(v16[1]) = *((_DWORD *)a1 + 78);
  v12 = *(_QWORD *)(v11 + 128) + *((unsigned int *)a1 + 79);
  DWORD2(v16[2]) |= 1u;
  *(_QWORD *)&v16[2] = v12;
  HIDWORD(v16[1]) = *((_DWORD *)a1 + 80);
  v13 = ((__int64 (__fastcall *)(_QWORD, _OWORD *))DxgCoreInterface[52])(*(_QWORD *)(v6 + 8), v16);
  v14 = (_DWORD *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
  memset(v14, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  *v14 = 8;
  *((_OWORD *)v14 + 1) = v16[0];
  *((_OWORD *)v14 + 2) = v16[1];
  v15 = v16[2];
  v14[16] = v13;
  *((_OWORD *)v14 + 3) = v15;
  if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741822 )
    VidSchiMarkDeviceAsError(v5, 19);
}
