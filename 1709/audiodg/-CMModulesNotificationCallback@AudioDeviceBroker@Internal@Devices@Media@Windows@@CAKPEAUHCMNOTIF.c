/*
 * XREFs of ?CMModulesNotificationCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x14004BAD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140048F90 (--$ActivateInstance@V-$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x14004C08C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x140050114 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::CMModulesNotificationCallback(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  void *v10; // rdx
  RTL_SRWLOCK *v11; // rbx
  char *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h]

  if ( a2 && *(_QWORD *)(a2 + 112) == a1 && a3 > 0 )
  {
    if ( a3 <= 2 )
    {
      v11 = (RTL_SRWLOCK *)(a2 + 160);
      AcquireSRWLockExclusive((PSRWLOCK)(a2 + 160));
      v12 = *(char **)(a2 + 104);
      if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(v12);
        *(_QWORD *)(a2 + 104) = 0LL;
      }
      *(_BYTE *)(a2 + 168) = 1;
      if ( v11 )
        ReleaseSRWLockExclusive(v11);
    }
    else if ( a3 == 6 )
    {
      v15 = 0LL;
      v14 = 0LL;
      if ( a5 >= 0x24 && *(_DWORD *)a4 == 1 && *(_DWORD *)(a4 + 28) )
      {
        v7 = *(_QWORD *)(a4 + 8) - *(_QWORD *)&GUID_9c2220f0_d9a6_4d5c_a036_573857fd50d2.Data1;
        if ( !v7 )
          v7 = *(_QWORD *)(a4 + 16) - *(_QWORD *)GUID_9c2220f0_d9a6_4d5c_a036_573857fd50d2.Data4;
        if ( !v7 && *(_DWORD *)(a4 + 28) >= 0x28u )
        {
          v8 = *(_QWORD *)(a4 + 32) - *(_QWORD *)(a2 + 120);
          if ( !v8 )
            v8 = *(_QWORD *)(a4 + 40) - *(_QWORD *)(a2 + 128);
          if ( !v8 )
          {
            v17 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.Storage.Streams.DataWriter",
              0x23u,
              0x22u);
            if ( (int)Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataWriter>>(
                        v17,
                        &v15) >= 0 )
            {
              if ( v15 )
              {
                if ( (*(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v15 + 96LL))(
                       v15,
                       *(unsigned int *)(a4 + 28),
                       a4 + 32) >= 0 )
                {
                  v9 = v15;
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
                  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 248LL))(v9, &v14) >= 0
                    && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 208) + 104LL))(
                         *(_QWORD *)(a2 + 208),
                         v14) >= 0 )
                  {
                    wil::details::SetEvent(*(wil::details **)(a2 + 192), v10);
                  }
                }
              }
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    }
  }
  return 0LL;
}
