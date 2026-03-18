/*
 * XREFs of ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0001FE0 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C002AD2C (-SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C002B840 (-VmBusChannelClosed@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?VmBusCreateProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C800 (-VmBusCreateProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D110 (-VmBusDestroyProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019486C (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ?NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ @ 0x1C01A1E9C (-NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0006C40 (-ReleaseReference@DXGPROCESS@@AEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006C7C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

void __fastcall DXGPROCESS::DestroyDxgProcess(struct DXGPROCESS *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGPROCESS *v20; // rcx
  struct DXGPROCESS **v21; // rax
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  unsigned int **v36; // rdi
  unsigned int *v37; // rsi
  __int64 v38; // rax
  struct _KTHREAD **v39; // [rsp+20h] [rbp-29h] BYREF
  char v40; // [rsp+28h] [rbp-21h]
  __int64 v41; // [rsp+30h] [rbp-19h] BYREF
  char v42; // [rsp+38h] [rbp-11h]
  _QWORD v43[8]; // [rsp+40h] [rbp-9h] BYREF

  if ( this )
  {
    memset(v43, 0, sizeof(v43));
    EtwActivityIdControl(3u, (LPGUID)&v43[1]);
    v43[7] = MEMORY[0xFFFFF78000000014];
    v6 = *((_QWORD *)this + 10);
    LODWORD(v43[3]) = 36;
    v41 = v6;
    v42 = 0;
    if ( !v6 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
      *(_QWORD *)(v29 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v29);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(v41 + 8) == CurrentThread )
    {
      v30 = WdLogNewEntry5_WdAssertion(CurrentThread, v2, v4, v5);
      *(_QWORD *)(v30 + 24) = 460LL;
      WdLogEvent5_WdAssertion(v30);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v41);
    DXGPROCESS::Destroy(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v43);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41, v8, v9, v10);
    if ( (*((_BYTE *)this + 275) & 4) == 0 )
      PsSetProcessDxgProcess(*((_QWORD *)this + 6), 0LL);
    Global = DXGGLOBAL::GetGlobal();
    v40 = 0;
    v39 = (struct _KTHREAD **)((char *)Global + 200);
    if ( Global == (struct DXGGLOBAL *)-200LL )
    {
      v31 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v31 + 24) = 453LL;
      WdLogEvent5_WdAssertion(v31);
    }
    v16 = KeGetCurrentThread();
    if ( v39[1] == v16 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v16, v12, v14, v15);
      *(_QWORD *)(v32 + 24) = 460LL;
      WdLogEvent5_WdAssertion(v32);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v39);
    DXGGLOBAL::GetGlobal();
    v20 = *(struct DXGPROCESS **)this;
    v21 = (struct DXGPROCESS **)*((_QWORD *)this + 1);
    if ( *(struct DXGPROCESS **)(*(_QWORD *)this + 8LL) != this || *v21 != this )
      __fastfail(3u);
    *v21 = v20;
    *((_QWORD *)v20 + 1) = v21;
    v22 = *((_BYTE *)this + 275);
    if ( (v22 & 4) != 0 )
    {
      v33 = (_QWORD *)((char *)this + 352);
      v34 = *((_QWORD *)this + 44);
      v35 = (_QWORD *)*((_QWORD *)this + 45);
      if ( *(struct DXGPROCESS **)(v34 + 8) != (struct DXGPROCESS *)((char *)this + 352) || (_QWORD *)*v35 != v33 )
        __fastfail(3u);
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      *((_QWORD *)this + 45) = 0LL;
      *v33 = 0LL;
      v17 = *((unsigned int *)this + 97);
      if ( (_DWORD)v17 )
      {
        DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 50), v17);
        *((_DWORD *)this + 97) = 0;
      }
    }
    else if ( (v22 & 2) != 0 )
    {
      v36 = (unsigned int **)((char *)this + 432);
      while ( *v36 != (unsigned int *)v36 )
      {
        v37 = *v36;
        v38 = *(_QWORD *)*v36;
        if ( *((unsigned int ***)*v36 + 1) != v36 || *(unsigned int **)(v38 + 8) != v37 )
          __fastfail(3u);
        *v36 = (unsigned int *)v38;
        *(_QWORD *)(v38 + 8) = v36;
        DXGPROCESS::FreeHandleSafe(this, v37[6]);
        ExFreePoolWithTag(v37, 0);
      }
    }
    DXGPROCESS::ReleaseReference(this, v17, v18, v19);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v39, v23, v24, v25);
    if ( v40 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v39, v26, v27, v28);
    if ( v42 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41, v26, v27, v28);
  }
}
