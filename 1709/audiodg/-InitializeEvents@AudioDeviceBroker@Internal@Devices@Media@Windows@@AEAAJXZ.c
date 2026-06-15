/*
 * XREFs of ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004E1A8
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x1400186F4 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??0?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x140016654 (--0-$CComHeapPtr@G@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@QEAA@XZ @ 0x140030B1C (--1-$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140033650 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14003420C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x14004AB08 (--0-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x14004BAB0 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::InitializeEvents(char *pv)
{
  char *v1; // r12
  char *FileW; // r15
  __int64 v4; // r14
  void *v5; // rax
  char v6; // dl
  int v7; // esi
  signed int Error; // ebx
  wil::details *Event; // rbx
  const char *v10; // r9
  struct _TP_WAIT *ThreadpoolWait; // rax
  signed int LastError; // eax
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  LPCWSTR lpFileName; // [rsp+58h] [rbp-B0h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp-A8h]
  _QWORD v18[52]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v1 = (char *)*((_QWORD *)pv + 13);
  v14 = 0LL;
  FileW = 0LL;
  ATL::CComHeapPtr<unsigned short>::CComHeapPtr<unsigned short>(&lpFileName);
  SRWLock = (PSRWLOCK)(pv + 160);
  AcquireSRWLockExclusive((PSRWLOCK)pv + 20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)pv + 26);
  *((_QWORD *)pv + 26) = 0LL;
  v15 = 0LL;
  v4 = 0LL;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5
    && (v15 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>(
                (__int64)v5,
                v6),
        (v4 = v15) != 0) )
  {
    v7 = 0;
  }
  else
  {
    v7 = -1;
  }
  Error = -2147024882;
  if ( v7 != -1 )
  {
    Error = 0;
    v15 = 0LL;
    *((_QWORD *)pv + 26) = v4;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  if ( v7 != -1 )
  {
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)pv + 24,
        Event);
    }
    else
    {
      wil::details::in1diag3::Return_GetLastError(
        retaddr,
        (void *)0x15E3,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        v10);
    }
    if ( !*((_QWORD *)pv + 24) )
    {
      Error = ATL::AtlHresultFromLastError();
      goto LABEL_26;
    }
    ThreadpoolWait = CreateThreadpoolWait(
                       Windows::Media::Devices::Internal::AudioDeviceBroker::ThreadpoolCallback,
                       pv,
                       0LL);
    *((_QWORD *)pv + 23) = ThreadpoolWait;
    if ( !ThreadpoolWait )
    {
      Error = -2147467259;
      goto LABEL_26;
    }
    SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)pv + 24), 0LL);
    if ( v1 )
    {
LABEL_20:
      if ( v1 != (char *)-1LL )
      {
        memset(v18, 0, sizeof(v18));
        LODWORD(v18[0]) = 416;
        LODWORD(v18[1]) = 1;
        v18[2] = v1;
        Error = (unsigned int)CM_Register_Notification(
                                v18,
                                pv,
                                Windows::Media::Devices::Internal::AudioDeviceBroker::CMModulesNotificationCallback,
                                pv + 112) != 0
              ? 0x80004005
              : 0;
LABEL_24:
        if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(FileW);
        goto LABEL_26;
      }
LABEL_21:
      LastError = GetLastError();
      Error = LastError;
      if ( LastError > 0 )
        Error = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_24;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))pv + 12))(
      *((_QWORD *)pv + 12),
      &GUID_78b60045_08a6_4ac3_8ac7_d3307c2d2e63,
      &v14);
    if ( !v14 )
    {
      Error = -2147418113;
      goto LABEL_26;
    }
    Error = (*(__int64 (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)v14 + 32LL))(v14, &lpFileName);
    if ( Error >= 0 )
    {
      FileW = (char *)CreateFileW(lpFileName, 0x80000000, 3u, 0LL, 3u, 0x800080u, 0LL);
      v1 = FileW;
      if ( !FileW )
        goto LABEL_21;
      goto LABEL_20;
    }
  }
LABEL_26:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  ATL::CComHeapPtr<tWAVEFORMATEX>::~CComHeapPtr<tWAVEFORMATEX>((LPVOID *)&lpFileName);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return (unsigned int)Error;
}
