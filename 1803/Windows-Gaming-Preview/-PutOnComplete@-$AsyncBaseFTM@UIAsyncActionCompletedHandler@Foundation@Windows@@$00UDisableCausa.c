/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x180032D40
 * Callers:
 *     ?put_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x1800331A0 (-put_Completed@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::DisableCausality>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  int AgileReference; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed __int32 v8; // ecx
  signed __int32 v10[8]; // [rsp+0h] [rbp-20h] BYREF
  signed __int32 v11; // [rsp+40h] [rbp+20h] BYREF
  signed __int32 v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v11 = -2;
  _InterlockedCompareExchange(&v11, v2, -2);
  if ( v11 == 4 )
  {
    AgileReference = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 112);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 112) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    AgileReference = 0;
    if ( a2 )
    {
      v13 = 0LL;
      AgileReference = RoGetAgileReference(0LL, &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7, a2, &v13);
      if ( AgileReference < 0 )
      {
        v7 = v13;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 112) = v13;
        v13 = v7;
      }
      if ( v7 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    if ( AgileReference >= 0 )
    {
      if ( a2 )
      {
        *(_QWORD *)(a1 + 120) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
      }
      _InterlockedOr(v10, 0);
      v8 = *(_DWORD *)(a1 + 48);
      v12 = -2;
      _InterlockedCompareExchange(&v12, v8, -2);
      if ( (unsigned int)(v12 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return (unsigned int)AgileReference;
}
