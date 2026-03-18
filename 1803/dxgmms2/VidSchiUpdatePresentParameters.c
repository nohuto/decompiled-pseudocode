/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C0006060
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C00062AC (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015360 (VidSchiTryEnterIndependentFlip.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 */

char __fastcall VidSchiUpdatePresentParameters(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  char v5; // di
  bool v6; // si
  int v7; // ebp
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // r12d
  __int64 v17; // rax
  int v18; // edi
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 i; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  char v29; // cl
  bool v31; // [rsp+20h] [rbp-B8h]
  unsigned int v32; // [rsp+24h] [rbp-B4h]
  _QWORD *v33; // [rsp+28h] [rbp-B0h]
  __int64 v34; // [rsp+30h] [rbp-A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+50h] [rbp-88h]
  __int128 v37; // [rsp+60h] [rbp-78h]
  __int128 Source2; // [rsp+70h] [rbp-68h] BYREF
  __int128 v39; // [rsp+80h] [rbp-58h] BYREF

  v32 = *(_DWORD *)(a2 + 116);
  v4 = *(_QWORD *)(a1 + 3032 + 8LL * v32);
  v33 = (_QWORD *)(a1 + 3032 + 8LL * v32);
  v31 = (*(_DWORD *)a2 & 0x800000) != 0;
  v5 = *(int *)a2 < 0;
  Source2 = *(_OWORD *)(a2 + 428);
  v39 = *(_OWORD *)(a2 + 444);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  v6 = v5 != *(_BYTE *)(v4 + 2264);
  v7 = 0;
  *(_BYTE *)(v4 + 2264) = v5;
  if ( !v5
    || RtlCompareMemory((const void *)(v4 + 2268), &Source2, 0x10uLL) == 16
    && RtlCompareMemory((const void *)(v4 + 2284), &v39, 0x10uLL) == 16 )
  {
    if ( !v6 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)(v4 + 2268) = Source2;
    *(_OWORD *)(v4 + 2284) = v39;
  }
  v24 = *(unsigned int *)(a1 + 132);
  for ( i = 0LL; (unsigned int)i < (unsigned int)v24; i = (unsigned int)(i + 1) )
  {
    v26 = *(int *)(216LL * (unsigned int)i + *(_QWORD *)(a1 + 8LL * v32 + 3032) + 140);
    if ( (int)v26 > -1 )
    {
      v27 = *(unsigned int *)(136 * v26 + *(_QWORD *)(a1 + 3160) + 112);
      if ( (_DWORD)v27 == 2 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, i, v24);
        v28[3] = 281LL;
        v28[4] = 0x100000LL;
        v28[5] = 0LL;
        v28[6] = v32;
        v28[7] = a1;
        WdLogEvent5_WdCriticalError(v28);
        JUMPOUT(0x1C001A9D9LL);
      }
    }
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v8 = a2 + 496;
  v9 = 0;
  v10 = *(_DWORD *)(a2 + 496);
  v11 = v10 & 0x3FF;
  v12 = (v10 >> 10) & 0x3FF;
  v34 = v8;
  if ( *(_BYTE *)(a1 + 136) )
    v9 = v12;
  v13 = !_BitScanForward((unsigned int *)&v14, v11);
  if ( v13 )
    LOBYTE(v14) = -1;
  v15 = (char)v14;
  v13 = !_BitScanForward((unsigned int *)&v14, v9);
  if ( v13 )
    LOBYTE(v14) = -1;
  v16 = (char)v14;
  while ( v11 || v9 )
  {
    if ( v15 >= v16 )
      goto LABEL_31;
    v17 = v7 * ((8 * *(_DWORD *)(v8 + 8) + 175) & 0xFFFFFFF8);
    v18 = *(_DWORD *)(v17 + v8 + 176);
    v19 = *(_OWORD *)(v17 + v8 + 160);
    v36 = *(_OWORD *)(v17 + v8 + 144);
    v37 = v19;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
    v20 = v37;
    v21 = 216LL * v15;
    *(_OWORD *)(v21 + v4 + 104) = v36;
    *(_OWORD *)(v21 + v4 + 120) = v20;
    *(_DWORD *)(v21 + v4 + 136) = v18;
    v22 = *(int *)(v21 + *v33 + 140);
    if ( (int)v22 > -1 )
    {
      v23 = *(_QWORD *)(a1 + 3160) + 136 * v22;
      if ( v23 )
      {
        if ( *(_DWORD *)(v23 + 112) == 1 )
        {
          *(_BYTE *)(v23 + 108) = v31;
          *(_BYTE *)(v23 + 96) = 1;
          VidSchiTryEnterIndependentFlip(a1, v32, v15);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v15 >= v16 )
    {
LABEL_31:
      v29 = -1;
      v9 &= ~(1 << v16);
      v13 = !_BitScanForward((unsigned int *)&v14, v9);
      if ( !v13 )
        v29 = v14;
      v16 = v29;
    }
    else
    {
      v11 &= ~(1 << v15);
      v13 = !_BitScanForward((unsigned int *)&v14, v11);
      if ( v13 )
        LOBYTE(v14) = -1;
      v15 = (char)v14;
    }
    v8 = v34;
    ++v7;
  }
  return v14;
}
