/*
 * XREFs of MmFreePoolMemory @ 0x140009F80
 * Callers:
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     MiReturnNonPagedPoolPde @ 0x1400DC5A0 (MiReturnNonPagedPoolPde.c)
 *     MiFreePoolPages @ 0x1400E1834 (MiFreePoolPages.c)
 *     RtlpHpEnvFreeVA @ 0x140297764 (RtlpHpEnvFreeVA.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14000A140 (MiDeterminePoolType.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiClearNonPagedPtes @ 0x1401354A0 (MiClearNonPagedPtes.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MmFreePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2)
{
  ULONG_PTR v2; // r15
  int v3; // r12d
  ULONG_PTR v4; // r13
  ULONG_PTR v5; // rsi
  int v6; // eax
  unsigned int v7; // r8d
  char v8; // bl
  unsigned int v9; // r14d
  int v10; // edi
  unsigned int v11; // ebp
  unsigned __int16 *v12; // rbx
  _QWORD v14[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a2;
  v3 = 0;
  v4 = *a1;
  v5 = ((*a2 & 0xFFF) != 0) + (*a2 >> 12);
  v6 = MiDeterminePoolType(*a1);
  v8 = v6;
  if ( v6 == 32 )
    KeBugCheckEx(0x1Au, 0x5305uLL, v4, v2, v7);
  if ( v6 == 33 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 6;
    if ( !v6 )
      v9 = 5;
  }
  v10 = v7 | 0x4000;
  if ( (v7 & 0x8000) == 0 )
    v10 = v7;
  v11 = v10;
  if ( (v10 & 0x4000) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      memset(v14, 0, 0x20uLL);
      if ( (v8 & 0x20) != 0 )
        v12 = (unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
      else
        v12 = (unsigned __int16 *)&unk_1403CC8E0;
      if ( (v10 & 0x40000000) != 0 )
        v3 = 1;
      MiDeleteSystemPagableVm(v12, 0LL, ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v5, v3, v14);
      MiReturnCommit(*(_QWORD *)(qword_1403CBD88 + 8LL * v12[87]), v14[3] - v14[1]);
    }
    else
    {
      if ( (v10 & 0x40000000) == 0 && MmProtectFreedNonPagedPool )
        v11 = v10 | 0x40000000;
      MiClearNonPagedPtes(v4, v5, v11);
    }
  }
  if ( (v11 & 0x8000) != 0 )
    MiReturnSystemVa(v4, v2 + v4, v9, 0LL);
  return 0LL;
}
