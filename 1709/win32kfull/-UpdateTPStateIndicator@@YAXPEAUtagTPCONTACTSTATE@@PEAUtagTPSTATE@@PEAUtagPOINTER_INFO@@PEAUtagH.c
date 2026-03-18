/*
 * XREFs of ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AFBAC
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     ?CrossedTPDragThreshold@@YAHPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@UtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01ADE4C (-CrossedTPDragThreshold@@YAHPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@UtagPOINT@@PEAUtagHID_POINTER.c)
 *     ?CrossedTPTapWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01AE040 (-CrossedTPTapWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z.c)
 *     ?PassedCurtainMoveThresholds@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AED90 (-PassedCurtainMoveThresholds@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?PassedMultiFingerRestingTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AEE44 (-PassedMultiFingerRestingTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AEEF4 (-PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AF160 (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?SetupQpcThresholdTimes@@YAHPEAUtagTPSTATE@@@Z @ 0x1C01AF228 (-SetupQpcThresholdTimes@@YAHPEAUtagTPSTATE@@@Z.c)
 *     ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AF59C (-UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_PO.c)
 *     TPAAPSetCurtainState @ 0x1C01B43D0 (TPAAPSetCurtainState.c)
 */

void __fastcall UpdateTPStateIndicator(
        struct tagTPCONTACTSTATE *a1,
        struct tagTPSTATE *a2,
        struct tagPOINTER_INFO *a3,
        struct tagHID_POINTER_DEVICE_INFO *a4,
        int *a5)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // r15
  unsigned int *v11; // r9
  _QWORD *v12; // r10
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx
  struct tagHID_POINTER_DEVICE_INFO *v18; // r9
  unsigned int v19; // ebp
  int v20; // r9d
  int v21; // ebp
  __int64 v22; // r9
  __int64 v23; // rdx
  struct tagTPCONTACTSTATE *v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edx

  v6 = *((_QWORD *)a3 + 5);
  v8 = *((_QWORD *)a3 + 10);
  if ( *((_DWORD *)a3 + 3) )
  {
    if ( (unsigned int)PointInsideNonCurtainRegion(a2, a3, a4) )
    {
      *((_DWORD *)a1 + 66) |= 0x800u;
      TPAAPSetCurtainState(a2, 0LL);
    }
    v11 = (unsigned int *)0xFFFFF78000000004LL;
    v12 = (_QWORD *)0xFFFFF78000000320LL;
    if ( (*((_DWORD *)a2 + 480) & 0x4000000) != 0
      && (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - *((_QWORD *)a2 + 222)) > 0x7D )
    {
      *((_DWORD *)a2 + 480) &= ~0x4000000u;
    }
    if ( (*((_DWORD *)a1 + 66) & 0x20) == 0 && !PtInRect((_DWORD *)a2 + 470, v6) )
      *((_DWORD *)a1 + 66) = v13 | 0x20;
    v14 = *((_DWORD *)a1 + 66);
    if ( (v14 & 1) != 0 )
    {
      if ( ++*((_DWORD *)a1 + 33) == 2
        && (unsigned __int64)(((((unsigned __int64)*v11 << 32) * (unsigned __int128)(unsigned __int64)(*v12 << 8)) >> 64)
                            - *((_QWORD *)a1 + 14)) <= 0x32 )
      {
        *(_QWORD *)a1 = *((_QWORD *)a1 + 1);
        SetupDragRectsForContact(a1);
      }
      UpdateContactRestingState((struct tagPOINT)v6, v8, a1, a2, a4);
      v19 = *((_DWORD *)a1 + 66) & 0xFFFFFFFD;
      *((_DWORD *)a1 + 66) = v19;
      if ( (*((_DWORD *)a3 + 3) & 0x40000) == 0 )
      {
        if ( (v19 & 4) == 0 && (unsigned int)CrossedTPDragThreshold(a1, a2, (struct tagPOINT)v6, v18) )
        {
          *((_QWORD *)a1 + 5) = v6;
          *((_DWORD *)a1 + 66) = v19 | 4;
          *a5 = 1;
        }
        v20 = *((_DWORD *)a1 + 66);
        if ( (v20 & 0x40000) == 0
          && (unsigned __int64)(10000
                              * ((int)((*(_QWORD *)a1 - v6) * (*(_QWORD *)a1 - v6))
                               + 9LL
                               * (int)((HIDWORD(*(_QWORD *)a1) - HIDWORD(v6)) * (HIDWORD(*(_QWORD *)a1) - HIDWORD(v6))))) >= 0x35A4E900 )
        {
          *((_DWORD *)a1 + 66) = v20 | 0x40000;
        }
        v21 = *((_DWORD *)a1 + 66);
        if ( (v21 & 0x400000) == 0 && CrossedTPTapWarpBackThreshold(a1, (struct tagPOINT)v6) )
          *((_DWORD *)a1 + 66) = v21 | 0x400000;
        if ( !*((_DWORD *)a1 + 67) )
        {
          v22 = (unsigned int)(gTPThresholds[56] * gTPThresholds[56]);
          v23 = (unsigned int)(gTPThresholds[55] * gTPThresholds[55]);
          if ( v22 * (int)((*(_QWORD *)a1 - v6) * (*(_QWORD *)a1 - v6))
             + v23 * (int)((HIDWORD(*(_QWORD *)a1) - HIDWORD(v6)) * (HIDWORD(*(_QWORD *)a1) - HIDWORD(v6))) >= (unsigned __int64)(v22 * v23) )
            *((_DWORD *)a1 + 67) = 1;
        }
      }
      if ( (unsigned int)SetupQpcThresholdTimes(a2) )
      {
        v25 = *((_QWORD *)a2 + 224);
        v26 = v8 - *((_QWORD *)a1 + 7);
        v27 = *((_DWORD *)a1 + 66) & 0xFFFFFFEF | (*((_QWORD *)a2 + 226) < v26 ? 0x10 : 0);
        *((_DWORD *)a1 + 66) = v27;
        v28 = v27 & 0xFFF7FFFF | ((v26 > *((_QWORD *)a2 + 227)) << 19);
        *((_DWORD *)a1 + 66) = v28;
        v29 = v28 & 0xFFEFFFFF | ((v26 > *((_QWORD *)a2 + 228)) << 20);
        *((_DWORD *)a1 + 66) = v29;
        v30 = v29 & 0xFFDFFFFF | (((unsigned __int64)(v8 - v25) > *((_QWORD *)a2 + 227)) << 21);
        *((_DWORD *)a1 + 66) = v30;
        if ( (v30 & 8) == 0 && v26 > *((_QWORD *)a2 + 225) )
        {
          *a5 = 1;
          *((_DWORD *)a1 + 66) = v30 | 8;
        }
      }
      if ( (*((_DWORD *)a1 + 66) & 0x800000) == 0
        && (unsigned int)PassedMultiFingerRestingTapThresholdTime(*((_QWORD *)a1 + 7), v8, a2, v24) )
      {
        *((_DWORD *)a1 + 66) |= 0x800000u;
      }
      if ( (*((_DWORD *)a1 + 66) & 0x80u) == 0
        && (*((_DWORD *)a2 + 480) & 0x2000) != 0
        && (unsigned int)PassedCurtainMoveThresholds(*((_QWORD *)a1 + 10), v8, a2, a1) )
      {
        TPAAPSetCurtainState(a2, 0LL);
      }
    }
    else
    {
      *((_QWORD *)a1 + 7) = v8;
      *((_QWORD *)a1 + 9) = v8;
      *((_QWORD *)a1 + 11) = v8;
      *((_DWORD *)a1 + 66) = v14 & 0xFFE3FFF3;
      *((_QWORD *)a1 + 13) = UpconvertTime(*((unsigned int *)a3 + 16));
      *((_DWORD *)a1 + 33) = 1;
      *(_QWORD *)a1 = v6;
      *((_QWORD *)a1 + 2) = v6;
      v15 = *((_DWORD *)a1 + 66);
      *((_DWORD *)a1 + 67) = 0;
      *((_DWORD *)a1 + 30) = 0;
      *((_QWORD *)a1 + 3) = *(_QWORD *)gptCursorAsync;
      v16 = v15 & 0xFCFFE5FC | 3;
      *((_DWORD *)a1 + 66) = v16;
      if ( !*((_DWORD *)a2 + 410) || *((_DWORD *)a2 + 416) == 1 )
        v17 = 0;
      else
        v17 = 0x2000;
      *((_DWORD *)a1 + 66) = v17 & 0xFF3C3BFF | v16 & 0xFF3C1BFF;
      SetupDragRectsForContact(a1);
      UpdateContactRestingState((struct tagPOINT)v6, v8, a1, a2, a4);
    }
  }
}
