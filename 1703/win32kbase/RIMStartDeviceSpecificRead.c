/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C0095144
 * Callers:
 *     rimInputApc @ 0x1C008E100 (rimInputApc.c)
 *     rimStartDeviceReadIfAllowed @ 0x1C0093CDC (rimStartDeviceReadIfAllowed.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0007364 (RimDeviceTypeToRimInputTypeString.c)
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0094B5C (WPP_RECORDER_SF_qqD.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  void *Buffer; // rsi
  ULONG Length; // r14d
  void *v9; // rcx
  unsigned int v10; // r9d
  NTSTATUS File; // eax
  const wchar_t *v13; // rax
  LPCGUID v14; // r9
  unsigned __int8 v15; // cl
  __int64 v16; // rdx
  const wchar_t *v17; // rax
  LPCGUID v18; // r9
  __int64 v19; // rdx
  const wchar_t *v20; // rax
  LPCGUID v21; // r9
  PLARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-61h]
  _DWORD v23[4]; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+90h] [rbp-9h] BYREF
  _DWORD *v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]

  v4 = *(_DWORD *)(a2 + 184);
  if ( (v4 & 0x40) != 0 )
    return (unsigned int)-1073740682;
  v5 = *(unsigned __int8 *)(a2 + 48);
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 168) = 0;
  *(_QWORD *)(a2 + 176) = 0LL;
  *(_DWORD *)(a2 + 256) = -1073741823;
  if ( *(_QWORD *)(a2 + 224) )
  {
    if ( (_BYTE)v5 == 2 )
    {
      v6 = *(_QWORD *)(a2 + 456);
      Buffer = *(void **)(v6 + 24);
      Length = 10 * *(unsigned __int16 *)(v6 + 44);
    }
    else
    {
      Length = *(_DWORD *)(a1 + 80 * v5 + 176);
      Buffer = (void *)(a2 + *(unsigned int *)(a1 + 80 * v5 + 172));
    }
    v9 = *(void **)(a2 + 32);
    *(_DWORD *)(a2 + 184) = v4 | 0x40;
    v23[0] = ObReferenceObjectByPointer(v9, 3u, ExRawInputManagerObjectType, 0);
    v10 = v23[0];
    if ( v23[0] >= 0 )
    {
      File = ZwReadFile(
               *(HANDLE *)(a2 + 224),
               0LL,
               (PIO_APC_ROUTINE)rimInputApc,
               (PVOID)a2,
               (PIO_STATUS_BLOCK)(a2 + 256),
               Buffer,
               Length,
               (PLARGE_INTEGER)&gZero,
               0LL);
      *(_DWORD *)(a2 + 272) = File;
      v23[0] = File;
      v10 = File;
      if ( File < 0 )
      {
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
        v10 = v23[0];
      }
      else if ( (*(_DWORD *)(a2 + 184) & 0x80u) != 0 )
      {
        if ( (unsigned int)dword_1C0188840 > 5
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
        {
          v13 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
          TlgCreateWsz(&pDesc, v13);
          TlgCreateWsz(&v26, *(LPCWSTR *)(a2 + 216));
          v29 = 0;
          v27 = v23;
          v28 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A6B0, 0LL, v14, 5u, &pData);
          v10 = v23[0];
        }
        *(_DWORD *)(a2 + 184) &= ~0x80u;
      }
      if ( v10 == -1073741670 )
      {
        v15 = *(_BYTE *)(a2 + 204);
        *(_BYTE *)(a2 + 204) = v15 + 1;
        if ( v15 >= 5u )
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum retryReads reached\n");
          LODWORD(ByteOffset) = v23[0];
          WPP_RECORDER_SF_qqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v19,
            0x14u,
            0xBu,
            (__int64)&WPP_60f4ec9f61d13c11306ba730254f3965_Traceguids,
            a1,
            a2,
            ByteOffset);
          if ( (unsigned int)dword_1C0188840 > 5
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
          {
            v20 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
            TlgCreateWsz(&pDesc, v20);
            TlgCreateWsz(&v26, *(LPCWSTR *)(a2 + 216));
            v29 = 0;
            v27 = v23;
            v28 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A60A, 0LL, v21, 5u, &pData);
          }
        }
        else
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n");
          LODWORD(ByteOffset) = v23[0];
          WPP_RECORDER_SF_qqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v16,
            0x14u,
            0xAu,
            (__int64)&WPP_60f4ec9f61d13c11306ba730254f3965_Traceguids,
            a1,
            a2,
            ByteOffset);
          if ( (unsigned int)dword_1C0188840 > 5 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
            {
              v17 = RimDeviceTypeToRimInputTypeString(a2, *(unsigned __int8 *)(a2 + 48));
              TlgCreateWsz(&pDesc, v17);
              TlgCreateWsz(&v26, *(LPCWSTR *)(a2 + 216));
              v29 = 0;
              v27 = v23;
              v28 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A659, 0LL, v18, 5u, &pData);
            }
          }
          *(_DWORD *)(a2 + 184) &= ~0x40u;
          ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
        }
        return v23[0];
      }
    }
    return v10;
  }
  return 0LL;
}
