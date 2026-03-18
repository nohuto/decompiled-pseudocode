/*
 * XREFs of xxxReceiveMessage @ 0x1C00A4670
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C010F654 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0115708 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01C69F4 (xxxUserYield.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C000CA90 (xxxPointerCallHook.c)
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     UnlinkSendListSms @ 0x1C00A17B0 (UnlinkSendListSms.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A9040 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C00AA690 (SfnDWORD.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // r13
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v18; // rcx
  int v19; // esi
  unsigned int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 *v24; // rax
  _DWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v29; // r14
  __int64 *v30; // rax
  __int64 v31; // r12
  __m128i *v32; // rbx
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __m128i *v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 *v54; // rax
  int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rbx
  ULONG_PTR v58; // r9
  unsigned __int64 v59; // r8
  char v60; // r12
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r9
  __int64 v64; // rcx
  void *v65; // rbx
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  struct _KTHREAD *v68; // r12
  __int64 v69; // r14
  __int64 *v70; // rax
  __int64 *v71; // rax
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  bool v79; // zf
  _DWORD *v80; // rax
  _DWORD *v81; // rax
  unsigned int v82; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-1E8h]
  __int64 v85; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned int v86; // [rsp+58h] [rbp-1B0h]
  __int64 v87; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v88; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v89; // [rsp+70h] [rbp-198h]
  __int64 v90; // [rsp+78h] [rbp-190h]
  int v91; // [rsp+80h] [rbp-188h]
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp-180h]
  _BYTE v93[4]; // [rsp+90h] [rbp-178h] BYREF
  int v94; // [rsp+94h] [rbp-174h]
  __int64 v95; // [rsp+98h] [rbp-170h]
  __int64 v96; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v97; // [rsp+A8h] [rbp-160h]
  __int64 v98; // [rsp+B8h] [rbp-150h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-148h]
  int v100; // [rsp+C8h] [rbp-140h]
  __int64 v101; // [rsp+D0h] [rbp-138h]
  __int64 v102; // [rsp+D8h] [rbp-130h]
  _QWORD v103[3]; // [rsp+E0h] [rbp-128h] BYREF
  int v104; // [rsp+F8h] [rbp-110h]
  __int64 v105; // [rsp+100h] [rbp-108h]
  __int64 v106; // [rsp+108h] [rbp-100h]
  _QWORD v107[3]; // [rsp+118h] [rbp-F0h] BYREF
  _QWORD v108[3]; // [rsp+130h] [rbp-D8h] BYREF
  _QWORD v109[3]; // [rsp+148h] [rbp-C0h] BYREF
  int v110; // [rsp+160h] [rbp-A8h] BYREF
  __int64 v111; // [rsp+168h] [rbp-A0h]
  __int64 v112; // [rsp+170h] [rbp-98h]
  __int64 v113; // [rsp+178h] [rbp-90h]
  _QWORD v114[3]; // [rsp+190h] [rbp-78h] BYREF
  __m128i v115; // [rsp+1A8h] [rbp-60h] BYREF
  __m128i v116; // [rsp+1B8h] [rbp-50h]
  __int64 v117; // [rsp+1C8h] [rbp-40h]

  v85 = a1;
  v2 = 0LL;
  v88 = 0LL;
  v3 = (_QWORD *)(a1 + 496);
  v4 = *(_QWORD *)(a1 + 496);
  if ( v4 == a1 + 496 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= ~0x40u;
    v5 = *(_QWORD *)(a1 + 424);
    *(_WORD *)(v5 + 4) &= ~0x40u;
    return v5;
  }
  v6 = v4 - 16;
  v89 = v6;
  v7 = (__int64 *)(v6 + 16);
  if ( *(_QWORD *)(v6 + 16) )
  {
    --*(_DWORD *)(a1 + 512);
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
    *(_WORD *)(*(_QWORD *)(a1 + 424) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(a1 + 424) + 4LL) &= ~0x40u;
  }
  v13 = *(_QWORD *)(v6 + 32);
  v90 = v13;
  if ( v13 )
  {
    v14 = *(_QWORD **)(a1 + 456);
    if ( (*(_DWORD *)(v13 + 464) & 0x100) != 0 )
      *v14 |= 0x1000uLL;
    else
      *v14 &= ~0x1000uLL;
  }
  v15 = *(_DWORD *)(v6 + 84);
  if ( (v15 & 0x200) != 0 )
  {
    if ( !v13 )
    {
      v16 = *(_QWORD *)(v6 + 112);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v96 = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = &v96;
      v97 = v16;
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    }
    if ( (*(_DWORD *)(v6 + 84) & 0x400) != 0 )
    {
      v18 = *(_DWORD **)(gptiCurrent + 424LL);
      v19 = *v18 & 8;
      *v18 |= 4u;
      **(_DWORD **)(gptiCurrent + 424LL) |= 8u;
      v20 = *(_DWORD *)(v6 + 104);
      if ( v20 == 576 || v20 == 281 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v20]])(
          *(_QWORD *)(v6 + 112),
          v20,
          *(_QWORD *)(v6 + 56),
          *(_QWORD *)(v6 + 72),
          *(_QWORD *)(v6 + 48),
          *(_QWORD *)(gpsi + 744LL),
          1,
          0LL);
      else
        SfnDWORD(
          *(_QWORD *)(v6 + 112),
          v20,
          *(_QWORD *)(v6 + 56),
          *(_QWORD *)(v6 + 72),
          *(_QWORD *)(v6 + 48),
          *(_QWORD *)(gpsi + 744LL));
      **(_DWORD **)(gptiCurrent + 424LL) &= ~4u;
      v23 = *(_DWORD **)(gptiCurrent + 424LL);
      if ( v19 )
        *v23 |= 8u;
      else
        *v23 &= ~8u;
    }
    else
    {
      v24 = *(__int64 **)(v6 + 112);
      if ( v24 )
        v2 = *v24;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v6 + 48))(
        v2,
        *(unsigned int *)(v6 + 104),
        *(_QWORD *)(v6 + 56),
        *(_QWORD *)(v6 + 72));
    }
    if ( !v13 )
      ThreadUnlock1(v22, v21);
    goto LABEL_148;
  }
  if ( (v15 & 7) == 0 )
  {
    v25 = *(_DWORD **)(a1 + 424);
    v91 = *v25 & 8;
    v26 = *(_QWORD *)(a1 + 488);
    v95 = v26;
    *(_QWORD *)(a1 + 488) = v6;
    *v25 |= 2u;
    **(_DWORD **)(a1 + 424) |= 8u;
    if ( !v13 )
    {
      v27 = *(_QWORD *)(v6 + 112);
      CurrentThread = KeGetCurrentThread();
      v29 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v10, v11, v12) )
      {
        v30 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v30 )
          v29 = *v30;
      }
      v96 = *(_QWORD *)(v29 + 392);
      *(_QWORD *)(v29 + 392) = &v96;
      v97 = v27;
      if ( v27 )
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
    }
    if ( *(_DWORD *)(v6 + 104) != 788 )
    {
      v86 = *(_DWORD *)(gptiCurrent + 1372LL);
      *(_DWORD *)(gptiCurrent + 1372LL) = *(_DWORD *)(v6 + 128);
      if ( ((*(_BYTE *)(a1 + 656) | *(_BYTE *)(**(_QWORD **)(a1 + 440) + 16LL)) & 0x20) != 0 )
      {
        v54 = *(__int64 **)(v6 + 112);
        if ( v54 )
          v101 = *v54;
        else
          v101 = 0LL;
        v55 = *(_DWORD *)(v6 + 104);
        v100 = v55;
        v99 = *(_QWORD *)(v6 + 88);
        v98 = *(_QWORD *)(v6 + 96);
        v102 = v6;
        if ( ((unsigned int)(v55 - 577) <= 3 || (unsigned int)(v55 - 581) <= 0x12 && v55 != 589) && v55 != 595
          || v55 == 528 && (_WORD)v99 == 582 )
        {
          xxxPointerCallHook(0, 1, (__int64)&v98, 4u, 0);
        }
        else
        {
          v56 = *(_QWORD *)(gptiCurrent + 920LL);
          if ( (v56 || (v56 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 72LL)) != 0)
            && (*(_DWORD *)(v56 + 64) & 0x80u) != 0 )
          {
            LODWORD(v56) = PhkNextValid(v56);
          }
          xxxCallHook2(v56, 0, 1, (unsigned int)&v98, 0LL);
        }
      }
      if ( (*(_DWORD *)(v6 + 84) & 7) == 0 )
      {
        v57 = *(_QWORD *)(v6 + 112);
        if ( v57 )
        {
          v58 = 0LL;
          BugCheckParameter3 = 0LL;
          v59 = (unsigned __int16)*(_QWORD *)v57;
          v94 = (unsigned __int16)*(_QWORD *)v57;
          if ( v59 >= *(_QWORD *)(gpsi + 8LL)
            || (v58 = gSharedInfo[1] + (unsigned int)(v59 * LODWORD(gSharedInfo[2])),
                *(_QWORD *)(gpKernelHandleTable + 24 * v59) != v57)
            || *(_BYTE *)(v58 + 24) != 1 )
          {
            KeBugCheckEx(0x197u, 1uLL, *(_QWORD *)(v6 + 112), v58, 1uLL);
          }
          if ( (*(_BYTE *)(v57 + 58) & 4) != 0 )
          {
            v60 = 0;
            v61 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v107[0] = *(_QWORD *)(v61 + 392);
            *(_QWORD *)(v61 + 392) = v107;
            v107[1] = v57;
            _InterlockedIncrement((volatile signed __int32 *)(v57 + 8));
            v64 = *(unsigned int *)(v6 + 104);
            if ( (unsigned int)v64 < 0x400 )
            {
              v62 = 512LL;
              if ( (MessageTable[v64] & 0x200) != 0 || (_DWORD)v64 == 537 && (*(_DWORD *)(v6 + 88) & 0x8000LL) != 0 )
              {
                *(_DWORD *)(v6 + 84) |= 0x20u;
                if ( v13 )
                {
                  v60 = 1;
                  v65 = *(void **)v13;
                  PushW32ThreadLock(*(_QWORD *)v13, v114, (__int64)DereferenceKernelStack, v63);
                  ObfReferenceObject(v65);
                  PsReferenceKernelStack(v65);
                }
              }
            }
            v66 = *(_QWORD *)(v6 + 112);
            v67 = *(_QWORD *)(v66 + 160);
            if ( v67 < 7 )
              v88 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v67))(
                      v66,
                      *(unsigned int *)(v6 + 104),
                      *(_QWORD *)(v6 + 88),
                      *(_QWORD *)(v6 + 96));
            else
              v88 = 0LL;
            if ( v60 )
              PopAndFreeW32ThreadLock(v114);
          }
          else
          {
            v68 = KeGetCurrentThread();
            v69 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(gpKernelHandleTable, 3 * v59, v59, v58) )
            {
              v70 = (__int64 *)PsGetThreadWin32Thread(v68);
              if ( v70 )
                v69 = *v70;
            }
            v108[0] = *(_QWORD *)(v69 + 392);
            *(_QWORD *)(v69 + 392) = v108;
            v108[1] = v57;
            _InterlockedIncrement((volatile signed __int32 *)(v57 + 8));
            xxxSendMessageToClient(
              *(struct tagWND **)(v6 + 112),
              *(_DWORD *)(v6 + 104),
              *(_QWORD *)(v6 + 88),
              *(_QWORD *)(v6 + 96),
              (struct tagSMS *)v6,
              1,
              &v88);
          }
          ThreadUnlock1(v66, v62);
          v10 = (unsigned int)(*(_DWORD *)(a1 + 656) | *(_DWORD *)(**(_QWORD **)(a1 + 440) + 16LL));
          if ( ((*(_WORD *)(a1 + 656) | *(_WORD *)(**(_QWORD **)(a1 + 440) + 16LL)) & 0x2000) != 0
            && (*(_DWORD *)(v6 + 84) & 4) == 0 )
          {
            v71 = *(__int64 **)(v6 + 112);
            if ( v71 )
              v105 = *v71;
            else
              v105 = 0LL;
            v104 = *(_DWORD *)(v6 + 104);
            v103[2] = *(_QWORD *)(v6 + 88);
            v103[1] = *(_QWORD *)(v6 + 96);
            v103[0] = v88;
            v106 = v6;
            xxxCallHook(0LL, 1LL, v103, 12LL);
          }
          *(_DWORD *)(gptiCurrent + 1372LL) = v86;
        }
      }
      goto LABEL_133;
    }
    v115 = 0uLL;
    v116 = 0uLL;
    v117 = 0LL;
    v31 = *(_QWORD *)(v6 + 96);
    v32 = *(__m128i **)(v31 + 16);
    v33 = *(int *)(*(_QWORD *)v31 + 48LL);
    v86 = v33;
    BugCheckParameter3 = *(_QWORD *)(a1 + 1336);
    if ( (_DWORD)v33 != 13 )
    {
      switch ( (int)v33 )
      {
        case 0:
        case 1:
          if ( v32 )
          {
            v115 = *v32;
            v116.m128i_i64[0] = v32[1].m128i_i64[0];
            if ( (unsigned int)(_mm_cvtsi128_si32(v115) - 512) <= 0xE )
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
              v35 = *(unsigned int *)(v6 + 132);
              if ( ((*(_DWORD *)(CurrentProcessWin32Process + 280) >> 8) & 0x1FF) != ((*(_DWORD *)(v6 + 132) >> 8) & 0x1FF) )
              {
                v87 = *(__int64 *)((char *)v115.m128i_i64 + 4);
                LogicalToPhysicalDPIPoint(&v87, &v87, v35, 0LL);
                v37 = PsGetCurrentProcessWin32Process(v36);
                PhysicalToLogicalDPIPoint(&v87, &v87, *(unsigned int *)(v37 + 280), 0LL);
                *(__int64 *)((char *)v115.m128i_i64 + 4) = v87;
              }
            }
          }
          goto LABEL_69;
        case 2:
        case 10:
          v32 = 0LL;
          goto LABEL_70;
        case 7:
          if ( v32 )
          {
            v115 = *v32;
            v116 = v32[1];
            v117 = v32[2].m128i_i64[0];
            if ( ((*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 280) >> 8) & 0x1FF) != ((*(_DWORD *)(v6 + 132) >> 8) & 0x1FF) )
            {
              LogicalToPhysicalDPIPoint(&v115, &v115, *(unsigned int *)(v6 + 132), 0LL);
              v39 = PsGetCurrentProcessWin32Process(v38);
              PhysicalToLogicalDPIPoint(&v115, &v115, *(unsigned int *)(v39 + 280), 0LL);
            }
          }
          goto LABEL_69;
        case 14:
          if ( v32 )
          {
            v115 = *v32;
            v116 = v32[1];
            if ( *(_DWORD *)(v31 + 24) != -1 )
            {
              v40 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 832LL);
              v41 = *(_QWORD *)(v31 + 24);
              if ( gbEnforceUIPI )
              {
                if ( (unsigned int)v41 <= (unsigned int)v40 )
                {
                  if ( (_DWORD)v41 != (_DWORD)v40
                    || (v42 = HIDWORD(v41), v43 = HIDWORD(v40), (_DWORD)v42 != (_DWORD)v43)
                    && (_DWORD)v42 != -1
                    && (_DWORD)v43 != -1 )
                  {
                    v115.m128i_i32[3] |= 2u;
                  }
                }
              }
            }
          }
          goto LABEL_68;
        default:
          UserSetLastError(87LL, v10);
          v32 = 0LL;
          goto LABEL_69;
      }
    }
    if ( v32 )
    {
      v115 = *v32;
      v116.m128i_i64[0] = v32[1].m128i_i64[0];
      if ( *(_DWORD *)(v31 + 24) != -1 )
      {
        v44 = *(_QWORD *)(*(_QWORD *)(a1 + 400) + 832LL);
        v45 = *(_QWORD *)(v31 + 24);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v45 <= (unsigned int)v44 )
          {
            if ( (_DWORD)v45 != (_DWORD)v44
              || (v46 = HIDWORD(v45), v47 = HIDWORD(v44), (_DWORD)v46 != (_DWORD)v47)
              && (_DWORD)v46 != -1
              && (_DWORD)v47 != -1 )
            {
              v115.m128i_i32[2] |= 2u;
            }
          }
        }
      }
    }
LABEL_68:
    v90 = *(_QWORD *)(a1 + 1320);
    v89 = *(_QWORD *)(a1 + 1328);
    *(_QWORD *)(a1 + 1320) = *(_QWORD *)(v31 + 24);
    *(_QWORD *)(a1 + 1328) = *(_QWORD *)(v31 + 32);
    *(_QWORD *)(a1 + 1336) = &v115;
LABEL_69:
    v48 = &v115;
    if ( !v32 )
LABEL_70:
      v48 = *(__m128i **)(v31 + 16);
    v88 = xxxCallHook2(*(_QWORD *)v31, *(_DWORD *)(v31 + 8), *(_QWORD *)(v6 + 88), (_DWORD)v48, (__int64)v93);
    v49 = v86;
    if ( v86 - 13 <= 1 )
    {
      *(_QWORD *)(a1 + 1320) = v90;
      *(_QWORD *)(a1 + 1328) = v89;
      *(_QWORD *)(a1 + 1336) = BugCheckParameter3;
    }
    if ( (*(_DWORD *)(v6 + 84) & 5) == 0 && v32 )
    {
      if ( (_DWORD)v49 != 13 )
      {
        if ( (int)v49 < 0 )
          goto LABEL_133;
        if ( (int)v49 > 1 )
        {
          if ( (_DWORD)v49 == 7 )
          {
            v50 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 280) >> 8;
            LOWORD(v50) = v50 & 0x1FF;
            if ( (_WORD)v50 != ((*(_DWORD *)(v6 + 132) >> 8) & 0x1FF) )
            {
              v51 = PsGetCurrentProcessWin32Process(v50);
              LogicalToPhysicalDPIPoint(&v115, &v115, *(unsigned int *)(v51 + 280), 0LL);
              PhysicalToLogicalDPIPoint(&v115, &v115, *(unsigned int *)(v6 + 132), 0LL);
            }
            *v32 = v115;
            v32[1] = v116;
            v32[2].m128i_i64[0] = v117;
          }
          else if ( (_DWORD)v49 == 14 )
          {
            *v32 = v115;
            v32[1] = v116;
          }
          goto LABEL_133;
        }
        if ( (unsigned int)(v115.m128i_i32[0] - 512) <= 0xE )
        {
          v52 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 280) >> 8;
          LOWORD(v52) = v52 & 0x1FF;
          if ( (_WORD)v52 != ((*(_DWORD *)(v6 + 132) >> 8) & 0x1FF) )
          {
            v85 = *(__int64 *)((char *)v115.m128i_i64 + 4);
            v53 = PsGetCurrentProcessWin32Process(v52);
            LogicalToPhysicalDPIPoint(&v85, &v85, *(unsigned int *)(v53 + 280), 0LL);
            PhysicalToLogicalDPIPoint(&v85, &v85, *(unsigned int *)(v6 + 132), 0LL);
            *(__int64 *)((char *)v115.m128i_i64 + 4) = v85;
          }
        }
      }
      *v32 = v115;
      v32[1].m128i_i64[0] = v116.m128i_i64[0];
    }
LABEL_133:
    v72 = *(unsigned int *)(v6 + 84);
    if ( (*(_DWORD *)(v6 + 84) & 0x101) == 0x100 )
    {
      v72 = (unsigned int)v72 | 1;
      *(_DWORD *)(v6 + 84) = v72;
      if ( (v72 & 4) == 0 )
      {
        v73 = 33;
        if ( (v72 & 0x400) != 0 )
          v73 = 289;
        v110 = v73;
        v111 = *(_QWORD *)(v6 + 48);
        v112 = *(_QWORD *)(v6 + 56);
        v113 = v88;
        v74 = *(_QWORD *)(v6 + 112);
        v75 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v109[0] = *(_QWORD *)(v75 + 392);
        *(_QWORD *)(v75 + 392) = v109;
        v109[1] = v74;
        if ( v74 )
          _InterlockedIncrement((volatile signed __int32 *)(v74 + 8));
        LODWORD(BugCheckParameter4) = 0;
        xxxInterSendMsgEx(
          *(_QWORD *)(v6 + 112),
          *(_DWORD *)(v6 + 104),
          0LL,
          0LL,
          BugCheckParameter4,
          *(_QWORD *)(v6 + 64),
          &v110,
          1,
          *(_DWORD *)(v6 + 84) & 0x10000);
        ThreadUnlock1(v77, v76);
      }
    }
    if ( !v13 )
      ThreadUnlock1(v72, v10);
    v78 = v95;
    *(_QWORD *)(a1 + 488) = v95;
    v79 = v78 == 0;
    v80 = *(_DWORD **)(a1 + 424);
    if ( v79 )
      *v80 &= ~2u;
    else
      *v80 |= 2u;
    v81 = *(_DWORD **)(a1 + 424);
    if ( v91 )
      *v81 |= 8u;
    else
      *v81 &= ~8u;
  }
LABEL_148:
  LODWORD(v5) = EtwTraceEndRetrieveSendMessage(v6);
  v82 = *(_DWORD *)(v6 + 84) & 0xFFFFBFFF;
  *(_DWORD *)(v6 + 84) = v82;
  if ( (v82 & 8) != 0 )
  {
    LODWORD(v5) = UnlinkSendListSms((__int64 *)v6);
  }
  else if ( (v82 & 1) == 0 )
  {
    LODWORD(v5) = v88;
    *(_QWORD *)(v6 + 72) = v88;
    *(_DWORD *)(v6 + 84) = v82 | 1;
    if ( v13 )
    {
      LODWORD(v5) = *(_DWORD *)(v13 + 464);
      if ( (v5 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v13 + 424) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v13 + 424) + 4LL) |= 0x200u;
        v5 = *(_QWORD *)(v13 + 424);
        if ( (*(_WORD *)(v5 + 10) & 0x200) != 0 )
          LODWORD(v5) = KeSetEvent(*(PRKEVENT *)(v13 + 704), 2, 0);
      }
    }
  }
  return v5;
}
