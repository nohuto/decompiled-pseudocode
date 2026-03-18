/*
 * XREFs of ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C0132E3C
 * Callers:
 *     ?ClearSession@DelayZoneTelemetry@@QEAAXXZ @ 0x1C01329A8 (-ClearSession@DelayZoneTelemetry@@QEAAXXZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0132B48 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C0132C98 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RtlStringCchPrintfA @ 0x1C00AA79C (RtlStringCchPrintfA.c)
 *     _TlgCreateSz @ 0x1C00BB800 (_TlgCreateSz.c)
 *     RtlStringCchLengthA @ 0x1C01083F4 (RtlStringCchLengthA.c)
 */

void __fastcall DelayZoneTelemetry::UploadTelemetryData(DelayZoneTelemetry *this, char a2)
{
  char *v2; // rdi
  char v4; // r12
  char *v5; // r10
  unsigned __int64 v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // r15d
  size_t v9; // rsi
  __int64 v10; // r13
  size_t v11; // rdx
  __int64 v12; // r8
  size_t v13; // rdx
  LPCGUID v14; // r9
  LPCGUID v15; // r9
  size_t pcchLength; // [rsp+88h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+C0h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+E0h] [rbp+1Fh] BYREF

  pcchLength = 0LL;
  v2 = (char *)this + 16;
  v4 = 0;
  v5 = (char *)this + 16;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a2 || (unsigned int)(v6 - *((_DWORD *)this + 3)) >= 0x2710 )
  {
    v7 = *((_DWORD *)this + 2);
    if ( v7 > 0xD5 )
      v7 = 213;
    v8 = 0;
    *((_DWORD *)this + 2) = v7;
    if ( v7 )
    {
      v9 = pcchLength;
      do
      {
        v10 = v8 % 0xD5;
        if ( !*v2 )
        {
          RtlStringCchPrintfA(v5, 2048 - v9, "%lu,%lu_", *(_DWORD *)this, *((_DWORD *)this + 1));
          RtlStringCchLengthA(v2, v11, &pcchLength);
          v9 = pcchLength;
          v5 = &v2[pcchLength];
        }
        v12 = 6 * v10;
        RtlStringCchPrintfA(
          v5,
          2048 - v9,
          "%d,%ld,%ld,%d,%lu,0x%x,%d,%d,%d,%ld,%ld,%lu;",
          *((_DWORD *)this + 12 * v10 + 516),
          *((_DWORD *)this + 2 * v12 + 517),
          *((_DWORD *)this + 2 * v12 + 518),
          *((_DWORD *)this + 2 * v12 + 519),
          *((_DWORD *)this + 2 * v12 + 520),
          *((_DWORD *)this + 2 * v12 + 521),
          *((_DWORD *)this + 2 * v12 + 522),
          *((_DWORD *)this + 2 * v12 + 523),
          *((_DWORD *)this + 2 * v12 + 524),
          *((_DWORD *)this + 2 * v12 + 525),
          *((_DWORD *)this + 2 * v12 + 526),
          *((_DWORD *)this + 2 * v12 + 527));
        RtlStringCchLengthA(v2, v13, &pcchLength);
        v9 = pcchLength;
        if ( pcchLength + 96 >= 0x800 )
        {
          if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            TlgCreateSz(&pDesc, v2);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0178E70, 0LL, v14, 3u, &pData);
          }
          v9 = 0LL;
          pcchLength = 0LL;
          v4 = 1;
          memset(v2, 0, 0x800uLL);
          *v2 = 0;
        }
        ++v8;
        v5 = &v2[v9];
      }
      while ( v8 < *((_DWORD *)this + 2) );
      if ( v9 )
      {
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          TlgCreateSz(&v20, v2);
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0178E70, 0LL, v15, 3u, &v19);
        }
        v4 = 1;
      }
      if ( v4 )
      {
        *((_DWORD *)this + 2) = 0;
        memset((char *)this + 2064, 0, 0x27F0uLL);
        memset(v2, 0, 0x800uLL);
        *v2 = 0;
        *((_DWORD *)this + 3) = v6;
      }
    }
  }
}
