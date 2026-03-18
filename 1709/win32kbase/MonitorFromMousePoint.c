/*
 * XREFs of MonitorFromMousePoint @ 0x1C005E770
 * Callers:
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C0015EDC (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C005EB60 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C0017908 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 */

__int64 __fastcall MonitorFromMousePoint(unsigned __int64 a1, struct CInpPushLock *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  int Next_high; // r9d
  struct _SINGLE_LIST_ENTRY *v7; // r10
  struct _SINGLE_LIST_ENTRY *v8; // rcx
  __int64 v9; // rcx
  char v11[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+30h] [rbp-18h]

  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v11, a2);
  v3 = 0LL;
  v4 = 0LL;
  Next = gpInputConfig[4].Next;
  Next_high = HIDWORD(Next[1].Next);
  if ( Next_high )
  {
    v7 = Next[2].Next;
    while ( 1 )
    {
      v8 = &v7[10 * v4];
      if ( v8[9].Next )
      {
        if ( PtInRect(v8, a1) )
          break;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (_DWORD)v4 == Next_high )
        goto LABEL_6;
    }
    v3 = *(_QWORD *)(v9 + 72);
  }
LABEL_6:
  if ( !v13 )
  {
    ExReleasePushLockSharedEx(v12, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
