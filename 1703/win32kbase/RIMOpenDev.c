/*
 * XREFs of RIMOpenDev @ 0x1C0094D18
 * Callers:
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0007364 (RimDeviceTypeToRimInputTypeString.c)
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qdDSD @ 0x1C010DC28 (WPP_RECORDER_SF_qdDSD.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4)
{
  int MaxOpenRetries; // eax
  unsigned int v8; // edi
  int v9; // r15d
  NTSTATUS File; // eax
  NTSTATUS v11; // r10d
  const wchar_t *v13; // rax
  LPCGUID v14; // r9
  int v15; // eax
  char v16; // al
  int v17; // edx
  int v18; // r8d
  char v19; // r10
  char v20; // al
  int v21; // edx
  int v22; // r8d
  char v23; // r10
  int Object; // [rsp+20h] [rbp-B1h]
  NTSTATUS v25; // [rsp+60h] [rbp-71h] BYREF
  ULONG ShareAccess; // [rsp+64h] [rbp-6Dh]
  PVOID v27; // [rsp+68h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+A0h] [rbp-31h] BYREF
  NTSTATUS *v31; // [rsp+B0h] [rbp-21h]
  int v32; // [rsp+B8h] [rbp-19h]
  int v33; // [rsp+BCh] [rbp-15h]

  ShareAccess = a4;
  if ( (int)IsGetMaxOpenRetriesSupported() < 0 )
    MaxOpenRetries = 1;
  else
    MaxOpenRetries = GetMaxOpenRetries();
  *(_DWORD *)(a1 + 184) |= 0x80u;
  v8 = MaxOpenRetries + 1;
  v9 = 0;
  if ( MaxOpenRetries == -1 )
  {
LABEL_21:
    v11 = v25;
    goto LABEL_9;
  }
  while ( 1 )
  {
    File = ZwCreateFile((PHANDLE)(a1 + 224), a3, a2, (PIO_STATUS_BLOCK)(a1 + 256), 0LL, 0, ShareAccess, 3u, 0, 0LL, 0);
    v25 = File;
    v11 = File;
    *(_DWORD *)(a1 + 288) = File;
    if ( File != -1073741757 && File != -1073741790 )
      break;
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 )
    {
      v15 = (int)IsGetgfSwitchInProgressSupported() < 0 ? 0 : GetgfSwitchInProgress();
      v11 = v25;
      if ( !v15 )
        break;
    }
    v16 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    WPP_RECORDER_SF_qdDSD(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      v18,
      16,
      Object,
      a1,
      v18,
      v16,
      *(_QWORD *)(a1 + 216),
      v19);
    RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    DbgPrintRIMAlways("rimdev: RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %08x..retry after 100ms\n");
    v27 = (PVOID)-1000000LL;
    KeDelayExecutionThread(1, 0, (PLARGE_INTEGER)&v27);
    if ( ++v9 >= v8 )
      goto LABEL_21;
  }
  if ( (unsigned int)dword_1C0188840 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
  {
    v13 = RimDeviceTypeToRimInputTypeString(a1, *(unsigned __int8 *)(a1 + 48));
    TlgCreateWsz(&pDesc, v13);
    TlgCreateWsz(&v30, *(LPCWSTR *)(a1 + 216));
    v33 = 0;
    v31 = &v25;
    v32 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A50E, 0LL, v14, 5u, &pData);
    v11 = v25;
  }
  if ( v11 == -1073741757 || v11 == -1073741790 )
  {
    v20 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    WPP_RECORDER_SF_qdDSD(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      v22,
      17,
      Object,
      a1,
      v22,
      v20,
      *(_QWORD *)(a1 + 216),
      v23);
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
      KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
    goto LABEL_21;
  }
LABEL_9:
  if ( v11 >= 0 )
  {
    v11 = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 224), 0, (POBJECT_TYPE)IoFileObjectType, 0, &v27, 0LL);
    *(_QWORD *)(a1 + 232) = v27;
  }
  return (unsigned int)v11;
}
