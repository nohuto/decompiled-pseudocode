/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x1408293B0
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003FDB0 (MiGetNextPageTable.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiAddLoaderHalIoMappings(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 NextPageTable; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 PteShadow; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  int v11; // r9d
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  NextPageTable = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( NextPageTable <= v4 )
  {
    NextPageTable = MiGetNextPageTable(NextPageTable, v4, 0LL, 0x11u, 1u, &v13);
    if ( !NextPageTable )
      break;
    if ( !v13 )
    {
      while ( 1 )
      {
        PteShadow = *(_QWORD *)NextPageTable;
        if ( NextPageTable >= 0xFFFFF6FB7DBED000uLL && NextPageTable <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v14 = PteShadow;
        if ( (PteShadow & 1) != 0 )
        {
          v8 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v14);
          if ( !MiIsPfnInline(v8) )
          {
            if ( ((v10 >> 4) & 1) != 0 || (v10 & 8) == 0 )
              v11 = ((v10 >> 4) & 1) == 0;
            else
              v11 = 2;
            MiReferenceIoPages(1, v9, 1LL, v11, 0LL, 0LL);
          }
        }
        NextPageTable += 8LL;
        if ( NextPageTable > v4 )
          return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( (NextPageTable & 0xFFF) == 0 )
          goto LABEL_22;
      }
    }
    v5 = v13;
    do
    {
      NextPageTable = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v5;
    }
    while ( v5 );
    NextPageTable += 8LL;
    if ( v13 )
    {
      v6 = v13;
      do
      {
        NextPageTable = (__int64)(NextPageTable << 25) >> 16;
        --v6;
      }
      while ( v6 );
    }
LABEL_22:
    ;
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
