/*
 * XREFs of ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0182A44
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C0102820 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003628 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01000C0 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedAllocation(DXGDEVICE *this, struct _VIDMM_MULTI_ALLOC **a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // edx
  struct DXGALLOCATION *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = (struct DXGALLOCATION *)a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 439LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( ((_DWORD)a2[9] & 0x800) != 0 )
  {
    VIDMM_EXPORT::VidMmUnpinAllocation(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
      a2[3]);
    *((_DWORD *)a2 + 18) &= ~0x800u;
  }
  v7 = *((_DWORD *)a2[6] + 1);
  if ( (v7 & 0x2000) != 0 )
  {
    if ( a2[3] )
      DXGDEVICE::UnpinDirectFlipAllocation(this, (v7 >> 6) & 0xF, v5, &v8, 0LL);
  }
}
