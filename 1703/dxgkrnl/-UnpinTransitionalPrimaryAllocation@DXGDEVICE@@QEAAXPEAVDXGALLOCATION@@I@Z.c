/*
 * XREFs of ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C0189578
 * Callers:
 *     ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0170BD4 (-DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PE.c)
 * Callees:
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C0005134 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000DD94 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinTransitionalPrimaryAllocation(
        struct _KTHREAD **this,
        struct _VIDMM_MULTI_ALLOC **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r8d
  __int64 v22; // rcx
  struct _KTHREAD *v23; // r9
  _BYTE v24[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (unsigned int)a3;
  if ( (unsigned int)a3 >= *((_DWORD *)this + 452) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 3631LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 3632LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[225]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 3633LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = 3634LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary((DXGDEVICE *)this, v5) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, this + 32, v19, v20);
    v21 = *((_DWORD *)this + v5 + 194);
    v22 = 0LL;
    if ( v21 )
    {
      v23 = this[v5 + 81];
      while ( *((struct _VIDMM_MULTI_ALLOC ***)v23 + v22) != a2 )
      {
        v22 = (unsigned int)(v22 + 1);
        if ( (unsigned int)v22 >= v21 )
          goto LABEL_16;
      }
      *((_QWORD *)v23 + v22) = 0LL;
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *((VIDMM_EXPORT **)this[2] + 54),
        *((struct VIDMM_GLOBAL **)this[2] + 55),
        a2[3]);
    }
LABEL_16:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  }
}
