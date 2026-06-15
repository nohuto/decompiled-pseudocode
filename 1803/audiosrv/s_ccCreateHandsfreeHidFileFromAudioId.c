/*
 * XREFs of s_ccCreateHandsfreeHidFileFromAudioId @ 0x18009FC40
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180097FD0 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x18009EDF0 (-AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z.c)
 *     ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18009F038 (-FindSupportedHidCollection@@YAJPEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU.c)
 *     ?GetHidCollectionsInContainer@@YAJU_GUID@@PEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@@Z @ 0x18009F168 (-GetHidCollectionsInContainer@@YAJU_GUID@@PEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@@.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800A7514 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 */

__int64 __fastcall s_ccCreateHandsfreeHidFileFromAudioId(
        RPC_BINDING_HANDLE BindingHandle,
        unsigned __int16 *a2,
        _DWORD *a3)
{
  __int64 v4; // rdi
  char v7; // r14
  struct _TP_TIMER **v8; // rax
  __int64 v9; // r8
  int ContainerId; // ebx
  int LastError; // eax
  HANDLE CurrentProcess; // rax
  int v13; // eax
  __int64 v14; // rax
  void *v15; // rdi
  HANDLE hSourceHandle; // [rsp+40h] [rbp-89h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+48h] [rbp-81h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-79h] BYREF
  __int128 v20; // [rsp+60h] [rbp-69h] BYREF
  __int64 v21; // [rsp+70h] [rbp-59h]
  __int128 v22; // [rsp+78h] [rbp-51h]
  int v23; // [rsp+88h] [rbp-41h]
  struct _TP_TIMER *pv[6]; // [rsp+90h] [rbp-39h] BYREF
  _OWORD v25[6]; // [rsp+C0h] [rbp-9h] BYREF
  unsigned int Pid; // [rsp+140h] [rbp+77h] BYREF
  HANDLE TargetHandle; // [rsp+148h] [rbp+7Fh] BYREF

  v21 = 0LL;
  PreparsedData = 0LL;
  v4 = -1LL;
  v23 = 10;
  hSourceHandle = (HANDLE)-1LL;
  v20 = 0LL;
  TargetHandle = (HANDLE)-1LL;
  v22 = 0LL;
  v7 = 0;
  v8 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              (__int64)BindingHandle,
                              lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v8[1], v9, (struct _TP_TIMER *)L"s_ccCreateHandsfreeHidFileFromAudioId");
  *a3 = 0;
  ContainerId = AudioDeviceInterfaceGetContainerId(a2, &v19);
  if ( ContainerId >= 0 )
  {
    ContainerId = GetHidCollectionsInContainer((__int64)&v19, (__int64)&v20);
    if ( ContainerId >= 0 )
    {
      ContainerId = FindSupportedHidCollection(&v20, (__int64 *)&hSourceHandle, v25, &PreparsedData);
      if ( ContainerId >= 0 )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( LastError )
        {
          if ( LastError <= 0 )
          {
            ContainerId = LastError;
            goto LABEL_13;
          }
LABEL_10:
          ContainerId = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_13;
        }
        if ( RpcImpersonateClient(BindingHandle) )
          goto LABEL_13;
        v7 = 1;
        v4 = (__int64)OpenProcess(0x40u, 0, Pid);
        if ( !v4
          || (CurrentProcess = GetCurrentProcess(),
              !DuplicateHandle(CurrentProcess, hSourceHandle, (HANDLE)v4, &TargetHandle, 0xC0000000, 0, 0)) )
        {
          LastError = GetLastError();
          ContainerId = LastError;
          if ( LastError <= 0 )
            goto LABEL_13;
          goto LABEL_10;
        }
        v13 = (int)TargetHandle;
        TargetHandle = 0LL;
        ContainerId = 0;
        *a3 = v13;
      }
    }
  }
LABEL_13:
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle((HANDLE)v4);
  if ( v7 )
    RpcRevertToSelf();
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hSourceHandle);
  while ( v21 )
  {
    if ( !(_QWORD)v20 )
      ATL::AtlThrowImpl(-2147467259);
    v14 = *(_QWORD *)v20;
    v15 = *(void **)(v20 + 16);
    *(_QWORD *)&v20 = v14;
    if ( v14 )
      *(_QWORD *)(v14 + 8) = 0LL;
    else
      v20 = 0uLL;
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode(&v20);
    CoTaskMemFree(v15);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)&v20);
  return (unsigned int)ContainerId;
}
