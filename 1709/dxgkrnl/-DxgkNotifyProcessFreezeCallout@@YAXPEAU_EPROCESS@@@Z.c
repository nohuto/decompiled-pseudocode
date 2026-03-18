/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00F7360
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0088D0C (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS, __int64 a2)
{
  __int64 ProcessDxgProcess; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edi
  struct VMBCHANNEL__ **v8; // rcx
  struct _MDL *v9; // [rsp+28h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]
  int v12; // [rsp+3Ch] [rbp-4Ch]
  int v13; // [rsp+40h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS, a2);
  if ( ProcessDxgProcess )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v7 = *(_DWORD *)(ProcessDxgProcess + 424);
    if ( v7 )
    {
      v10 = 0LL;
      v11 = v7;
      v8 = (struct VMBCHANNEL__ **)*((_QWORD *)DXGGLOBAL::GetGlobal(v5) + 142);
      v12 = 1;
      v13 = 55;
      VmBusSendSyncMessage(*v8, (struct DXGKVMB_COMMAND_BASE *)&v10, 0x18u, 0LL, 0LL, v9);
    }
    DXGPROCESS::NotifyProcessFreeze((struct DXGFASTMUTEX **)ProcessDxgProcess, v4, v6);
    KeUnstackDetachProcess(&ApcState);
  }
}
