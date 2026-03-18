/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00F7400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C0088E60 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edi
  struct VMBCHANNEL__ **v11; // rcx
  struct _MDL *v12; // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+38h] [rbp-50h]
  int v15; // [rsp+3Ch] [rbp-4Ch]
  int v16; // [rsp+40h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)PROCESS, &EventProfilerEnter, a3, 2096);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS, a2);
  if ( ProcessDxgProcess )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v10 = *(_DWORD *)(ProcessDxgProcess + 424);
    if ( v10 )
    {
      v13 = 0LL;
      v14 = v10;
      v11 = (struct VMBCHANNEL__ **)*((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 142);
      v15 = 1;
      v16 = 56;
      VmBusSendSyncMessage(*v11, (struct DXGKVMB_COMMAND_BASE *)&v13, 0x18u, 0LL, 0LL, v12);
    }
    DXGPROCESS::NotifyProcessThaw((struct DXGFASTMUTEX *const *)ProcessDxgProcess, v7, v9);
    KeUnstackDetachProcess(&ApcState);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, &EventProfilerExit, v6, 2096);
}
