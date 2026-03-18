/*
 * XREFs of ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00A2ECC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D84 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AB9D8 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RecommitGpuVirtualAddresses(VIDMM_GLOBAL *this, unsigned __int64 a2)
{
  char *v3; // r14
  __int64 v5; // rdi
  _QWORD *v6; // r8
  CVirtualAddressAllocator ***v7; // rdx
  CVirtualAddressAllocator ***v8; // rcx
  CVirtualAddressAllocator *i; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  CVirtualAddressAllocator *v15; // [rsp+20h] [rbp-10h] BYREF
  CVirtualAddressAllocator **v16; // [rsp+28h] [rbp-8h]
  struct VIDMM_ALLOC *v17; // [rsp+50h] [rbp+20h] BYREF

  v16 = &v15;
  v3 = (char *)this + 41544;
  v15 = (CVirtualAddressAllocator *)&v15;
  LODWORD(v5) = 0;
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 41544));
  v6 = (_QWORD *)*((_QWORD *)this + 5198);
  if ( v6 != (_QWORD *)((char *)this + 41584) )
  {
    v7 = (CVirtualAddressAllocator ***)v16;
    do
    {
      v8 = (CVirtualAddressAllocator ***)v6[59];
      if ( v8 && v6[2] != *((_QWORD *)this + 5112) )
      {
        if ( *v7 != &v15 )
          __fastfail(3u);
        v8[1] = (CVirtualAddressAllocator **)v7;
        *v8 = &v15;
        *v7 = (CVirtualAddressAllocator **)v8;
        v7 = v8;
        v16 = (CVirtualAddressAllocator **)v8;
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)((char *)this + 41584) );
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  for ( i = v15; i != (CVirtualAddressAllocator *)&v15; i = *(CVirtualAddressAllocator **)i )
  {
    v17 = 0LL;
    v10 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(i, a2, &v17);
    v5 = v10;
    if ( v10 < 0 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v13 + 24) = a2;
      *(_QWORD *)(v13 + 32) = v5;
      WdLogEvent5_WdAssertion(v13);
      return (unsigned int)v5;
    }
  }
  return (unsigned int)v5;
}
