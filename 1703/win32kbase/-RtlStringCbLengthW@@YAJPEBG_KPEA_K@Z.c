/*
 * XREFs of ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C006A890
 * Callers:
 *     ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C006A800 (-GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C006A908 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbLengthW(const unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 i; // r8
  signed int v7; // ecx

  v3 = a2 >> 1;
  v5 = 0LL;
  if ( a1 && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( a3 )
  {
    if ( v7 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v5;
  }
  return (unsigned int)v7;
}
