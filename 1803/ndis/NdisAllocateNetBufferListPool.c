/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x1C0014E20
 * Callers:
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 *     ndisInitializePeriodicReceives @ 0x1C011EDC8 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     ndisPplCreatePool @ 0x1C0015018 (ndisPplCreatePool.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_PP @ 0x1C004DBA4 (WPP_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  __int64 v3; // rdx
  char *Pool; // rbx
  int v5; // r12d
  NDIS_HANDLE v6; // r13
  unsigned __int16 ContextSize; // r14
  SIZE_T DataSize; // rsi
  int v9; // r15d
  unsigned int v10; // r15d
  KIRQL v11; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v13; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  char v16; // [rsp+68h] [rbp+10h]

  v3 = 0LL;
  Pool = 0LL;
  v5 = 0;
  v6 = NdisHandle;
  if ( (unsigned __int8)byte_1C009961C >= 4u )
    WPP_SF_q(15LL, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids, NdisHandle);
  if ( Parameters->Header.Type == 0x80 && Parameters->Header.Revision )
  {
    LOBYTE(NdisHandle) = Parameters->fAllocateNetBuffer;
    ContextSize = Parameters->ContextSize;
    DataSize = Parameters->DataSize;
    v16 = (char)NdisHandle;
    v9 = (_BYTE)NdisHandle != 0 ? 560 : 384;
    if ( ContextSize )
    {
      if ( (ContextSize & 7) != 0 )
      {
        if ( (unsigned __int8)byte_1C009961C >= 2u )
          WPP_SF_d(16LL, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids, ContextSize);
        goto LABEL_16;
      }
      v9 += ContextSize + 16;
    }
    if ( !(_DWORD)DataSize )
      goto LABEL_7;
    if ( (_BYTE)NdisHandle )
    {
      if ( (unsigned int)DataSize <= 0x100000 )
      {
        v5 = (MmSizeOfMdl((PVOID)0xFFF, DataSize) + 7) & 0xFFFFFFF8;
        v9 += DataSize + v5;
LABEL_7:
        v10 = (v9 + 7) & 0xFFFFFFF8;
        Pool = (char *)ndisPplCreatePool(NdisHandle, v10, Parameters->PoolTag);
        if ( Pool )
        {
          *(_DWORD *)Pool = 25166093;
          *((_QWORD *)Pool + 5) = v6;
          *((_DWORD *)Pool + 14) = Parameters->PoolTag;
          Pool[32] = Parameters->ProtocolId;
          if ( v16 )
            *((_DWORD *)Pool + 15) |= 1u;
          if ( ContextSize )
          {
            *((_DWORD *)Pool + 15) |= 2u;
            *((_WORD *)Pool + 17) = ContextSize;
          }
          if ( (_DWORD)DataSize )
          {
            *((_DWORD *)Pool + 15) |= 4u;
            *((_DWORD *)Pool + 22) = DataSize;
            *((_DWORD *)Pool + 23) = v5;
          }
          *((_DWORD *)Pool + 24) = v10;
          KeInitializeSpinLock((PKSPIN_LOCK)Pool + 8);
          KeInitializeSpinLock((PKSPIN_LOCK)Pool + 1);
          *((_QWORD *)Pool + 3) = Pool + 16;
          *((_QWORD *)Pool + 2) = Pool + 16;
          v11 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferListPoolListLock);
          Flink = ndisGlobalNetBufferListPoolList.Flink;
          v13 = (_LIST_ENTRY *)(Pool + 72);
          if ( ndisGlobalNetBufferListPoolList.Flink->Blink != &ndisGlobalNetBufferListPoolList )
            __fastfail(3u);
          v13->Flink = ndisGlobalNetBufferListPoolList.Flink;
          *((_QWORD *)Pool + 10) = &ndisGlobalNetBufferListPoolList;
          Flink->Blink = v13;
          ndisGlobalNetBufferListPoolList.Flink = (_LIST_ENTRY *)(Pool + 72);
          KeReleaseSpinLock(&ndisGlobalNetBufferListPoolListLock, v11);
          *((_QWORD *)Pool + 6) = retaddr;
        }
        goto LABEL_16;
      }
      if ( (unsigned __int8)byte_1C009961C >= 2u )
        WPP_SF_PP(18LL, v3, DataSize);
    }
    else if ( (unsigned __int8)byte_1C009961C >= 2u )
    {
      WPP_SF_(17LL, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids);
    }
  }
LABEL_16:
  if ( (unsigned __int8)byte_1C009961C >= 4u )
    WPP_SF_qq(19LL, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids, v6, Pool);
  return Pool;
}
