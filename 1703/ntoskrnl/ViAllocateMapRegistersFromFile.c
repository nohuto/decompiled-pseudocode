/*
 * XREFs of ViAllocateMapRegistersFromFile @ 0x14076B4AC
 * Callers:
 *     ViMapDoubleBuffer @ 0x14076CA00 (ViMapDoubleBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14076C614 (ViHalPreprocessOptions.c)
 *     ViTagBuffer @ 0x14076D2F0 (ViTagBuffer.c)
 */

__int64 __fastcall ViAllocateMapRegistersFromFile(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        _DWORD *a5)
{
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // r12
  unsigned int v8; // esi
  unsigned __int64 v9; // r15
  int v10; // ebp
  unsigned int v11; // r13d
  unsigned __int64 v12; // rdi
  const void *v13; // rax
  __int64 *v14; // r14
  __int64 *v15; // r12
  const void *v16; // r13
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned __int64 *v19; // rbx
  __int64 v20; // r11
  unsigned int v21; // r10d
  int v22; // r9d
  unsigned int v23; // eax
  int v24; // r10d
  KSPIN_LOCK *SpinLock; // [rsp+40h] [rbp-58h]
  KIRQL v28; // [rsp+A8h] [rbp+10h]

  v5 = a3;
  v6 = (__int64 *)(a1 + 88);
  v7 = a1;
  v8 = 0;
  v9 = a2;
  v10 = 0;
  v11 = 0;
  v12 = ((a2 & 0xFFF) + a3 + 4095LL) >> 12;
  SpinLock = (KSPIN_LOCK *)(a1 + 80);
  v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( *(_DWORD *)(v7 + 32) )
  {
    v13 = (const void *)(v5 + v9);
    v14 = v6;
    v15 = &v6[4 * *(unsigned int *)(v7 + 28)];
    if ( v6 < v15 )
    {
      v16 = v13;
      do
      {
        v17 = *v14;
        if ( *v14 && v17 >= v9 && v17 < (unsigned __int64)v16 )
        {
          ViHalPreprocessOptions(
            byte_14034139C,
            "Driver is trying to map an address range(%p-%p) that is already mapped    at %p",
            (const void *)0x1D,
            (const void *)v9,
            v16);
          VfReportIssueWithOptions(0xE6u, 29, v9, (int)v16, *v14, byte_14034139C);
        }
        v14 += 4;
      }
      while ( v14 < v15 );
      v10 = 0;
      v11 = 0;
    }
    v7 = a1;
  }
  if ( (_DWORD)v12 )
  {
    while ( v10 != *(_DWORD *)(v7 + 28) )
    {
      v18 = v11 + 1;
      v11 = 0;
      if ( !*v6 )
        v11 = v18;
      v6 += 4;
      ++v10;
      if ( v11 >= (unsigned int)v12 )
        goto LABEL_16;
    }
    ViHalPreprocessOptions(byte_1403413A0, "Map registers needed: %x available: %x", 0x10000000, 2);
    VfReportIssueWithOptions(0xE6u, 0, 2, v12, v11, byte_1403413A0);
  }
  else
  {
LABEL_16:
    v19 = (unsigned __int64 *)&v6[-4 * (unsigned int)v12];
    *a5 = v10 - v12;
    if ( (_DWORD)v12 )
    {
      v20 = 4095LL;
      v21 = a3;
      v22 = 2 - (a4 != 0);
      do
      {
        *v19 = v9;
        v19[3] = v9;
        *((_DWORD *)v19 + 3) = v22;
        v23 = v21;
        if ( 4096 - ((unsigned int)v20 & (unsigned int)v9) < v21 )
          v23 = 4096 - (v20 & v9);
        *((_DWORD *)v19 + 2) = v23;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
        ViTagBuffer(v19[2] + 4096 + (v20 & v9), *((unsigned int *)v19 + 2), 3LL);
        v21 = v24 - *((_DWORD *)v19 + 2);
        v19 += 4;
        v9 = (v9 + 4096) & 0xFFFFFFFFFFFFF000uLL;
        LODWORD(v12) = v12 - 1;
      }
      while ( (_DWORD)v12 );
    }
    v8 = 1;
  }
  KxReleaseSpinLock(SpinLock);
  __writecr8(v28);
  return v8;
}
