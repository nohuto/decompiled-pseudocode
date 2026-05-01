/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180150320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v5; // ecx
  unsigned int v6; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
  }
  else
  {
    if ( *a2 == 1599470659
      && a2[1] == *(_DWORD *)&GUID_5f55fc43_98da_50b4_a85c_5a270fb53933.Data2
      && a2[2] == *(_DWORD *)GUID_5f55fc43_98da_50b4_a85c_5a270fb53933.Data4
      && a2[3] == *(_DWORD *)&GUID_5f55fc43_98da_50b4_a85c_5a270fb53933.Data4[4] )
    {
      v5 = 1;
      *a3 = a1;
    }
    else
    {
      v5 = 0;
    }
    v6 = v5 == 0 ? 0x80004002 : 0;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return v6;
  }
  return v3;
}
