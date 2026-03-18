/*
 * XREFs of ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F27FC
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C000E570 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C018E4B0 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192290 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192E20 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C01A932C (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002A70 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01B8E4C (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGPROCESS::DestroyDxgProcess(struct DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rcx
  struct DXGPROCESS **v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _BYTE v12[16]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v14[10]; // [rsp+40h] [rbp-39h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp+17h] BYREF

  if ( this )
  {
    memset(v14, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v14[1]);
    v2 = (struct _KPROCESS *)*((_QWORD *)this + 6);
    v14[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v14[3]) = 36;
    LOBYTE(v14[6]) = -1;
    KeStackAttachProcess(v2, &ApcState);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v3) + 366) )
      DXGPROCESS::ApplyCsFunction(this, 3LL);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, *((struct DXGFASTMUTEX *const *)this + 13));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    DXGPROCESS::Destroy(this, (struct _ERESOURCE *)v14);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
    KeUnstackDetachProcess(&ApcState);
    if ( (*((_BYTE *)this + 307) & 8) == 0 )
      PsSetProcessDxgProcess(*((_QWORD *)this + 6), 0LL);
    Global = DXGGLOBAL::GetGlobal(v4);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGGLOBAL *)((char *)Global + 200));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    DXGGLOBAL::GetGlobal(v6);
    v7 = *(struct DXGPROCESS **)this;
    if ( *(struct DXGPROCESS **)(*(_QWORD *)this + 8LL) != this
      || (v8 = (struct DXGPROCESS **)*((_QWORD *)this + 1), *v8 != this) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    if ( (*((_BYTE *)this + 307) & 8) != 0 )
    {
      v9 = (_QWORD *)((char *)this + 392);
      v10 = *((_QWORD *)this + 49);
      if ( *(struct DXGPROCESS **)(v10 + 8) != (struct DXGPROCESS *)((char *)this + 392)
        || (v11 = (_QWORD *)*((_QWORD *)this + 50), (_QWORD *)*v11 != v9) )
      {
        __fastfail(3u);
      }
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      *((_QWORD *)this + 50) = 0LL;
      *v9 = 0LL;
    }
    DXGPROCESS::ReleaseReference((__int64 *)this);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    if ( v12[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
}
