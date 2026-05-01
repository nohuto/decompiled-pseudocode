/*
 * XREFs of ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x1801A59E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007115C (--1-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x18009E878 (--4-$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Wi.c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z @ 0x18009E890 (--4CMarshaledInterface@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??1?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F5E40 (--1-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::OnClose(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 260));
  if ( (_DWORD)result == 1 )
  {
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v4);
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 304));
    Windows::Internal::GitPtrSupportsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::operator=(
      &v3,
      (__int64 *)(a1 + 288));
    CMarshaledInterface::operator=(&v4, (__int64 *)(a1 + 296));
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 304));
    Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(&v3);
    return Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)&v4);
  }
  return result;
}
