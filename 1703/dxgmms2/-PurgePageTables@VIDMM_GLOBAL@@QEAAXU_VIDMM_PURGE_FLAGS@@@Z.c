/*
 * XREFs of ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C006F018
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002508 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0013C9C (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C006EE60 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgePageTables(__int64 a1, char a2)
{
  __int64 i; // rbp
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  _QWORD *v7; // rdx
  CVirtualAddressAllocator ***v8; // r9
  CVirtualAddressAllocator ***v9; // r8
  CVirtualAddressAllocator *j; // r14
  CVirtualAddressAllocator *v11; // r14
  CVirtualAddressAllocator *v12; // [rsp+20h] [rbp-28h] BYREF
  CVirtualAddressAllocator **v13; // [rsp+28h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 40872) & 1) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 6416); *(_BYTE *)(v5 + 437) &= ~1u )
    {
      v5 = *(_QWORD *)(a1 + 40168) + 472LL * (unsigned int)i;
      v6 = *(_BYTE *)(v5 + 436);
      if ( (v6 & 1) != 0 && ((a2 & 1) == 0 || v6 >= 0x80u) )
      {
        v13 = &v12;
        v12 = (CVirtualAddressAllocator *)&v12;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 40968));
        v7 = *(_QWORD **)(a1 + 41008);
        if ( v7 != (_QWORD *)(a1 + 41008) )
        {
          v8 = (CVirtualAddressAllocator ***)v13;
          do
          {
            v9 = (CVirtualAddressAllocator ***)v7[55];
            if ( v9 && v7[2] != *(_QWORD *)(a1 + 40320) )
            {
              if ( *v8 != &v12 )
                __fastfail(3u);
              v9[1] = (CVirtualAddressAllocator **)v8;
              *v9 = &v12;
              *v8 = (CVirtualAddressAllocator **)v9;
              v8 = v9;
              v13 = (CVirtualAddressAllocator **)v9;
            }
            v7 = (_QWORD *)*v7;
          }
          while ( v7 != (_QWORD *)(a1 + 41008) );
        }
        ExReleasePushLockSharedEx(a1 + 40968, 0LL);
        KeLeaveCriticalRegion();
        for ( j = v12; j != (CVirtualAddressAllocator *)&v12; j = *(CVirtualAddressAllocator **)j )
          CVirtualAddressAllocator::EvictRootPageTable(j, i, a2 & 1);
        *(_BYTE *)(v5 + 436) |= 0x10u;
      }
      v11 = *(CVirtualAddressAllocator **)(a1 + 8 * i + 40352);
      if ( v11 && ((a2 & 1) == 0 || (*(_BYTE *)(v5 + 437) & 1) != 0) )
      {
        VIDMM_GLOBAL::FlushPagingBuffer((VIDMM_GLOBAL *)a1, 1u, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)a1, 0xFFFFFFFF);
        *(_BYTE *)(a1 + 40872) |= 8u;
        CVirtualAddressAllocator::EvictRootPageTable(v11, i, a2 & 1);
        *(_BYTE *)(a1 + 40872) &= ~8u;
        *(_BYTE *)(v5 + 436) |= 0x20u;
      }
      *(_BYTE *)(v5 + 436) &= ~0x80u;
      i = (unsigned int)(i + 1);
    }
  }
}
