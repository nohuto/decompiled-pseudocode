/*
 * XREFs of ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18000D710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  signed __int32 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 10);
  v5 = -2;
  _InterlockedCompareExchange(&v5, v1, -2);
  if ( v5 == -1 && (v2 = _InterlockedCompareExchange(a1 + 10, 0, -1), v2 == v5) )
  {
    return (*(unsigned int (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 136LL))(a1);
  }
  else
  {
    v3 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return v3;
}
