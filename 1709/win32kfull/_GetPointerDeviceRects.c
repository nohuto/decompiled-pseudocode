/*
 * XREFs of _GetPointerDeviceRects @ 0x1C004A640
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C004A540 (NtUserGetPointerDeviceRects.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01D19B8 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01D24D8 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C01E052C (-_GetNonRejectionRegion@PalmRejection@@YA-AUtagRECT@@PEAX@Z.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01E5870 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     EnsurePointerDeviceHasMonitor @ 0x1C004A740 (EnsurePointerDeviceHasMonitor.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _FindPointerDevice @ 0x1C00B3C84 (_FindPointerDevice.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C43B4 (VirtualizeMultiMonDigitizerSize.c)
 *     MiPGetPhysicalRect @ 0x1C01CA450 (MiPGetPhysicalRect.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // r15
  _OWORD *MonitorRect; // rax
  __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  v14 = 0LL;
  v12[0] = 0LL;
  if ( !(unsigned int)FindPointerDevice(a1, v12, &v14) )
  {
    if ( !gptiCurrent )
      goto LABEL_12;
    v11 = *(_QWORD *)(gptiCurrent + 1224LL);
    if ( !v11 || (*(_DWORD *)v11 & 1) == 0 || a1 != *(_QWORD *)(v11 + 40) )
      goto LABEL_12;
LABEL_18:
    if ( a3 )
      *a3 = *(_OWORD *)GetScreenRect(v12);
    if ( a2 )
      *a2 = *(_OWORD *)MiPGetPhysicalRect(v12);
    goto LABEL_11;
  }
  if ( v14 && !*(_BYTE *)(v14 + 48) )
    goto LABEL_18;
  v7 = v12[0];
  if ( v12[0] )
  {
    EnsurePointerDeviceHasMonitor(v12[0]);
    v8 = *(_QWORD *)(v7 + 16);
    if ( a2 )
    {
      *a2 = *(_OWORD *)(v7 + 176);
      if ( *(_DWORD *)*gpDispInfo > 1u && !*(_DWORD *)(v8 + 776) )
        VirtualizeMultiMonDigitizerSize(a2);
    }
    if ( a3 )
    {
      if ( *(_DWORD *)(v8 + 776) )
        MonitorRect = (_OWORD *)GetMonitorRect(v12, *(_QWORD *)(v8 + 784));
      else
        MonitorRect = (_OWORD *)GetScreenRect(v12);
      *a3 = *MonitorRect;
    }
LABEL_11:
    v6 = 1;
  }
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  return v6;
}
