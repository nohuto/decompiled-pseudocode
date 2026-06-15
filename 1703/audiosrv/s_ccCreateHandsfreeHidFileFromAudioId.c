/*
 * XREFs of s_ccCreateHandsfreeHidFileFromAudioId @ 0x180082DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x18007BAA8 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x18008276C (-AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z.c)
 *     ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800829B8 (-FindSupportedHidCollection@@YAJPEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180082AE8 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ?GetHidCollectionsInContainer@@YAJU_GUID@@PEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@@Z @ 0x180082B08 (-GetHidCollectionsInContainer@@YAJU_GUID@@PEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@@.c)
 */

__int64 __fastcall s_ccCreateHandsfreeHidFileFromAudioId(
        RPC_BINDING_HANDLE BindingHandle,
        unsigned __int16 *a2,
        _DWORD *a3)
{
  __int64 v4; // rdi
  char v6; // r14
  int ContainerId; // ebx
  int LastError; // eax
  HANDLE CurrentProcess; // rax
  int v10; // eax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  void *v13; // rdi
  HANDLE hSourceHandle; // [rsp+40h] [rbp-59h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+48h] [rbp-51h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-49h] BYREF
  __int128 v18; // [rsp+60h] [rbp-39h] BYREF
  __int64 v19; // [rsp+70h] [rbp-29h]
  __int128 v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+88h] [rbp-11h]
  _OWORD v22[6]; // [rsp+90h] [rbp-9h] BYREF
  unsigned int Pid; // [rsp+110h] [rbp+77h] BYREF
  HANDLE TargetHandle; // [rsp+118h] [rbp+7Fh] BYREF

  v19 = 0LL;
  PreparsedData = 0LL;
  *a3 = 0;
  v21 = 10;
  v4 = -1LL;
  hSourceHandle = (HANDLE)-1LL;
  v18 = 0LL;
  TargetHandle = (HANDLE)-1LL;
  v6 = 0;
  v20 = 0LL;
  ContainerId = AudioDeviceInterfaceGetContainerId(a2, &v17);
  if ( ContainerId >= 0 )
  {
    ContainerId = GetHidCollectionsInContainer((__int64)&v17, (__int64)&v18);
    if ( ContainerId >= 0 )
    {
      ContainerId = FindSupportedHidCollection(&v18, (__int64 *)&hSourceHandle, v22, &PreparsedData);
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
        v6 = 1;
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
        v10 = (int)TargetHandle;
        TargetHandle = 0LL;
        ContainerId = 0;
        *a3 = v10;
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
  if ( v6 )
    RpcRevertToSelf();
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hSourceHandle);
  while ( v19 )
  {
    v11 = (_QWORD *)v18;
    if ( !(_QWORD)v18 )
      ATL::AtlThrowImpl(-2147467259);
    v12 = *(_QWORD *)v18;
    v13 = *(void **)(v18 + 16);
    *(_QWORD *)&v18 = v12;
    if ( v12 )
      *(_QWORD *)(v12 + 8) = 0LL;
    else
      v18 = 0uLL;
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode((__int64)&v18, v11);
    CoTaskMemFree(v13);
  }
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)&v18);
  return (unsigned int)ContainerId;
}
