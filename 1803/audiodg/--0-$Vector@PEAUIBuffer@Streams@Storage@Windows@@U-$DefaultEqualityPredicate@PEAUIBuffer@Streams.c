/*
 * XREFs of ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x140048A90
 * Callers:
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004C3A8 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@567@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1400191AC (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAUIBuffer@S.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0ComLock@XWinRT@@QEAA@_N@Z @ 0x140030360 (--0ComLock@XWinRT@@QEAA@_N@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>(
        __int64 a1)
{
  char v2; // dl
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>((IUnknown *)a1);
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>'};
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = &Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::`vftable';
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>'};
  XWinRT::ComLock::ComLock((XWinRT::ComLock *)(a1 + 72), v2);
  *(_DWORD *)(a1 + 88) = 0;
  result = a1;
  *(_DWORD *)(a1 + 96) = 0;
  return result;
}
