/*
 * XREFs of ??$try_copy@UISubmixInternal@@@?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UISubmixInternal@@Uerr_returncode_policy@wil@@@1@XZ @ 0x140008780
 * Callers:
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x1400063F0 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400073A0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043970 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008CE0 (-QueryInterface@-$CComObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::try_copy<ISubmixInternal>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall *v4)(_QWORD, GUID *, _QWORD *); // rax

  v2 = *a1;
  if ( !v2 )
  {
    *a2 = 0LL;
    return a2;
  }
  v4 = **v2;
  if ( (char *)v4 == (char *)ATL::CComObject<CStreamGroup>::QueryInterface )
  {
    ATL::CComObject<CStreamGroup>::QueryInterface(v2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, a2);
    return a2;
  }
  v4(v2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, a2);
  return a2;
}
