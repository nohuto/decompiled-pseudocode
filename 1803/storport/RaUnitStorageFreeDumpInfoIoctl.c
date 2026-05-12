/*
 * XREFs of RaUnitStorageFreeDumpInfoIoctl @ 0x1C00669A8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C0010154 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C00260A8 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C002614C (RaidAdapterFreeDumpInfo.c)
 *     RaidUnitFreeDumpInfo @ 0x1C003CAA0 (RaidUnitFreeDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0063B84 (RaidAdapterFreeMiniportDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageFreeDumpInfoIoctl(_QWORD *a1, IRP *a2)
{
  unsigned int v2; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r14
  unsigned int ReadMode; // r11d
  PVOID *v7; // rdi
  _LARGE_INTEGER *v8; // r9
  _LARGE_INTEGER *QuadPart; // rdx
  _LARGE_INTEGER v10; // r8
  __int64 v11; // r8
  __int64 v12; // rsi
  PVOID **v13; // rcx
  PVOID **v14; // rdx
  __int64 v15; // rbp
  _LARGE_INTEGER *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  PVOID *v19; // rcx
  _LARGE_INTEGER *p_DefaultTimeout; // r14
  _LARGE_INTEGER *i; // rax
  PVOID *v22; // rax
  PVOID **v23; // rdx
  PVOID **v24; // rcx
  void (__fastcall *v25)(_QWORD); // rax
  PVOID *v27; // [rsp+58h] [rbp+10h] BYREF
  PVOID *v28; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2->RequestorMode )
  {
    v2 = -1073741790;
  }
  else
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->Parameters.Create.Options >= 0x48 )
    {
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( Parameters->NamedPipeType == 72 )
      {
        ReadMode = Parameters->ReadMode;
        if ( ReadMode == 1 )
          v7 = (PVOID *)a1[335];
        else
          v7 = (PVOID *)a1[336];
        v27 = v7;
        if ( v7 )
          goto LABEL_18;
        v8 = 0LL;
        QuadPart = (_LARGE_INTEGER *)Parameters->DefaultTimeout.QuadPart;
        while ( QuadPart != &Parameters->DefaultTimeout )
        {
          v7 = (PVOID *)&QuadPart[-1];
          v10 = QuadPart[2];
          v8 = QuadPart - 1;
          v27 = (PVOID *)&QuadPart[-1];
          v11 = v10.QuadPart - a1[215];
          if ( !v11 )
            v11 = (__int64)v7[4] - a1[216];
          if ( !v11 )
            break;
          QuadPart = (_LARGE_INTEGER *)QuadPart->QuadPart;
          v7 = 0LL;
          v27 = 0LL;
          v8 = 0LL;
        }
        if ( v8 )
        {
LABEL_18:
          v12 = a1[3];
          if ( ReadMode == 1 )
            a1[335] = 0LL;
          else
            a1[336] = 0LL;
          v13 = (PVOID **)v7[1];
          if ( v13[1] != v7 + 1 || (v14 = (PVOID **)v7[2], *v14 != v7 + 1) )
            __fastfail(3u);
          *v14 = (PVOID *)v13;
          v13[1] = (PVOID *)v14;
          v15 = (__int64)v7[7];
          if ( v15 )
          {
            v7[7] = 0LL;
            v16 = (_LARGE_INTEGER *)Parameters->DefaultTimeout.QuadPart;
            v28 = (PVOID *)v15;
            while ( v16 != &Parameters->DefaultTimeout )
            {
              if ( v16[6].QuadPart == v15 )
                goto LABEL_34;
              v16 = (_LARGE_INTEGER *)v16->QuadPart;
            }
            if ( Parameters->ReadMode == 1 )
              *(_QWORD *)(v12 + 5728) = 0LL;
            else
              *(_QWORD *)(v12 + 5736) = 0LL;
            *(_QWORD *)(v15 + 56) = 0LL;
            v17 = *(_QWORD *)(v15 + 8);
            if ( *(_QWORD *)(v17 + 8) != v15 + 8 || (v18 = *(_QWORD **)(v15 + 16), *v18 != v15 + 8) )
              __fastfail(3u);
            *v18 = v17;
            *(_QWORD *)(v17 + 8) = v18;
            RaidAdapterFreeMiniportDumpInfo((__int64)a2, v12, v15);
            StorPortReleaseAdditionalCrashDumpArea(v12 + 696, *(_QWORD *)(v15 + 48) + 56LL);
            RaidAdapterFreeDumpInfo((PVOID *)&v28);
          }
LABEL_34:
          v19 = (PVOID *)v7[8];
          p_DefaultTimeout = &Parameters->DefaultTimeout;
          v7[8] = 0LL;
          v28 = v19;
          for ( i = (_LARGE_INTEGER *)p_DefaultTimeout->QuadPart; i != p_DefaultTimeout; i = (_LARGE_INTEGER *)i->QuadPart )
          {
            if ( (PVOID *)i[7].QuadPart == v19 )
              goto LABEL_42;
          }
          v22 = v19 + 1;
          v23 = (PVOID **)v19[1];
          if ( v23[1] != v19 + 1 || (v24 = (PVOID **)v19[2], *v24 != v22) )
            __fastfail(3u);
          *v24 = (PVOID *)v23;
          v23[1] = (PVOID *)v24;
          RaidAdapterFreeDriverInfo(&v28);
LABEL_42:
          if ( *(_WORD *)(v12 + 5154) )
          {
            v25 = *(void (__fastcall **)(_QWORD))(v12 + 5176);
            if ( v25 )
              v25(*(_QWORD *)(v12 + 5160));
          }
          RaidUnitFreeDumpInfo(&v27);
          a2->IoStatus.Information = 0LL;
        }
      }
      else
      {
        v2 = -1073741811;
      }
    }
    else
    {
      v2 = -1073741789;
    }
  }
  return RaidCompleteRequestEx(a2, 0, v2);
}
