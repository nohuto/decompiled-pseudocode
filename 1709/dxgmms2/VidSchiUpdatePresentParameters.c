/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C00044A0
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004A98 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015064 (VidSchiTryEnterIndependentFlip.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 */

char __fastcall VidSchiUpdatePresentParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbp
  __int64 v6; // r13
  char v7; // di
  __int64 v8; // r8
  bool v9; // si
  int v10; // r14d
  __int64 v11; // rcx
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  bool v15; // zf
  int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // r12d
  __int64 v19; // rax
  int v20; // edi
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rax
  _QWORD *v27; // rax
  char v28; // cl
  bool v30; // [rsp+20h] [rbp-A8h]
  unsigned int v31; // [rsp+24h] [rbp-A4h]
  __int64 v32; // [rsp+28h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-98h] BYREF
  __int128 v34; // [rsp+48h] [rbp-80h]
  __int128 v35; // [rsp+58h] [rbp-70h]
  __int128 Source2; // [rsp+68h] [rbp-60h] BYREF
  __int128 v37; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(unsigned int *)(a2 + 116);
  v31 = v2;
  v4 = (unsigned int)v2;
  v6 = *(_QWORD *)(a1 + 8 * v2 + 3008);
  v30 = (*(_DWORD *)a2 & 0x800000) != 0;
  v7 = *(int *)a2 < 0;
  Source2 = *(_OWORD *)(a2 + 384);
  v37 = *(_OWORD *)(a2 + 400);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  v9 = v7 != *(_BYTE *)(v6 + 2904);
  v10 = 0;
  *(_BYTE *)(v6 + 2904) = v7;
  if ( !v7
    || RtlCompareMemory((const void *)(v6 + 2908), &Source2, 0x10uLL) == 16
    && RtlCompareMemory((const void *)(v6 + 2924), &v37, 0x10uLL) == 16 )
  {
    if ( !v9 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)(v6 + 2908) = Source2;
    *(_OWORD *)(v6 + 2924) = v37;
  }
  v24 = *(unsigned int *)(a1 + 128);
  v25 = 0LL;
  if ( (_DWORD)v24 )
  {
    v26 = (_DWORD *)(v6 + 180);
    do
    {
      if ( *v26 == 2 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v8);
        v27[3] = 281LL;
        v27[4] = 0x100000LL;
        v27[5] = 0LL;
        v27[6] = v4;
        v27[7] = a1;
        WdLogEvent5_WdCriticalError(v27);
        JUMPOUT(0x1C0018DF5LL);
      }
      v25 = (unsigned int)(v25 + 1);
      v26 += 70;
    }
    while ( (unsigned int)v25 < (unsigned int)v24 );
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v11 = a2 + 440;
  v12 = *(_DWORD *)(a2 + 440);
  v13 = v12 & 0x3FF;
  v32 = v11;
  if ( *(_BYTE *)(a1 + 132) )
    v14 = (v12 >> 10) & 0x3FF;
  else
    v14 = 0;
  v15 = !_BitScanForward((unsigned int *)&v16, v13);
  if ( v15 )
    LOBYTE(v16) = -1;
  v17 = (char)v16;
  v15 = !_BitScanForward((unsigned int *)&v16, v14);
  if ( v15 )
    LOBYTE(v16) = -1;
  v18 = (char)v16;
  while ( v13 || v14 )
  {
    if ( v17 >= v18 )
      goto LABEL_30;
    v19 = v10 * ((8 * *(_DWORD *)(v11 + 8) + 175) & 0xFFFFFFF8);
    v20 = *(_DWORD *)(v19 + v11 + 176);
    v21 = *(_OWORD *)(v19 + v11 + 160);
    v34 = *(_OWORD *)(v19 + v11 + 144);
    v35 = v21;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
    v22 = v35;
    v23 = 280LL * v17;
    v15 = *(_DWORD *)(v23 + v6 + 180) == 1;
    *(_OWORD *)(v23 + v6 + 104) = v34;
    *(_OWORD *)(v23 + v6 + 120) = v22;
    *(_DWORD *)(v23 + v6 + 136) = v20;
    if ( v15 )
    {
      *(_BYTE *)(v23 + v6 + 179) = v30;
      *(_BYTE *)(v23 + v6 + 176) = 1;
      VidSchiTryEnterIndependentFlip(a1, v31, v17);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v17 >= v18 )
    {
LABEL_30:
      v28 = -1;
      v14 &= ~(1 << v18);
      v15 = !_BitScanForward((unsigned int *)&v16, v14);
      if ( !v15 )
        v28 = v16;
      v18 = v28;
    }
    else
    {
      v13 &= ~(1 << v17);
      v15 = !_BitScanForward((unsigned int *)&v16, v13);
      if ( v15 )
        LOBYTE(v16) = -1;
      v17 = (char)v16;
    }
    v11 = v32;
    ++v10;
  }
  return v16;
}
