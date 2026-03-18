/*
 * XREFs of ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0009870 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0179140 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017E080 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EF60 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019C618 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C01B764C (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C000BE20 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C001637C (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C003446C (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01B61A0 (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B74FC (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B7558 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C01B7CA0 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E687C (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::DestroyDxgProcess(struct DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  struct _KTHREAD **v8; // rdi
  struct DXGVAILOBJECT *v9; // rsi
  __int64 v10; // rdi
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v12; // rdi
  struct _KTHREAD **v13; // rdi
  __int64 v14; // rdi
  void *v15; // rcx
  void *v16; // rcx
  _BYTE v17[16]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v18[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v23[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v24[10]; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF

  if ( this )
  {
    memset(v24, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v24[1]);
    v2 = (struct _KPROCESS *)*((_QWORD *)this + 7);
    v24[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v24[3]) = 36;
    LOBYTE(v24[6]) = -1;
    KeStackAttachProcess(v2, &ApcState);
    if ( (*((_BYTE *)this + 323) & 4) != 0 )
    {
      v8 = (struct _KTHREAD **)*((_QWORD *)this + 57);
      if ( v8 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v23, v8 + 8);
        v9 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v8);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
        if ( v9 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
          v10 = *((_QWORD *)v9 + 10);
          if ( v10 )
          {
            if ( !(unsigned __int8)PsGetProcessExitProcessCalled(*((_QWORD *)v9 + 10)) )
            {
              ProcessDxgProcess = PsGetProcessDxgProcess(v10);
              v12 = (DXGPROCESS *)ProcessDxgProcess;
              if ( ProcessDxgProcess )
              {
                if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 0x20) == 0 )
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX(
                    (DXGAUTOMUTEX *)v19,
                    *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 112),
                    0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
                  DXGPROCESS::SetVailObject(v12, 0LL);
                  if ( v19[8] )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
                }
              }
            }
          }
          DxgkCompositionObject::Release(v9);
          if ( v20[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
        }
      }
    }
    else if ( *((_QWORD *)this + 55) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, *((struct DXGFASTMUTEX *const *)this + 14), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      v13 = (struct _KTHREAD **)DXGPROCESS::ReferenceVailObject(this);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
      if ( v17[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
      if ( v13 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(v13 + 4), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
        DXGVAILOBJECT::DisableVmBusChannel(v13);
        DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v13);
        if ( v21[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
        DxgkCompositionObject::Release((DxgkCompositionObject *)v13);
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, *((struct DXGFASTMUTEX *const *)this + 14), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v3) + 398) )
      DXGPROCESS::ApplyCsFunction(this, 3LL);
    DXGPROCESS::Destroy(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v24, 0);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
    KeUnstackDetachProcess(&ApcState);
    if ( (*((_BYTE *)this + 323) & 8) == 0 )
      PsSetProcessDxgProcess(*((_QWORD *)this + 7), 0LL);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v22);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    DXGGLOBAL::GetGlobal(v4);
    v5 = (__int64 *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v6 = (__int64 *)*v5;
    if ( *(__int64 **)(*v5 + 8) != v5
      || (v7 = *(__int64 ***)((((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64))
                            + 8),
          *v7 != v5) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    v6[1] = (__int64)v7;
    if ( (*((_BYTE *)this + 323) & 4) != 0 )
    {
      v14 = *((_QWORD *)this + 57);
      v15 = *(void **)(v14 + 176);
      if ( v15 )
      {
        ObfDereferenceObject(v15);
        *(_QWORD *)(v14 + 176) = 0LL;
      }
      v16 = *(void **)(v14 + 184);
      if ( v16 )
      {
        ObfDereferenceObject(v16);
        *(_QWORD *)(v14 + 184) = 0LL;
      }
    }
    DXGPROCESS::ReleaseReference(this);
    if ( v22[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
}
