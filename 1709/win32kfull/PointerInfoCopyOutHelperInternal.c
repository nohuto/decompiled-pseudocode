/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1C01CE5E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01C3AC0 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01C3EF0 (RemapHimetricPointsForMultiMonDigitizers.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, ULONG64 a6)
{
  int AdjustedPointerLocations; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _OWORD *v19; // rdx
  int v20; // esi
  int v21; // esi
  ULONG64 v22; // rax
  _OWORD *v23; // rax
  unsigned int v25; // [rsp+50h] [rbp-B8h]
  __int64 DPITransformationMonitor; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v28[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v30[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-78h]
  __int128 v32; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-48h] BYREF

  v25 = 0;
  v33 = 0uLL;
  v34 = 0uLL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               &v27,
                               &v29,
                               v28,
                               v30,
                               a3);
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 1184) & 0x2000) != 0 )
    AdjustedPointerLocations = 0;
  if ( a4 == 2 || a4 == 5 )
  {
    v33 = *(_OWORD *)(a1 + 112);
    v34 = *(_OWORD *)(a1 + 128);
  }
  LOBYTE(v13) = 1;
  v16 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), v13, v14, v15);
  v19 = (_OWORD *)v16;
  if ( v16 && (*(_DWORD *)(v16 + 368) & 0xF) != 2 )
  {
    if ( !AdjustedPointerLocations )
    {
      v27 = *(_QWORD *)(a1 + 40);
      v29 = *(_QWORD *)(a1 + 48);
      v28[0] = *(_QWORD *)(a1 + 56);
      v30[0] = *(_QWORD *)(a1 + 64);
    }
    DPITransformationMonitor = GetDPITransformationMonitor(v27, v16);
    v20 = PhysicalToLogicalDPIPoint(&v27, &v27, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
    AdjustedPointerLocations = PhysicalToLogicalDPIPoint(v28, v28, 0LL, &DPITransformationMonitor) | v20;
    if ( a4 == 2 || a4 == 5 )
    {
      v21 = PhysicalToLogicalDPIRect(&v33, &v33, 0LL, &DPITransformationMonitor) | AdjustedPointerLocations;
      AdjustedPointerLocations = PhysicalToLogicalDPIRect(&v34, &v34, 0LL, &DPITransformationMonitor) | v21;
    }
    if ( *(_DWORD *)*gpDispInfo > 1u && a3 && ((*(_DWORD *)(a3 + 276) & 0x20) != 0 || *(_DWORD *)(a3 + 24) == 6) )
    {
      v32 = *(_OWORD *)(a3 + 176);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v32, DPITransformationMonitor, &v29, v30);
      AdjustedPointerLocations = 1;
    }
  }
  switch ( a4 )
  {
    case 1:
      if ( a5 != 96 )
        goto LABEL_36;
      v23 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v23 = (_OWORD *)MmUserProbeAddress;
      *v23 = *(_OWORD *)(a1 + 8);
      v23[1] = *(_OWORD *)(a1 + 24);
      v23[2] = *(_OWORD *)(a1 + 40);
      v23[3] = *(_OWORD *)(a1 + 56);
      v23[4] = *(_OWORD *)(a1 + 72);
      v23[5] = *(_OWORD *)(a1 + 88);
      break;
    case 2:
LABEL_27:
      if ( a5 != 144 )
        goto LABEL_36;
      v19 = (_OWORD *)a6;
      if ( a6 >= MmUserProbeAddress )
        v19 = (_OWORD *)MmUserProbeAddress;
      *v19 = *(_OWORD *)(a1 + 8);
      v19[1] = *(_OWORD *)(a1 + 24);
      v19[2] = *(_OWORD *)(a1 + 40);
      v19[3] = *(_OWORD *)(a1 + 56);
      v19[4] = *(_OWORD *)(a1 + 72);
      v19[5] = *(_OWORD *)(a1 + 88);
      v19[6] = *(_OWORD *)(a1 + 104);
      v19[7] = *(_OWORD *)(a1 + 120);
      v19[8] = *(_OWORD *)(a1 + 136);
      break;
    case 3:
      if ( a5 != 120 )
        goto LABEL_36;
      v22 = a6;
      if ( a6 >= MmUserProbeAddress )
        v22 = MmUserProbeAddress;
      *(_OWORD *)v22 = *(_OWORD *)(a1 + 8);
      *(_OWORD *)(v22 + 16) = *(_OWORD *)(a1 + 24);
      *(_OWORD *)(v22 + 32) = *(_OWORD *)(a1 + 40);
      *(_OWORD *)(v22 + 48) = *(_OWORD *)(a1 + 56);
      *(_OWORD *)(v22 + 64) = *(_OWORD *)(a1 + 72);
      *(_OWORD *)(v22 + 80) = *(_OWORD *)(a1 + 88);
      *(_OWORD *)(v22 + 96) = *(_OWORD *)(a1 + 104);
      *(_QWORD *)(v22 + 112) = *(_QWORD *)(a1 + 120);
      break;
    case 5:
      goto LABEL_27;
    default:
      v25 = 0;
      goto LABEL_36;
  }
  v25 = 1;
LABEL_36:
  if ( v25 )
  {
    if ( *(_DWORD *)(a1 + 8) == 5 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread, (__int64)v19, v17, v18) + 1184) & 0x10000) == 0 )
        *(_QWORD *)(a6 + 16) = -2LL;
    }
    if ( AdjustedPointerLocations )
    {
      *(_QWORD *)(a6 + 32) = v27;
      *(_QWORD *)(a6 + 40) = v29;
      *(_QWORD *)(a6 + 48) = v28[0];
      *(_QWORD *)(a6 + 56) = v30[0];
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v33;
        *(_OWORD *)(a6 + 120) = v34;
      }
    }
  }
  return v25;
}
