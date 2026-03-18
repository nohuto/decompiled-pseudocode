/*
 * XREFs of ?NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ @ 0x1C01A1E9C
 * Callers:
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C002AB24 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001BB8 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00232E0 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C002A150 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DXGPROCESS::NotifyResetVirtualGpu(PRKPROCESS *this)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  struct DXGPROCESS *v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  KeStackAttachProcess(this[6], &ApcState);
  v2 = this + 44;
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    v5 = 0LL;
    v4 = (struct DXGPROCESS *)(v3 - 44);
    if ( v4 )
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v5, v4);
    DXGPROCESS::DestroyDxgProcess(v4);
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v5);
  }
  KeUnstackDetachProcess(&ApcState);
  DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel(this + 51);
}
