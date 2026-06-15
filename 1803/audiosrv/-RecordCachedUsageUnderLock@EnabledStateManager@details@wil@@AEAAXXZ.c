/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007058
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180007198 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005FD6C (-Destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800B161C (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     _lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_ @ 0x1800071DC (_lambda_a6162ed205bf533298d20564adf5c8f3_--_lambda_invoker_cdecl_.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180007400 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180007934 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int *v4; // rdi
  __int64 v6; // rbx
  unsigned int *v7; // rbx
  volatile signed __int32 *v8; // rsi
  signed __int32 v9; // r15d
  unsigned int *v10; // rsi
  __int64 v11; // r8
  void (*v12)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v13; // rdx
  wil::details *v14; // rcx
  const char *v15; // [rsp+28h] [rbp-39h]
  volatile signed __int32 v16; // [rsp+38h] [rbp-29h] BYREF
  char v17; // [rsp+3Ch] [rbp-25h]
  __int64 v18; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v20[64]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v21; // [rsp+98h] [rbp+37h] BYREF

  v4 = (unsigned int *)*((_QWORD *)this + 6);
  v6 = (*((_QWORD *)this + 7) - (_QWORD)v4) >> 4;
  if ( v6 )
  {
    v7 = &v4[4 * v6];
    while ( 1 )
    {
      if ( v4 == v7 )
      {
        *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
        wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v15);
        return;
      }
      memset_0(v20, 0, sizeof(v20));
      v18 = 0LL;
      v8 = (volatile signed __int32 *)*((_QWORD *)v4 + 1);
      v19[0] = &v18;
      v19[1] = v20;
      v17 = 0;
      do
      {
        v16 = *v8;
        v16 = *v8;
        v9 = v16;
      }
      while ( (unsigned int)lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_(&v16, v19)
           && v9 != _InterlockedCompareExchange(v8, v16, v9) );
      v10 = (unsigned int *)v20;
      do
      {
        v11 = v10[1];
        if ( !(_DWORD)v11 )
          goto LABEL_8;
        v12 = g_wil_details_internalRecordFeatureUsage;
        if ( g_wil_details_internalRecordFeatureUsage )
        {
          v13 = *v10;
          v14 = (wil::details *)*v4;
          if ( (char *)g_wil_details_internalRecordFeatureUsage == (char *)wil::details::WilApiImpl_RecordFeatureUsage )
          {
            wil::details::WilApiImpl_RecordFeatureUsage(v14, v13, v11, 0, v15);
            goto LABEL_8;
          }
        }
        else
        {
          v12 = g_wil_details_apiRecordFeatureUsage;
          if ( !g_wil_details_apiRecordFeatureUsage )
            goto LABEL_8;
          v13 = *v10;
          v14 = (wil::details *)*v4;
        }
        ((void (__fastcall *)(wil::details *, __int64, __int64, _QWORD))v12)(v14, v13, v11, 0LL);
LABEL_8:
        v10 += 2;
      }
      while ( v10 != (unsigned int *)&v21 );
      v4 += 4;
    }
  }
}
