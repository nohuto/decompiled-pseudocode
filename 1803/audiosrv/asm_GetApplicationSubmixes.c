/*
 * XREFs of asm_GetApplicationSubmixes @ 0x1800D7D20
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800097F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800098C8 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x180017CA0 (MIDL_user_allocate.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAX$$QEA_K@Z @ 0x1800D617C (--$emplace_back@_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAX$$QEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall asm_GetApplicationSubmixes(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  struct _TP_TIMER **v6; // rax
  __int64 v7; // r8
  _QWORD *i; // rbx
  _QWORD **v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  signed __int64 v12; // rsi
  _BYTE *v13; // r8
  const char *v14; // r9
  __int64 result; // rax
  _QWORD *j; // rax
  _QWORD **v17; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18[2]; // [rsp+38h] [rbp-70h] BYREF
  void *v19[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v20; // [rsp+58h] [rbp-50h]
  struct _TP_TIMER *pv[6]; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C8h] [rbp+20h] BYREF

  v18[1] = -2LL;
  try
  {
    v6 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                a1,
                                lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v6[1], v7, (struct _TP_TIMER *)L"asm_GetApplicationSubmixes");
    (*(void (__fastcall **)(CProcessSubmixManager *, LPCRITICAL_SECTION *, __int64, _QWORD ***))(*(_QWORD *)g_ProcessSubmixManager
                                                                                               + 48LL))(
      g_ProcessSubmixManager,
      &lpCriticalSection,
      a1,
      &v17);
    *(_OWORD *)v19 = 0LL;
    v10 = 0LL;
    v20 = 0LL;
    v9 = v17;
    for ( i = *v17; i != v9[1]; ++i )
    {
      v18[0] = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 176LL))(*i);
      std::vector<unsigned __int64>::emplace_back<unsigned __int64>((__int64)v19, v18);
      v9 = v17;
      v10 = v20;
    }
    v11 = v19[0];
    v12 = ((char *)v19[1] - (char *)v19[0]) >> 3;
    v13 = MIDL_user_allocate(8 * v12);
    if ( v13 )
    {
      for ( j = v11; j != v19[1]; ++j )
        *(_QWORD *)((char *)j + v13 - (_BYTE *)v11) = *j;
      *a2 = v12;
      *a3 = v13;
      if ( v11 )
        std::_Deallocate(v11, (v10 - (__int64)v11) >> 3, 8uLL);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)0x8007000ELL);
      if ( v11 )
        std::_Deallocate(v11, (v10 - (__int64)v11) >> 3, 8uLL);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    LODWORD(lpCriticalSection) = wil::details::in1diag3::Return_CaughtException(
                                   retaddr,
                                   (void *)0xE3,
                                   (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                                   v14);
    return (unsigned int)lpCriticalSection;
  }
  return result;
}
