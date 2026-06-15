/*
 * XREFs of ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004C3A8
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140018D60 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x1400165CC (--0-$CComHeapPtr@G@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001B954 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14002F07C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x14002FB60 (--1-$CComHeapPtr@G@ATL@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140032510 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14003307C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x140048A90 (--0-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x140049AE0 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::InitializeEvents(char *pv)
{
  char *v1; // r15
  char *FileW; // r14
  void *v4; // rax
  __int64 v5; // rsi
  signed int Error; // ebx
  wil::details *Event; // rbx
  const char *v8; // r9
  struct _TP_WAIT *ThreadpoolWait; // rax
  signed int LastError; // eax
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  LPCWSTR lpFileName[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v15[4]; // [rsp+68h] [rbp-A0h] BYREF
  char *v16; // [rsp+78h] [rbp-90h]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v1 = (char *)*((_QWORD *)pv + 12);
  v12 = 0LL;
  FileW = 0LL;
  ATL::CComHeapPtr<unsigned short>::CComHeapPtr<unsigned short>(lpFileName);
  AcquireSRWLockExclusive((PSRWLOCK)pv + 19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)pv + 25);
  *((_QWORD *)pv + 25) = 0LL;
  v13 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
  {
    v5 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>((__int64)v4);
    v13 = v5;
  }
  Error = v5 == 0 ? 0x8007000E : 0;
  if ( v5 )
  {
    v13 = 0LL;
    *((_QWORD *)pv + 25) = v5;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  if ( v5 )
  {
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)pv + 23,
        Event);
    }
    else
    {
      wil::details::in1diag3::Return_GetLastError(
        retaddr,
        (void *)0x1621,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        v8);
    }
    if ( !*((_QWORD *)pv + 23) )
    {
      Error = ATL::AtlHresultFromLastError();
      goto LABEL_24;
    }
    ThreadpoolWait = CreateThreadpoolWait(
                       Windows::Media::Devices::Internal::AudioDeviceBroker::ThreadpoolCallback,
                       pv,
                       0LL);
    *((_QWORD *)pv + 22) = ThreadpoolWait;
    if ( !ThreadpoolWait )
    {
      Error = -2147467259;
      goto LABEL_24;
    }
    SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 23), 0LL);
    if ( v1 )
    {
LABEL_18:
      if ( v1 != (char *)-1LL )
      {
        memset_0(v15, 0, 0x1A0uLL);
        v15[0] = 416;
        v15[2] = 1;
        v16 = v1;
        Error = (unsigned int)CM_Register_Notification(
                                v15,
                                pv,
                                Windows::Media::Devices::Internal::AudioDeviceBroker::CMModulesNotificationCallback,
                                pv + 104) != 0
              ? 0x80004005
              : 0;
LABEL_22:
        if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(FileW);
        goto LABEL_24;
      }
LABEL_19:
      LastError = GetLastError();
      Error = LastError;
      if ( LastError > 0 )
        Error = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_22;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))pv + 11))(
      *((_QWORD *)pv + 11),
      &GUID_78b60045_08a6_4ac3_8ac7_d3307c2d2e63,
      &v12);
    if ( !v12 )
    {
      Error = -2147418113;
      goto LABEL_24;
    }
    Error = (*(__int64 (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v12 + 32LL))(v12, lpFileName);
    if ( Error >= 0 )
    {
      FileW = (char *)CreateFileW(lpFileName[0], 0x80000000, 3u, 0LL, 3u, 0x800080u, 0LL);
      v1 = FileW;
      if ( !FileW )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
LABEL_24:
  if ( pv != (char *)-152LL )
    ReleaseSRWLockExclusive((PSRWLOCK)pv + 19);
  ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>((LPVOID *)lpFileName);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return (unsigned int)Error;
}
