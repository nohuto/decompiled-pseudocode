/*
 * XREFs of _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x180006120
 * Callers:
 *     <none>
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180006248 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800065D8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 */

void __fastcall lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  RTL_SRWLOCK *v4; // rbp
  unsigned int v5; // r9d
  unsigned __int64 v6; // rbx
  unsigned int *Ptr; // rsi
  unsigned int *v8; // rbx
  union wil_details_FeaturePropertyCache *v9; // rcx
  unsigned int *v10; // r14
  unsigned int v11; // r8d
  const char *v12; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v13[3]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v14[64]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+80h] [rbp-28h] BYREF

  if ( LOBYTE(Context->Ptr) )
  {
    v4 = Context + 1;
    AcquireSRWLockExclusive(Context + 1);
    v6 = (unsigned __int64)((char *)Context[7].Ptr - (char *)Context[6].Ptr) >> 4;
    if ( v6 )
    {
      Ptr = (unsigned int *)Context[6].Ptr;
      v8 = &Ptr[4 * v6];
      while ( Ptr != v8 )
      {
        memset(v14, 0, sizeof(v14));
        v12 = 0LL;
        v9 = (union wil_details_FeaturePropertyCache *)*((_QWORD *)Ptr + 1);
        v13[0] = &v12;
        v13[1] = v14;
        wil_details_ModifyFeatureData(v9, lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_, v13);
        v10 = (unsigned int *)v14;
        do
        {
          v11 = v10[1];
          if ( v11 )
            wil::details::WilApi_RecordFeatureUsage((wil::details *)*Ptr, *v10, v11, v5, v12);
          v10 += 2;
        }
        while ( v10 != (unsigned int *)&v15 );
        Ptr += 4;
      }
      Context[7].Ptr = Context[6].Ptr;
      wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, v5, v12);
    }
    LOBYTE(Context[3].Ptr) = 0;
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
