/*
 * XREFs of VidSchCreateHwQueue @ 0x1C0032270
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007E874 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0ppp @ 0x1C00247E4 (McTemplateK0ppp.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030C40 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0030D14 (-VidSchiIncrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchTerminateHwQueue @ 0x1C0033250 (VidSchTerminateHwQueue.c)
 */

__int64 __fastcall VidSchCreateHwQueue(__int64 a1, __int64 a2, __int64 a3, char **a4)
{
  __int64 v7; // r14
  int v9; // edi
  char *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 v14; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  int v18; // eax
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  SIZE_T v21; // rax
  int v22; // r15d
  struct _VIDSCH_QUEUE_PACKET *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _VIDSCH_QUEUE_PACKET *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v32[7]; // [rsp+48h] [rbp-60h] BYREF
  size_t Size; // [rsp+B8h] [rbp+10h]

  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
  v9 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xA8uLL, 0x68536956u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v14);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 0xA8uLL);
  *(_DWORD *)v13 = 1903642710;
  *((_QWORD *)v13 + 4) = a1;
  *((_QWORD *)v13 + 3) = a2;
  *((_QWORD *)v13 + 10) = KeGetCurrentThread();
  *((_QWORD *)v13 + 13) = v13 + 96;
  *((_QWORD *)v13 + 12) = v13 + 96;
  *((_QWORD *)v13 + 14) = v13 + 96;
  *((_QWORD *)v13 + 16) = v13 + 120;
  *((_QWORD *)v13 + 15) = v13 + 120;
  *((_QWORD *)v13 + 19) = v13 + 144;
  *((_QWORD *)v13 + 18) = v13 + 144;
  if ( _InterlockedIncrement((volatile signed __int32 *)v13 + 18) == 1 )
    VidSchiIncrementHwContextReference(*((struct VIDSCH_HW_CONTEXT **)v13 + 3));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1904), &LockHandle);
  v16 = *(_QWORD **)(a2 + 144);
  v17 = v13 + 8;
  if ( *v16 != a2 + 136 )
    __fastfail(3u);
  *v17 = a2 + 136;
  *((_QWORD *)v13 + 2) = v16;
  *v16 = v17;
  *(_QWORD *)(a2 + 144) = v17;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( a1 )
  {
    *((_QWORD *)v13 + 8) = *(_QWORD *)(a1 + 32);
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(a2 + 48) & 1) == 0 )
  {
    *((_QWORD *)v13 + 8) = 0LL;
LABEL_13:
    v21 = *(_DWORD *)(v7 + 132) * (48 * *(_DWORD *)(v7 + 60) + ((8 * *(_DWORD *)(v7 + 60) + 175) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v7 + 60) + 98);
    if ( (unsigned int)v21 <= 0x3C0 )
      v21 = 960LL;
    v22 = 0;
    Size = v21;
    do
    {
      v23 = (struct _VIDSCH_QUEUE_PACKET *)ExAllocatePoolWithTag((POOL_TYPE)512, v21, 0x68536956u);
      v26 = v23;
      if ( !v23 )
      {
        v30 = WdLogNewEntry5_WdWarning(v25, v24);
        WdLogEvent5_WdWarning(v30);
        v9 = -1073741801;
        goto LABEL_27;
      }
      memset(v23, 0, Size);
      VidSchiInterlockedInsertTailList(
        (KSPIN_LOCK *)(v7 + 1912),
        (__int64)(v13 + 144),
        (_QWORD *)v26 + 1,
        (_DWORD *)v13 + 40);
      VidSchiFreeQueuePacket((struct VIDSCH_HW_QUEUE *)v13, v26);
      v21 = Size;
      ++v22;
    }
    while ( v22 < 5 );
    if ( !a1 && bTracingEnabled )
    {
      v28 = *((_QWORD *)v13 + 3);
      v29 = *(_QWORD *)(v28 + 24);
      if ( !v29 || (*(_DWORD *)(v28 + 48) & 0x40) != 0 )
        v29 = *((_QWORD *)v13 + 3);
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp(v28, &EventCreateHwQueue, v27, v29, 0LL, v13);
    }
    *a4 = v13;
    return (unsigned int)v9;
  }
  memset(v32, 0, 0x30uLL);
  v18 = *(_DWORD *)(a3 + 4);
  v19 = *(_QWORD **)(a2 + 40);
  v20 = *(_QWORD *)(v7 + 8);
  v32[0] = 0LL;
  LODWORD(v32[1]) = v18;
  v32[2] = *(_QWORD *)(a3 + 16);
  HIDWORD(v32[1]) = *(_DWORD *)(a3 + 8);
  v32[5] = *(_QWORD *)(a3 + 40);
  v9 = DxgCoreInterface[19](v20, v19, (__int64)v32);
  if ( v9 >= 0 )
  {
    *((_QWORD *)v13 + 8) = v32[0];
    goto LABEL_13;
  }
LABEL_27:
  VidSchTerminateHwQueue((struct VIDSCH_HW_QUEUE *)v13);
  *a4 = 0LL;
  return (unsigned int)v9;
}
