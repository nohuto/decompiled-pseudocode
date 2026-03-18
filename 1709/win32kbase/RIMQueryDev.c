/*
 * XREFs of RIMQueryDev @ 0x1C0008CD8
 * Callers:
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 *     RIMRefreshDeviceAttributes @ 0x1C00A5230 (RIMRefreshDeviceAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C000E5AC (WPP_RECORDER_SF_qDD.c)
 *     RIMGetKbdExId @ 0x1C009A600 (RIMGetKbdExId.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C009B2C0 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_qL @ 0x1C010CB3C (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // eax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // esi
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+60h] [rbp+8h]

  v3 = ZwDeviceIoControlFile(
         *(HANDLE *)(a2 + 224),
         0LL,
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)(a2 + 256),
         *(_DWORD *)(a1 + 80LL * *(unsigned __int8 *)(a2 + 48) + 160),
         0LL,
         0,
         (PVOID)(a2 + *(unsigned int *)(a1 + 80LL * *(unsigned __int8 *)(a2 + 48) + 164)),
         *(_DWORD *)(a1 + 80LL * *(unsigned __int8 *)(a2 + 48) + 168));
  *(_DWORD *)(a2 + 292) = v3;
  v7 = v3;
  if ( v3 < 0 )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v14, a2, v3);
  if ( *(_BYTE *)(a2 + 48) == 1 )
  {
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 224)) < 0 )
    {
      v12 = *(unsigned __int8 *)(a2 + 456);
      v13 = *(unsigned __int8 *)(a2 + 457);
      *(_DWORD *)(a2 + 484) = v12;
      *(_DWORD *)(a2 + 488) = v13;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_qDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        17,
        21,
        (__int64)&WPP_9161076fa35a349775df2bff3996d00f_Traceguids,
        a2,
        v12,
        v13);
    }
    else
    {
      WPP_RECORDER_SF_DDDD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int8 *)(a2 + 456),
        v10,
        v11,
        v14,
        *(_BYTE *)(a2 + 456),
        *(_BYTE *)(a2 + 457),
        v15,
        SBYTE4(v15));
      *(_QWORD *)(a2 + 484) = v15;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v7;
}
