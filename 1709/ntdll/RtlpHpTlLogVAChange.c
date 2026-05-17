/*
 * XREFs of RtlpHpTlLogVAChange @ 0x180106054
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800036E8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpHeapAllocate @ 0x180003B70 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapExtendContext @ 0x18000736C (RtlpHpHeapExtendContext.c)
 *     RtlpHpSegPageRangeCommit @ 0x180048360 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeDecommit @ 0x18004A1DC (RtlpHpSegPageRangeDecommit.c)
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 *     RtlpHpSegSegmentFree @ 0x1800620C0 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x180107570 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x180107690 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     _TlgWrite @ 0x18007F4CC (_TlgWrite.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall RtlpHpTlLogVAChange(int a1, const GUID *a2, const GUID *a3, const GUID *a4)
{
  TLG_STATUS result; // eax
  const GUID *v5; // [rsp+30h] [rbp-9h] BYREF
  const GUID *v6; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  const GUID **v8; // [rsp+60h] [rbp+27h]
  int v9; // [rsp+68h] [rbp+2Fh]
  int v10; // [rsp+6Ch] [rbp+33h]
  const GUID **v11; // [rsp+70h] [rbp+37h]
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  switch ( a1 )
  {
    case 0x1000:
      if ( (unsigned int)dword_180159580 > 5 )
      {
        v10 = 0;
        v13 = 0;
        v8 = &v6;
        v9 = 8;
        v12 = 8;
        v6 = a2;
        v5 = a3;
        v11 = &v5;
        return TlgWrite((TraceLoggingHProvider)&dword_180159580, &unk_180126C3C, a3, a4, 4u, &pData);
      }
      break;
    case 0x2000:
      if ( (unsigned int)dword_180159580 > 5 )
      {
        v10 = 0;
        v13 = 0;
        v8 = &v6;
        v9 = 8;
        v12 = 8;
        v6 = a2;
        v5 = a3;
        v11 = &v5;
        return TlgWrite((TraceLoggingHProvider)&dword_180159580, &unk_180126BEA, a3, a4, 4u, &pData);
      }
      break;
    case 0x4000:
      if ( (unsigned int)dword_180159580 > 5 )
      {
        v10 = 0;
        v13 = 0;
        v8 = &v6;
        v9 = 8;
        v12 = 8;
        v6 = a2;
        v5 = a3;
        v11 = &v5;
        return TlgWrite((TraceLoggingHProvider)&dword_180159580, &unk_180126CF7, a3, a4, 4u, &pData);
      }
      break;
    default:
      if ( a1 == 0x8000 && (unsigned int)dword_180159580 > 5 )
      {
        v10 = 0;
        v13 = 0;
        v8 = &v5;
        v9 = 8;
        v12 = 8;
        v5 = a2;
        v6 = a3;
        v11 = &v6;
        return TlgWrite((TraceLoggingHProvider)&dword_180159580, &unk_180126BBD, a3, a4, 4u, &pData);
      }
      break;
  }
  return result;
}
