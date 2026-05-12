/*
 * XREFs of RaUnitStorageFreeDumpInfoIoctl @ 0x1C0068718
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C001C838 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C002D204 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C002D298 (RaidAdapterFreeDumpInfo.c)
 *     RaidUnitFreeDumpInfo @ 0x1C003E4C0 (RaidUnitFreeDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0066C6C (RaidAdapterFreeMiniportDumpInfo.c)
 */

__int64 __fastcall RaUnitStorageFreeDumpInfoIoctl(_QWORD *a1, IRP *a2)
{
  unsigned int v2; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r14
  unsigned int ReadMode; // r10d
  _LARGE_INTEGER *v7; // rdi
  _LARGE_INTEGER *QuadPart; // rdx
  _LARGE_INTEGER v9; // r8
  __int64 v10; // r8
  __int64 v11; // rsi
  _LARGE_INTEGER v12; // rcx
  _LARGE_INTEGER **v13; // rdx
  _QWORD *v14; // rbp
  _LARGE_INTEGER *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  _LARGE_INTEGER *p_DefaultTimeout; // r14
  _LARGE_INTEGER *i; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  void (__fastcall *v25)(_QWORD); // rax
  _LARGE_INTEGER *v27; // [rsp+58h] [rbp+10h] BYREF
  PVOID v28; // [rsp+60h] [rbp+18h] BYREF

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
          v7 = (_LARGE_INTEGER *)a1[335];
        else
          v7 = (_LARGE_INTEGER *)a1[336];
        v27 = v7;
        if ( v7 )
          goto LABEL_17;
        QuadPart = (_LARGE_INTEGER *)Parameters->DefaultTimeout.QuadPart;
        if ( QuadPart != &Parameters->DefaultTimeout )
        {
          do
          {
            v7 = QuadPart - 1;
            v9 = QuadPart[2];
            v27 = QuadPart - 1;
            v10 = v9.QuadPart - a1[215];
            if ( !v10 )
              v10 = v7[4].QuadPart - a1[216];
            if ( !v10 )
              break;
            QuadPart = (_LARGE_INTEGER *)QuadPart->QuadPart;
            v7 = 0LL;
            v27 = 0LL;
          }
          while ( QuadPart != &Parameters->DefaultTimeout );
          if ( v7 )
          {
LABEL_17:
            v11 = a1[3];
            if ( ReadMode == 1 )
              a1[335] = 0LL;
            else
              a1[336] = 0LL;
            v12 = v7[1];
            if ( *(_LARGE_INTEGER **)(v12.QuadPart + 8) != &v7[1]
              || (v13 = (_LARGE_INTEGER **)v7[2].QuadPart, *v13 != &v7[1]) )
            {
              __fastfail(3u);
            }
            *v13 = (_LARGE_INTEGER *)v12.QuadPart;
            *(_QWORD *)(v12.QuadPart + 8) = v13;
            v14 = (_QWORD *)v7[7].QuadPart;
            if ( v14 )
            {
              v7[7].QuadPart = 0LL;
              v15 = (_LARGE_INTEGER *)Parameters->DefaultTimeout.QuadPart;
              v28 = v14;
              while ( v15 != &Parameters->DefaultTimeout )
              {
                if ( (_QWORD *)v15[6].QuadPart == v14 )
                  goto LABEL_33;
                v15 = (_LARGE_INTEGER *)v15->QuadPart;
              }
              if ( Parameters->ReadMode == 1 )
                *(_QWORD *)(v11 + 5728) = 0LL;
              else
                *(_QWORD *)(v11 + 5736) = 0LL;
              v14[7] = 0LL;
              v16 = v14[1];
              if ( *(_QWORD **)(v16 + 8) != v14 + 1 || (v17 = (_QWORD *)v14[2], (_QWORD *)*v17 != v14 + 1) )
                __fastfail(3u);
              *v17 = v16;
              *(_QWORD *)(v16 + 8) = v17;
              RaidAdapterFreeMiniportDumpInfo((__int64)a2, v11, (__int64)v14);
              StorPortReleaseAdditionalCrashDumpArea(v18, v14[6] + 56LL);
              RaidAdapterFreeDumpInfo(&v28);
            }
LABEL_33:
            v19 = (_QWORD *)v7[8].QuadPart;
            p_DefaultTimeout = &Parameters->DefaultTimeout;
            v7[8].QuadPart = 0LL;
            v28 = v19;
            for ( i = (_LARGE_INTEGER *)p_DefaultTimeout->QuadPart; i != p_DefaultTimeout; i = (_LARGE_INTEGER *)i->QuadPart )
            {
              if ( (_QWORD *)i[7].QuadPart == v19 )
                goto LABEL_41;
            }
            v22 = v19 + 1;
            v23 = v19[1];
            if ( *(_QWORD **)(v23 + 8) != v19 + 1 || (v24 = (_QWORD *)v19[2], (_QWORD *)*v24 != v22) )
              __fastfail(3u);
            *v24 = v23;
            *(_QWORD *)(v23 + 8) = v24;
            RaidAdapterFreeDriverInfo(&v28);
LABEL_41:
            if ( *(_WORD *)(v11 + 5154) )
            {
              v25 = *(void (__fastcall **)(_QWORD))(v11 + 5176);
              if ( v25 )
                v25(*(_QWORD *)(v11 + 5160));
            }
            RaidUnitFreeDumpInfo((PVOID *)&v27);
            a2->IoStatus.Information = 0LL;
          }
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
