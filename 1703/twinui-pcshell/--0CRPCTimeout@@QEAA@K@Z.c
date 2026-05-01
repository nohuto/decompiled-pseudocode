/*
 * XREFs of ??0CRPCTimeout@@QEAA@K@Z @ 0x180061204
 * Callers:
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x180053DE0 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18007ECCC (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _lambda_e749f471b43b5c52416cbe595e41d9dc_::operator() @ 0x1801113D0 (_lambda_e749f471b43b5c52416cbe595e41d9dc_--operator().c)
 * Callees:
 *     <none>
 */

CRPCTimeout *__fastcall CRPCTimeout::CRPCTimeout(PVOID Parameter, DWORD DueTime)
{
  DWORD CurrentThreadId; // eax
  HRESULT v5; // eax
  DWORD v6; // eax

  CurrentThreadId = GetCurrentThreadId();
  *((_QWORD *)Parameter + 2) = 0LL;
  *(_DWORD *)Parameter = CurrentThreadId;
  *((_BYTE *)Parameter + 4) = 0;
  *((_DWORD *)Parameter + 2) = -2147467259;
  v5 = CoEnableCallCancellation(0LL);
  *((_DWORD *)Parameter + 2) = v5;
  if ( v5 >= 0 )
  {
    v6 = 5000;
    if ( DueTime )
      v6 = DueTime;
    CreateTimerQueueTimer(
      (PHANDLE)Parameter + 2,
      0LL,
      (WAITORTIMERCALLBACK)CBaseRPCTimeout::s_Callback,
      Parameter,
      v6,
      0x3E8u,
      0);
  }
  return (CRPCTimeout *)Parameter;
}
