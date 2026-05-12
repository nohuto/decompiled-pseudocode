/*
 * XREFs of RaUnitStorageGetDumpInfoIoctl @ 0x1C003B5F8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidUnitCreateDumpAdapter @ 0x1C003CB54 (RaidUnitCreateDumpAdapter.c)
 *     RaidUnitCreateDumpDiskData @ 0x1C003D184 (RaidUnitCreateDumpDiskData.c)
 *     RaidUnitFreeDumpAdapter @ 0x1C003D504 (RaidUnitFreeDumpAdapter.c)
 *     RaidUnitFreeDumpDisk @ 0x1C003D568 (RaidUnitFreeDumpDisk.c)
 *     RaidUnitFreeDumpDriver @ 0x1C003D5A8 (RaidUnitFreeDumpDriver.c)
 */

__int64 __fastcall RaUnitStorageGetDumpInfoIoctl(__int64 a1, IRP *a2)
{
  bool v4; // zf
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  signed int DumpDiskData; // edi
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r13
  char *Pool; // rax
  char *v9; // rbx
  int DumpAdapter; // eax
  char v11; // r9
  void *v12; // r14
  __int64 v13; // r8
  __int64 v14; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *v15; // rax
  _NAMED_PIPE_CREATE_PARAMETERS **v16; // rdx
  __int64 v17; // r15
  _NAMED_PIPE_CREATE_PARAMETERS **v18; // rdx
  unsigned __int8 **v19; // rax
  __int64 v20; // rax
  _NAMED_PIPE_CREATE_PARAMETERS **QuadPart; // r8
  unsigned int **v22; // rdx
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  void *v25; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  PVOID v28[2]; // [rsp+60h] [rbp-10h] BYREF
  char v29; // [rsp+B0h] [rbp+40h] BYREF
  char v30; // [rsp+B8h] [rbp+48h] BYREF
  int v31; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+58h] BYREF

  v32 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v31 = 0;
  v27 = 0LL;
  v26 = 0LL;
  a2->IoStatus.Information = 0LL;
  v4 = a2->RequestorMode == 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v29 = 0;
  v30 = 0;
  if ( v4 )
  {
    if ( CurrentStackLocation->Parameters.Create.Options >= 0x40 )
    {
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x60uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
      v28[0] = Pool;
      v9 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, 0x60uLL);
        *(_DWORD *)v9 = 96;
        *(_OWORD *)(v9 + 24) = *(_OWORD *)(a1 + 1688);
        DumpDiskData = RaidUnitCreateDumpDiskData(
                         a1,
                         (unsigned int)&v25,
                         (unsigned int)&v31,
                         (unsigned int)&v26,
                         (__int64)&v27);
        if ( DumpDiskData < 0 )
        {
          v12 = v25;
        }
        else
        {
          *((_QWORD *)v9 + 9) = a1 + 1447;
          *((_QWORD *)v9 + 10) = v26;
          *((_QWORD *)v9 + 11) = v27;
          DumpAdapter = RaidUnitCreateDumpAdapter(
                          (_DWORD)a2,
                          a1,
                          (_DWORD)Parameters,
                          (unsigned int)&v32,
                          (__int64)&v29,
                          (__int64)&v24,
                          (__int64)&v30);
          v11 = v29;
          DumpDiskData = DumpAdapter;
          if ( DumpAdapter < 0 )
          {
            v20 = v32;
            v17 = v24;
            v12 = v25;
          }
          else
          {
            v12 = 0LL;
            v13 = v32;
            *((_DWORD *)v9 + 10) = v31;
            *((_QWORD *)v9 + 6) = v25;
            v14 = v24;
            *((_QWORD *)v9 + 7) = v13;
            *((_QWORD *)v9 + 8) = v14;
            if ( !v30 )
            {
              v15 = (_NAMED_PIPE_CREATE_PARAMETERS *)(v14 + 8);
              v16 = *(_NAMED_PIPE_CREATE_PARAMETERS ***)&Parameters[1].InboundQuota;
              if ( *v16 != (_NAMED_PIPE_CREATE_PARAMETERS *)&Parameters[1].CompletionMode )
                __fastfail(3u);
              *(_QWORD *)&v15->NamedPipeType = (char *)Parameters + 48;
              *(_QWORD *)&v15->CompletionMode = v16;
              *v16 = v15;
              *(_QWORD *)&Parameters[1].InboundQuota = v15;
            }
            v17 = 0LL;
            v24 = 0LL;
            if ( !v11 )
            {
              v18 = *(_NAMED_PIPE_CREATE_PARAMETERS ***)&Parameters[1].NamedPipeType;
              v19 = (unsigned __int8 **)(v13 + 8);
              if ( *v18 != (_NAMED_PIPE_CREATE_PARAMETERS *)&Parameters->TimeoutSpecified )
                __fastfail(3u);
              *v19 = &Parameters->TimeoutSpecified;
              *(_QWORD *)(v13 + 16) = v18;
              *v18 = (_NAMED_PIPE_CREATE_PARAMETERS *)v19;
              *(_QWORD *)&Parameters[1].NamedPipeType = v19;
            }
            v20 = 0LL;
            QuadPart = (_NAMED_PIPE_CREATE_PARAMETERS **)Parameters->DefaultTimeout.QuadPart;
            v22 = (unsigned int **)(v9 + 8);
            v32 = 0LL;
            if ( *QuadPart != (_NAMED_PIPE_CREATE_PARAMETERS *)&Parameters->InboundQuota )
              __fastfail(3u);
            *v22 = &Parameters->InboundQuota;
            *((_QWORD *)v9 + 2) = QuadPart;
            *QuadPart = (_NAMED_PIPE_CREATE_PARAMETERS *)v22;
            Parameters->DefaultTimeout.QuadPart = (__int64)v22;
            *(_QWORD *)&Parameters->CompletionMode = v9;
            v9 = 0LL;
            v28[0] = 0LL;
          }
          if ( !v11 && v20 )
            RaidUnitFreeDumpAdapter(&v32);
          if ( v17 )
            RaidUnitFreeDumpDriver(&v24);
        }
        if ( v12 )
          ExFreePoolWithTag(v12, 0x44436152u);
        if ( v9 )
          RaidUnitFreeDumpDisk(v28);
      }
      else
      {
        DumpDiskData = -1073741670;
      }
    }
    else
    {
      DumpDiskData = -1073741789;
    }
  }
  else
  {
    DumpDiskData = -1073741790;
  }
  return RaidCompleteRequestEx(a2, 0, DumpDiskData);
}
