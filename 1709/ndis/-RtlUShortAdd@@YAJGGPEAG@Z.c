/*
 * XREFs of ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C00500D8
 * Callers:
 *     ndisAllocateConfigurationString @ 0x1C00E3B00 (ndisAllocateConfigurationString.c)
 *     NdisOpenFile @ 0x1C00E47D0 (NdisOpenFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUShortAdd(unsigned __int16 a1, __int16 a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax

  v3 = a2 + a1;
  if ( (unsigned __int16)(a2 + a1) < a1 )
    *a3 = -1;
  else
    *a3 = v3;
  return v3 < a1 ? 0xC0000095 : 0;
}
