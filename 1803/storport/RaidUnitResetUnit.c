/*
 * XREFs of RaidUnitResetUnit @ 0x1C003D990
 * Callers:
 *     RaidUnitHierarchicalReset @ 0x1C003CCD0 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     RaSendIrpSynchronous @ 0x1C0002C50 (RaSendIrpSynchronous.c)
 *     RaidAllocateSrb @ 0x1C0007504 (RaidAllocateSrb.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0015A04 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0015A3C (StorBuildSynchronousScsiRequest.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     McTemplateK0qccc @ 0x1C0034340 (McTemplateK0qccc.c)
 *     StorpAggregateHierarchicalResetLun @ 0x1C0042608 (StorpAggregateHierarchicalResetLun.c)
 */

__int64 __fastcall RaidUnitResetUnit(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  int v4; // ebx
  __int64 v5; // rcx
  _BYTE *Srb; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  int Status; // r15d
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // eax
  IRP *v13; // rax
  IRP *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  char v19; // di
  char v20; // r12
  __int64 v21; // rcx
  char v23; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+49h] [rbp-BFh] BYREF
  char v25; // [rsp+4Bh] [rbp-BDh] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh]
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  const GUID *v28; // [rsp+58h] [rbp-B0h] BYREF
  _IO_STATUS_BLOCK v29; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  __int64 v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  __int64 *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  char *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  __int16 *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  char *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  char *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  const GUID **v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]

  v2 = MEMORY[0xFFFFF78000000014];
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 8);
  v26 = v4;
  Srb = RaidAllocateSrb(v5, 0x20u, *(_BYTE *)(v3 + 402), 0);
  v8 = (unsigned __int64)Srb;
  if ( Srb )
  {
    if ( *(_BYTE *)(v3 + 402) == 1 )
    {
      v10 = *((unsigned int *)Srb + 13);
      *((_DWORD *)Srb + 5) = 32;
      Srb[v10 + 8] = *(_BYTE *)(a1 + 88);
      Srb[v10 + 9] = *(_BYTE *)(a1 + 89);
      Srb[v10 + 10] = *(_BYTE *)(a1 + 90);
      *((_DWORD *)Srb + 8) = -1;
      *((_DWORD *)Srb + 6) = 524560;
      *((_QWORD *)Srb + 8) = 0LL;
      *((_DWORD *)Srb + 15) = 0;
      *((_QWORD *)Srb + 10) = 0LL;
      if ( *(_BYTE *)(a1 + 2624) )
      {
        v11 = *(_DWORD *)(a1 + 2644);
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 1032);
        if ( v11 < 0x1E )
          v11 = 30;
      }
      *(_DWORD *)(v8 + 40) = v11;
    }
    else
    {
      Srb[2] = 32;
      *(_WORD *)Srb = 88;
      Srb[5] = *(_BYTE *)(a1 + 88);
      Srb[6] = *(_BYTE *)(a1 + 89);
      Srb[7] = *(_BYTE *)(a1 + 90);
      *(_QWORD *)(Srb + 12) = 524560LL;
      Srb[8] = -1;
      *((_QWORD *)Srb + 3) = 0LL;
      *((_QWORD *)Srb + 6) = 0LL;
      if ( *(_BYTE *)(a1 + 2624) )
      {
        v12 = *(_DWORD *)(a1 + 2644);
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 1032);
        if ( v12 < 0x1E )
          v12 = 30;
      }
      *(_DWORD *)(v8 + 20) = v12;
    }
    v13 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), v8, v7, &v29);
    v14 = v13;
    if ( v13 )
    {
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v13);
      if ( Status >= 0 )
        Status = v14->IoStatus.Status;
      StorFreeSynchronousScsiRequest(v14);
      LOBYTE(v15) = *(_BYTE *)(v8 + 3);
      StorpAggregateHierarchicalResetLun(*(_QWORD *)(a1 + 24), v15, MEMORY[0xFFFFF78000000014] - v2);
      v19 = BYTE2(v26);
      v20 = BYTE1(v26);
      if ( (unsigned int)dword_1C0056060 > 5 )
      {
        v21 = *(_QWORD *)(a1 + 24);
        LODWORD(v27) = *(_DWORD *)(v21 + 56);
        v25 = *(_BYTE *)(v8 + 3);
        v31 = v21 + 5192;
        v33 = a1 + 1720;
        v35 = &v27;
        v37 = &v23;
        v39 = &v24;
        v41 = (char *)&v24 + 1;
        v43 = &v25;
        v45 = &v28;
        v23 = v4;
        v24 = *(_WORD *)((char *)&v26 + 1);
        v28 = v17;
        v32 = 16LL;
        v34 = 16LL;
        v36 = 4LL;
        v38 = 1LL;
        v40 = 1LL;
        v42 = 1LL;
        v44 = 1LL;
        v46 = 8LL;
        TlgWrite((TraceLoggingHProvider)v21, &unk_1C004C34A, v17, v18, 0xAu, &pData);
      }
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 1) != 0 )
        McTemplateK0qccc(v16, &EventLUReset, (__int64)v17, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL), v4, v20, v19);
    }
    else
    {
      Status = -1073741801;
    }
    ExFreePoolWithTag((PVOID)v8, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
