/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C000C120
 * Callers:
 *     rimStartDeviceReadIfAllowed @ 0x1C0009F6C (rimStartDeviceReadIfAllowed.c)
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 *     rimInputApc @ 0x1C00954A0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     EtwTraceStartInputDeviceRead @ 0x1C000B400 (EtwTraceStartInputDeviceRead.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000BFC8 (WPP_RECORDER_SF_qqD.c)
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C000C538 (RimDeviceTypeToRimInputTypeString.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00F0070 (DbgPrintRIMAlways.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(struct _MCGEN_TRACE_CONTEXT *a1, __int64 a2, const GUID *a3)
{
  struct _MCGEN_TRACE_CONTEXT *v4; // rdi
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  void *Buffer; // rsi
  ULONG Length; // r14d
  void *v10; // rcx
  NTSTATUS File; // eax
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  const GUID *v13; // r8
  const WCHAR *v14; // rax
  LPCGUID v15; // r9
  unsigned __int8 v17; // cl
  __int64 v18; // rdx
  const WCHAR *v19; // rax
  LPCGUID v20; // r9
  __int64 v21; // rdx
  const WCHAR *v22; // rax
  LPCGUID v23; // r9
  PLARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-51h]
  _DWORD v25[4]; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+90h] [rbp+7h] BYREF
  _DWORD *v29; // [rsp+A0h] [rbp+17h]
  int v30; // [rsp+A8h] [rbp+1Fh]
  int v31; // [rsp+ACh] [rbp+23h]

  v4 = a1;
  v5 = *(_DWORD *)(a2 + 184);
  if ( (v5 & 0x40) != 0 )
  {
    LOBYTE(a1) = *(_BYTE *)(a2 + 48);
    v25[0] = -1073740682;
    EtwTraceStartInputDeviceRead(a1, 0xC0000476, a3);
    return v25[0];
  }
  v6 = *(unsigned __int8 *)(a2 + 48);
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 168) = 0;
  *(_QWORD *)(a2 + 176) = 0LL;
  *(_DWORD *)(a2 + 256) = -1073741823;
  if ( *(_QWORD *)(a2 + 224) )
  {
    if ( (_BYTE)v6 == 2 )
    {
      v7 = *(_QWORD *)(a2 + 456);
      Buffer = *(void **)(v7 + 24);
      Length = 10 * *(unsigned __int16 *)(v7 + 44);
    }
    else
    {
      Length = *(&v4[2].Flags + 20 * v6);
      Buffer = (void *)(a2 + *((unsigned int *)&v4[2].MatchAllKeyword + 20 * v6 + 1));
    }
    v10 = *(void **)(a2 + 32);
    *(_DWORD *)(a2 + 184) = v5 | 0x40;
    v25[0] = ObReferenceObjectByPointer(v10, 3u, ExRawInputManagerObjectType, 0);
    if ( v25[0] >= 0 )
    {
      File = ZwReadFile(
               *(HANDLE *)(a2 + 224),
               0LL,
               rimInputApc,
               (PVOID)a2,
               (PIO_STATUS_BLOCK)(a2 + 256),
               Buffer,
               Length,
               (PLARGE_INTEGER)&gZero,
               0LL);
      LOBYTE(v12) = *(_BYTE *)(a2 + 48);
      *(_DWORD *)(a2 + 272) = File;
      v25[0] = File;
      EtwTraceStartInputDeviceRead(v12, File, v13);
      if ( v25[0] < 0 )
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
      }
      else if ( (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
      {
        if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
        {
          v14 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v14);
          TlgCreateWsz(&v28, *(LPCWSTR *)(a2 + 216));
          v31 = 0;
          v29 = v25;
          v30 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A807, 0LL, v15, 5u, &pData);
        }
        *(_DWORD *)(a2 + 184) &= ~0x80u;
      }
      if ( v25[0] == -1073741670 )
      {
        v17 = *(_BYTE *)(a2 + 204);
        *(_BYTE *)(a2 + 204) = v17 + 1;
        if ( v17 >= 5u )
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum retryReads reached\n");
          LODWORD(ByteOffset) = v25[0];
          WPP_RECORDER_SF_qqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v21,
            0x14u,
            0xBu,
            (__int64)&WPP_474e73d4ddaa398f08cacad707c53e10_Traceguids,
            v4,
            a2,
            ByteOffset);
          if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
          {
            v22 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v22);
            TlgCreateWsz(&v28, *(LPCWSTR *)(a2 + 216));
            v31 = 0;
            v29 = v25;
            v30 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A761, 0LL, v23, 5u, &pData);
          }
        }
        else
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n");
          LODWORD(ByteOffset) = v25[0];
          WPP_RECORDER_SF_qqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v18,
            0x14u,
            0xAu,
            (__int64)&WPP_474e73d4ddaa398f08cacad707c53e10_Traceguids,
            v4,
            a2,
            ByteOffset);
          if ( dword_1C018D230 > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
            {
              v19 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
              TlgCreateWsz(&pDesc, v19);
              TlgCreateWsz(&v28, *(LPCWSTR *)(a2 + 216));
              v31 = 0;
              v29 = v25;
              v30 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A7B0, 0LL, v20, 5u, &pData);
            }
          }
          *(_DWORD *)(a2 + 184) &= ~0x40u;
          ZwSetEvent((HANDLE)v4[7].MatchAnyKeyword, 0LL);
        }
      }
    }
    return v25[0];
  }
  return 0LL;
}
