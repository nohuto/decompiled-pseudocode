/*
 * XREFs of RaWmiDispatchIrp @ 0x1C0061824
 * Callers:
 *     RaDriverSystemControlIrp @ 0x1C00617A0 (RaDriverSystemControlIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0005080 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C00056D4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidCompleteWmiIrp @ 0x1C001B4E0 (RaidCompleteWmiIrp.c)
 *     RaidReleaseAdapterRemoveLock @ 0x1C001B730 (RaidReleaseAdapterRemoveLock.c)
 *     WPP_SF_D @ 0x1C00307A4 (WPP_SF_D.c)
 *     RaWmiIrpRegisterRequest @ 0x1C0061994 (RaWmiIrpRegisterRequest.c)
 *     RaWmiIrpNormalRequest @ 0x1C0065A20 (RaWmiIrpNormalRequest.c)
 */

__int64 __fastcall RaWmiDispatchIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  struct _KEVENT *v3; // r15
  __int64 v4; // r14
  int *v7; // rdx
  int v8; // ebx
  int v9; // eax
  unsigned int v10; // edi
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // r8d
  _QWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int LowPart; // [rsp+30h] [rbp-28h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+38h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v4 = 0LL;
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
    return RaidCompleteWmiIrp(a1, a2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_c369078f75a73e763836dce6e3c993d4_Traceguids,
      CurrentStackLocation->MinorFunction);
  }
  v7 = *(int **)(a1 + 64);
  v8 = *v7;
  if ( !*v7 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    v9 = RaidAcquireAdapterRemoveLock(v4);
LABEL_7:
    if ( v9 < 0 )
    {
      v14 = v9;
      return RaidCompleteRequestEx(a2, 0, v14);
    }
    goto LABEL_8;
  }
  if ( v8 == 1 )
  {
    v3 = *(struct _KEVENT **)(a1 + 64);
    v9 = RaUnitAcquireRemoveLock((__int64)v3);
    goto LABEL_7;
  }
LABEL_8:
  LOBYTE(v7) = CurrentStackLocation->MinorFunction;
  v15[0] = CurrentStackLocation->Parameters.Create.SecurityContext;
  v15[1] = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (unsigned __int8)v7 <= 7u )
    goto LABEL_31;
  if ( (_BYTE)v7 == 8 )
  {
    v12 = RaWmiIrpRegisterRequest(a1, v15);
LABEL_16:
    a2->IoStatus.Status = v12;
    v13 = v12;
    if ( v12 < 0 )
      a2->IoStatus.Information = 0LL;
    else
      a2->IoStatus.Information = LowPart;
    if ( v8 )
    {
      if ( v8 == 1 )
        RaUnitReleaseRemoveLock(v3);
    }
    else
    {
      RaidReleaseAdapterRemoveLock(v4);
    }
    v14 = v13;
    return RaidCompleteRequestEx(a2, 0, v14);
  }
  if ( (_BYTE)v7 == 9 )
  {
LABEL_31:
    v12 = RaWmiIrpNormalRequest(a1, v7, v15);
    goto LABEL_16;
  }
  v10 = RaidCompleteWmiIrp(a1, a2);
  if ( v8 )
  {
    if ( v8 == 1 )
      RaUnitReleaseRemoveLock(v3);
  }
  else
  {
    RaidReleaseAdapterRemoveLock(v4);
  }
  return v10;
}
