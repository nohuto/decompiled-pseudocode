/*
 * XREFs of RtlpMuiRegLoadRegistryInfo @ 0x18006EE10
 * Callers:
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006EF00 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006F10C @ 0x18006F10C (sub_18006F10C.c)
 *     sub_1800F9A98 @ 0x1800F9A98 (sub_1800F9A98.c)
 *     sub_1800FADB0 @ 0x1800FADB0 (sub_1800FADB0.c)
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
    result = sub_1800F9A98();
    if ( (int)result < 0 )
    {
      DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", result);
      result = 0LL;
    }
  }
  if ( (a2 & 1) != 0 )
    result = sub_1800FADB0(a1);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 4LL);
      result = sub_18006F10C(4LL, &v7, a1);
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
      result = sub_18006F10C(8LL, &v7, a1);
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
      result = sub_180031B44(a1, 1u);
    }
    if ( (int)result >= 0 )
    {
      if ( (a2 & 0x10) != 0 )
      {
        RtlpMuiRegFreeRegistryInfo(a1, 16LL);
        result = sub_180031B44(a1, 0);
      }
      if ( (int)result >= 0 && (a2 & 0x200) != 0 )
        return 0LL;
    }
  }
  return result;
}
