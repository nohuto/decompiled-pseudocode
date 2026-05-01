/*
 * XREFs of ?Run@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180019BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18001AEA4 (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Run(
        __int64 a1)
{
  signed __int32 v1; // edx
  signed __int32 v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int32 v9; // [rsp+40h] [rbp+10h] BYREF
  signed __int32 v10; // [rsp+48h] [rbp+18h] BYREF
  signed __int32 v11; // [rsp+50h] [rbp+20h] BYREF

  v9 = 0;
  v1 = *(_DWORD *)(a1 - 112);
  v10 = -2;
  _InterlockedCompareExchange(&v10, v1, -2);
  if ( v10 )
  {
    v3 = *(_DWORD *)(a1 - 112);
    v11 = -2;
    _InterlockedCompareExchange(&v11, v3, -2);
    if ( v11 != 3 )
      goto LABEL_6;
    _InterlockedCompareExchange((volatile signed __int32 *)&v9, *(_DWORD *)(a1 - 108), v9);
    if ( *(_QWORD *)(a1 - 120) )
      SetRestrictedErrorInfo();
    v4 = v9;
    if ( (v9 & 0x80000000) == 0 )
    {
LABEL_6:
      v4 = 2147943623LL;
      v9 = -2147023673;
    }
  }
  else
  {
    v4 = v9;
  }
  v5 = a1 - 160;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v5 + 208));
  if ( (_DWORD)result == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v5 + 216) + 8LL))(
           *(_QWORD *)(v5 + 216),
           1LL,
           v4,
           v5 + 240);
    if ( v7 >= 0 && *(_BYTE *)(v5 + 249) )
    {
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 232), 0xFFFFFFFF);
      if ( (_DWORD)result != 1 )
        return result;
      v8 = *(unsigned int *)(v5 + 236);
    }
    else
    {
      v8 = (unsigned int)v7;
    }
    return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
             v5,
             v8);
  }
  return result;
}
