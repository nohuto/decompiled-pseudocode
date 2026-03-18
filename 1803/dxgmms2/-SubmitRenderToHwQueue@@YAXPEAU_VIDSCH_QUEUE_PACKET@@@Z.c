/*
 * XREFs of ?SubmitRenderToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F760
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030F04 (-VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00159C0 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002FC04 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall SubmitRenderToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // r14
  _DWORD *v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  CRefCountedBuffer *v11; // rcx
  int v12; // r14d
  _DWORD *v13; // rbx
  __int128 v14; // xmm0
  _OWORD v15[3]; // [rsp+20h] [rbp-30h] BYREF

  v1 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1 + 24);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 9;
  VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v4);
  memset(v15, 0, sizeof(v15));
  v7 = (_DWORD *)*((_QWORD *)a1 + 36);
  *(_QWORD *)&v15[0] = *(_QWORD *)(v1 + 64);
  *((_QWORD *)&v15[0] + 1) = *((_QWORD *)a1 + 93);
  *(_QWORD *)&v15[1] = *((_QWORD *)a1 + 39);
  DWORD2(v15[1]) = *((_DWORD *)a1 + 81);
  if ( v7 )
  {
    HIDWORD(v15[1]) = *v7;
    v8 = v7 + 2;
  }
  else
  {
    v9 = *((_QWORD *)a1 + 35);
    if ( v9 )
    {
      HIDWORD(v15[1]) = *((_DWORD *)a1 + 87);
      v8 = *(_DWORD **)(v9 + 128);
    }
    else
    {
      HIDWORD(v15[1]) = 0;
      v8 = 0LL;
    }
  }
  *(_QWORD *)&v15[2] = v8;
  DWORD2(v15[2]) = DWORD2(v15[2]) & 0xFFFFFFF9 | ((*((_DWORD *)a1 + 18) & 0x80 | (*((_DWORD *)a1 + 18) >> 10) & 0x40u) >> 5);
  v10 = ((__int64 (__fastcall *)(_QWORD, _OWORD *))DxgCoreInterface[52])(*(_QWORD *)(v6 + 8), v15);
  v11 = (CRefCountedBuffer *)*((_QWORD *)a1 + 36);
  v12 = v10;
  if ( v11 )
  {
    CRefCountedBuffer::RefCountedBufferRelease(v11);
    *((_QWORD *)a1 + 36) = 0LL;
  }
  v13 = (_DWORD *)(*(_QWORD *)(v4 + 184) + 112LL * *(unsigned int *)(v4 + 196));
  memset(v13, 0, 0x70uLL);
  *(_DWORD *)(v4 + 196) = (*(_DWORD *)(v4 + 196) + 1) & (*(_DWORD *)(v4 + 192) - 1);
  *v13 = 8;
  *((_OWORD *)v13 + 1) = v15[0];
  *((_OWORD *)v13 + 2) = v15[1];
  v14 = v15[2];
  v13[16] = v12;
  *((_OWORD *)v13 + 3) = v14;
  if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741822 )
    VidSchiMarkDeviceAsError(v5, 19);
}
