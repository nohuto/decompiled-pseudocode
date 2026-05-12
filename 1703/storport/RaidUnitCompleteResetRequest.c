/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x1C003C870
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     RaidUnitReleaseIrp @ 0x1C0006CB4 (RaidUnitReleaseIrp.c)
 *     RaidXrbDeallocateResources @ 0x1C0006D80 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000ACC8 (RaidSrbStatusToNtStatus.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002F784 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002F848 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C003C114 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C003C384 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C003D4D0 (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaidUnitCompleteResetRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  IRP *v6; // rsi
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  unsigned int v9; // r12d
  int v10; // r15d
  unsigned int v11; // eax
  int v12; // eax
  const GUID *v13; // r8
  const GUID *v14; // r9
  __int64 v15; // rax
  const struct _TlgProvider_t *v16; // rcx
  __int64 v17; // r8
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-91h]
  char v20; // [rsp+30h] [rbp-89h] BYREF
  char v21; // [rsp+31h] [rbp-88h] BYREF
  char v22; // [rsp+32h] [rbp-87h] BYREF
  char v23; // [rsp+33h] [rbp-86h] BYREF
  int v24; // [rsp+34h] [rbp-85h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-79h] BYREF
  const struct _TlgProvider_t *v26; // [rsp+60h] [rbp-59h]
  int v27; // [rsp+68h] [rbp-51h]
  int v28; // [rsp+6Ch] [rbp-4Dh]
  __int64 v29; // [rsp+70h] [rbp-49h]
  int v30; // [rsp+78h] [rbp-41h]
  int v31; // [rsp+7Ch] [rbp-3Dh]
  int *v32; // [rsp+80h] [rbp-39h]
  int v33; // [rsp+88h] [rbp-31h]
  int v34; // [rsp+8Ch] [rbp-2Dh]
  char *v35; // [rsp+90h] [rbp-29h]
  int v36; // [rsp+98h] [rbp-21h]
  int v37; // [rsp+9Ch] [rbp-1Dh]
  char *v38; // [rsp+A0h] [rbp-19h]
  int v39; // [rsp+A8h] [rbp-11h]
  int v40; // [rsp+ACh] [rbp-Dh]
  char *v41; // [rsp+B0h] [rbp-9h]
  int v42; // [rsp+B8h] [rbp-1h]
  int v43; // [rsp+BCh] [rbp+3h]
  char *v44; // [rsp+C0h] [rbp+7h]
  int v45; // [rsp+C8h] [rbp+Fh]
  int v46; // [rsp+CCh] [rbp+13h]

  v4 = *(_QWORD *)(a1 + 168);
  v6 = *(IRP **)(a1 + 160);
  v7 = *(_QWORD *)(a1 + 224);
  v8 = *(_BYTE *)(v4 + 2);
  if ( v8 == 40 )
    v9 = *(_DWORD *)(v4 + 60);
  else
    v9 = *(_DWORD *)(v4 + 16);
  if ( v8 == 40 )
    v10 = *(_DWORD *)(v4 + 20);
  else
    v10 = v8;
  if ( v10 != 16 )
  {
    LOBYTE(v11) = *(_BYTE *)(v4 + 2);
    v11 = (_BYTE)v11 == 40 ? *(_DWORD *)(v4 + 20) : (unsigned __int8)v11;
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 1004));
    if ( v11 >= 0x12 )
    {
      if ( v11 <= 0x13 )
      {
        RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v7 + 24));
      }
      else if ( v11 == 32 )
      {
        RaidResumeAndRestartUnitQueue(v7, a2, a3, a4);
      }
    }
  }
  LOBYTE(v12) = *(_BYTE *)(v4 + 2);
  if ( (_BYTE)v12 == 40 )
    v12 = *(_DWORD *)(v4 + 20);
  else
    v12 = (unsigned __int8)v12;
  if ( v12 == 16 && (unsigned int)dword_1C0055010 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v15 = *(_QWORD *)(v7 + 24);
    v16 = (const struct _TlgProvider_t *)(v15 + 5192);
    v24 = *(_DWORD *)(v15 + 56);
    v20 = *(_BYTE *)(v7 + 88);
    v21 = *(_BYTE *)(v7 + 89);
    v22 = *(_BYTE *)(v7 + 90);
    LOBYTE(v15) = *(_BYTE *)(v4 + 3);
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v23 = v15 & 0x3F;
    v32 = &v24;
    v35 = &v20;
    v38 = &v21;
    v41 = &v22;
    v44 = &v23;
    v26 = v16;
    v27 = 16;
    v29 = v7 + 1688;
    v30 = 16;
    v33 = 4;
    v36 = (int)v14;
    v39 = (int)v14;
    v42 = (int)v14;
    v45 = (int)v14;
    TlgWrite(v16, &unk_1C004BAAD, v13, v14, 9u, &v25);
  }
  RaidUnitEndDeviceBusy(v7, v6);
  if ( (*(_BYTE *)(a1 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v7, *(_DWORD *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~2u;
  }
  v6->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v4 + 3));
  v6->IoStatus.Information = v9;
  RaidUnitReleaseIrp((__int64)v6);
  if ( v10 == 16 )
  {
    RaidXrbDeallocateResources(a1, 1, v17);
    MmFreeContiguousMemory((PVOID)(a1 - 16));
  }
  else
  {
    *(_DWORD *)(v7 + 1440) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(pData) = v6->IoStatus.Status;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Bu,
      (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
      v7,
      v6,
      pData);
  }
  if ( (qword_1C00551F8 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v7 + 24), (__int64)v6, v4);
  return RaidCompleteRequestEx(v6, 0, v6->IoStatus.Status);
}
