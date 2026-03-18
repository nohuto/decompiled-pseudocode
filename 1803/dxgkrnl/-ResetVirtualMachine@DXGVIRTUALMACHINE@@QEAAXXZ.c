/*
 * XREFs of ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B764C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B6688 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C0001D44 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0028BF8 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C017AE24 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     UnmapGpadl @ 0x1C0187810 (UnmapGpadl.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B748C (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C01B7D0C (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::ResetVirtualMachine(DXGVIRTUALMACHINE *this)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  struct DXGPROCESS *v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVIRTUALMACHINE::PauseVmBusChannels((struct _KTHREAD **)this);
  KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)this + 7) + 56LL), &ApcState);
  DXGVIRTUALMACHINE::SetVailObject(this, 0LL);
  v2 = (_QWORD *)((char *)this + 24);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    v6 = 0LL;
    v4 = (struct DXGPROCESS *)(v3 - 59);
    if ( v4 )
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v6, v4);
    DXGPROCESS::DestroyDxgProcess(v4);
    CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v6);
  }
  KeUnstackDetachProcess(&ApcState);
  v5 = *((_DWORD *)this + 52);
  if ( v5 )
  {
    UnmapGpadl(*((_QWORD *)this + 7), v5, 4096LL);
    *((_DWORD *)this + 52) = 0;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((struct VMBCHANNEL__ **)this + 11);
}
