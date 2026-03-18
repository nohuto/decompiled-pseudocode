/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z @ 0x1C01A7F84
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     GatherDeviceInfoSummaryInformation @ 0x1C0104FC0 (GatherDeviceInfoSummaryInformation.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C010FDF0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 */

void __fastcall ApplyRimDevBackedDeviceSummaryInfomation(int a1)
{
  int v2; // ebx
  int v3; // r14d
  int v4; // r15d
  int v5; // r12d
  unsigned int v6; // r13d
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v14; // [rsp+48h] [rbp-18h] BYREF
  int v15; // [rsp+4Ch] [rbp-14h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-10h] BYREF
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+A8h] [rbp+48h]
  int v18; // [rsp+B0h] [rbp+50h] BYREF
  int v19; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  v3 = 0;
  v15 = 0;
  v4 = 0;
  v5 = 0;
  v18 = 0;
  v6 = 0;
  v19 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_(v7);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v16, gpRimDevBackedDeviceInfoListLock);
  v8 = gpRimDevBackedDeviceInfoList;
  if ( gpRimDevBackedDeviceInfoList )
  {
    while ( 1 )
    {
      v9 = *(unsigned __int8 *)(v8 + 48);
      if ( v9 == a1 )
      {
        GatherDeviceInfoSummaryInformation(v8, &v18, &v19, &v12, (unsigned int *)&v13, &v14, &v15);
        v2 = v18;
      }
      else
      {
        if ( a1 != 2 )
        {
          if ( a1 )
            goto LABEL_14;
          if ( (_BYTE)v9 != 2 )
            goto LABEL_14;
          v10 = *(_QWORD *)(v8 + 472);
          if ( !v10 || (unsigned int)(*(_DWORD *)(v10 + 24) - 1) > 6 )
            goto LABEL_14;
LABEL_13:
          v18 = ++v2;
          goto LABEL_14;
        }
        if ( !(_BYTE)v9 )
          goto LABEL_13;
      }
LABEL_14:
      v8 = *(_QWORD *)(v8 + 56);
      if ( !v8 )
      {
        v3 = v19;
        v4 = v12;
        v5 = v13;
        v6 = v14;
        break;
      }
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_(v11);
  ApplyGatheredDeviceInfoSummaryInformation(a1, v2, v5, v3, v4, v6);
}
