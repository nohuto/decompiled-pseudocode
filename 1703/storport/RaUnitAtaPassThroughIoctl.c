/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C0003EE4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0001204 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C00017B0 (RaUnitAtaPassThroughValidateInput.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C0001910 (RaUnitSetAtaPassThroughCdb.c)
 *     PortPassThroughFreeIrp @ 0x1C00019D0 (PortPassThroughFreeIrp.c)
 *     RaSendIrpSynchronous @ 0x1C0001B68 (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     Template_pq @ 0x1C002FB54 (Template_pq.c)
 *     PortPassThroughBuildIrp @ 0x1C005D008 (PortPassThroughBuildIrp.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  unsigned int *v4; // rbp
  _IRP *v5; // r12
  char *v6; // r15
  int Status; // edi
  __int64 v10; // rcx
  _IRP *MasterIrp; // rdi
  _IRP *v13; // rbx
  __int64 v14; // r9
  __int64 MdlAddress_low; // r8
  __int64 v16; // rax
  unsigned int v17; // ecx
  char RequestorMode; // al
  __int64 v19; // r8
  IRP *v20; // r13
  unsigned int *Srb; // rbx
  void *Pool; // rax
  int v23; // ecx
  _BYTE *v24; // rdx
  _IRP *v25; // rcx
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  int v28; // ecx
  __int64 v29; // rcx
  PVOID v30; // rax
  _IRP *v31; // rcx
  PVOID P[2]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v34; // [rsp+48h] [rbp-70h] BYREF
  __int64 v35; // [rsp+58h] [rbp-60h]
  __int64 v36; // [rsp+60h] [rbp-58h]
  _IRP *v37; // [rsp+68h] [rbp-50h]
  _LIST_ENTRY *Flink; // [rsp+70h] [rbp-48h]

  P[0] = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 2) != 0 )
  {
    Status = RaUnitAtaPassThroughValidateInput(a1, a2, a3);
    if ( Status >= 0 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      v13 = MasterIrp;
      if ( IoIs32bitProcess(a2) )
      {
        v25 = a2->AssociatedIrp.MasterIrp;
        MasterIrp = (_IRP *)&v34;
        v26 = *(_OWORD *)&v25->Type;
        Flink = v25->ThreadListEntry.Flink;
        v27 = *(_QWORD *)&v25->Flags;
        v37 = v25->AssociatedIrp.MasterIrp;
        v36 = *(&v25->Flags + 1);
        v34 = v26;
        v35 = v27;
      }
      MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
      if ( !(_DWORD)MdlAddress_low )
        goto LABEL_18;
      v5 = MasterIrp->AssociatedIrp.MasterIrp;
      if ( !a3 )
        v5 = (_IRP *)((char *)v5 + (_QWORD)v13);
      v16 = *(_QWORD *)(a1 + 24);
      v17 = *(_DWORD *)(v16 + 332);
      if ( *(_BYTE *)(v16 + 4450) )
      {
        v14 = *(unsigned int *)(v16 + 704);
        if ( v17 >= (unsigned int)v14 )
          v17 = *(_DWORD *)(v16 + 704);
      }
      if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v16 + 328)
        || (unsigned int)(((unsigned __int64)((unsigned __int16)v5 & 0xFFF) + MdlAddress_low + 4095) >> 12) > v17 )
      {
        Status = -1073741811;
      }
      else
      {
LABEL_18:
        if ( a3 )
          RequestorMode = a2->RequestorMode;
        else
          RequestorMode = 0;
        LOBYTE(v14) = MasterIrp->Size & 2;
        v20 = (IRP *)PortPassThroughBuildIrp(*(_QWORD *)(a1 + 8), v5, MdlAddress_low, v14, RequestorMode);
        if ( v20 )
        {
          LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL);
          Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0LL, v19, 1LL);
          if ( Srb
            && (Pool = (void *)RaidAllocatePool(512LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8)), (P[0] = Pool) != 0LL) )
          {
            memset(Pool, 0, 0x4FuLL);
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 402LL) == 1 )
            {
              Srb[5] = 0;
              v4 = Srb;
              *((_BYTE *)Srb + 3) = 0;
              if ( (MasterIrp->Size & 2) != 0 )
                Srb[6] |= 0x40u;
              if ( (MasterIrp->Size & 4) != 0 )
                Srb[6] |= 0x80u;
              v28 = Srb[6] | 0x100;
              Srb[6] = v28;
              if ( (*(_BYTE *)(a1 + 153) & 0x10) == 0 )
                Srb[6] = v28 | 0x80000;
              v29 = Srb[13];
              Srb[15] = (unsigned int)MasterIrp->MdlAddress;
              *((_QWORD *)Srb + 8) = v5;
              *((_QWORD *)Srb + 10) = v20;
              Srb[10] = HIDWORD(MasterIrp->MdlAddress);
              *((_BYTE *)Srb + v29 + 8) = *((_BYTE *)&MasterIrp->Size + 2);
              *((_BYTE *)Srb + v29 + 9) = *((_BYTE *)&MasterIrp->Size + 3);
              *((_BYTE *)Srb + v29 + 10) = *((_BYTE *)&MasterIrp->Size + 4);
              v30 = P[0];
              v6 = (char *)Srb + Srb[30];
              *(_DWORD *)v6 = 64;
              v24 = v6 + 24;
              *((_DWORD *)v6 + 1) = 32;
              *(_WORD *)(v6 + 9) = 4175;
              *((_QWORD *)v6 + 2) = v30;
            }
            else
            {
              *Srb = 88;
              *((_BYTE *)Srb + 5) = *((_BYTE *)&MasterIrp->Size + 2);
              *((_BYTE *)Srb + 6) = *((_BYTE *)&MasterIrp->Size + 3);
              *((_BYTE *)Srb + 7) = *((_BYTE *)&MasterIrp->Size + 4);
              *((_BYTE *)Srb + 10) = 16;
              if ( (MasterIrp->Size & 2) != 0 )
                Srb[3] |= 0x40u;
              if ( (MasterIrp->Size & 4) != 0 )
                Srb[3] |= 0x80u;
              v23 = Srb[3] | 0x100;
              Srb[3] = v23;
              if ( (*(_BYTE *)(a1 + 153) & 0x10) == 0 )
                Srb[3] = v23 | 0x80000;
              v24 = Srb + 18;
              Srb[4] = (unsigned int)MasterIrp->MdlAddress;
              *((PVOID *)Srb + 4) = P[0];
              *((_QWORD *)Srb + 3) = v5;
              *((_BYTE *)Srb + 11) = 79;
              *((_QWORD *)Srb + 6) = v20;
              Srb[5] = HIDWORD(MasterIrp->MdlAddress);
            }
            RaUnitSetAtaPassThroughCdb((__int64)MasterIrp, v24);
            v20->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
            RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v20);
            RaUnitAtaPassThroughMarshalResults((__int64)Srb, (unsigned __int16 *)MasterIrp, a3, (__int64)&a2->IoStatus);
            if ( IoIs32bitProcess(a2) )
            {
              v31 = a2->AssociatedIrp.MasterIrp;
              *(_OWORD *)&v31->Type = *(_OWORD *)&MasterIrp->Type;
              *(_QWORD *)&v31->Flags = *(_QWORD *)&MasterIrp->Flags;
              v31->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
              v31->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
            }
            Status = a2->IoStatus.Status;
          }
          else
          {
            Status = -1073741801;
          }
          PortPassThroughFreeIrp(v20);
          if ( Srb )
          {
            if ( P[0] )
              ExFreePoolWithTag(P[0], 0x4E536152u);
            if ( *((_BYTE *)Srb + 2) == 40 )
            {
              if ( !v4 )
                v4 = Srb;
              if ( v6 )
                *((_QWORD *)v6 + 2) = 0LL;
              *((_QWORD *)v4 + 10) = 0LL;
              *((_QWORD *)v4 + 13) = 0LL;
            }
            else
            {
              *((_QWORD *)Srb + 4) = 0LL;
              *((_QWORD *)Srb + 6) = 0LL;
              *((_QWORD *)Srb + 7) = 0LL;
            }
            ExFreePoolWithTag(Srb, 0x72536152u);
          }
        }
        else
        {
          Status = -1073741801;
        }
      }
    }
  }
  else
  {
    Status = -1073741808;
  }
  if ( StorEtwLoggingEnabled )
  {
    P[0] = 0LL;
    P[1] = 0LL;
    IoGetActivityIdIrp(a2, P);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) != 0 )
      Template_pq(v10, &EventNonReadWriteRequestComplete, P, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
