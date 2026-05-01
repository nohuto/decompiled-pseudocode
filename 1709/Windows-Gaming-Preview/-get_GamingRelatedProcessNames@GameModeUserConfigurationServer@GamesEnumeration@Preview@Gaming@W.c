/*
 * XREFs of ?get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x180038FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180015648 (-GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV-$Com.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::get_GamingRelatedProcessNames(
        __int64 a1,
        _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rcx
  int GlobalRelatedProcessesFromGameConfigStore; // eax
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  v5 = (_QWORD *)(a1 + 112);
  if ( !*(_QWORD *)(a1 + 112) )
  {
    v6 = *(_QWORD *)(a1 + 120);
    v18 = 0LL;
    GlobalRelatedProcessesFromGameConfigStore = GetGlobalRelatedProcessesFromGameConfigStore(v6, &v18);
    v8 = v18;
    v9 = GlobalRelatedProcessesFromGameConfigStore;
    if ( GlobalRelatedProcessesFromGameConfigStore < 0 )
    {
      v10 = 34LL;
      goto LABEL_8;
    }
    v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
    }
    GlobalRelatedProcessesFromGameConfigStore = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v8)(
                                                  v8,
                                                  &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90,
                                                  v5);
    v9 = GlobalRelatedProcessesFromGameConfigStore;
    if ( GlobalRelatedProcessesFromGameConfigStore < 0 )
    {
      v10 = 35LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)(unsigned int)GlobalRelatedProcessesFromGameConfigStore);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      goto LABEL_15;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5)(
          *v5,
          &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90,
          &v17);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v13);
LABEL_15:
    if ( v2 )
      LeaveCriticalSection(v2);
    v14 = v17;
    goto LABEL_21;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v14 = 0LL;
  *a2 = v17;
  v9 = 0;
LABEL_21:
  if ( v14 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v9;
}
