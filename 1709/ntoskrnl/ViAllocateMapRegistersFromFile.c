/*
 * XREFs of ViAllocateMapRegistersFromFile @ 0x1407AD17C
 * Callers:
 *     ViMapDoubleBuffer @ 0x1407AE6CC (ViMapDoubleBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1407AE2E0 (ViHalPreprocessOptions.c)
 *     ViTagBuffer @ 0x1407AEFB0 (ViTagBuffer.c)
 */

__int64 __fastcall ViAllocateMapRegistersFromFile(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4, _DWORD *a5)
{
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // r15
  unsigned int v8; // esi
  ULONG_PTR v9; // r13
  int v10; // ebp
  unsigned int v11; // r12d
  unsigned __int64 v12; // rdi
  const void *v13; // rax
  __int64 *v14; // r14
  __int64 *v15; // r15
  const void *v16; // r12
  unsigned __int64 v17; // rax
  unsigned int v18; // ecx
  ULONG_PTR *v19; // rbx
  int v20; // r11d
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
            byte_140359A30,
            "Driver is trying to map an address range(%p-%p) that is already mapped    at %p",
            (const void *)0x1D,
            (const void *)v9,
            v16);
          VfReportIssueWithOptions(0xE6u, 0x1DuLL, v9, (ULONG_PTR)v16, *v14, byte_140359A30);
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
    ViHalPreprocessOptions(byte_140359A34, "Map registers needed: %x available: %x", 0x10000000, 2);
    VfReportIssueWithOptions(0xE6u, 0LL, 2uLL, (unsigned int)v12, v11, byte_140359A34);
  }
  else
  {
LABEL_16:
    v19 = (ULONG_PTR *)&v6[-4 * (unsigned int)v12];
    *a5 = v10 - v12;
    if ( (_DWORD)v12 )
    {
      v20 = 4095;
      v21 = a3;
      v22 = 2 - (a4 != 0);
      do
      {
        *v19 = v9;
        v19[3] = v9;
        *((_DWORD *)v19 + 3) = v22;
        v23 = v21;
        if ( 4096 - (v20 & (unsigned int)v9) < v21 )
          v23 = 4096 - (v20 & v9);
        *((_DWORD *)v19 + 2) = v23;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
        ViTagBuffer((v20 & (unsigned int)v9) + v19[2] + 4096, *((unsigned int *)v19 + 2), 3LL);
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
