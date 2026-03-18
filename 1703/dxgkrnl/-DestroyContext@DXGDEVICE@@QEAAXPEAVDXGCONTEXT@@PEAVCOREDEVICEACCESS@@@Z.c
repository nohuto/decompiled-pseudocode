/*
 * XREFs of ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20
 * Callers:
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0004C60 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C0013D3C (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0014ABC (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C008A0B0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z @ 0x1C0093F70 (-DxgkCddGdiCommand@@YAJPEAU_D3DKMT_RENDER@@@Z.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00949F0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C0096940 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00C0C88 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00FB2EC (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BB470 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00BC120 (--1DXGCONTEXT@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyContext(PERESOURCE *this, struct DXGCONTEXT *a2, PERESOURCE **a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  struct _KTHREAD **v16; // rdi
  struct DXGCONTEXT **v17; // rcx
  struct DXGCONTEXT **v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[8]; // [rsp+20h] [rbp-28h] BYREF
  struct _KTHREAD **v24; // [rsp+28h] [rbp-20h]
  int v25; // [rsp+30h] [rbp-18h]

  if ( !a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v19 + 24) = 1751LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v20 + 24) = 1752LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this[2]->OwnerTable) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v21 + 24) = 1753LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v15 = this + 38 == 0LL;
  v16 = (struct _KTHREAD **)(this + 38);
  v24 = v16;
  if ( !v15 && v16[1] == KeGetCurrentThread() )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v22 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v22);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)v16);
  v17 = *(struct DXGCONTEXT ***)a2;
  v18 = (struct DXGCONTEXT **)*((_QWORD *)a2 + 1);
  v25 = 2;
  if ( v17[1] != a2 || *v18 != a2 )
    __fastfail(3u);
  *v18 = (struct DXGCONTEXT *)v17;
  v17[1] = (struct DXGCONTEXT *)v18;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  DXGCONTEXT::DestroyContext(a2, a3);
  DXGCONTEXT::~DXGCONTEXT(a2);
  ExFreePoolWithTag(a2, 0);
}
