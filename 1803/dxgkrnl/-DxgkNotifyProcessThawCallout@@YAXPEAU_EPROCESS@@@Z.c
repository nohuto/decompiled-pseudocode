/*
 * XREFs of ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00D2A80
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C00F837C (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

void __fastcall DxgkNotifyProcessThawCallout(PRKPROCESS PROCESS, __int64 a2, __int64 a3)
{
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v5; // rbx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGGLOBAL *Global; // rax
  struct VMBCHANNEL__ **v11; // rcx
  struct _MDL *v12; // [rsp+28h] [rbp-31h]
  _BYTE v13[16]; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+40h] [rbp-19h] BYREF
  __int64 v15; // [rsp+48h] [rbp-11h]
  _BYTE v16[16]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v17; // [rsp+60h] [rbp+7h] BYREF
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  int v20; // [rsp+70h] [rbp+17h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp+1Fh] BYREF

  v15 = 0LL;
  v14 = 2096;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)PROCESS, &EventProfilerEnter, a3, 2096);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2096);
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v13);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v5 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 0x20) == 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 112), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
    KeStackAttachProcess(PROCESS, &ApcState);
    v7 = *((_DWORD *)v5 + 98);
    if ( v7 )
    {
      Global = DXGGLOBAL::GetGlobal(v6);
      v17 = 0LL;
      v18 = v7;
      v11 = (struct VMBCHANNEL__ **)*((_QWORD *)Global + 152);
      v19 = 1;
      v20 = 59;
      VmBusSendSyncMessage(*v11, (struct DXGKVMB_COMMAND_BASE *)&v17, 0x18u, 0LL, 0LL, v12);
    }
    DXGPROCESS::NotifyProcessThaw(v5);
    KeUnstackDetachProcess(&ApcState);
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, v14);
}
