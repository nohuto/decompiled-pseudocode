/*
 * XREFs of RtlpMuiRegLoadRegistryInfo @ 0x18006D210
 * Callers:
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_18006CFF8 @ 0x18006CFF8 (sub_18006CFF8.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006D300 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006DC8C @ 0x18006DC8C (sub_18006DC8C.c)
 *     sub_1800FB6A4 @ 0x1800FB6A4 (sub_1800FB6A4.c)
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 */

__int64 __fastcall RtlpMuiRegLoadRegistryInfo(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (a2 & 0x800) != 0 )
  {
    result = sub_1800FB6A4();
    if ( (int)result < 0 )
    {
      DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", result);
      result = 0LL;
    }
  }
  if ( (a2 & 1) != 0 )
    result = sub_1800FC800(a1);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 4LL);
      result = sub_18006CFF8(4, &v7, a1);
      if ( (int)result < 0 )
        return result;
      v6 = v7;
      if ( v7 )
      {
        *(_DWORD *)a1 |= 4u;
        *(_QWORD *)(a1 + 40) = v6;
        v7 = 0LL;
      }
    }
    if ( (a2 & 8) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 8LL);
      result = sub_18006CFF8(8, &v7, a1);
      if ( (int)result < 0 )
        return result;
      v5 = v7;
      if ( v7 )
      {
        *(_DWORD *)a1 |= 8u;
        *(_QWORD *)(a1 + 48) = v5;
      }
    }
    if ( (a2 & 0x20) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 32LL);
      result = sub_18006DC8C(a1, 1LL);
    }
    if ( (int)result >= 0 )
    {
      if ( (a2 & 0x10) != 0 )
      {
        RtlpMuiRegFreeRegistryInfo(a1, 16LL);
        result = sub_18006DC8C(a1, 0LL);
      }
      if ( (int)result >= 0 && (a2 & 0x200) != 0 )
        return 0LL;
    }
  }
  return result;
}
