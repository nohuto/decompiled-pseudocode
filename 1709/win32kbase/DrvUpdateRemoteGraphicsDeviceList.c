/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C00FAAA0
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DC5EC (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C003C9B0 (UserIsUserCritSecIn.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00980AC (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A4B78 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rdx
  struct tagREMOTE_CONTEXT *v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v4 = WdLogNewEntry5_WdAssertion(v1, v0, v2, v3);
    WdLogEvent5_WdAssertion(v4);
  }
  GreCleanupRemoteAdapterContext(v1);
  for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && !*((_QWORD *)i + 37) )
    {
      v6 = ((__int64 (__fastcall *)(char *, char *, char *, char *))qword_1C01907A8)(
             (char *)i + 296,
             (char *)i + 312,
             (char *)i + 320,
             (char *)i + 304);
      v10 = v6;
      if ( v6 >= 0 )
      {
        DrvUpdateRemoteAdapterInfo(i);
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v8, v7, v9);
        *(_QWORD *)(v11 + 24) = i;
        *(_QWORD *)(v11 + 32) = v10;
        WdLogEvent5_WdError(v11);
      }
    }
  }
  return 1LL;
}
