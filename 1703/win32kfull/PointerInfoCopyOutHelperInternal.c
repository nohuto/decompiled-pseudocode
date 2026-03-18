/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1C01CA1A0
 * Callers:
 *     ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01C5CB0 (-GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01C5EFC (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z @ 0x1C01C60E0 (-GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z.c)
 *     ?GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z @ 0x1C01C63BC (-GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01C01F0 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01C0710 (RemapHimetricPointsForMultiMonDigitizers.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6)
{
  int AdjustedPointerLocations; // esi
  __int64 v10; // rax
  int v11; // esi
  int v12; // esi
  __int64 v13; // rax
  _OWORD *v14; // rdx
  _OWORD *v15; // rax
  unsigned int v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v20[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v22[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-78h]
  __int128 v24; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-48h] BYREF

  v17 = 0;
  v25 = 0uLL;
  v26 = 0uLL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               &v19,
                               &v21,
                               v20,
                               v22,
                               a3);
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1096) & 0x2000) != 0 )
    AdjustedPointerLocations = 0;
  if ( a4 == 2 || a4 == 5 )
  {
    v25 = *(_OWORD *)(a1 + 112);
    v26 = *(_OWORD *)(a1 + 128);
  }
  v10 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), 1);
  if ( v10 && (*(_DWORD *)(v10 + 368) & 0xF) != 2 )
  {
    if ( !AdjustedPointerLocations )
    {
      v19 = *(_QWORD *)(a1 + 40);
      v21 = *(_QWORD *)(a1 + 48);
      v20[0] = *(_QWORD *)(a1 + 56);
      v22[0] = *(_QWORD *)(a1 + 64);
    }
    v18 = 0LL;
    GetDPITransformationMonitor(v19, v10, &v18);
    v11 = PhysicalToLogicalDPIPoint(&v19, &v19, 0LL, &v18) | AdjustedPointerLocations;
    AdjustedPointerLocations = PhysicalToLogicalDPIPoint(v20, v20, 0LL, &v18) | v11;
    if ( a4 == 2 || a4 == 5 )
    {
      v12 = PhysicalToLogicalDPIRect(&v25, &v25, 0LL, &v18) | AdjustedPointerLocations;
      AdjustedPointerLocations = PhysicalToLogicalDPIRect(&v26, &v26, 0LL, &v18) | v12;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u && a3 && ((*(_DWORD *)(a3 + 260) & 0x20) != 0 || *(_DWORD *)(a3 + 24) == 6) )
    {
      v24 = *(_OWORD *)(a3 + 140);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v24, v18, &v21, v22);
      AdjustedPointerLocations = 1;
    }
  }
  switch ( a4 )
  {
    case 1:
      if ( a5 != 96 )
        goto LABEL_36;
      v15 = (_OWORD *)a6;
      if ( a6 >= W32UserProbeAddress )
        v15 = (_OWORD *)W32UserProbeAddress;
      *v15 = *(_OWORD *)(a1 + 8);
      v15[1] = *(_OWORD *)(a1 + 24);
      v15[2] = *(_OWORD *)(a1 + 40);
      v15[3] = *(_OWORD *)(a1 + 56);
      v15[4] = *(_OWORD *)(a1 + 72);
      v15[5] = *(_OWORD *)(a1 + 88);
      break;
    case 2:
LABEL_27:
      if ( a5 != 144 )
        goto LABEL_36;
      v14 = (_OWORD *)a6;
      if ( a6 >= W32UserProbeAddress )
        v14 = (_OWORD *)W32UserProbeAddress;
      *v14 = *(_OWORD *)(a1 + 8);
      v14[1] = *(_OWORD *)(a1 + 24);
      v14[2] = *(_OWORD *)(a1 + 40);
      v14[3] = *(_OWORD *)(a1 + 56);
      v14[4] = *(_OWORD *)(a1 + 72);
      v14[5] = *(_OWORD *)(a1 + 88);
      v14[6] = *(_OWORD *)(a1 + 104);
      v14[7] = *(_OWORD *)(a1 + 120);
      v14[8] = *(_OWORD *)(a1 + 136);
      break;
    case 3:
      if ( a5 != 120 )
        goto LABEL_36;
      v13 = a6;
      if ( a6 >= W32UserProbeAddress )
        v13 = W32UserProbeAddress;
      *(_OWORD *)v13 = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v13 + 16) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v13 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v13 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v13 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v13 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v13 + 96) = *(_OWORD *)(a1 + 104);
      *(_QWORD *)(v13 + 112) = *(_QWORD *)(a1 + 120);
      break;
    case 5:
      goto LABEL_27;
    default:
      v17 = 0;
      goto LABEL_36;
  }
  v17 = 1;
LABEL_36:
  if ( v17 )
  {
    if ( *(_DWORD *)(a1 + 8) == 5 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread) + 1096) & 0x10000) == 0 )
        *(_QWORD *)(a6 + 16) = -2LL;
    }
    if ( AdjustedPointerLocations )
    {
      *(_QWORD *)(a6 + 32) = v19;
      *(_QWORD *)(a6 + 40) = v21;
      *(_QWORD *)(a6 + 48) = v20[0];
      *(_QWORD *)(a6 + 56) = v22[0];
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v25;
        *(_OWORD *)(a6 + 120) = v26;
      }
    }
  }
  return v17;
}
