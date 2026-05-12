/*
 * XREFs of RaUnitStorageFreeDumpInfoIoctl @ 0x1C003B420
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     RaidUnitFreeDumpAdapter @ 0x1C003D504 (RaidUnitFreeDumpAdapter.c)
 *     RaidUnitFreeDumpDisk @ 0x1C003D568 (RaidUnitFreeDumpDisk.c)
 *     RaidUnitFreeDumpDriver @ 0x1C003D5A8 (RaidUnitFreeDumpDriver.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C003F8C0 (StorPortReleaseAdditionalCrashDumpArea.c)
 */

__int64 __fastcall RaUnitStorageFreeDumpInfoIoctl(_QWORD *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v3; // ebx
  unsigned int *v6; // rdi
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rsi
  unsigned int *p_InboundQuota; // rsi
  unsigned int *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rbp
  unsigned int *v13; // rax
  unsigned int *v14; // rax
  unsigned int *v15; // rdx
  unsigned int **v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rcx
  unsigned int *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  void (__fastcall *v28)(_QWORD); // rax
  unsigned int *v30; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v31; // [rsp+60h] [rbp+18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v6 = 0LL;
  v30 = 0LL;
  if ( a2->RequestorMode )
  {
    v3 = -1073741790;
  }
  else if ( CurrentStackLocation->Parameters.Create.Options >= 0x40 )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( Parameters->NamedPipeType == 64 )
    {
      p_InboundQuota = &Parameters->InboundQuota;
      v9 = *(unsigned int **)p_InboundQuota;
      while ( v9 != p_InboundQuota )
      {
        v6 = v9 - 2;
        v10 = *((_QWORD *)v9 + 2);
        v30 = v9 - 2;
        v11 = v10 - a1[211];
        if ( !v11 )
          v11 = *((_QWORD *)v6 + 4) - a1[212];
        if ( !v11 )
        {
          v14 = v9;
          v15 = *(unsigned int **)v9;
          v16 = (unsigned int **)*((_QWORD *)v6 + 2);
          if ( *((unsigned int **)v15 + 1) != v6 + 2 || *v16 != v14 )
            __fastfail(3u);
          *v16 = v15;
          *((_QWORD *)v15 + 1) = v16;
          break;
        }
        v9 = *(unsigned int **)v9;
        v6 = 0LL;
        v30 = 0LL;
      }
      v12 = (_QWORD *)*((_QWORD *)v6 + 7);
      if ( v12 )
      {
        *((_QWORD *)v6 + 7) = 0LL;
        v13 = *(unsigned int **)p_InboundQuota;
        v31 = v12;
        while ( v13 != p_InboundQuota )
        {
          if ( *((_QWORD **)v13 + 6) == v12 )
            goto LABEL_25;
          v13 = *(unsigned int **)v13;
        }
        v12[7] = 0LL;
        v17 = v12[1];
        v18 = (_QWORD *)v12[2];
        if ( *(_QWORD **)(v17 + 8) != v12 + 1 || (_QWORD *)*v18 != v12 + 1 )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        RaidUnitStorageFreeMiniPortDumpPointers(a2, a1, v12);
        StorPortReleaseAdditionalCrashDumpArea(v19, v12[6] + 8LL, v20, v21);
        RaidUnitFreeDumpAdapter(&v31);
      }
LABEL_25:
      v22 = (_QWORD *)*((_QWORD *)v6 + 8);
      *((_QWORD *)v6 + 8) = 0LL;
      v23 = *(unsigned int **)p_InboundQuota;
      v31 = v22;
      while ( v23 != p_InboundQuota )
      {
        if ( *((_QWORD **)v23 + 7) == v22 )
          goto LABEL_33;
        v23 = *(unsigned int **)v23;
      }
      v24 = v22 + 1;
      v25 = v22[1];
      v26 = (_QWORD *)v22[2];
      if ( *(_QWORD **)(v25 + 8) != v24 || (_QWORD *)*v26 != v24 )
        __fastfail(3u);
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      RaidUnitFreeDumpDriver(&v31);
LABEL_33:
      v27 = a1[3];
      if ( *(_WORD *)(v27 + 5154) )
      {
        v28 = *(void (__fastcall **)(_QWORD))(v27 + 5176);
        if ( v28 )
          v28(*(_QWORD *)(v27 + 5160));
      }
      RaidUnitFreeDumpDisk(&v30);
      a2->IoStatus.Information = 0LL;
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    v3 = -1073741789;
  }
  return RaidCompleteRequestEx(a2, 0, v3);
}
