/*
 * XREFs of xxxInjectTouchInput @ 0x1C01BD79C
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C01E8680 (NtUserInjectTouchInput.c)
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     IsGpqForegroundAccessible @ 0x1C0050654 (IsGpqForegroundAccessible.c)
 *     CheckGrantedAccess @ 0x1C0050878 (CheckGrantedAccess.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01BC7B8 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01BCBEC (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01BCE4C (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01BCFC8 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01BD04C (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01BD0C4 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01BD134 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01BD27C (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  struct tagPOINTER_TOUCH_INFO *v2; // r13
  __int64 v3; // r12
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  char *v14; // rax
  unsigned int v15; // ecx
  int v16; // r9d
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  struct tagINJECTED_CONTACT *v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // r9
  int v24; // r8d
  _DWORD *v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r8
  unsigned int *v34; // r9
  __int64 v35; // rsi
  int v36; // edi
  ULONG v37; // ebp
  int QpcBasedTouchStackTime; // eax
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // r10
  unsigned int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  INT *v47; // r15
  char *v48; // rsi
  __int64 v49; // r13
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  INT DpiForSystem; // edi
  INT v54; // ebx
  INT v55; // eax
  INT v56; // ecx
  int v57; // edx
  _DWORD *v58; // rax
  int v59; // r8d
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v63; // [rsp+38h] [rbp-70h]
  __int64 v64; // [rsp+40h] [rbp-68h]
  unsigned __int64 v65; // [rsp+48h] [rbp-60h]
  struct tagRECT v66; // [rsp+50h] [rbp-58h] BYREF
  __int128 v67; // [rsp+60h] [rbp-48h]
  unsigned int v69; // [rsp+C0h] [rbp+18h]
  int v70; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  LODWORD(v62) = 0;
  v3 = a1;
  v4 = *(_QWORD *)(gptiCurrent + 400LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 432LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 864LL), 0x20u) )
  {
    goto LABEL_2;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  if ( (unsigned int)IsGpqForegroundAccessible(1u) )
  {
    if ( *(_QWORD *)(v4 + 848) )
    {
      gppiInputProvider = v4;
      v8 = *(_QWORD *)(v4 + 848);
      v9 = *(unsigned int *)(v8 + 28);
      if ( (unsigned int)v3 > (unsigned int)v9 )
        goto LABEL_12;
      v10 = *((_QWORD *)v2 + 10);
      v69 = *((_DWORD *)v2 + 16);
      v11 = *(_DWORD *)(v8 + 40);
      v12 = *(_QWORD *)(v8 + 64);
      v63 = v11;
      v65 = v12;
      v64 = v10;
      if ( !(unsigned int)SortTouchContacts(v2, v3) )
        goto LABEL_12;
      v13 = 0;
      if ( (_DWORD)v3 )
      {
        v14 = (char *)v2 + 12;
        while ( *((_DWORD *)v14 - 2) < (unsigned int)v9 && *((_DWORD *)v14 - 3) == 2 )
        {
          v15 = *(_DWORD *)v14 & 0xFFFF7FFF;
          if ( v15 != 0x40000 )
          {
            v5 = v15 - 0x20000;
            if ( (unsigned int)v5 > 6 || (v16 = 69, !_bittest(&v16, v5)) )
            {
              if ( v15 != 65542 && v15 != 262146 )
                break;
            }
          }
          v17 = *((_DWORD *)v14 + 22);
          if ( (v17 & 2) != 0 && *((_DWORD *)v14 + 31) >= 0x168u )
            break;
          if ( (v17 & 4) != 0 && *((_DWORD *)v14 + 32) > 0xFDE8u
            || *((_DWORD *)v14 + 21)
            || *((_DWORD *)v14 + 28)
            || *((_DWORD *)v14 + 30)
            || *((_DWORD *)v14 + 27)
            || *((_DWORD *)v14 + 29)
            || *((_DWORD *)v14 - 1)
            || *(_QWORD *)(v14 + 4)
            || *(_QWORD *)(v14 + 12)
            || *((_DWORD *)v14 + 7)
            || *((_DWORD *)v14 + 8)
            || *((_DWORD *)v14 + 9)
            || *((_DWORD *)v14 + 10)
            || *((_DWORD *)v14 + 11)
            || *((_DWORD *)v14 + 12)
            || *((_DWORD *)v14 + 14)
            || *((_DWORD *)v14 + 15)
            || *((_DWORD *)v14 + 16)
            || *((_DWORD *)v14 + 19) )
          {
            break;
          }
          ++v13;
          v14 += 144;
          if ( v13 >= (unsigned int)v3 )
            goto LABEL_46;
        }
        goto LABEL_12;
      }
LABEL_46:
      v18 = *(_QWORD *)(v4 + 848);
      v19 = *(_QWORD *)(v18 + 16);
      *(_QWORD *)&v67 = v19;
      if ( !*(_DWORD *)(*(_QWORD *)(v19 + 472) + 912LL) )
      {
        *(_DWORD *)(v18 + 32) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 848) + 36LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 848) + 40LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 848) + 48LL) = 0;
        *(_QWORD *)(*(_QWORD *)(v4 + 848) + 56LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)(v4 + 848) + 64LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v4 + 848) + 72LL) = 0;
      }
      v20 = *(_QWORD *)(v4 + 848);
      v21 = *(struct tagINJECTED_CONTACT **)(v20 + 80);
      if ( v69 && v10 )
        goto LABEL_54;
      if ( *(_DWORD *)(v20 + 32) && v10 )
        goto LABEL_54;
      v22 = *(_QWORD *)(v20 + 56);
      if ( v22 )
      {
        if ( v69 )
          goto LABEL_54;
      }
      if ( v10 || (v24 = 1, v22) )
        v24 = 0;
      v70 = v24;
      if ( !*(_DWORD *)(*(_QWORD *)(v19 + 472) + 912LL) && (_DWORD)v9 )
      {
        v25 = (_DWORD *)((char *)v21 + 8);
        v26 = v9;
        do
        {
          if ( ((*v25 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            *v25 = 0x40000;
            LODWORD(v62) = 1;
          }
          v25 += 3;
          --v26;
        }
        while ( v26 );
      }
      v27 = *(_QWORD *)(v4 + 848);
      v28 = 0;
      if ( v24 )
      {
        v29 = *(_QWORD *)(v19 + 472);
        LOBYTE(v28) = *(_DWORD *)(v29 + 912) == 0;
        LOBYTE(v30) = _ValidateInjectionTime(v69, v63, *(_DWORD *)(v29 + 704), v28, *(_DWORD *)(v27 + 48));
        if ( !v30 )
        {
          v20 = *(_QWORD *)(v4 + 848);
LABEL_54:
          LODWORD(v23) = *(_DWORD *)(v20 + 36);
LABEL_55:
          xxxSendLastFrameTouchUp(v21, (struct DEVICEINFO *)v19, v9, v23);
LABEL_12:
          v6 = 87LL;
          goto LABEL_3;
        }
      }
      else
      {
        v32 = *(_QWORD *)(v19 + 472);
        LOBYTE(v28) = *(_DWORD *)(v32 + 912) == 0;
        if ( !(unsigned int)_ValidateInjectionQpcCount(v10, v65, *(_QWORD *)(v32 + 712), v28, *(_DWORD *)(v27 + 72)) )
        {
          v23 = (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v4 + 848) + 56LL)) / gliQpcFreq;
          goto LABEL_55;
        }
      }
      v66 = (struct tagRECT)*GetScreenRect(&v66, v31);
      if ( !(unsigned int)ValidateInjectedTouchFrame(v3, v2, v21, &v66, v9) )
      {
        xxxSendLastFrameTouchUp(v21, (struct DEVICEINFO *)v19, v9, *(_DWORD *)(*(_QWORD *)(v4 + 848) + 36LL));
        v6 = 1460LL;
        if ( (_DWORD)v62 )
          goto LABEL_3;
        goto LABEL_12;
      }
      v35 = *(_QWORD *)(v4 + 848);
      v36 = v70;
      *(_QWORD *)&v66.left = v35;
      if ( v70 )
      {
        v37 = 10 * (v69 - *(_DWORD *)(v35 + 32));
        QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
        v39 = *(_QWORD *)(v19 + 472);
        if ( !*(_DWORD *)(v39 + 912) )
        {
          v39 = v69;
          *(_DWORD *)(v35 + 32) = v69;
          *(_DWORD *)(v35 + 36) = QpcBasedTouchStackTime;
LABEL_83:
          v37 = 0;
          goto LABEL_85;
        }
        if ( v37 )
          goto LABEL_85;
        v39 = *(unsigned int *)(v35 + 44);
        v37 = QpcBasedTouchStackTime - *(_DWORD *)(v35 + 36);
        if ( v37 > (unsigned int)v39 )
          goto LABEL_85;
        if ( (unsigned int)v39 - v37 < 5 )
        {
          v37 = v39 + 1;
LABEL_85:
          if ( (_DWORD)v9 )
          {
            v39 = 0LL;
            v5 = v9;
            do
            {
              v39 += 12LL;
              *(_DWORD *)(v39 + *(_QWORD *)(v35 + 80) - 4) = 0x40000;
              --v5;
            }
            while ( v5 );
          }
          if ( (_DWORD)v3 )
          {
            v34 = (unsigned int *)((char *)v2 + 4);
            v41 = v3;
            do
            {
              v33 = *v34;
              v42 = v34[2];
              v34 += 36;
              *(_DWORD *)(*(_QWORD *)(v35 + 80) + 12 * v33 + 8) = v42 & 0xFFFF7FFF;
              v5 = 3 * v33;
              v39 = *(_QWORD *)(v35 + 80);
              *(_QWORD *)(v39 + 12 * v33) = *(_QWORD *)(v34 - 29);
              --v41;
            }
            while ( v41 );
          }
          if ( (W32GetCurrentThreadDpiAwarenessContext(v39, v5, v33, (__int64)v34) & 0xF) != 2 && (_DWORD)v3 )
          {
            v47 = (INT *)((char *)v2 + 116);
            v48 = (char *)v2 + 32;
            v49 = v3;
            do
            {
              v62 = 0LL;
              CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v44, v43, v45, v46);
              LogicalToPhysicalDPIPoint(v48, v48, CurrentThreadDpiAwarenessContext, &v62);
              DpiForSystem = GetDpiForSystem(v52, v51);
              v54 = *(unsigned __int16 *)(*(_QWORD *)(v62 + 40) + 64LL);
              v55 = EngMulDiv(*(v47 - 1) - *(v47 - 3), v54, DpiForSystem);
              v56 = *v47 - *(v47 - 2);
              *(v47 - 1) = v55;
              v48 += 144;
              *v47 = EngMulDiv(v56, v54, DpiForSystem);
              *(_QWORD *)(v47 - 3) = 0LL;
              v47 += 36;
              --v49;
            }
            while ( v49 );
            v35 = *(_QWORD *)&v66.left;
            v19 = v67;
            v2 = a2;
            v36 = v70;
          }
          v67 = *(_OWORD *)(*(_QWORD *)(v19 + 472) + 160LL);
          if ( (_DWORD)v3 )
          {
            v57 = DWORD1(v67);
            v58 = (_DWORD *)((char *)v2 + 36);
            v59 = v67;
            v60 = v3;
            do
            {
              *(v58 - 1) -= v59;
              *v58 -= v57;
              v58 += 36;
              --v60;
            }
            while ( v60 );
          }
          *(_DWORD *)(v35 + 44) = v37;
          if ( v36 )
          {
            *(_DWORD *)(v35 + 48) = v63 && !v69;
            *(_DWORD *)(v35 + 40) = v69;
          }
          else
          {
            v61 = v64;
            *(_DWORD *)(v35 + 72) = v65 && !v64;
            *(_QWORD *)(v35 + 64) = v61;
          }
          xxxSendToTouchStack((struct DEVICEINFO *)v19, v3, v2, v37);
          return 1LL;
        }
      }
      else
      {
        v40 = (unsigned __int64)(10000 * (v10 - *(_QWORD *)(v35 + 56))) / gliQpcFreq;
        v5 = (unsigned __int64)(10000 * (v10 - *(_QWORD *)(v35 + 56))) % gliQpcFreq;
        v39 = *(_QWORD *)(v19 + 472);
        v37 = v40;
        if ( !*(_DWORD *)(v39 + 912) )
        {
          *(_QWORD *)(v35 + 56) = v64;
          goto LABEL_83;
        }
        if ( (_DWORD)v40 != *(_DWORD *)(v35 + 44) )
          goto LABEL_85;
      }
      v6 = 21LL;
      goto LABEL_3;
    }
LABEL_2:
    v6 = RtlNtStatusToDosError(-1073741790);
LABEL_3:
    UserSetLastError(v6, v5);
    return 0LL;
  }
  MSGLUA_GPQFOREGROUND();
  return 1LL;
}
