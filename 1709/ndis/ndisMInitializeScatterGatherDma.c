/*
 * XREFs of ndisMInitializeScatterGatherDma @ 0x1C00C33C0
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1C00C32D0 (NdisMRegisterScatterGatherDma.c)
 *     NdisMInitializeScatterGatherDma @ 0x1C00E2F20 (NdisMInitializeScatterGatherDma_ea_1C00E2F20.c)
 * Callees:
 *     ndisDereferenceDmaAdapter @ 0x1C0001F54 (ndisDereferenceDmaAdapter.c)
 *     PplDestroyLookasideList @ 0x1C0002038 (PplDestroyLookasideList.c)
 *     ndisAssignSGListLookasideList @ 0x1C001B470 (ndisAssignSGListLookasideList.c)
 *     PplCreateLookasideList @ 0x1C001B4F0 (PplCreateLookasideList.c)
 *     NdisWriteErrorLogEntry @ 0x1C0023DE0 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisMInitializeScatterGatherDma(
        unsigned __int16 *NdisAdapterHandle,
        unsigned __int8 a2,
        unsigned int a3,
        int a4)
{
  _QWORD *v4; // rsi
  _QWORD *LookasideList; // r14
  __int64 v10; // rcx
  unsigned __int8 v11; // dl
  int v12; // eax
  _QWORD *PoolWithTag; // rax
  int v14; // eax
  unsigned int v15; // ecx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // edi
  __int64 v24; // rcx
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-35h] BYREF
  SIZE_T v27; // [rsp+48h] [rbp-31h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+50h] [rbp-29h] BYREF

  NumberOfMapRegisters = 0;
  v4 = 0LL;
  LookasideList = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qdD(0xAu, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, (__int64)NdisAdapterHandle, a2, a4);
  v10 = *((_QWORD *)NdisAdapterHandle + 473);
  v11 = *(_BYTE *)(v10 + 24);
  if ( v11 < 5u || (v12 = *((_DWORD *)NdisAdapterHandle + 30), (v12 & 8) == 0) )
  {
    v22 = -1073741637;
LABEL_24:
    if ( LookasideList )
    {
      if ( v22 )
        PplDestroyLookasideList(LookasideList);
      else
        ndisAssignSGListLookasideList((__int64)v4, (__int64)LookasideList);
    }
    goto LABEL_27;
  }
  if ( v11 == 5 && *(_BYTE *)(v10 + 25) == 2 )
  {
    v24 = *((_QWORD *)NdisAdapterHandle + 63);
    if ( v24 )
    {
      v22 = 0;
      *((_DWORD *)NdisAdapterHandle + 468) |= 4u;
      *((_DWORD *)NdisAdapterHandle + 30) = v12 | 0x40;
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 72));
      goto LABEL_27;
    }
  }
  if ( (*((_DWORD *)NdisAdapterHandle + 926) & 0x100) != 0
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu), (v4 = PoolWithTag) == 0LL) )
  {
LABEL_39:
    v22 = -1073741670;
    goto LABEL_27;
  }
  memset(PoolWithTag, 0, 0xA0uLL);
  *(_DWORD *)v4 = 10486031;
  v4[1] = NdisAdapterHandle;
  v4[2] = *((_QWORD *)NdisAdapterHandle + 3);
  *((_DWORD *)v4 + 13) = a4;
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  v14 = *((_DWORD *)NdisAdapterHandle + 935);
  *(_DWORD *)&DeviceDescription[16] = 0;
  *(_DWORD *)&DeviceDescription[12] = v14;
  *(_DWORD *)&DeviceDescription[20] = *((_DWORD *)NdisAdapterHandle + 119);
  *(_WORD *)&DeviceDescription[4] = 257;
  if ( a2 )
  {
    *((_DWORD *)NdisAdapterHandle + 30) |= 0x10u;
    DeviceDescription[8] = 0;
    DeviceDescription[11] = 1;
  }
  else
  {
    DeviceDescription[8] = 1;
    DeviceDescription[11] = 0;
  }
  v15 = NdisAdapterHandle[1851];
  if ( ((unsigned int)(2 * a4 - 2) >> 12) + 2 < v15 )
    *(_DWORD *)&DeviceDescription[32] = (v15 << 12) - 4096;
  else
    *(_DWORD *)&DeviceDescription[32] = 2 * a4;
  *(_DWORD *)DeviceDescription = a3;
  if ( a3 >= 3 )
    *(_DWORD *)&DeviceDescription[40] = a2 != 0 ? 64 : 32;
  if ( v4[3]
    || (DmaAdapter = IoGetDmaAdapter(
                       *((PDEVICE_OBJECT *)NdisAdapterHandle + 482),
                       (struct _DEVICE_DESCRIPTION *)DeviceDescription,
                       &NumberOfMapRegisters),
        (v4[3] = DmaAdapter) != 0LL) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(
        0xCu,
        &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids,
        (__int64)NdisAdapterHandle,
        NumberOfMapRegisters);
    _InterlockedIncrement((volatile signed __int32 *)v4 + 18);
    v17 = (*((_DWORD *)NdisAdapterHandle + 30) & 0x40000) == 0;
    *((_QWORD *)NdisAdapterHandle + 63) = v4;
    if ( v17 )
      *((_QWORD *)NdisAdapterHandle + 55) = ndisMSendCompleteSG;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int *, SIZE_T *))(*(_QWORD *)(v4[3] + 8LL)
                                                                                         + 104LL))(
           v4[3],
           0LL,
           0LL,
           NumberOfMapRegisters << 12,
           &v26,
           &v27) >= 0 )
    {
      *((_DWORD *)v4 + 14) = v26;
      if ( v4[8] || (LookasideList = PplCreateLookasideList(v19, v18, v20, v21, v26)) != 0LL )
      {
        *((_DWORD *)NdisAdapterHandle + 30) |= 0x40u;
        v22 = 0;
        *((_DWORD *)NdisAdapterHandle + 468) |= 4u;
        goto LABEL_24;
      }
    }
    ndisDereferenceDmaAdapter(v4);
    goto LABEL_39;
  }
  NdisWriteErrorLogEntry(NdisAdapterHandle, 0xC0001389, 1u, 0xFFFFFFFFLL);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_q(0xBu, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, (__int64)NdisAdapterHandle);
  v22 = -1073741670;
  ExFreePoolWithTag(v4, 0);
  *((_QWORD *)NdisAdapterHandle + 63) = 0LL;
LABEL_27:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0xDu, &WPP_27989bf75f273fb4647da878cf4d879f_Traceguids, (__int64)NdisAdapterHandle, v22);
  return v22;
}
