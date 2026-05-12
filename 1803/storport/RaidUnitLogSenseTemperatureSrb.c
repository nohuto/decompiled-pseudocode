/*
 * XREFs of RaidUnitLogSenseTemperatureSrb @ 0x1C003CF08
 * Callers:
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003BB54 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0002C50 (RaSendIrpSynchronous.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C00041A0 (PortSrbTranslateSrbToNtStatus.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0015A04 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0015A3C (StorBuildSynchronousScsiRequest.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaidUnitLogSenseTemperatureSrb(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _BYTE *v5; // r14
  _BYTE *v6; // rsi
  _BYTE *Srb; // rbx
  int Status; // edi
  _WORD *PoolWithTag; // rax
  _WORD *v10; // r15
  PVOID Pool; // rax
  void *v12; // r13
  __int64 v13; // rcx
  char v14; // al
  char v15; // r10
  int v16; // r9d
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r11
  unsigned int v25; // edi
  int v26; // r10d
  __int64 v27; // rcx
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // ecx
  _BYTE *v32; // rcx
  unsigned __int64 v33; // rcx
  IRP *v34; // rax
  IRP *v35; // rsi
  _IO_STATUS_BLOCK v37; // [rsp+20h] [rbp-38h] BYREF
  _BYTE *v38; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  v6 = 0LL;
  v38 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(v2 + 402), 1);
  if ( !Srb )
    return (unsigned int)-1073741801;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x72536152u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x100uLL);
    Pool = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
    v12 = Pool;
    if ( !Pool )
    {
      Status = -1073741801;
LABEL_58:
      ExFreePoolWithTag(v10, 0x72536152u);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x4E536152u);
      goto LABEL_60;
    }
    memset(Pool, 0, 0xFFuLL);
    if ( *(_BYTE *)(v2 + 402) == 1 )
    {
      *((_DWORD *)Srb + 5) = 0;
      v5 = Srb;
      v13 = *((unsigned int *)Srb + 13);
      Srb[v13 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v13 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v13 + 10] = *(_BYTE *)(a1 + 90);
      *((_DWORD *)Srb + 8) = -1;
      *((_DWORD *)Srb + 6) = 524562;
      *((_QWORD *)Srb + 8) = v10;
      *((_DWORD *)Srb + 15) = 256;
      *((_QWORD *)Srb + 10) = a2;
      *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 1032);
      v38 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v38 = 64;
      *((_DWORD *)v38 + 1) = 32;
      v38[9] = -1;
      *((_QWORD *)v38 + 2) = v12;
      v14 = Srb[2];
    }
    else
    {
      Srb[2] = 0;
      *(_WORD *)Srb = 88;
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
      *((_DWORD *)Srb + 3) = 524562;
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = v10;
      *((_DWORD *)Srb + 4) = 256;
      *((_QWORD *)Srb + 6) = a2;
      *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 1032);
      v14 = 0;
      Srb[11] = -1;
      *((_QWORD *)Srb + 4) = v12;
    }
    if ( v14 == 40 )
    {
      v15 = 0;
      *((_WORD *)Srb + 19) = 32;
      if ( !*((_DWORD *)Srb + 5) )
      {
        v16 = 0;
        if ( *((_DWORD *)Srb + 14) )
        {
          while ( 1 )
          {
            v17 = *(unsigned int *)&Srb[4 * v16 + 120];
            if ( (unsigned int)v17 >= 0x80 )
            {
              v18 = *((unsigned int *)Srb + 4);
              if ( (unsigned int)v17 < (unsigned int)v18 )
                break;
            }
LABEL_25:
            if ( (unsigned int)++v16 >= *((_DWORD *)Srb + 14) )
              goto LABEL_26;
          }
          v19 = (unsigned int)v17;
          v20 = *(_DWORD *)&Srb[v17] - 64;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 == 1 && v19 + 40 <= v18 )
                goto LABEL_26;
              goto LABEL_24;
            }
            v22 = v19 + 56;
          }
          else
          {
            v22 = v19 + 40;
          }
          if ( v22 <= v18 )
          {
            Srb[v19 + 10] = 10;
            v15 = 1;
          }
LABEL_24:
          if ( v15 )
            goto LABEL_26;
          goto LABEL_25;
        }
      }
LABEL_26:
      v14 = Srb[2];
    }
    else
    {
      *(_WORD *)(Srb + 9) = 2592;
    }
    if ( v14 != 40 )
    {
      v23 = (__int64)(Srb + 72);
      goto LABEL_49;
    }
    v23 = 0LL;
    v24 = 0;
    if ( *((_DWORD *)Srb + 5) || (v25 = *((_DWORD *)Srb + 14), v26 = 0, !v25) )
    {
LABEL_49:
      *(_BYTE *)v23 = 77;
      *(_BYTE *)(v23 + 2) = 13;
      *(_DWORD *)(v23 + 5) = 0x10000;
      v34 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v23, &v37);
      v35 = v34;
      if ( v34 )
      {
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v34);
        if ( Status >= 0
          && (Status = v35->IoStatus.Status, Status >= 0)
          && (Status = PortSrbTranslateSrbToNtStatus(Srb[3]), Status >= 0)
          || Status == -2147483643 )
        {
          v10[1] = 0;
          Status = -1073741668;
        }
        StorFreeSynchronousScsiRequest(v35);
      }
      else
      {
        Status = -1073741801;
      }
      v6 = v38;
      goto LABEL_58;
    }
    while ( 1 )
    {
      v27 = *(unsigned int *)&Srb[4 * v26 + 120];
      if ( (unsigned int)v27 >= 0x80 )
      {
        v28 = *((unsigned int *)Srb + 4);
        if ( (unsigned int)v27 < (unsigned int)v28 )
          break;
      }
LABEL_46:
      if ( ++v26 >= v25 )
        goto LABEL_49;
    }
    v29 = (unsigned int)v27;
    v30 = *(_DWORD *)&Srb[v27] - 64;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 == 1 && v29 + 40 <= v28 )
        {
          v32 = &Srb[v29 + 32];
          if ( !*(_DWORD *)&Srb[v29 + 12] )
            v32 = (_BYTE *)v23;
          v23 = (__int64)v32;
          goto LABEL_49;
        }
        goto LABEL_45;
      }
      v33 = v29 + 56;
    }
    else
    {
      v33 = v29 + 40;
    }
    if ( v33 <= v28 )
    {
      v24 = 1;
      if ( !Srb[v29 + 10] )
        goto LABEL_49;
      v23 = (__int64)&Srb[v29 + 24];
    }
LABEL_45:
    if ( v24 )
      goto LABEL_49;
    goto LABEL_46;
  }
  Status = -1073741801;
LABEL_60:
  if ( *(_BYTE *)(v2 + 402) == 1 )
  {
    if ( !v5 )
      v5 = Srb;
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 13) = 0LL;
    if ( v6 )
      *((_QWORD *)v6 + 2) = 0LL;
  }
  else
  {
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
    *((_QWORD *)Srb + 4) = 0LL;
  }
  ExFreePoolWithTag(Srb, 0x72536152u);
  return (unsigned int)Status;
}
