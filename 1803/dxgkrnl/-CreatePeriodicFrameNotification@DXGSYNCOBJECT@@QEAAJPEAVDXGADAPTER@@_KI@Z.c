/*
 * XREFs of ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z @ 0x1C01C0308
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECT::CreatePeriodicFrameNotification(
        DXGSYNCOBJECT *this,
        struct DXGADAPTER *a2,
        __int64 a3,
        unsigned int a4)
{
  struct ADAPTER_RENDER *v8; // rdx
  __int64 v9; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v11; // r10

  DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
  v8 = (struct ADAPTER_RENDER *)*((_QWORD *)a2 + 308);
  v9 = *((_QWORD *)v8 + 66);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(this, v8);
  LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT *, __int64, _QWORD, char *, char *))(*(_QWORD *)(v11 + 8) + 952LL))(
                  v9,
                  VidSchSyncObject,
                  a3,
                  a4,
                  (char *)this + 168,
                  (char *)this + 160);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
  return (unsigned int)v9;
}
