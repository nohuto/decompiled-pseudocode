/*
 * XREFs of xxxInjectTouchInput @ 0x1C01B85C0
 * Callers:
 *     NtUserInjectTouchInput @ 0x1C01DC4A0 (NtUserInjectTouchInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 *     CheckGrantedAccess @ 0x1C00EBE68 (CheckGrantedAccess.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01B7434 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01B789C (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONITOR@@I@Z @ 0x1C01B7AFC (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONI.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01B7D64 (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01B7DE8 (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x1C01B7E60 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01B7ED0 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01B8018 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     GetDpiForSystem @ 0x1C0238FB8 (GetDpiForSystem.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInjectTouchInput(unsigned int a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  struct tagPOINTER_TOUCH_INFO *v2; // r13
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned int v17; // r8d
  char *v18; // rax
  unsigned int v19; // ecx
  int v20; // r9d
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rax
  struct tagINJECTED_CONTACT *v25; // rdi
  __int64 v26; // rcx
  unsigned __int64 v27; // r9
  int v28; // r8d
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rsi
  int v37; // edi
  ULONG v38; // ebp
  int QpcBasedTouchStackTime; // eax
  ULONG v40; // ecx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned int *v44; // r9
  __int64 v45; // r10
  __int64 v46; // r8
  unsigned int v47; // edx
  INT *v48; // r15
  char *v49; // rsi
  __int64 v50; // r13
  INT DpiForSystem; // edi
  INT v52; // ebx
  INT v53; // eax
  INT v54; // ecx
  int v55; // edx
  _DWORD *v56; // rax
  int v57; // r8d
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v61; // [rsp+38h] [rbp-70h]
  __int64 v62; // [rsp+40h] [rbp-68h]
  unsigned __int64 v63; // [rsp+48h] [rbp-60h]
  __int128 v64; // [rsp+50h] [rbp-58h]
  __int64 v65; // [rsp+60h] [rbp-48h]
  __int64 v66; // [rsp+68h] [rbp-40h]
  unsigned int v68; // [rsp+C0h] [rbp+18h]
  int v69; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  LODWORD(v60) = 0;
  v4 = *(_QWORD *)(gptiCurrent + 376LL);
  CheckCurrentInjectionConfiguration();
  if ( *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 776LL), 0x20u) )
  {
    goto LABEL_2;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  if ( !gpqForeground
    || (v7 = *(_QWORD *)(gptiCurrent + 376LL),
        v8 = *(_QWORD *)(gpqForeground + 380LL),
        v9 = *(_QWORD *)(v7 + 824),
        !gbEnforceUIPI)
    || (unsigned int)v9 > (unsigned int)v8
    || (_DWORD)v9 == (_DWORD)v8
    && ((v10 = HIDWORD(v9), v11 = HIDWORD(v8), (_DWORD)v10 == (_DWORD)v11) || (_DWORD)v10 == -1 || (_DWORD)v11 == -1)
    || *(int *)(v7 + 12) < 0
    || IsForegroundShellFrameQueueAccessible(gptiCurrent) )
  {
    if ( *(_QWORD *)(v4 + 840) )
    {
      gppiInputProvider = v4;
      v12 = *(_QWORD *)(v4 + 840);
      v13 = *(unsigned int *)(v12 + 20);
      if ( (unsigned int)v3 > (unsigned int)v13 )
        goto LABEL_19;
      v14 = *((_QWORD *)v2 + 10);
      v68 = *((_DWORD *)v2 + 16);
      v15 = *(_DWORD *)(v12 + 32);
      v16 = *(_QWORD *)(v12 + 56);
      v61 = v15;
      v63 = v16;
      v62 = v14;
      if ( !(unsigned int)SortTouchContacts(v2, v3) )
        goto LABEL_19;
      v17 = 0;
      if ( (_DWORD)v3 )
      {
        v18 = (char *)v2 + 12;
        while ( *((_DWORD *)v18 - 2) < (unsigned int)v13 && *((_DWORD *)v18 - 3) == 2 )
        {
          v19 = *(_DWORD *)v18 & 0xFFFF7FFF;
          if ( v19 != 0x40000 )
          {
            if ( v19 - 0x20000 > 6 || (v20 = 69, !_bittest(&v20, v19 - 0x20000)) )
            {
              if ( v19 != 65542 && v19 != 262146 )
                break;
            }
          }
          v21 = *((_DWORD *)v18 + 22);
          if ( (v21 & 2) != 0 && *((_DWORD *)v18 + 31) >= 0x168u )
            break;
          if ( (v21 & 4) != 0 && *((_DWORD *)v18 + 32) > 0xFDE8u
            || *((_DWORD *)v18 + 21)
            || *((_DWORD *)v18 + 28)
            || *((_DWORD *)v18 + 30)
            || *((_DWORD *)v18 + 27)
            || *((_DWORD *)v18 + 29)
            || *((_DWORD *)v18 - 1)
            || *(_QWORD *)(v18 + 4)
            || *(_QWORD *)(v18 + 12)
            || *((_DWORD *)v18 + 7)
            || *((_DWORD *)v18 + 8)
            || *((_DWORD *)v18 + 9)
            || *((_DWORD *)v18 + 10)
            || *((_DWORD *)v18 + 11)
            || *((_DWORD *)v18 + 12)
            || *((_DWORD *)v18 + 14)
            || *((_DWORD *)v18 + 15)
            || *((_DWORD *)v18 + 16)
            || *((_DWORD *)v18 + 19) )
          {
            break;
          }
          ++v17;
          v18 += 144;
          if ( v17 >= (unsigned int)v3 )
            goto LABEL_53;
        }
        goto LABEL_19;
      }
LABEL_53:
      v22 = *(_QWORD *)(v4 + 840);
      v23 = *(_QWORD *)(v22 + 8);
      v66 = v23;
      if ( !*(_DWORD *)(*(_QWORD *)(v23 + 472) + 1576LL) )
      {
        *(_DWORD *)(v22 + 24) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 840) + 28LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 840) + 32LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v4 + 840) + 40LL) = 0;
        *(_QWORD *)(*(_QWORD *)(v4 + 840) + 48LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)(v4 + 840) + 56LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v4 + 840) + 64LL) = 0;
      }
      v24 = *(_QWORD *)(v4 + 840);
      v25 = *(struct tagINJECTED_CONTACT **)(v24 + 72);
      if ( v68 && v14 )
        goto LABEL_61;
      if ( *(_DWORD *)(v24 + 24) && v14 )
        goto LABEL_61;
      v26 = *(_QWORD *)(v24 + 48);
      if ( v26 )
      {
        if ( v68 )
          goto LABEL_61;
      }
      if ( v14 || (v28 = 1, v26) )
        v28 = 0;
      v69 = v28;
      if ( !*(_DWORD *)(*(_QWORD *)(v23 + 472) + 1576LL) && (_DWORD)v13 )
      {
        v29 = (_DWORD *)((char *)v25 + 8);
        v30 = v13;
        do
        {
          if ( ((*v29 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            *v29 = 0x40000;
            LODWORD(v60) = 1;
          }
          v29 += 3;
          --v30;
        }
        while ( v30 );
      }
      v31 = *(_QWORD *)(v4 + 840);
      v32 = 0;
      if ( v28 )
      {
        v33 = *(_QWORD *)(v23 + 472);
        LOBYTE(v32) = *(_DWORD *)(v33 + 1576) == 0;
        LOBYTE(v34) = _ValidateInjectionTime(v68, v61, *(_DWORD *)(v33 + 856), v32, *(_DWORD *)(v31 + 40));
        if ( !v34 )
        {
          v24 = *(_QWORD *)(v4 + 840);
LABEL_61:
          LODWORD(v27) = *(_DWORD *)(v24 + 28);
LABEL_62:
          xxxSendLastFrameTouchUp(v25, (struct DEVICEINFO *)v23, v13, v27);
LABEL_19:
          v5 = 87LL;
          goto LABEL_3;
        }
      }
      else
      {
        v35 = *(_QWORD *)(v23 + 472);
        LOBYTE(v32) = *(_DWORD *)(v35 + 1576) == 0;
        if ( !(unsigned int)_ValidateInjectionQpcCount(v14, v63, *(_QWORD *)(v35 + 864), v32, *(_DWORD *)(v31 + 64)) )
        {
          v27 = (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v4 + 840) + 48LL)) / gliQpcFreq;
          goto LABEL_62;
        }
      }
      *(_QWORD *)&v64 = **(_QWORD **)(v4 + 840);
      if ( !(unsigned int)ValidateInjectedTouchFrame(v3, v2, v25, (struct tagMONITOR *)v64, v13) )
      {
        xxxSendLastFrameTouchUp(v25, (struct DEVICEINFO *)v23, v13, *(_DWORD *)(*(_QWORD *)(v4 + 840) + 28LL));
        v5 = 1460LL;
        if ( (_DWORD)v60 )
          goto LABEL_3;
        goto LABEL_19;
      }
      v36 = *(_QWORD *)(v4 + 840);
      v37 = v69;
      v65 = v36;
      if ( v69 )
      {
        v38 = 10 * (v68 - *(_DWORD *)(v36 + 24));
        QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
        if ( !*(_DWORD *)(*(_QWORD *)(v23 + 472) + 1576LL) )
        {
          *(_DWORD *)(v36 + 24) = v68;
          *(_DWORD *)(v36 + 28) = QpcBasedTouchStackTime;
LABEL_90:
          v38 = 0;
          goto LABEL_92;
        }
        if ( v38 )
          goto LABEL_92;
        v40 = *(_DWORD *)(v36 + 36);
        v38 = QpcBasedTouchStackTime - *(_DWORD *)(v36 + 28);
        if ( v38 > v40 )
          goto LABEL_92;
        if ( v40 - v38 < 5 )
        {
          v38 = v40 + 1;
LABEL_92:
          if ( (_DWORD)v13 )
          {
            v42 = 0LL;
            v43 = v13;
            do
            {
              v42 += 12LL;
              *(_DWORD *)(v42 + *(_QWORD *)(v36 + 72) - 4) = 0x40000;
              --v43;
            }
            while ( v43 );
          }
          if ( (_DWORD)v3 )
          {
            v44 = (unsigned int *)((char *)v2 + 4);
            v45 = v3;
            do
            {
              v46 = *v44;
              v47 = v44[2];
              v44 += 36;
              *(_DWORD *)(*(_QWORD *)(v36 + 72) + 12 * v46 + 8) = v47 & 0xFFFF7FFF;
              *(_QWORD *)(*(_QWORD *)(v36 + 72) + 12 * v46) = *(_QWORD *)(v44 - 29);
              --v45;
            }
            while ( v45 );
          }
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 && (_DWORD)v3 )
          {
            v48 = (INT *)((char *)v2 + 116);
            v49 = (char *)v2 + 32;
            v50 = v3;
            do
            {
              v60 = 0LL;
              LogicalToPhysicalDPIPoint(v49, v49, 0LL, &v60);
              DpiForSystem = GetDpiForSystem();
              v52 = *(unsigned __int16 *)(*(_QWORD *)(v60 + 40) + 128LL);
              v53 = EngMulDiv(*(v48 - 1) - *(v48 - 3), v52, DpiForSystem);
              v54 = *v48 - *(v48 - 2);
              *(v48 - 1) = v53;
              v49 += 144;
              *v48 = EngMulDiv(v54, v52, DpiForSystem);
              *(_QWORD *)(v48 - 3) = 0LL;
              v48 += 36;
              --v50;
            }
            while ( v50 );
            v36 = v65;
            v23 = v66;
            v2 = a2;
            v37 = v69;
          }
          v64 = *(_OWORD *)(*(_QWORD *)(v64 + 40) + 28LL);
          if ( (_DWORD)v3 )
          {
            v55 = DWORD1(v64);
            v56 = (_DWORD *)((char *)v2 + 36);
            v57 = v64;
            v58 = v3;
            do
            {
              *(v56 - 1) -= v57;
              *v56 -= v55;
              v56 += 36;
              --v58;
            }
            while ( v58 );
          }
          *(_DWORD *)(v36 + 36) = v38;
          if ( v37 )
          {
            *(_DWORD *)(v36 + 40) = v61 && !v68;
            *(_DWORD *)(v36 + 32) = v68;
          }
          else
          {
            v59 = v62;
            *(_DWORD *)(v36 + 64) = v63 && !v62;
            *(_QWORD *)(v36 + 56) = v59;
          }
          xxxSendToTouchStack((struct DEVICEINFO *)v23, v3, v2, v38);
          return 1LL;
        }
      }
      else
      {
        v41 = (unsigned __int64)(10000 * (v14 - *(_QWORD *)(v36 + 48))) / gliQpcFreq;
        v38 = v41;
        if ( !*(_DWORD *)(*(_QWORD *)(v23 + 472) + 1576LL) )
        {
          *(_QWORD *)(v36 + 48) = v62;
          goto LABEL_90;
        }
        if ( (_DWORD)v41 != *(_DWORD *)(v36 + 36) )
          goto LABEL_92;
      }
      v5 = 21LL;
      goto LABEL_3;
    }
LABEL_2:
    v5 = RtlNtStatusToDosError(-1073741790);
LABEL_3:
    UserSetLastError(v5);
    return 0LL;
  }
  EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
  return 1LL;
}
