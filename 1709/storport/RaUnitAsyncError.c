/*
 * XREFs of RaUnitAsyncError @ 0x1C000B8F8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidUnitReleaseIrp @ 0x1C0009D88 (RaidUnitReleaseIrp.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C000BB98 (RaidUnitHandleSpecialErrorConditions.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000EE34 (RaidUnitProcessBusyRequest.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C003DA24 (RaidLogRequestComplete.c)
 *     WPP_SF_qdq @ 0x1C004018C (WPP_SF_qdq.c)
 */

char __fastcall RaUnitAsyncError(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  char v4; // r10
  IRP *v5; // rdi
  char v6; // r15
  char *v7; // rsi
  int v10; // ecx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _LARGE_INTEGER ByteOffset; // r14
  unsigned int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // rcx
  int v22; // [rsp+78h] [rbp+10h]
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v3 = *(_QWORD *)(a2 + 168);
  v4 = 0;
  v5 = *(IRP **)(a2 + 160);
  v6 = 0;
  v7 = 0LL;
  if ( *(_BYTE *)(v3 + 2) != 40 )
  {
    v7 = (char *)(v3 + 4);
    v22 = *(_DWORD *)(v3 + 12);
    v23 = *(_DWORD *)(v3 + 16);
    goto LABEL_3;
  }
  v22 = *(_DWORD *)(v3 + 24);
  v23 = *(_DWORD *)(v3 + 60);
  if ( !*(_DWORD *)(v3 + 20) )
  {
    v15 = *(_DWORD *)(v3 + 56);
    v16 = 0LL;
    if ( v15 )
    {
      while ( 1 )
      {
        v17 = *(unsigned int *)(v3 + 4 * v16 + 120);
        if ( (unsigned int)v17 >= 0x80 )
        {
          a3 = *(unsigned int *)(v3 + 16);
          if ( (unsigned int)v17 <= (unsigned int)a3 )
            break;
        }
LABEL_41:
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
          goto LABEL_4;
      }
      v18 = (unsigned int)v17;
      v19 = *(_DWORD *)(v17 + v3) - 64;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 && v18 + 40 <= a3 )
          {
            v7 = (char *)(v18 + v3 + 8);
LABEL_3:
            v6 = *v7;
            goto LABEL_4;
          }
          goto LABEL_40;
        }
        v21 = v18 + 56;
      }
      else
      {
        v21 = v18 + 40;
      }
      if ( v21 <= a3 )
      {
        v4 = 1;
        v7 = (char *)(v18 + v3 + 8);
        v6 = *v7;
      }
LABEL_40:
      if ( v4 )
        goto LABEL_4;
      goto LABEL_41;
    }
  }
LABEL_4:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      58LL,
      &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      a1,
      v3,
      *(_BYTE *)(v3 + 3) & 0x3F);
  }
  v10 = *(_BYTE *)(v3 + 3) & 0x3F;
  if ( v10 == 5 )
    goto LABEL_21;
  if ( ((v6 - 8) & 0xDF) != 0 && v10 != 37 )
  {
LABEL_9:
    if ( (v22 & 0x100) == 0 && !*(_BYTE *)(a1 + 436) )
    {
      *(_BYTE *)(a1 + 436) = 1;
      *(_BYTE *)(v3 + 3) |= 0x40u;
    }
    RaidUnitHandleSpecialErrorConditions(a1, a2);
    if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || ((v6 - 8) & 0xDF) == 0 )
      v5->IoStatus.Status = -1073741661;
    else
      v5->IoStatus.Status = RaidSrbStatusToNtStatus(*(unsigned __int8 *)(v3 + 3));
    if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 0x12 )
      v5->IoStatus.Information = v23;
    else
      v5->IoStatus.Information = 0LL;
    RaidUnitReleaseIrp((__int64)v5);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        61LL,
        &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        a1,
        v5,
        v5->IoStatus.Status);
    }
    if ( (qword_1C0056210 & 0x10) != 0 )
      RaidLogRequestComplete(*(_QWORD *)(a1 + 24), v5, v3);
    RaidCompleteRequestEx(v5, 0, v5->IoStatus.Status);
    return 1;
  }
  if ( ((v6 - 8) & 0xDF) == 0 )
LABEL_21:
    ++*(_DWORD *)(a1 + 1872);
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( *(_BYTE *)(a1 + 2624)
    || (v14 = *(_DWORD *)(a1 + 1544), ByteOffset.LowPart >= v14) && v14 && (*(_BYTE *)(v3 + 3) & 0x3F) != 0x25 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 60LL, a3, a1, ByteOffset.LowPart, v3);
    }
    *(_BYTE *)(v3 + 3) = 4;
    if ( v6 == 8 )
      *v7 = 40;
    goto LABEL_9;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qdq(WPP_GLOBAL_Control->AttachedDevice, 59LL, a3, a1, ByteOffset.LowPart, v3);
  }
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
  RaidUnitProcessBusyRequest(a1, a2, v7);
  return 0;
}
