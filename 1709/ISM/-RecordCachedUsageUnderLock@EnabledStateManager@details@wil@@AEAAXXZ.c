/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000E554
 * Callers:
 *     _lambda_87c8d85798ea78242f0953b15d7cc197_::_lambda_invoker_cdecl_ @ 0x18000EA10 (_lambda_87c8d85798ea78242f0953b15d7cc197_--_lambda_invoker_cdecl_.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180011360 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x180012270 (_lambda_3a8e20f2e77891984b45453b80f2a737_--_lambda_invoker_cdecl_.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x1800D27B0 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     _lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_ @ 0x18001224C (_lambda_a6162ed205bf533298d20564adf5c8f3_--_lambda_invoker_cdecl_.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  __int64 v2; // rbx
  unsigned int *v3; // rdi
  unsigned int *v4; // rbx
  volatile signed __int32 *v5; // rsi
  signed __int32 v6; // r15d
  void (*v7)(unsigned int, unsigned int, unsigned int, const char *); // r11
  unsigned int *v8; // rsi
  void (*v9)(unsigned int, unsigned int, unsigned int, const char *); // r10
  __int64 v10; // r8
  volatile signed __int32 v11; // [rsp+38h] [rbp-29h] BYREF
  char v12; // [rsp+3Ch] [rbp-25h]
  __int64 v13; // [rsp+40h] [rbp-21h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v15[64]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v16; // [rsp+98h] [rbp+37h] BYREF

  v2 = (*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4;
  if ( v2 )
  {
    v3 = (unsigned int *)*((_QWORD *)this + 6);
    v4 = &v3[4 * v2];
    if ( v3 != v4 )
    {
      while ( 1 )
      {
        memset(v15, 0, sizeof(v15));
        v13 = 0LL;
        v5 = (volatile signed __int32 *)*((_QWORD *)v3 + 1);
        v14[0] = &v13;
        v14[1] = v15;
        v12 = 0;
        do
        {
          v11 = *v5;
          v11 = *v5;
          v6 = v11;
        }
        while ( (unsigned int)lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_(&v11, v14)
             && v6 != _InterlockedCompareExchange(v5, v11, v6) );
        v7 = g_wil_details_internalRecordFeatureUsage;
        v8 = (unsigned int *)v15;
        v9 = g_wil_details_apiRecordFeatureUsage;
        do
        {
          v10 = v8[1];
          if ( !(_DWORD)v10 )
            goto LABEL_13;
          if ( v7 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v7)(*v3, *v8, v10, 0LL);
          }
          else
          {
            if ( !v9 )
              goto LABEL_13;
            ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))v9)(*v3, *v8, v10, 0LL);
          }
          v9 = g_wil_details_apiRecordFeatureUsage;
          v7 = g_wil_details_internalRecordFeatureUsage;
LABEL_13:
          v8 += 2;
        }
        while ( v8 != (unsigned int *)&v16 );
        v3 += 4;
        if ( v3 == v4 )
          goto LABEL_17;
      }
    }
    v7 = g_wil_details_internalRecordFeatureUsage;
    v9 = g_wil_details_apiRecordFeatureUsage;
LABEL_17:
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    if ( v7 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v7)(0LL, 254LL, 0LL, 0LL);
    }
    else if ( v9 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v9)(0LL, 254LL, 0LL, 0LL);
    }
  }
}
