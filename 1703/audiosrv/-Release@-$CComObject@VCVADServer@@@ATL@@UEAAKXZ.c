/*
 * XREFs of ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x1800204E0
 * Callers:
 *     AUDIOSERVER_rundown @ 0x1800024E0 (AUDIOSERVER_rundown.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001E970 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     AudioServerDisconnect @ 0x180032710 (AudioServerDisconnect.c)
 * Callees:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180020360 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CVADServer>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  char *(__fastcall *v3)(char *, char); // rax

  v2 = _InterlockedDecrement(a1 + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
    {
      v3 = *(char *(__fastcall **)(char *, char))(*(_QWORD *)a1 + 176LL);
      if ( v3 == ATL::CComObject<CVADServer>::`vector deleting destructor' )
        ATL::CComObject<CVADServer>::`vector deleting destructor'((char *)a1, 1);
      else
        v3((char *)a1, 1);
    }
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
