/*
 * XREFs of ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002F440
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180018F68 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _lambda_c3c3f7cb2094f4064937cc80e4480cf2_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___ @ 0x1800355C8 (_lambda_c3c3f7cb2094f4064937cc80e4480cf2_--operator()_wil--com_ptr_t_IAudioProcess_wil--err_retu.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006FE50 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::StateCheckExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RTL_CRITICAL_SECTION *a2,
        struct _TP_WORK *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  __int64 *v5; // rsi
  _QWORD *p_Type; // rbx
  __int64 *i; // rbp
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbp
  _QWORD *j; // rsi
  __int64 (__fastcall *Flink)(CAudioSession *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+28h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2 + 20;
  EnterCriticalSection(a2 + 20);
  v5 = *(__int64 **)&a2[21].LockCount;
  p_Type = &a2[21].DebugInfo->Type;
  v16 = a2;
  while ( p_Type != v5
       && !(unsigned __int8)lambda_c3c3f7cb2094f4064937cc80e4480cf2_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                              &v16,
                              p_Type) )
    ++p_Type;
  if ( p_Type != v5 )
  {
    for ( i = p_Type + 1; i != v5; ++i )
    {
      if ( !(unsigned __int8)lambda_c3c3f7cb2094f4064937cc80e4480cf2_::operator()_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy___(
                               &v16,
                               i) )
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(p_Type++, i);
    }
    if ( p_Type != v5 )
    {
      v8 = *(__int64 **)&a2[21].LockCount;
      while ( v5 != v8 )
      {
        v9 = *v5;
        *v5 = 0LL;
        v10 = *p_Type;
        *p_Type = v9;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        ++p_Type;
        ++v5;
      }
      v11 = *(_QWORD **)&a2[21].LockCount;
      for ( j = p_Type; j != v11; ++j )
      {
        if ( *j )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 16LL))(*j);
      }
      *(_QWORD *)&a2[21].LockCount = p_Type;
    }
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  v15 = 0;
  lpCriticalSection = a2 + 17;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 94LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a2);
  }
  CAudioSession::StateCheckExpired(a2);
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  Flink = (__int64 (__fastcall *)(CAudioSession *))a2->DebugInfo->ProcessLocksList.Flink;
  if ( Flink == CAudioSession::Release )
    CAudioSession::Release((CAudioSession *)a2);
  else
    Flink((CAudioSession *)a2);
}
