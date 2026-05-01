/*
 * XREFs of ?HampPdcControlCallback@@YAJPEAXK@Z @ 0x180065B20
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180065DD4 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampPdcControlCallback(struct _HAM_PDC_CONTEXT *a1, int a2)
{
  DWORD v4; // ebx
  int v6; // [rsp+30h] [rbp-E8h] BYREF
  char v7[144]; // [rsp+40h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-48h] BYREF
  int *v9; // [rsp+F0h] [rbp-28h]
  int v10; // [rsp+F8h] [rbp-20h]
  int v11; // [rsp+FCh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v7);
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083054, 0LL, 0LL, 2u, &pData);
  if ( a2 < 0 )
    HampPdcExitPlmPhase(a1);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v11 = 0;
    v9 = &v6;
    v6 = a2;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180083156, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
