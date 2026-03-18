/*
 * XREFs of ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0120DF0
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0120F00 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     RIMExtractPointerPropertyValues @ 0x1C0106F10 (RIMExtractPointerPropertyValues.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawData(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        int *a7)
{
  __int64 i; // rcx

  if ( a3 && a3 <= *((_DWORD *)a2 + 14) )
  {
    for ( i = *((_QWORD *)a2 + 11); i && *(_DWORD *)(i + 4) != a3; i = *(_QWORD *)(i + 24) )
      ;
  }
  else
  {
    i = 0LL;
  }
  if ( i )
    return RIMExtractPointerPropertyValues(
             *((_QWORD *)a2 + 14),
             a4,
             *(_DWORD *)(i + 8),
             *(char **)(i + 16),
             a5,
             (__int64)a6,
             (__int64)a7);
  else
    return 0LL;
}
