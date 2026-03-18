/*
 * XREFs of DrvNeedToSwitchAdapterForRemoteSession @ 0x1C00FA058
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D61E0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvNeedToSwitchAdapterForRemoteSession(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagGRAPHICS_DEVICE *i; // rdx
  struct tagGRAPHICS_DEVICE *v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
    {
      if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && *((_QWORD *)i + 39) == a1 )
        return 1LL;
    }
  }
  if ( (int)((__int64 (__fastcall *)(_QWORD, __int64 *, _QWORD))qword_1C018BB40)(0LL, &v5, 0LL) < 0 )
    return 0LL;
  v4 = gpRemoteGraphicsDeviceList;
  if ( gpRemoteGraphicsDeviceList )
  {
    while ( (*((_DWORD *)v4 + 40) & 0x4000000) == 0 || *((_QWORD *)v4 + 38) == v5 )
    {
      v4 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v4 + 16);
      if ( !v4 )
        return v1;
    }
    return 1;
  }
  return v1;
}
