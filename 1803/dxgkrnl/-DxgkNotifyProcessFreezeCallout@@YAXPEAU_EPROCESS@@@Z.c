/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D2BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00F8238 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS)
{
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v3; // rbx
  __int64 v4; // rcx
  int v5; // edi
  struct DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ **v7; // rcx
  struct _MDL *v8; // [rsp+28h] [rbp-21h]
  _BYTE v9[16]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v10[16]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v11; // [rsp+50h] [rbp+7h] BYREF
  int v12; // [rsp+58h] [rbp+Fh]
  int v13; // [rsp+5Ch] [rbp+13h]
  int v14; // [rsp+60h] [rbp+17h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp+1Fh] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v9);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v3 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 0x20) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 112), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
    KeStackAttachProcess(PROCESS, &ApcState);
    v5 = *((_DWORD *)v3 + 98);
    if ( v5 )
    {
      Global = DXGGLOBAL::GetGlobal(v4);
      v11 = 0LL;
      v12 = v5;
      v7 = (struct VMBCHANNEL__ **)*((_QWORD *)Global + 152);
      v13 = 1;
      v14 = 58;
      VmBusSendSyncMessage(*v7, (struct DXGKVMB_COMMAND_BASE *)&v11, 0x18u, 0LL, 0LL, v8);
    }
    DXGPROCESS::NotifyProcessFreeze(v3);
    KeUnstackDetachProcess(&ApcState);
    if ( v10[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}
