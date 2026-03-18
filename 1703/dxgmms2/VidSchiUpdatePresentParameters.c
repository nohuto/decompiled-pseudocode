/*
 * XREFs of VidSchiUpdatePresentParameters @ 0x1C00042A0
 * Callers:
 *     VidSchSubmitCommand @ 0x1C006A5F0 (VidSchSubmitCommand.c)
 * Callees:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0012CEC (VidSchiTryEnterIndependentFlip.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 */

char __fastcall VidSchiUpdatePresentParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r15
  __int64 v6; // r13
  char v7; // di
  __int64 v8; // r8
  bool v9; // r14
  int v10; // esi
  __int64 v11; // r15
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // r12d
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // rax
  _QWORD *v25; // rax
  char v26; // cl
  bool v28; // [rsp+20h] [rbp-A8h]
  unsigned int v29; // [rsp+24h] [rbp-A4h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+40h] [rbp-88h]
  __int128 v32; // [rsp+50h] [rbp-78h]
  __int128 Source2; // [rsp+60h] [rbp-68h] BYREF
  __int128 v34; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(unsigned int *)(a2 + 116);
  v29 = v2;
  v4 = (unsigned int)v2;
  v6 = *(_QWORD *)(a1 + 8 * v2 + 2992);
  v28 = (*(_DWORD *)a2 & 0x800000) != 0;
  v7 = *(_DWORD *)a2 >= 0x80000000;
  Source2 = *(_OWORD *)(a2 + 384);
  v34 = *(_OWORD *)(a2 + 400);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  v9 = v7 != *(_BYTE *)(v6 + 2264);
  v10 = 0;
  *(_BYTE *)(v6 + 2264) = v7;
  if ( !v7
    || RtlCompareMemory((const void *)(v6 + 2268), &Source2, 0x10uLL) == 16
    && RtlCompareMemory((const void *)(v6 + 2284), &v34, 0x10uLL) == 16 )
  {
    if ( !v9 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)(v6 + 2268) = Source2;
    *(_OWORD *)(v6 + 2284) = v34;
  }
  v22 = *(unsigned int *)(a1 + 128);
  v23 = 0LL;
  if ( (_DWORD)v22 )
  {
    v24 = (_DWORD *)(v6 + 156);
    do
    {
      if ( *v24 == 2 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22, v8);
        v25[3] = 281LL;
        v25[4] = 0x100000LL;
        v25[5] = 0LL;
        v25[6] = v4;
        v25[7] = a1;
        WdLogEvent5_WdCriticalError(v25);
        JUMPOUT(0x1C00171E1LL);
      }
      v23 = (unsigned int)(v23 + 1);
      v24 += 68;
    }
    while ( (unsigned int)v23 < (unsigned int)v22 );
  }
LABEL_3:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v11 = a2 + 432;
  v12 = (unsigned __int8)*(_DWORD *)(a2 + 432);
  if ( *(_BYTE *)(a1 + 132) )
    v13 = *(unsigned __int8 *)(v11 + 1);
  else
    v13 = 0;
  v14 = !_BitScanForward((unsigned int *)&v15, v12);
  if ( v14 )
    LOBYTE(v15) = -1;
  v16 = (char)v15;
  v14 = !_BitScanForward((unsigned int *)&v15, v13);
  if ( v14 )
    LOBYTE(v15) = -1;
  v17 = (char)v15;
  while ( v12 || v13 )
  {
    if ( v16 >= v17 )
    {
      v26 = -1;
      v13 &= ~(1 << v17);
      v14 = !_BitScanForward((unsigned int *)&v15, v13);
      if ( !v14 )
        v26 = v15;
      v17 = v26;
    }
    else
    {
      v18 = v10 * ((8 * *(_DWORD *)(v11 + 8) + 167) & 0xFFFFFFF8);
      v19 = *(_OWORD *)(v18 + v11 + 160);
      v31 = *(_OWORD *)(v18 + v11 + 144);
      v32 = v19;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
      v20 = v32;
      v21 = 272LL * v16;
      v14 = *(_DWORD *)(v21 + v6 + 156) == 1;
      *(_OWORD *)(v21 + v6 + 88) = v31;
      *(_OWORD *)(v21 + v6 + 104) = v20;
      if ( v14 )
      {
        *(_BYTE *)(v21 + v6 + 155) = v28;
        *(_BYTE *)(v21 + v6 + 152) = 1;
        VidSchiTryEnterIndependentFlip(a1, v29, v16);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v12 &= ~(1 << v16);
      v14 = !_BitScanForward((unsigned int *)&v15, v12);
      if ( v14 )
        LOBYTE(v15) = -1;
      v16 = (char)v15;
    }
    ++v10;
  }
  return v15;
}
