/*
 * XREFs of ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2B0C
 * Callers:
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C001B6B0 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0024A9C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C00CE9F0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C00DC610 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00FE700 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01A2618 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01CF160 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C00330AC (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2990 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyHwQueue(DXGCONTEXT *this, struct DXGHWQUEUE *a2, PERESOURCE **a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct DXGHWQUEUE *v13; // rcx
  struct DXGHWQUEUE **v14; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 316LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v7 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 104)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 317LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 318LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 321LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGHWQUEUE::DestroyCoreState(a2, a3);
  v13 = *(struct DXGHWQUEUE **)a2;
  if ( *(struct DXGHWQUEUE **)(*(_QWORD *)a2 + 8LL) != a2
    || (v14 = (struct DXGHWQUEUE **)*((_QWORD *)a2 + 1), *v14 != a2) )
  {
    __fastfail(3u);
  }
  *v14 = v13;
  *((_QWORD *)v13 + 1) = v14;
  DXGHWQUEUE::`scalar deleting destructor'(a2);
}
