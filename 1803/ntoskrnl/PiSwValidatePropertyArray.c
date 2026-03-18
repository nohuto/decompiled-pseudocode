/*
 * XREFs of PiSwValidatePropertyArray @ 0x1405C65EC
 * Callers:
 *     PiSwValidateCreateData @ 0x1405C5D80 (PiSwValidateCreateData.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405C6164 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpPropertySet @ 0x140612B24 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x14064675C (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x140523F3C (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiSwValidatePropertyArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // edi
  __int64 i; // rbx

  result = 0LL;
  v3 = 0;
  if ( a2 )
  {
    for ( i = a1 + 32; !*(_DWORD *)(i - 12); i += 48LL )
    {
      result = PnpValidatePropertyData(*(__int64 **)(i + 8), *(_DWORD *)(i + 4), *(_DWORD *)i);
      if ( (int)result < 0 )
        break;
      if ( ++v3 >= a2 )
        return result;
    }
    return 3221225485LL;
  }
  return result;
}
