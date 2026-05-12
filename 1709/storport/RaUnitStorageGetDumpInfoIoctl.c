/*
 * XREFs of RaUnitStorageGetDumpInfoIoctl @ 0x1C0068954
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C002D204 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C002D298 (RaidAdapterFreeDumpInfo.c)
 *     RaidUnitFreeDumpInfo @ 0x1C003E4C0 (RaidUnitFreeDumpInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0066170 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x1C0067438 (RaidAdapterPopulateMiniportDumpInfo.c)
 *     RaidUnitCreateDumpInfo @ 0x1C006913C (RaidUnitCreateDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageGetDumpInfoIoctl(__int64 *a1, IRP *a2)
{
  _QWORD *v3; // rbx
  char v4; // r13
  PVOID v5; // r12
  char v6; // r15
  char *v7; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v9; // dl
  signed int v11; // edi
  __int64 Parameters; // r14
  int v13; // eax
  int DumpInfo; // eax
  __int64 v15; // rcx
  int v16; // eax
  char *v17; // r9
  _QWORD *v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // r9
  _QWORD *v22; // r11
  _QWORD *v23; // r10
  __int64 v24; // r10
  _QWORD *v25; // rax
  _QWORD *v26; // r10
  int v27; // r9d
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  _QWORD *v35; // [rsp+40h] [rbp-28h] BYREF
  char *v36; // [rsp+48h] [rbp-20h] BYREF
  PVOID v37[3]; // [rsp+50h] [rbp-18h] BYREF
  char v38; // [rsp+B0h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+B8h] [rbp+50h]
  char v40; // [rsp+C0h] [rbp+58h] BYREF
  char v41; // [rsp+C8h] [rbp+60h] BYREF

  Irp = a2;
  v3 = 0LL;
  v4 = 0;
  v35 = 0LL;
  v5 = 0LL;
  v38 = 0;
  v6 = 0;
  v37[0] = 0LL;
  a2->IoStatus.Information = 0LL;
  v7 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v9 = 0;
  v41 = 0;
  v36 = 0LL;
  v40 = 0;
  if ( a2->RequestorMode )
  {
    v11 = -1073741790;
    return RaidCompleteRequestEx(Irp, 0, v11);
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0x48 )
  {
    v11 = -1073741789;
    return RaidCompleteRequestEx(Irp, 0, v11);
  }
  Parameters = (__int64)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( *(_DWORD *)Parameters != 72 )
  {
    v11 = -1073741811;
    return RaidCompleteRequestEx(Irp, 0, v11);
  }
  v13 = *(_DWORD *)(Parameters + 8);
  if ( !v13 || v13 >= 16 )
  {
    v11 = -1073741811;
LABEL_57:
    if ( !v9 && v7 )
      RaidAdapterFreeDriverInfo((PVOID *)&v36);
    if ( !v4 && v5 )
      RaidAdapterFreeDumpInfo(v37);
LABEL_63:
    if ( v6 )
      return RaidCompleteRequestEx(Irp, 0, v11);
    goto LABEL_64;
  }
  if ( v13 == 1 )
  {
    DumpInfo = RaidUnitCreateDumpInfo((_DWORD)a1, (_DWORD)a1, Parameters, (unsigned int)&v35, (__int64)&v41);
    v6 = v41;
    v11 = DumpInfo;
    if ( DumpInfo < 0 )
    {
      if ( v41 != 1 )
      {
        v3 = v35;
        goto LABEL_63;
      }
    }
    else if ( v41 != 1 )
    {
      v16 = RaidAdapterCreateDumpInfo(v15, a1[3], Parameters, v37, &v38, &v36, &v40);
      v9 = v40;
      v11 = v16;
      if ( v16 < 0 )
      {
        v4 = v38;
        v5 = v37[0];
        v3 = v35;
        v7 = v36;
      }
      else
      {
        v17 = v36;
        if ( !v40 )
        {
          v18 = *(_QWORD **)(Parameters + 64);
          v19 = v36 + 8;
          if ( *v18 != Parameters + 56 )
            __fastfail(3u);
          *v19 = Parameters + 56;
          *((_QWORD *)v17 + 2) = v18;
          *v18 = v19;
          *(_QWORD *)(Parameters + 64) = v19;
        }
        v20 = v35;
        v7 = 0LL;
        v4 = v38;
        v36 = 0LL;
        v35[8] = v17;
        v21 = v37[0];
        if ( !v4 )
        {
          v22 = *(_QWORD **)(Parameters + 48);
          v23 = (char *)v37[0] + 8;
          if ( *v22 != Parameters + 40 )
            __fastfail(3u);
          *v23 = Parameters + 40;
          v21[2] = v22;
          *v22 = v23;
          *(_QWORD *)(Parameters + 48) = v23;
          v24 = a1[3];
          if ( *(_DWORD *)(Parameters + 4) == 1 )
            *(_QWORD *)(v24 + 5728) = v21;
          else
            *(_QWORD *)(v24 + 5736) = v21;
        }
        v20[7] = v21;
        v25 = v20 + 1;
        v5 = 0LL;
        v26 = *(_QWORD **)(Parameters + 32);
        v37[0] = 0LL;
        if ( *v26 != Parameters + 24 )
          __fastfail(3u);
        *v25 = Parameters + 24;
        v20[2] = v26;
        *v26 = v25;
        *(_QWORD *)(Parameters + 32) = v25;
        if ( *(_DWORD *)(Parameters + 4) == 1 )
          a1[335] = (__int64)v20;
        else
          a1[336] = (__int64)v20;
        *(_QWORD *)(Parameters + 16) = v20;
        v35 = 0LL;
      }
      goto LABEL_57;
    }
    if ( *(_DWORD *)(Parameters + 4) == 1 )
      a1[335] = (__int64)v35;
    else
      a1[336] = (__int64)v35;
    v35 = 0LL;
    goto LABEL_63;
  }
  v27 = *(_DWORD *)(Parameters + 4);
  if ( v27 == 1 )
    v3 = (_QWORD *)a1[335];
  else
    v3 = (_QWORD *)a1[336];
  v35 = v3;
  if ( v3 )
  {
LABEL_53:
    v33 = v3[7];
    if ( v33 )
    {
      v11 = RaidAdapterPopulateMiniportDumpInfo((__int64)a2, a1[3], v33, Parameters);
      if ( v11 >= 0 )
        return RaidCompleteRequestEx(Irp, 0, v11);
      goto LABEL_64;
    }
  }
  else
  {
    v28 = *(_QWORD **)(Parameters + 24);
    while ( v28 != (_QWORD *)(Parameters + 24) )
    {
      v3 = v28 - 1;
      v29 = v28[2];
      v35 = v28 - 1;
      v30 = v29 - a1[215];
      if ( !v30 )
        v30 = v3[4] - a1[216];
      if ( !v30 )
      {
        if ( v27 == 1 )
          a1[335] = (__int64)v3;
        else
          a1[336] = (__int64)v3;
        v31 = v3[7];
        v32 = a1[3];
        if ( *(_DWORD *)(Parameters + 4) == 1 )
          *(_QWORD *)(v32 + 5728) = v31;
        else
          *(_QWORD *)(v32 + 5736) = v31;
        goto LABEL_53;
      }
      v28 = (_QWORD *)*v28;
      v3 = 0LL;
      v35 = 0LL;
    }
  }
  v11 = -1073741811;
LABEL_64:
  if ( v3 )
    RaidUnitFreeDumpInfo((PVOID *)&v35);
  return RaidCompleteRequestEx(Irp, 0, v11);
}
