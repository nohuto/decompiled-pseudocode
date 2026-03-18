/*
 * XREFs of DrvUpdateRemoteGraphicsDeviceList @ 0x1C00FA864
 * Callers:
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D61E0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     UserIsUserCritSecIn @ 0x1C0027810 (UserIsUserCritSecIn.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C0068A88 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C009B07C (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 DrvUpdateRemoteGraphicsDeviceList()
{
  __int64 v0; // rdx
  struct tagREMOTE_CONTEXT *v1; // rcx
  __int64 v2; // rax
  struct tagGRAPHICS_DEVICE *i; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rax

  if ( !(unsigned int)UserIsUserCritSecIn() )
  {
    v2 = WdLogNewEntry5_WdAssertion(v1, v0);
    WdLogEvent5_WdAssertion(v2);
  }
  GreCleanupRemoteAdapterContext(v1);
  for ( i = gpRemoteGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 && !*((_QWORD *)i + 37) )
    {
      v4 = ((__int64 (__fastcall *)(char *, char *, char *))qword_1C018BB40)(
             (char *)i + 296,
             (char *)i + 304,
             (char *)i + 312);
      v8 = v4;
      if ( v4 >= 0 )
      {
        DrvUpdateRemoteAdapterInfo(i);
      }
      else
      {
        v9 = WdLogNewEntry5_WdError(v6, v5, v7);
        *(_QWORD *)(v9 + 24) = i;
        *(_QWORD *)(v9 + 32) = v8;
        WdLogEvent5_WdError(v9);
      }
    }
  }
  return 1LL;
}
