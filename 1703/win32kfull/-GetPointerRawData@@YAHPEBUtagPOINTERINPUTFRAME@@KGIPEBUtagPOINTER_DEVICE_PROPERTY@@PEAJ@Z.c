/*
 * XREFs of ?GetPointerRawData@@YAHPEBUtagPOINTERINPUTFRAME@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01C662C
 * Callers:
 *     ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01C669C (-GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPointerRawData(
        const struct tagPOINTERINPUTFRAME *a1,
        unsigned int a2,
        unsigned __int16 a3,
        int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        int *a6)
{
  __int64 i; // r8

  if ( a2 && a2 <= *((_DWORD *)a1 + 12) )
  {
    for ( i = *((_QWORD *)a1 + 10); i && *(_DWORD *)(i + 4) != a2; i = *(_QWORD *)(i + 24) )
      ;
  }
  else
  {
    i = 0LL;
  }
  if ( i )
    return RIMExtractPointerPropertyValues(
             *((_QWORD *)a1 + 13),
             a3,
             *(unsigned int *)(i + 8),
             *(_QWORD *)(i + 16),
             a4,
             a5,
             a6);
  else
    return 0LL;
}
