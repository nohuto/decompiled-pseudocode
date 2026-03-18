/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z @ 0x1C01AB324
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     GatherDeviceInfoSummaryInformation @ 0x1C0043A00 (GatherDeviceInfoSummaryInformation.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C0119520 (ApplyGatheredDeviceInfoSummaryInformation.c)
 */

void __fastcall ApplyRimDevBackedDeviceSummaryInfomation(int a1)
{
  int v2; // ebx
  int v3; // r14d
  int v4; // r15d
  int v5; // r12d
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v19; // [rsp+48h] [rbp-18h] BYREF
  int v20; // [rsp+4Ch] [rbp-14h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-10h] BYREF
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+A8h] [rbp+48h]
  int v23; // [rsp+B0h] [rbp+50h] BYREF
  int v24; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  v3 = 0;
  v20 = 0;
  v4 = 0;
  v5 = 0;
  v23 = 0;
  v6 = 0;
  v24 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_(v8, v7, v9, v10);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v21, gpRimDevBackedDeviceInfoListLock);
  v11 = gpRimDevBackedDeviceInfoList;
  if ( gpRimDevBackedDeviceInfoList )
  {
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)(v11 + 48);
      if ( v12 == a1 )
      {
        GatherDeviceInfoSummaryInformation(v11, &v23, &v24, &v17, (unsigned int *)&v18, &v19, &v20);
        v2 = v23;
      }
      else
      {
        if ( a1 != 2 )
        {
          if ( a1 )
            goto LABEL_14;
          if ( (_BYTE)v12 != 2 )
            goto LABEL_14;
          v13 = *(_QWORD *)(v11 + 472);
          if ( !v13 || (unsigned int)(*(_DWORD *)(v13 + 24) - 1) > 6 )
            goto LABEL_14;
LABEL_13:
          v23 = ++v2;
          goto LABEL_14;
        }
        if ( !(_BYTE)v12 )
          goto LABEL_13;
      }
LABEL_14:
      v11 = *(_QWORD *)(v11 + 56);
      if ( !v11 )
      {
        v3 = v24;
        v4 = v17;
        v5 = v18;
        v6 = v19;
        break;
      }
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v21);
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_(v15, v14, v16);
  ApplyGatheredDeviceInfoSummaryInformation(a1, v2, v5, v3, v4, v6);
}
