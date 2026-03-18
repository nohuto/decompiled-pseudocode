/*
 * XREFs of PiSwValidatePropertyArray @ 0x14059C0AC
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x14044D7EC (PiSwIrpInterfacePropertySet.c)
 *     PiSwValidateCreateData @ 0x1405BBB94 (PiSwValidateCreateData.c)
 *     PiSwIrpInterfaceRegister @ 0x1405E2314 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpPropertySet @ 0x1406CE008 (PiSwIrpPropertySet.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x14052FC20 (_PnpValidatePropertyData.c)
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
