/*
 * XREFs of RaidUnitLogSenseTemperatureSrb @ 0x1C003E928
 * Callers:
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003D528 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0001FDC (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C000C860 (PortSrbTranslateSrbToNtStatus.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001AB60 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001AB98 (StorBuildSynchronousScsiRequest.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall RaidUnitLogSenseTemperatureSrb(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _BYTE *v5; // r14
  _BYTE *v6; // r12
  _BYTE *Srb; // rbx
  int Status; // edi
  _WORD *PoolWithTag; // rax
  _WORD *v10; // r15
  PVOID Pool; // rax
  void *v12; // rsi
  __int64 v13; // rcx
  char v14; // r10
  int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  char v23; // r11
  unsigned int v24; // edi
  int v25; // r10d
  __int64 v26; // rcx
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // ecx
  _BYTE *v31; // rcx
  unsigned __int64 v32; // rcx
  IRP *v33; // rax
  IRP *v34; // rsi
  _IO_STATUS_BLOCK v36; // [rsp+20h] [rbp-38h] BYREF
  PVOID v37; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 24);
  v5 = 0LL;
  v6 = 0LL;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(v2 + 402), 1);
  if ( !Srb )
    return (unsigned int)-1073741801;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x72536152u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x100uLL);
    Pool = RaidAllocatePool(NonPagedPoolNx, 0xFFuLL, 0x4E536152u, *(_QWORD *)(a1 + 8));
    v37 = Pool;
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
      v6 = &Srb[*((unsigned int *)Srb + 30)];
      *(_DWORD *)v6 = 64;
      *((_DWORD *)v6 + 1) = 32;
      v6[9] = -1;
      *((_QWORD *)v6 + 2) = v12;
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
      Srb[11] = -1;
      *((_QWORD *)Srb + 4) = v12;
    }
    if ( Srb[2] == 40 )
    {
      v14 = 0;
      *((_WORD *)Srb + 19) = 32;
      if ( !*((_DWORD *)Srb + 5) )
      {
        v15 = 0;
        if ( *((_DWORD *)Srb + 14) )
        {
          while ( 1 )
          {
            v16 = *(unsigned int *)&Srb[4 * v15 + 120];
            if ( (unsigned int)v16 >= 0x80 )
            {
              v17 = *((unsigned int *)Srb + 4);
              if ( (unsigned int)v16 < (unsigned int)v17 )
                break;
            }
LABEL_25:
            if ( (unsigned int)++v15 >= *((_DWORD *)Srb + 14) )
              goto LABEL_28;
          }
          v18 = (unsigned int)v16;
          v19 = *(_DWORD *)&Srb[v16] - 64;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( v20 )
            {
              if ( v20 == 1 && v18 + 40 <= v17 )
                goto LABEL_28;
              goto LABEL_24;
            }
            v21 = v18 + 56;
          }
          else
          {
            v21 = v18 + 40;
          }
          if ( v21 <= v17 )
          {
            Srb[v18 + 10] = 10;
            v14 = 1;
          }
LABEL_24:
          if ( v14 )
            goto LABEL_28;
          goto LABEL_25;
        }
      }
    }
    else
    {
      *(_WORD *)(Srb + 9) = 2592;
    }
LABEL_28:
    if ( Srb[2] != 40 )
    {
      v22 = (__int64)(Srb + 72);
      goto LABEL_49;
    }
    v22 = 0LL;
    v23 = 0;
    if ( *((_DWORD *)Srb + 5) || (v24 = *((_DWORD *)Srb + 14), v25 = 0, !v24) )
    {
LABEL_49:
      *(_BYTE *)v22 = 77;
      *(_BYTE *)(v22 + 2) = 13;
      *(_DWORD *)(v22 + 5) = 0x10000;
      v33 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), (unsigned __int64)Srb, v22, &v36);
      v34 = v33;
      if ( v33 )
      {
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v33);
        if ( Status >= 0
          && (Status = v34->IoStatus.Status, Status >= 0)
          && (Status = PortSrbTranslateSrbToNtStatus(Srb[3]), Status >= 0)
          || Status == -2147483643 )
        {
          v10[1] = 0;
          Status = -1073741668;
        }
        StorFreeSynchronousScsiRequest(v34);
      }
      else
      {
        Status = -1073741801;
      }
      v12 = v37;
      goto LABEL_58;
    }
    while ( 1 )
    {
      v26 = *(unsigned int *)&Srb[4 * v25 + 120];
      if ( (unsigned int)v26 >= 0x80 )
      {
        v27 = *((unsigned int *)Srb + 4);
        if ( (unsigned int)v26 < (unsigned int)v27 )
          break;
      }
LABEL_46:
      if ( ++v25 >= v24 )
        goto LABEL_49;
    }
    v28 = (unsigned int)v26;
    v29 = *(_DWORD *)&Srb[v26] - 64;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        if ( v30 == 1 && v28 + 40 <= v27 )
        {
          v31 = &Srb[v28 + 32];
          if ( !*(_DWORD *)&Srb[v28 + 12] )
            v31 = (_BYTE *)v22;
          v22 = (__int64)v31;
          goto LABEL_49;
        }
        goto LABEL_45;
      }
      v32 = v28 + 56;
    }
    else
    {
      v32 = v28 + 40;
    }
    if ( v32 <= v27 )
    {
      v23 = 1;
      if ( !Srb[v28 + 10] )
        goto LABEL_49;
      v22 = (__int64)&Srb[v28 + 24];
    }
LABEL_45:
    if ( v23 )
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
