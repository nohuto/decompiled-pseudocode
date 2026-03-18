/*
 * XREFs of RIMOpenDev @ 0x1C000C32C
 * Callers:
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C000C538 (RimDeviceTypeToRimInputTypeString.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00F0070 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qdDSD @ 0x1C010CC0C (WPP_RECORDER_SF_qdDSD.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4)
{
  unsigned int MaxOpenRetries; // edi
  int v8; // r15d
  NTSTATUS File; // eax
  NTSTATUS v10; // r10d
  const WCHAR *v11; // rax
  LPCGUID v12; // r9
  int v14; // eax
  char v15; // al
  int v16; // edx
  int v17; // r8d
  char v18; // r10
  char v19; // al
  int v20; // edx
  int v21; // r8d
  char v22; // r10
  int cData; // [rsp+20h] [rbp-A1h]
  NTSTATUS v24; // [rsp+60h] [rbp-61h] BYREF
  ULONG ShareAccess; // [rsp+64h] [rbp-5Dh]
  PVOID Object; // [rsp+68h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp-21h] BYREF
  NTSTATUS *v30; // [rsp+B0h] [rbp-11h]
  int v31; // [rsp+B8h] [rbp-9h]
  int v32; // [rsp+BCh] [rbp-5h]

  ShareAccess = a4;
  if ( (int)IsGetMaxOpenRetriesSupported() < 0 )
    MaxOpenRetries = 1;
  else
    MaxOpenRetries = GetMaxOpenRetries();
  *(_DWORD *)(a1 + 184) |= 0x80u;
  v8 = 0;
  if ( !MaxOpenRetries )
  {
LABEL_21:
    v10 = v24;
    goto LABEL_11;
  }
  while ( 1 )
  {
    File = ZwCreateFile((PHANDLE)(a1 + 224), a3, a2, (PIO_STATUS_BLOCK)(a1 + 256), 0LL, 0, ShareAccess, 3u, 0, 0LL, 0);
    v24 = File;
    v10 = File;
    *(_DWORD *)(a1 + 288) = File;
    if ( File != -1073741757 && File != -1073741790 )
      break;
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      v14 = (int)IsGetgfSwitchInProgressSupported() < 0 ? 0 : GetgfSwitchInProgress();
      v10 = v24;
      if ( !v14 )
        break;
    }
    v15 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    WPP_RECORDER_SF_qdDSD(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      v17,
      16,
      cData,
      a1,
      v17,
      v15,
      *(_QWORD *)(a1 + 216),
      v18);
    RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    DbgPrintRIMAlways("rimdev: RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %08x..retry after 100ms\n");
    Object = (PVOID)-1000000LL;
    KeDelayExecutionThread(1, 0, (PLARGE_INTEGER)&Object);
    if ( ++v8 >= MaxOpenRetries )
      goto LABEL_21;
  }
  if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
  {
    v11 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a1, *(unsigned __int8 *)(a1 + 48));
    TlgCreateWsz(&pDesc, v11);
    TlgCreateWsz(&v29, *(LPCWSTR *)(a1 + 216));
    v32 = 0;
    v30 = &v24;
    v31 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A665, 0LL, v12, 5u, &pData);
    v10 = v24;
  }
  if ( v10 == -1073741757 || v10 == -1073741790 )
  {
    v19 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    WPP_RECORDER_SF_qdDSD(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      v21,
      17,
      cData,
      a1,
      v21,
      v19,
      *(_QWORD *)(a1 + 216),
      v22);
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
      KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
    goto LABEL_21;
  }
LABEL_11:
  if ( v10 >= 0 )
  {
    v10 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 224), 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    *(_QWORD *)(a1 + 232) = Object;
  }
  return (unsigned int)v10;
}
