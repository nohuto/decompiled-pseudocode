/*
 * XREFs of xxxReceiveMessage @ 0x1C004F020
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005AF70 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C01033A4 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010C51C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01C4884 (xxxUserYield.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     UnlinkSendListSms @ 0x1C0049380 (UnlinkSendListSms.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00535C0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     SfnDWORD @ 0x1C0054BC0 (SfnDWORD.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // r12
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  _QWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  int v17; // esi
  unsigned int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 *v22; // rax
  _DWORD *v23; // rax
  __int64 v24; // r15
  __m128i *v25; // rbx
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // eax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __m128i *v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // ebx
  __int64 *v58; // rax
  int v59; // ecx
  __int64 v60; // rcx
  ULONG_PTR v61; // r9
  unsigned __int64 v62; // r10
  bool v63; // zf
  char v64; // r15
  __int64 v65; // rcx
  void *v66; // rbx
  __int64 v67; // rcx
  unsigned __int64 v68; // rax
  __int64 *v69; // rax
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rdx
  int v73; // ebx
  int CurrentThreadDpiAwarenessContext; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  _DWORD *v78; // rax
  _DWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  unsigned int v82; // ecx
  __int64 v84; // [rsp+50h] [rbp-168h] BYREF
  unsigned int v85; // [rsp+58h] [rbp-160h]
  __int64 v86; // [rsp+60h] [rbp-158h] BYREF
  __int64 v87; // [rsp+68h] [rbp-150h]
  int v88; // [rsp+70h] [rbp-148h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-140h]
  __int64 v90; // [rsp+80h] [rbp-138h] BYREF
  __int64 v91; // [rsp+88h] [rbp-130h] BYREF
  __int64 v92; // [rsp+90h] [rbp-128h]
  int v93; // [rsp+A0h] [rbp-118h]
  __int64 v94; // [rsp+A8h] [rbp-110h]
  __int64 v95; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v96; // [rsp+B8h] [rbp-100h]
  __int64 v97; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v98; // [rsp+D0h] [rbp-E8h]
  int v99; // [rsp+D8h] [rbp-E0h]
  __int64 v100; // [rsp+E0h] [rbp-D8h]
  __int64 v101; // [rsp+E8h] [rbp-D0h]
  _QWORD v102[3]; // [rsp+F0h] [rbp-C8h] BYREF
  int v103; // [rsp+108h] [rbp-B0h]
  __int64 v104; // [rsp+110h] [rbp-A8h]
  __int64 v105; // [rsp+118h] [rbp-A0h]
  int v106; // [rsp+128h] [rbp-90h] BYREF
  __int64 v107; // [rsp+130h] [rbp-88h]
  __int64 v108; // [rsp+138h] [rbp-80h]
  __int64 v109; // [rsp+140h] [rbp-78h]
  __m128i v110; // [rsp+158h] [rbp-60h] BYREF
  __m128i v111; // [rsp+168h] [rbp-50h]
  __int64 v112; // [rsp+178h] [rbp-40h]

  v90 = a1;
  v2 = 0LL;
  v86 = 0LL;
  v3 = (_QWORD *)(a1 + 472);
  v4 = *(_QWORD *)(a1 + 472);
  if ( v4 == a1 + 472 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) &= ~0x40u;
    v5 = *(_QWORD *)(a1 + 400);
    *(_WORD *)(v5 + 4) &= ~0x40u;
    return v5;
  }
  v6 = v4 - 16;
  v87 = v6;
  v7 = (__int64 *)(v6 + 16);
  if ( *(_QWORD *)(v6 + 16) )
  {
    --*(_DWORD *)(a1 + 488);
    v8 = (__int64 *)*v7;
    v9 = *(__int64 ***)(v6 + 24);
    if ( *(__int64 **)(*v7 + 8) != v7 || *v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = (__int64)v9;
    *v7 = 0LL;
  }
  EtwTraceBeginRetrieveSendMessage(v6);
  *(_DWORD *)(v6 + 84) |= 0x4010u;
  if ( (_QWORD *)*v3 == v3 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 4LL) &= ~0x40u;
  }
  v12 = *(_QWORD *)(v6 + 32);
  v84 = v12;
  if ( v12 )
  {
    v13 = *(_QWORD **)(a1 + 432);
    if ( (*(_DWORD *)(v12 + 440) & 0x100) != 0 )
      *v13 |= 0x1000uLL;
    else
      *v13 &= ~0x1000uLL;
  }
  v14 = *(_DWORD *)(v6 + 84);
  if ( (v14 & 0x200) != 0 )
  {
    if ( !v12 )
    {
      v15 = *(_QWORD *)(v6 + 112);
      v95 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v95;
      v96 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
    }
    if ( (*(_DWORD *)(v6 + 84) & 0x400) != 0 )
    {
      v16 = *(_DWORD **)(gptiCurrent + 400LL);
      v17 = *v16 & 8;
      *v16 |= 4u;
      **(_DWORD **)(gptiCurrent + 400LL) |= 8u;
      v18 = *(_DWORD *)(v6 + 104);
      if ( v18 == 576 || v18 == 281 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v18]])(
          *(_QWORD *)(v6 + 112),
          v18,
          *(_QWORD *)(v6 + 56),
          *(_QWORD *)(v6 + 72),
          *(_QWORD *)(v6 + 48),
          *(_QWORD *)(gpsi + 744LL),
          1,
          0LL);
      else
        SfnDWORD(
          *(_QWORD *)(v6 + 112),
          v18,
          *(_QWORD *)(v6 + 56),
          *(_QWORD *)(v6 + 72),
          *(_QWORD *)(v6 + 48),
          *(_QWORD *)(gpsi + 744LL));
      **(_DWORD **)(gptiCurrent + 400LL) &= ~4u;
      v21 = *(_DWORD **)(gptiCurrent + 400LL);
      if ( v17 )
        *v21 |= 8u;
      else
        *v21 &= ~8u;
    }
    else
    {
      v22 = *(__int64 **)(v6 + 112);
      if ( v22 )
        v2 = *v22;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v6 + 48))(
        v2,
        *(unsigned int *)(v6 + 104),
        *(_QWORD *)(v6 + 56),
        *(_QWORD *)(v6 + 72));
    }
    if ( !v12 )
      ThreadUnlock1(v20, v19);
    goto LABEL_140;
  }
  if ( (v14 & 7) == 0 )
  {
    v23 = *(_DWORD **)(a1 + 400);
    v88 = *v23 & 8;
    v94 = *(_QWORD *)(a1 + 464);
    *(_QWORD *)(a1 + 464) = v6;
    *v23 |= 2u;
    **(_DWORD **)(a1 + 400) |= 8u;
    if ( !v12 )
    {
      v10 = *(_QWORD *)(v6 + 112);
      v95 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v95;
      v96 = v10;
      if ( v10 )
        ++*(_DWORD *)(v10 + 8);
    }
    if ( *(_DWORD *)(v6 + 104) != 788 )
    {
      v57 = *(_DWORD *)(gptiCurrent + 1284LL);
      v85 = v57;
      *(_DWORD *)(gptiCurrent + 1284LL) = *(_DWORD *)(v6 + 128);
      if ( ((*(_BYTE *)(a1 + 600) | *(_BYTE *)(**(_QWORD **)(a1 + 416) + 16LL)) & 0x20) != 0 )
      {
        v58 = *(__int64 **)(v6 + 112);
        if ( v58 )
          v100 = *v58;
        else
          v100 = 0LL;
        v59 = *(_DWORD *)(v6 + 104);
        v99 = v59;
        v98 = *(_QWORD *)(v6 + 88);
        v97 = *(_QWORD *)(v6 + 96);
        v101 = v6;
        if ( (unsigned int)(v59 - 577) <= 0x16 && (v10 = 8122367LL, _bittest((const int *)&v10, v59 - 577))
          || v59 == 528 && (_WORD)v98 == 582 )
        {
          xxxPointerCallHook(0, 1, (__int64)&v97, 4u, 0);
        }
        else
        {
          v60 = *(_QWORD *)(gptiCurrent + 832LL);
          if ( (v60 || (v60 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 72LL)) != 0)
            && (*(_DWORD *)(v60 + 64) & 0x80u) != 0 )
          {
            LODWORD(v60) = PhkNextValid(v60, v10, v11);
          }
          xxxCallHook2(v60, 0, 1, (unsigned int)&v97, 0LL);
        }
      }
      if ( (*(_DWORD *)(v6 + 84) & 7) == 0 )
      {
        v10 = *(_QWORD *)(v6 + 112);
        if ( v10 )
        {
          v61 = 0LL;
          BugCheckParameter3 = 0LL;
          v62 = (unsigned __int16)*(_QWORD *)v10;
          v93 = (unsigned __int16)*(_QWORD *)v10;
          if ( v62 >= *(_QWORD *)(gpsi + 8LL)
            || (v61 = gSharedInfo[1] + (unsigned int)(v62 * LODWORD(gSharedInfo[2])),
                *(_QWORD *)(gpKernelHandleTable + 16 * v62) != v10)
            || *(_BYTE *)(v61 + 24) != 1 )
          {
            KeBugCheckEx(0x197u, 1uLL, *(_QWORD *)(v6 + 112), v61, 1uLL);
          }
          v91 = *(_QWORD *)(gptiCurrent + 368LL);
          v63 = (*(_BYTE *)(v10 + 58) & 4) == 0;
          *(_QWORD *)(gptiCurrent + 368LL) = &v91;
          v92 = v10;
          if ( v63 )
          {
            ++*(_DWORD *)(v10 + 8);
            xxxSendMessageToClient(
              *(struct tagWND **)(v6 + 112),
              *(_DWORD *)(v6 + 104),
              *(_QWORD *)(v6 + 88),
              *(_QWORD *)(v6 + 96),
              (struct tagSMS *)v6,
              1,
              &v86);
          }
          else
          {
            v64 = 0;
            ++*(_DWORD *)(v10 + 8);
            v65 = *(unsigned int *)(v6 + 104);
            if ( (unsigned int)v65 < 0x400 )
            {
              v10 = 512LL;
              if ( (MessageTable[v65] & 0x200) != 0 || (_DWORD)v65 == 537 && (*(_DWORD *)(v6 + 88) & 0x8000LL) != 0 )
              {
                *(_DWORD *)(v6 + 84) |= 0x20u;
                if ( v12 )
                {
                  v64 = 1;
                  v66 = *(void **)v12;
                  PushW32ThreadLock(*(_QWORD *)v12, &v110, (__int64)DereferenceKernelStack);
                  ObfReferenceObject(v66);
                  PsReferenceKernelStack(v66);
                  v57 = v85;
                }
              }
            }
            v67 = *(_QWORD *)(v6 + 112);
            v68 = *(_QWORD *)(v67 + 160);
            if ( v68 < 7 )
              v86 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v68))(
                      v67,
                      *(unsigned int *)(v6 + 104),
                      *(_QWORD *)(v6 + 88),
                      *(_QWORD *)(v6 + 96));
            else
              v86 = 0LL;
            if ( v64 )
              PopAndFreeW32ThreadLock(&v110);
          }
          ThreadUnlock1(v67, v10);
          v10 = (unsigned int)(*(_DWORD *)(a1 + 600) | *(_DWORD *)(**(_QWORD **)(a1 + 416) + 16LL));
          if ( ((*(_WORD *)(a1 + 600) | *(_WORD *)(**(_QWORD **)(a1 + 416) + 16LL)) & 0x2000) != 0
            && (*(_DWORD *)(v6 + 84) & 4) == 0 )
          {
            v69 = *(__int64 **)(v6 + 112);
            if ( v69 )
              v104 = *v69;
            else
              v104 = 0LL;
            v103 = *(_DWORD *)(v6 + 104);
            v102[2] = *(_QWORD *)(v6 + 88);
            v102[1] = *(_QWORD *)(v6 + 96);
            v102[0] = v86;
            v105 = v6;
            xxxCallHook(0, 1, (__int64)v102, 0xCu);
          }
          *(_DWORD *)(gptiCurrent + 1284LL) = v57;
        }
      }
      goto LABEL_125;
    }
    v110 = 0uLL;
    v111 = 0uLL;
    v112 = 0LL;
    v24 = *(_QWORD *)(v6 + 96);
    v25 = *(__m128i **)(v24 + 16);
    v26 = *(int *)(*(_QWORD *)v24 + 48LL);
    v85 = v26;
    BugCheckParameter3 = *(_QWORD *)(a1 + 1248);
    if ( (_DWORD)v26 == 13 )
    {
      if ( v25 )
      {
        v110 = *v25;
        v111.m128i_i64[0] = v25[1].m128i_i64[0];
        if ( *(_DWORD *)(v24 + 24) != -1 )
        {
          v43 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 824LL);
          v44 = *(_QWORD *)(v24 + 24);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v44 <= (unsigned int)v43 )
            {
              if ( (_DWORD)v44 != (_DWORD)v43
                || (v45 = HIDWORD(v44), v46 = HIDWORD(v43), (_DWORD)v45 != (_DWORD)v46)
                && (_DWORD)v45 != -1
                && (_DWORD)v46 != -1 )
              {
                v110.m128i_i32[2] |= 2u;
              }
            }
          }
        }
      }
LABEL_65:
      v84 = *(_QWORD *)(a1 + 1232);
      v87 = *(_QWORD *)(a1 + 1240);
      *(_QWORD *)(a1 + 1232) = *(_QWORD *)(v24 + 24);
      *(_QWORD *)(a1 + 1240) = *(_QWORD *)(v24 + 32);
      *(_QWORD *)(a1 + 1248) = &v110;
    }
    else
    {
      switch ( (int)v26 )
      {
        case 0:
        case 1:
          if ( !v25 )
            goto LABEL_67;
          v110 = *v25;
          v111.m128i_i64[0] = v25[1].m128i_i64[0];
          if ( (unsigned int)(_mm_cvtsi128_si32(v110) - 512) <= 0xE )
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26, v10);
            v28 = *(unsigned int *)(v6 + 132);
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 280) & 0xF) != (*(_DWORD *)(v6 + 132) & 0xF) )
            {
              v84 = *(__int64 *)((char *)v110.m128i_i64 + 4);
              v29 = MonitorFlagsFromDpiAwarenessContext(v28);
              LogicalToPhysicalDPIPoint(&v84, &v84, v29, 0LL);
              v32 = PsGetCurrentProcessWin32Process(v31, v30);
              v33 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v32 + 280));
              PhysicalToLogicalDPIPoint(&v84, &v84, v33, 0LL);
              *(__int64 *)((char *)v110.m128i_i64 + 4) = v84;
            }
          }
          break;
        case 2:
        case 10:
          v25 = 0LL;
          goto LABEL_67;
        case 7:
          if ( !v25 )
            goto LABEL_67;
          v110 = *v25;
          v111 = v25[1];
          v112 = v25[2].m128i_i64[0];
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26, v10) + 280) & 0xF) != (*(_DWORD *)(v6 + 132) & 0xF) )
          {
            v34 = ((__int64 (*)(void))MonitorFlagsFromDpiAwarenessContext)();
            LogicalToPhysicalDPIPoint(&v110, &v110, v34, 0LL);
            v37 = PsGetCurrentProcessWin32Process(v36, v35);
            v38 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v37 + 280));
            PhysicalToLogicalDPIPoint(&v110, &v110, v38, 0LL);
          }
          break;
        case 14:
          if ( v25 )
          {
            v110 = *v25;
            v111 = v25[1];
            if ( *(_DWORD *)(v24 + 24) != -1 )
            {
              v39 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 824LL);
              v40 = *(_QWORD *)(v24 + 24);
              if ( gbEnforceUIPI )
              {
                if ( (unsigned int)v40 <= (unsigned int)v39 )
                {
                  if ( (_DWORD)v40 != (_DWORD)v39
                    || (v41 = HIDWORD(v40), v42 = HIDWORD(v39), (_DWORD)v41 != (_DWORD)v42)
                    && (_DWORD)v41 != -1
                    && (_DWORD)v42 != -1 )
                  {
                    v110.m128i_i32[3] |= 2u;
                  }
                }
              }
            }
          }
          goto LABEL_65;
        default:
          UserSetLastError(87LL);
          v25 = 0LL;
          break;
      }
    }
    v47 = &v110;
    if ( !v25 )
LABEL_67:
      v47 = *(__m128i **)(v24 + 16);
    v86 = xxxCallHook2(*(_QWORD *)v24, *(_DWORD *)(v24 + 8), *(_QWORD *)(v6 + 88), (_DWORD)v47, (__int64)&v90);
    v48 = v85;
    if ( v85 - 13 <= 1 )
    {
      *(_QWORD *)(a1 + 1232) = v84;
      *(_QWORD *)(a1 + 1240) = v87;
      *(_QWORD *)(a1 + 1248) = BugCheckParameter3;
    }
    if ( (*(_DWORD *)(v6 + 84) & 5) == 0 && v25 )
    {
      if ( (_DWORD)v48 != 13 )
      {
        if ( (int)v48 < 0 )
          goto LABEL_125;
        if ( (int)v48 > 1 )
        {
          if ( (_DWORD)v48 == 7 )
          {
            v49 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v48, v10) + 280) & 0xF;
            if ( (_DWORD)v49 != (*(_DWORD *)(v6 + 132) & 0xF) )
            {
              v50 = PsGetCurrentProcessWin32Process(v49, v10);
              v51 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v50 + 280));
              LogicalToPhysicalDPIPoint(&v110, &v110, v51, 0LL);
              v52 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v6 + 132));
              PhysicalToLogicalDPIPoint(&v110, &v110, v52, 0LL);
            }
            *v25 = v110;
            v25[1] = v111;
            v25[2].m128i_i64[0] = v112;
          }
          else if ( (_DWORD)v48 == 14 )
          {
            *v25 = v110;
            v25[1] = v111;
          }
          goto LABEL_125;
        }
        if ( (unsigned int)(v110.m128i_i32[0] - 512) <= 0xE )
        {
          v53 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v48, v10) + 280) & 0xF;
          if ( (_DWORD)v53 != (*(_DWORD *)(v6 + 132) & 0xF) )
          {
            v84 = *(__int64 *)((char *)v110.m128i_i64 + 4);
            v54 = PsGetCurrentProcessWin32Process(v53, v10);
            v55 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v54 + 280));
            LogicalToPhysicalDPIPoint(&v84, &v84, v55, 0LL);
            v56 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v6 + 132));
            PhysicalToLogicalDPIPoint(&v84, &v84, v56, 0LL);
            *(__int64 *)((char *)v110.m128i_i64 + 4) = v84;
          }
        }
      }
      *v25 = v110;
      v25[1].m128i_i64[0] = v111.m128i_i64[0];
    }
LABEL_125:
    v70 = *(unsigned int *)(v6 + 84);
    if ( (*(_DWORD *)(v6 + 84) & 0x101) == 0x100 )
    {
      v70 = (unsigned int)v70 | 1;
      *(_DWORD *)(v6 + 84) = v70;
      if ( (v70 & 4) == 0 )
      {
        v71 = 33;
        if ( (v70 & 0x400) != 0 )
          v71 = 289;
        v106 = v71;
        v107 = *(_QWORD *)(v6 + 48);
        v108 = *(_QWORD *)(v6 + 56);
        v109 = v86;
        v72 = *(_QWORD *)(v6 + 112);
        v91 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v91;
        v92 = v72;
        if ( v72 )
          ++*(_DWORD *)(v72 + 8);
        v73 = *(_DWORD *)(v6 + 84) & 0x10000;
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(gptiCurrent);
        xxxInterSendMsgEx(
          *(_QWORD *)(v6 + 112),
          *(_DWORD *)(v6 + 104),
          0,
          0,
          0LL,
          CurrentThreadDpiAwarenessContext,
          *(_QWORD *)(v6 + 64),
          (__int64)&v106,
          1,
          v73);
        ThreadUnlock1(v76, v75);
      }
    }
    if ( !v12 )
      ThreadUnlock1(v70, v10);
    v77 = v94;
    *(_QWORD *)(a1 + 464) = v94;
    v63 = v77 == 0;
    v78 = *(_DWORD **)(a1 + 400);
    if ( v63 )
      *v78 &= ~2u;
    else
      *v78 |= 2u;
    v79 = *(_DWORD **)(a1 + 400);
    if ( v88 )
      *v79 |= 8u;
    else
      *v79 &= ~8u;
  }
LABEL_140:
  LODWORD(v5) = EtwTraceEndRetrieveSendMessage(v6);
  v82 = *(_DWORD *)(v6 + 84) & 0xFFFFBFFF;
  *(_DWORD *)(v6 + 84) = v82;
  if ( (v82 & 8) != 0 )
  {
    LODWORD(v5) = UnlinkSendListSms((__int64 *)v6, v80, v81);
  }
  else if ( (v82 & 1) == 0 )
  {
    LODWORD(v5) = v86;
    *(_QWORD *)(v6 + 72) = v86;
    *(_DWORD *)(v6 + 84) = v82 | 1;
    if ( v12 )
    {
      LODWORD(v5) = *(_DWORD *)(v12 + 440);
      if ( (v5 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v12 + 400) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v12 + 400) + 4LL) |= 0x200u;
        v5 = *(_QWORD *)(v12 + 400);
        if ( (*(_WORD *)(v5 + 10) & 0x200) != 0 )
          LODWORD(v5) = KeSetEvent(*(PRKEVENT *)(v12 + 648), 2, 0);
      }
    }
  }
  return v5;
}
