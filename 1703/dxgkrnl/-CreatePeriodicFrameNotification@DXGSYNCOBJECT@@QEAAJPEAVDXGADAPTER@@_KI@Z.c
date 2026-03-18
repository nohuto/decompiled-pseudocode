/*
 * XREFs of ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z @ 0x1C01A5718
 * Callers:
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00FC810 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00D8C70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
  v8 = (struct ADAPTER_RENDER *)*((_QWORD *)a2 + 286);
  v9 = *((_QWORD *)v8 + 52);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(this, v8);
  LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT *, __int64, _QWORD, char *, char *))(*(_QWORD *)(v11 + 8) + 840LL))(
                  v9,
                  VidSchSyncObject,
                  a3,
                  a4,
                  (char *)this + 144,
                  (char *)this + 136);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4, v12, v13, v14);
  return (unsigned int)v9;
}
