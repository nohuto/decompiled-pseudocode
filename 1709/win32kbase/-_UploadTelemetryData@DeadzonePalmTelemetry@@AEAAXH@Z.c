/*
 * XREFs of ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C0116408
 * Callers:
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0115C88 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C0115DC8 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000873C (RtlStringCchPrintfA.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     ApiSetGetUserHandedness @ 0x1C0097174 (ApiSetGetUserHandedness.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     _TlgCreateSz @ 0x1C00EBC08 (_TlgCreateSz.c)
 *     RtlStringCchLengthA @ 0x1C0116690 (RtlStringCchLengthA.c)
 */

void __fastcall DeadzonePalmTelemetry::_UploadTelemetryData(DeadzonePalmTelemetry *this, int a2)
{
  char *v2; // r14
  int v4; // r13d
  unsigned __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // r12d
  size_t v8; // r15
  char *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  int UserHandedness; // eax
  size_t v14; // rdx
  LPCGUID v15; // r9
  int v16; // ebp
  LPCGUID v17; // r9
  size_t pcchLength; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+80h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+A0h] [rbp-48h] BYREF

  pcchLength = 0LL;
  v2 = (char *)this + 12;
  v4 = 0;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v19 = v5;
  if ( a2 || (unsigned int)(v5 - *((_DWORD *)this + 2)) >= 0x2710 )
  {
    v6 = *((_DWORD *)this + 1);
    if ( v6 > 0x280 )
      v6 = 640;
    v7 = 0;
    *((_DWORD *)this + 1) = v6;
    if ( v6 )
    {
      v8 = pcchLength;
      v9 = (char *)this + 12;
      do
      {
        v10 = v7 % 0x280;
        v11 = 2 * v10;
        v12 = 2 * (v10 + 129);
        UserHandedness = ApiSetGetUserHandedness();
        RtlStringCchPrintfA(
          v9,
          2048 - v8,
          "%lu,%d,%lu,%lu,%lu;",
          UserHandedness,
          *((_DWORD *)this + 2 * v11 + 515),
          *((_DWORD *)this + 2 * v12),
          *((_DWORD *)this + 2 * v11 + 517),
          *((_DWORD *)this + 2 * v11 + 518));
        RtlStringCchLengthA(v2, v14, &pcchLength);
        v8 = pcchLength;
        if ( pcchLength + 32 >= 0x800 )
        {
          if ( dword_1C01887A0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01887A0, 0x400000000000uLL) )
          {
            TlgCreateSz(&pDesc, v2);
            TlgWrite((TraceLoggingHProvider)&dword_1C01887A0, &unk_1C016A9DF, 0LL, v15, 3u, &pData);
          }
          v8 = 0LL;
          pcchLength = 0LL;
          v4 = 1;
          memset(v2, 0, 0x800uLL);
          *v2 = 0;
        }
        ++v7;
        v9 = &v2[v8];
      }
      while ( v7 < *((_DWORD *)this + 1) );
      v16 = v19;
      if ( v8 )
      {
        if ( dword_1C01887A0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01887A0, 0x400000000000uLL) )
        {
          TlgCreateSz(&v23, v2);
          TlgWrite((TraceLoggingHProvider)&dword_1C01887A0, &unk_1C016A9DF, 0LL, v17, 3u, &v22);
        }
        v4 = 1;
      }
      if ( v4 )
      {
        *((_DWORD *)this + 1) = 0;
        memset((char *)this + 2060, 0, 0x2800uLL);
        memset(v2, 0, 0x800uLL);
        *v2 = 0;
        *((_DWORD *)this + 2) = v16;
      }
    }
  }
}
