/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x1C003E190
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     RaidUnitReleaseIrp @ 0x1C0009D88 (RaidUnitReleaseIrp.c)
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000BB14 (RaidSrbStatusToNtStatus.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0030614 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00306D8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C003DA24 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003DC88 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C003E48C (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaidUnitCompleteResetRequest(__int64 a1)
{
  __int64 v1; // rdi
  IRP *v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // r12d
  int v7; // r15d
  int v8; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rax
  const struct _TlgProvider_t *v12; // rcx
  __int64 v13; // r8
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-81h]
  char v16; // [rsp+30h] [rbp-79h] BYREF
  char v17; // [rsp+31h] [rbp-78h] BYREF
  char v18; // [rsp+32h] [rbp-77h] BYREF
  char v19; // [rsp+33h] [rbp-76h] BYREF
  int v20; // [rsp+34h] [rbp-75h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+40h] [rbp-69h] BYREF
  const struct _TlgProvider_t *v22; // [rsp+60h] [rbp-49h]
  int v23; // [rsp+68h] [rbp-41h]
  int v24; // [rsp+6Ch] [rbp-3Dh]
  __int64 v25; // [rsp+70h] [rbp-39h]
  int v26; // [rsp+78h] [rbp-31h]
  int v27; // [rsp+7Ch] [rbp-2Dh]
  int *v28; // [rsp+80h] [rbp-29h]
  int v29; // [rsp+88h] [rbp-21h]
  int v30; // [rsp+8Ch] [rbp-1Dh]
  char *v31; // [rsp+90h] [rbp-19h]
  int v32; // [rsp+98h] [rbp-11h]
  int v33; // [rsp+9Ch] [rbp-Dh]
  char *v34; // [rsp+A0h] [rbp-9h]
  int v35; // [rsp+A8h] [rbp-1h]
  int v36; // [rsp+ACh] [rbp+3h]
  char *v37; // [rsp+B0h] [rbp+7h]
  int v38; // [rsp+B8h] [rbp+Fh]
  int v39; // [rsp+BCh] [rbp+13h]
  char *v40; // [rsp+C0h] [rbp+17h]
  int v41; // [rsp+C8h] [rbp+1Fh]
  int v42; // [rsp+CCh] [rbp+23h]

  v1 = *(_QWORD *)(a1 + 168);
  v3 = *(IRP **)(a1 + 160);
  v4 = *(_QWORD *)(a1 + 224);
  LOBYTE(v5) = *(_BYTE *)(v1 + 2);
  if ( (_BYTE)v5 == 40 )
  {
    v6 = *(_DWORD *)(v1 + 60);
    v7 = *(_DWORD *)(v1 + 20);
  }
  else
  {
    v6 = *(_DWORD *)(v1 + 16);
    v7 = (unsigned __int8)v5;
  }
  if ( v7 != 16 )
  {
    v5 = (_BYTE)v5 == 40 ? *(_DWORD *)(v1 + 20) : (unsigned __int8)v5;
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 1036));
    if ( v5 >= 0x12 )
    {
      if ( v5 <= 0x13 )
      {
        RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v4 + 24));
      }
      else if ( v5 == 32 )
      {
        RaidResumeAndRestartUnitQueue(v4);
      }
    }
  }
  LOBYTE(v8) = *(_BYTE *)(v1 + 2);
  if ( (_BYTE)v8 == 40 )
    v8 = *(_DWORD *)(v1 + 20);
  else
    v8 = (unsigned __int8)v8;
  if ( v8 == 16 && (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v11 = *(_QWORD *)(v4 + 24);
    v12 = (const struct _TlgProvider_t *)(v11 + 5192);
    v20 = *(_DWORD *)(v11 + 56);
    v16 = *(_BYTE *)(v4 + 88);
    v17 = *(_BYTE *)(v4 + 89);
    v18 = *(_BYTE *)(v4 + 90);
    LOBYTE(v11) = *(_BYTE *)(v1 + 3);
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v19 = v11 & 0x3F;
    v28 = &v20;
    v31 = &v16;
    v34 = &v17;
    v37 = &v18;
    v40 = &v19;
    v22 = v12;
    v23 = 16;
    v25 = v4 + 1720;
    v26 = 16;
    v29 = 4;
    v32 = (int)v10;
    v35 = (int)v10;
    v38 = (int)v10;
    v41 = (int)v10;
    TlgWrite(v12, &unk_1C004BD2D, v9, v10, 9u, &v21);
  }
  RaidUnitEndDeviceBusy(v4, v3);
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v4, *(_DWORD *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  v3->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v1 + 3));
  v3->IoStatus.Information = v6;
  RaidUnitReleaseIrp((__int64)v3);
  if ( v7 == 16 )
  {
    RaidXrbDeallocateResources(a1, 1, v13);
    MmFreeContiguousMemory((PVOID)(a1 - 16));
  }
  else
  {
    *(_DWORD *)(v4 + 1472) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(pData) = v3->IoStatus.Status;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Bu,
      (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      v4,
      v3,
      pData);
  }
  if ( (qword_1C0056210 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v4 + 24), (__int64)v3, v1);
  return RaidCompleteRequestEx(v3, 0, v3->IoStatus.Status);
}
