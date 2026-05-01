/*
 * XREFs of ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18003855C
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800384A0 (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E620 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATION@@PEAXPEAPEAX@Z @ 0x180038A4C (-HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATIO.c)
 *     ?HampOplockWatchStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180038F00 (-HampOplockWatchStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampSlsStart@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180038F64 (-HampSlsStart@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTERNAL_RESOURCE_MASK@@@Z @ 0x18004064C (-HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTE.c)
 *     ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18004118C (-HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampManagerStart(struct _HOST_ACTIVITY_MANAGER *a1)
{
  int v2; // r9d
  __int64 result; // rax
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v8[384]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 (__fastcall *v10)(struct _HAM_PDC_CONTEXT *, unsigned int); // [rsp+1E8h] [rbp+E8h]
  int *v11; // [rsp+1F0h] [rbp+F0h]
  int v12; // [rsp+1F8h] [rbp+F8h]
  int v13; // [rsp+1FCh] [rbp+FCh]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v8);
  v6 = CreateResourcePolicyStoreClient(&v7);
  v2 = v6;
  if ( v6 < 0 )
  {
    if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
    {
      v13 = 0;
      v11 = &v6;
      v12 = 4;
      TlgWrite(v5, &unk_180083BAE, 0LL, 0LL, 3u, &pData);
      v2 = v6;
    }
    if ( v2 < 0 )
      return 3221225473LL;
  }
  else
  {
    *((_QWORD *)a1 + 34) = v7;
  }
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
             (char *)a1 + 280,
             SystemStateChangedWnfName,
             0LL,
             HampManagerSystemStateChangedCallback,
             a1,
             0LL,
             0,
             0);
  if ( (int)result >= 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
      (char *)a1 + 288,
      DplKeyStateChangedWnfName,
      0LL,
      HampManagerDplKeyStateChangedCallback,
      a1,
      0LL,
      0,
      0);
    memset_0(&pData, 0, 0x20uLL);
    LODWORD(pData.Ptr) = 1;
    *(_QWORD *)&pData.Size = HampPdcEnterExitPlmPhase;
    v10 = HampPdcControlCallback;
    result = HampSystemNotificationClientRegister(v4, &pData, (char *)a1 + 336, (char *)a1 + 344);
    if ( (int)result >= 0 )
    {
      result = HampSlsStart((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 504));
      if ( (int)result >= 0 )
      {
        result = HampOplockWatchStart(a1);
        if ( (int)result >= 0 )
        {
          result = HampRpGetActivityResourceSetInfo(
                     *((void **)a1 + 34),
                     L"UiPausing",
                     (struct ExecutionModel::_ResourceSetInfo *)v8);
          if ( (int)result >= 0 )
          {
            HampRmPopulateExternalResourceAccessData(
              (struct ExecutionModel::_ResourceSetInfo *)v8,
              (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 648));
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
