/*
 * XREFs of ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800B4570
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x1800AF6F0 (-Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x1800B41E8 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 *     ?UnregisterCmNotifAsync@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXXZ @ 0x1800B46DC (-UnregisterCmNotifAsync@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallback(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  _DWORD *v7; // rcx
  HolographicDriverClientTrace *v8; // rcx
  const wchar_t *v9; // r8
  __int64 v10; // r8
  const char *v11; // r9
  int v12; // edx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  HolographicDriverClientTrace *v15; // rcx
  int v16; // esi
  int v17; // eax
  _DWORD *v18; // rcx
  HolographicDriverClientTrace *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3 - 2;
  if ( !v4 )
  {
    v18 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v18 && *v18 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::Log_Information_(v19, 0, L"Device Query Remove");
    }
    v12 = 4319;
    goto LABEL_25;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      v13 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( !v13 || !*v13 )
        goto LABEL_9;
      HolographicDriverClientTrace::Instance();
      v9 = L"Device Remove Pending";
LABEL_8:
      HolographicDriverClientTrace::Log_Information_(v8, 0, v9);
LABEL_9:
      Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotifAsync((Windows::Internal::Holographic::HolographicDriverHandleWrapper *)a2);
      v12 = 1617;
LABEL_25:
      Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(
        (RTL_SRWLOCK *)a2,
        v12,
        v10,
        v11);
      return 0LL;
    }
    if ( v6 == 1 )
    {
      v7 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( !v7 || !*v7 )
        goto LABEL_9;
      HolographicDriverClientTrace::Instance();
      v9 = L"Device Remove Complete";
      goto LABEL_8;
    }
  }
  else
  {
    v14 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( v14 && *v14 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::Log_Information_(v15, 0, L"Device Query Remove Failed");
    }
    AcquireSRWLockShared((PSRWLOCK)(a2 + 56));
    v16 = *(_DWORD *)(a2 + 64);
    if ( a2 != -56 )
      ReleaseSRWLockShared((PSRWLOCK)(a2 + 56));
    if ( v16 == -2147020577 )
    {
      Windows::Internal::Holographic::HolographicDriverHandleWrapper::UnregisterCmNotifAsync((Windows::Internal::Holographic::HolographicDriverHandleWrapper *)a2);
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x28A,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          (const char *)(unsigned int)v17);
        goto LABEL_9;
      }
    }
  }
  return 0LL;
}
