/*
 * XREFs of ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00C9984
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00C9930 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C001B9C0 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     NdisGroupActiveProcessorCount @ 0x1C001EB50 (NdisGroupActiveProcessorCount.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall ndisPcwCollectData(PPCW_BUFFER Buffer)
{
  ULONG active; // r15d
  PVOID i; // rbx
  int v4; // esi
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r9
  ULONG v8; // r8d
  NTSTATUS v9; // edi
  __int64 v10; // r8
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  ULONG v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  int SetMiniport; // eax
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  struct _PCW_DATA v21; // [rsp+38h] [rbp-C8h] BYREF
  KLockHolder v22; // [rsp+48h] [rbp-B8h] BYREF
  struct _PCW_DATA Data; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[248]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v25[38]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v26[38]; // [rsp+2A0h] [rbp+1A0h] BYREF

  active = NdisGroupActiveProcessorCount(0xFFFFu);
  memset(v26, 0, sizeof(v26));
  v22.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  KeEnterCriticalRegion();
  v22.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
  v22.m_State = Exclusive;
LABEL_2:
  for ( i = ndisPcwDataBlockList; ; i = (PVOID)*((_QWORD *)i + 20) )
  {
    if ( !i )
    {
      v21.Size = 304;
      v21.Data = v26;
      v9 = PcwAddInstance(Buffer, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v21);
      goto LABEL_21;
    }
    memset(v25, 0, sizeof(v25));
    v4 = 0;
    if ( active )
      break;
LABEL_9:
    v10 = *((_QWORD *)i + 22);
    if ( v10 && (*(_DWORD *)(v10 + 48) & 0x2000000) != 0 && ndisReferenceMiniport(*((_QWORD *)i + 22)) )
    {
      ++*((_DWORD *)i + 42);
      v11 = (_QWORD *)*((_QWORD *)i + 22);
      ExReleasePushLockExclusiveEx(&ndisPcwMutex, 0LL);
      KeLeaveCriticalRegion();
      v12 = v11[445];
      v20 = 0LL;
      if ( v12 && (*(_DWORD *)(v12 + 8) & 2) != 0 )
      {
        memset(v24, 0, sizeof(v24));
        *(_DWORD *)&v24[88] |= 8u;
        *(_QWORD *)&v24[104] = &ndisIntReqGeneric;
        *(_DWORD *)v24 = 15466902;
        *(_QWORD *)&v24[40] = &v20;
        *(_DWORD *)&v24[32] = 66101;
        *(_QWORD *)&v24[4] = 2LL;
        *(_DWORD *)&v24[48] = 8;
        SetMiniport = ndisQuerySetMiniport(v11, 0LL, (struct _NDIS_OID_REQUEST *)v24, 0LL, 0LL);
        v13 = v20;
        if ( SetMiniport )
          v13 = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      v25[37] = v13;
      ndisDereferenceMiniport((__int64)v11, 0x5Du);
      KeEnterCriticalRegion();
      v22.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(&ndisPcwMutex, 0LL);
      v14 = (*((_DWORD *)i + 42))-- == 1;
      v22.m_State = Exclusive;
      if ( v14 )
      {
        ExFreePoolWithTag(i, 0);
        goto LABEL_2;
      }
    }
    v15 = *((_DWORD *)i + 46);
    v21.Data = v25;
    v21.Size = 304;
    v9 = PcwAddInstance(Buffer, (PCUNICODE_STRING)i + 12, v15, 1u, &v21);
    if ( v9 < 0 )
      goto LABEL_21;
    v16 = 0LL;
    v17 = 38LL;
    do
    {
      v26[v16] += v25[v16];
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  while ( 1 )
  {
    PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)i, v4);
    v6 = v25;
    v7 = 38LL;
    do
    {
      *v6 += *(_QWORD *)((char *)v6 + PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)v25);
      ++v6;
      --v7;
    }
    while ( v7 );
    v8 = *((_DWORD *)PerCpuDataForProcessor + 102);
    Data.Data = PerCpuDataForProcessor;
    Data.Size = 304;
    v9 = PcwAddInstance(Buffer, (PCUNICODE_STRING)PerCpuDataForProcessor + 26, v8, 1u, &Data);
    if ( v9 < 0 )
      break;
    if ( ++v4 >= active )
      goto LABEL_9;
  }
LABEL_21:
  KLockHolder::~KLockHolder(&v22);
  return (unsigned int)v9;
}
