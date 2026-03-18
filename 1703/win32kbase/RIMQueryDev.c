/*
 * XREFs of RIMQueryDev @ 0x1C00953F4
 * Callers:
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0099F30 (RIMRefreshDeviceAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C0055F74 (WPP_RECORDER_SF_qDD.c)
 *     RIMGetKbdExId @ 0x1C0092E00 (RIMGetKbdExId.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0095518 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_qL @ 0x1C010DB58 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall RIMQueryDev(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // eax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // esi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

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
    if ( (int)RIMGetKbdExId(*(HANDLE *)(a2 + 224), &v17) < 0 )
    {
      v12 = *(unsigned __int8 *)(a2 + 456);
      v13 = *(unsigned __int8 *)(a2 + 457);
      *(_DWORD *)(a2 + 484) = v12;
      *(_DWORD *)(a2 + 488) = v13;
      LODWORD(v16) = v13;
      LODWORD(v15) = v12;
      WPP_RECORDER_SF_qDD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x11u,
        0x15u,
        (__int64)&WPP_4abad023f51c380e85db81e5a59c95c2_Traceguids,
        a2,
        v15,
        v16);
    }
    else
    {
      v11 = v17;
      WPP_RECORDER_SF_DDDD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int8 *)(a2 + 456),
        v9,
        v10,
        v14,
        *(_BYTE *)(a2 + 456),
        *(_BYTE *)(a2 + 457),
        v17,
        SBYTE4(v17));
      *(_QWORD *)(a2 + 484) = v11;
    }
  }
  *(_DWORD *)(a2 + 200) &= ~0x40u;
  return v7;
}
