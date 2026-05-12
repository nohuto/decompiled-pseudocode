/*
 * XREFs of RaidAdapterSurpriseRemovalIrp @ 0x1C0067A28
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012070 (RaidAdapterPnpIrp.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0003A20 (_TlgCreateWsz.c)
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrp @ 0x1C00122A4 (RaForwardIrp.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C002B808 (McTemplateK0pq.c)
 *     RaidAdapterDisableDeviceInterface @ 0x1C002D070 (RaidAdapterDisableDeviceInterface.c)
 *     RaidAdapterDisableRpmbInterface @ 0x1C002D16C (RaidAdapterDisableRpmbInterface.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C002D924 (RaidAdapterMarkChildrenMissing.c)
 *     RaidReleaseAdapterRemoveLockAndWait @ 0x1C00305E4 (RaidReleaseAdapterRemoveLockAndWait.c)
 *     RaidAdapterReleaseResources @ 0x1C00675F0 (RaidAdapterReleaseResources.c)
 */

NTSTATUS __fastcall RaidAdapterSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  int v2; // r15d
  char v3; // si
  int v4; // r12d
  int v5; // r14d
  __int64 v8; // r8
  char v9; // al
  const WCHAR *v10; // rdx
  int v11; // r11d
  int v12; // esi
  LPCWSTR v13; // r10
  int v14; // r11d
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  UINT32 cData; // [rsp+20h] [rbp-A9h]
  char v19; // [rsp+30h] [rbp-99h] BYREF
  _BYTE hProvider[71]; // [rsp+31h] [rbp-98h] BYREF
  int v21; // [rsp+78h] [rbp-51h]
  int v22; // [rsp+7Ch] [rbp-4Dh]
  _BYTE *v23; // [rsp+80h] [rbp-49h]
  int v24; // [rsp+88h] [rbp-41h]
  int v25; // [rsp+8Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-39h] BYREF
  char *v27; // [rsp+A0h] [rbp-29h]
  int v28; // [rsp+A8h] [rbp-21h]
  int v29; // [rsp+ACh] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+B0h] [rbp-19h] BYREF
  _BYTE *v31; // [rsp+C0h] [rbp-9h]
  int v32; // [rsp+C8h] [rbp-1h]
  int v33; // [rsp+CCh] [rbp+3h]
  _BYTE *v34; // [rsp+D0h] [rbp+7h]
  int v35; // [rsp+D8h] [rbp+Fh]
  int v36; // [rsp+DCh] [rbp+13h]
  _BYTE *v37; // [rsp+E0h] [rbp+17h]
  int v38; // [rsp+E8h] [rbp+1Fh]
  int v39; // [rsp+ECh] [rbp+23h]

  v2 = *(_DWORD *)(a1 + 88);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = 0;
  *(_DWORD *)(a1 + 88) = 5;
  if ( (unsigned int)(v2 - 5) > 1 )
  {
    RaidAdapterDisableDeviceInterface(a1);
    RaidAdapterDisableRpmbInterface(a1);
    if ( (unsigned int)RaidIsAdapterControlSupported(a1, 16) )
    {
      v5 = RaCallMiniportAdapterControl(a1 + 296);
      v3 = 1;
    }
    RaidReleaseAdapterRemoveLockAndWait(a1);
    RaidAdapterMarkChildrenMissing(a1);
    RaidAdapterReleaseResources(a1, (__int64)a2, v8);
  }
  if ( StorEtwLoggingEnabled )
  {
    *(_OWORD *)&hProvider[15] = 0uLL;
    IoGetActivityIdIrp(a2, &hProvider[15]);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      cData = a2->IoStatus.Status;
      McTemplateK0pq(a1, &EventPnpRequestComplete, (const GUID *)&hProvider[15], a2, cData);
    }
  }
  if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v9 = *(_BYTE *)(a1 + 4356);
    v10 = *(const WCHAR **)(a1 + 4800);
    v22 = 0;
    v25 = 0;
    v19 = v9;
    *(_QWORD *)&hProvider[63] = a1 + 5192;
    v23 = &hProvider[3];
    *(_DWORD *)&hProvider[3] = v4;
    hProvider[0] = v2;
    hProvider[1] = v3;
    *(_DWORD *)&hProvider[7] = v5;
    v21 = 16;
    v24 = 4;
    TlgCreateWsz(&pDesc, v10);
    v29 = 0;
    v27 = &v19;
    v12 = v11 - 3;
    v28 = v11 - 3;
    TlgCreateWsz(&v30, v13);
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v34 = &hProvider[1];
    v37 = &hProvider[7];
    v31 = hProvider;
    v32 = v12;
    v35 = v12;
    v38 = v14;
    TlgWrite((TraceLoggingHProvider)hProvider, &unk_1C004B650, v15, v16, 0xAu, (EVENT_DATA_DESCRIPTOR *)&hProvider[31]);
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
