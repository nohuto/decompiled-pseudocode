/*
 * XREFs of ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18002B050
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     AUDIOSERVER_rundown @ 0x18002B350 (AUDIOSERVER_rundown.c)
 * Callees:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18002AFC0 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CVADServer>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  CVADServer *(__fastcall *v3)(CVADServer *, char); // rax

  v2 = _InterlockedDecrement(a1 + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
    {
      v3 = *(CVADServer *(__fastcall **)(CVADServer *, char))(*(_QWORD *)a1 + 192LL);
      if ( v3 == ATL::CComObject<CVADServer>::`vector deleting destructor' )
        ATL::CComObject<CVADServer>::`vector deleting destructor'((CVADServer *)a1, 1);
      else
        v3((CVADServer *)a1, 1);
    }
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
