/*
 * XREFs of UsbhDmTimerDpc @ 0x1C0022AF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhDmTimerDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // r12
  __int64 v6; // r15
  __int64 **v7; // rbx
  KIRQL v8; // r10
  __int64 v9; // r11
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG TimeIncrement; // eax
  __int64 *v24; // rax
  __int64 *v25; // r9
  __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 ***v34; // r9
  __int64 ***v35; // rax
  __int64 *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  ULONG v40; // eax
  __int64 v41; // r8
  __int64 v42; // rdx
  KIRQL v43; // r14
  __int64 v44; // rsi
  _QWORD *v45; // rbx
  _QWORD *v46; // rcx
  _QWORD *v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rdx
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  int v55; // eax
  int v56; // ecx
  __int64 v57; // r8
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  KIRQL v61; // al
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r9
  int v67; // eax
  __int64 v68; // [rsp+50h] [rbp-61h]
  KIRQL v69; // [rsp+6Ch] [rbp-45h]
  __int64 *v70; // [rsp+88h] [rbp-29h] BYREF
  __int64 ***v71; // [rsp+90h] [rbp-21h]
  _DWORD v72[4]; // [rsp+98h] [rbp-19h] BYREF
  int v73; // [rsp+A8h] [rbp-9h] BYREF
  __int16 v74; // [rsp+ACh] [rbp-5h]
  __int16 v75; // [rsp+AEh] [rbp-3h]
  __int16 v76; // [rsp+B0h] [rbp-1h]
  __int16 v77; // [rsp+B2h] [rbp+1h]
  _WORD v78[2]; // [rsp+B8h] [rbp+7h] BYREF
  int v79; // [rsp+BCh] [rbp+Bh]
  int v80; // [rsp+C0h] [rbp+Fh]
  int v86; // [rsp+D8h] [rbp+27h]

  v5 = 1;
  if ( !DeferredContext )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = DeferredContext[8];
  if ( !v6 )
    UsbhTrapFatal_Dbg(DeferredContext, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8]);
  v7 = (__int64 **)(v6 + 3744);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
  v69 = v8;
  v71 = (__int64 ***)&v70;
  v70 = (__int64 *)&v70;
LABEL_5:
  v9 = 0LL;
  while ( *v7 != (__int64 *)v7 )
  {
    v10 = *v7;
    v11 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v7 = (__int64 *)v11;
    v12 = v10 - 7;
    *(_QWORD *)(v11 + 8) = v7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v13 = DeferredContext[8];
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 827616612;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v10;
      }
    }
    v15 = *((_DWORD *)v12 + 1) == 1;
    *v10 = 0LL;
    v12[8] = 0LL;
    if ( v15 )
    {
      v16 = *((int *)v12 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v17 = DeferredContext[8];
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 826633572;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = v12;
          *(_QWORD *)(v18 + 24) = v16;
        }
      }
      *((_DWORD *)v12 + 1) = 2;
      v19 = (__int64 **)v71;
      if ( *v71 != &v70 )
        __fastfail(3u);
      v12[8] = (__int64)v71;
      *v10 = (__int64)&v70;
      *v19 = v10;
      v71 = (__int64 ***)v10;
      if ( *((int *)v12 + 3) > 0 )
      {
        v20 = *((int *)v12 + 3);
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v21 = DeferredContext[8];
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
            *(_DWORD *)v22 = 843410788;
            *(_QWORD *)(v22 + 8) = 0LL;
            *(_QWORD *)(v22 + 16) = v12;
            *(_QWORD *)(v22 + 24) = v20;
          }
        }
        TimeIncrement = KeQueryTimeIncrement();
        v8 = v69;
        *((_DWORD *)v12 + 3) += -15 - (TimeIncrement - 1) / 0x2710;
        *((_DWORD *)v12 + 5) = 1;
        goto LABEL_5;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v52 = DeferredContext[8];
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
          *(_DWORD *)v53 = 860188004;
          *(_QWORD *)(v53 + 8) = 0LL;
          *(_QWORD *)(v53 + 16) = v12;
          *(_QWORD *)(v53 + 24) = 0LL;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v8);
      v72[0] = *((_DWORD *)v12 + 6);
      if ( dword_1C0069650 )
      {
        v54 = DeferredContext[8];
        if ( !v54 )
          UsbhTrapFatal_Dbg(DeferredContext, 0LL);
        if ( *(_DWORD *)v54 != 541218120 )
          UsbhTrapFatal_Dbg(DeferredContext, v54);
        v73 = *(_DWORD *)(v54 + 5192);
        v74 = *(_WORD *)(v54 + 5196);
        v55 = *(_DWORD *)(v54 + 5200);
        v75 = v55;
        v72[2] = v55;
        v76 = *(_WORD *)(v54 + 5228);
        v77 = *(_WORD *)(v54 + 5230);
        v78[0] = *(_WORD *)(v54 + 2548);
        v78[1] = *(_WORD *)(v54 + 2550);
        v79 = 0;
        v80 = *(unsigned __int16 *)(v54 + 5208);
        v56 = *(_WORD *)(v54 + 5208) != 0;
        v79 = v56;
        if ( *(unsigned __int16 *)(v54 + 5210) )
          v79 = ++v56;
        if ( *(unsigned __int16 *)(v54 + 5212) )
          v79 = ++v56;
        if ( *(unsigned __int16 *)(v54 + 5214) )
          v79 = ++v56;
        if ( *(unsigned __int16 *)(v54 + 5216) )
          v79 = ++v56;
        if ( *(unsigned __int16 *)(v54 + 5218) )
          v79 = v56 + 1;
        LODWORD(v68) = 4;
        v86 = *(_DWORD *)(v54 + 2536);
        UsbhEtwWrite(
          &USBHUB_ETW_EVENT_HUB_TIMER_CALLBACK,
          0LL,
          (unsigned __int64)&v73,
          12LL,
          v78,
          36LL,
          v72,
          4LL,
          v12 + 9,
          v68,
          0LL);
      }
      v57 = ((unsigned int (__fastcall *)(__int64 *, _QWORD *, _QWORD, __int64, _DWORD, _DWORD))v12[6])(
              v12,
              DeferredContext,
              *((unsigned int *)v12 + 6),
              v12[5],
              *((_DWORD *)v12 + 7),
              *((_DWORD *)v12 + 8));
      v58 = *((_DWORD *)v12 + 4);
      *((_DWORD *)v12 + 5) = v57;
      *((_DWORD *)v12 + 3) = v58;
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v59 = DeferredContext[8];
        if ( v59 )
        {
          v60 = *(_QWORD *)(v59 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v59 + 880)) & *(_DWORD *)(v59 + 884));
          *(_DWORD *)v60 = 1381133668;
          *(_QWORD *)(v60 + 8) = 0LL;
          *(_QWORD *)(v60 + 16) = v12;
          *(_QWORD *)(v60 + 24) = v57;
        }
      }
      v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
      v9 = 0LL;
      v8 = v61;
      v69 = v61;
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v62 = DeferredContext[8];
        if ( v62 )
        {
          v63 = *(_QWORD *)(v62 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v62 + 880)) & *(_DWORD *)(v62 + 884));
          *(_DWORD *)v63 = 876965220;
          *(_QWORD *)(v63 + 8) = 0LL;
          *(_QWORD *)(v63 + 16) = v12;
          *(_QWORD *)(v63 + 24) = 0LL;
        }
      }
    }
  }
  while ( 1 )
  {
    v36 = v70;
    if ( v70 == (__int64 *)&v70 )
      break;
    v24 = (__int64 *)*v70;
    if ( (__int64 **)v70[1] != &v70 || (__int64 *)v24[1] != v70 )
      __fastfail(3u);
    v70 = (__int64 *)*v70;
    v24[1] = (__int64)&v70;
    v25 = v36 - 7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v26 = DeferredContext[8];
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
        *(_DWORD *)v27 = 827485540;
        *(_QWORD *)(v27 + 8) = v9;
        *(_QWORD *)(v27 + 16) = v25;
        *(_QWORD *)(v27 + 24) = v36;
      }
    }
    v28 = *((_DWORD *)v25 + 1);
    if ( v28 == 2 )
    {
      v29 = *((int *)v25 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v30 = DeferredContext[8];
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
          *(_DWORD *)v31 = 1112698212;
          *(_QWORD *)(v31 + 8) = v9;
          *(_QWORD *)(v31 + 16) = v25;
          *(_QWORD *)(v31 + 24) = v29;
        }
      }
      if ( *((_DWORD *)v25 + 5) )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v32 = DeferredContext[8];
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = 844262756;
            *(_QWORD *)(v33 + 8) = v9;
            *(_QWORD *)(v33 + 16) = v25;
            *(_QWORD *)(v33 + 24) = v9;
          }
        }
        *((_DWORD *)v25 + 1) = 1;
        v34 = (__int64 ***)(v25 + 7);
        v35 = *(__int64 ****)(v6 + 3752);
        if ( *v35 != v7 )
          __fastfail(3u);
LABEL_36:
        *v34 = v7;
        v34[1] = (__int64 **)v35;
        *v35 = (__int64 **)v34;
        *(_QWORD *)(v6 + 3752) = v34;
        continue;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v64 = DeferredContext[8];
        if ( v64 )
        {
          v65 = *(_QWORD *)(v64 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v64 + 880)) & *(_DWORD *)(v64 + 884));
          *(_DWORD *)v65 = 861039972;
          *(_QWORD *)(v65 + 8) = v9;
          *(_QWORD *)(v65 + 16) = v25;
          *(_QWORD *)(v65 + 24) = v9;
        }
      }
      *((_DWORD *)v25 + 1) = v9;
    }
    else if ( v28 == 1 )
    {
      Log((__int64)DeferredContext, 0x2000, 1684886068, (__int64)v25, v9);
      v35 = *(__int64 ****)(v6 + 3752);
      v34 = (__int64 ***)(v66 + 56);
      if ( *v35 != v7 )
        __fastfail(3u);
      goto LABEL_36;
    }
  }
  if ( !*(_DWORD *)(v6 + 3736) )
  {
    Log((__int64)DeferredContext, 0x2000, 1680948785, 0LL, v9);
    KeSetEvent((PRKEVENT)(v6 + 3760), 0, 0);
    goto LABEL_44;
  }
  if ( *v7 == (__int64 *)v7 )
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v48 = DeferredContext[8];
      if ( v48 )
      {
        v49 = *(_QWORD *)(v48 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884));
        *(_DWORD *)v49 = 1414360420;
        *(_QWORD *)(v49 + 8) = v9;
        *(_QWORD *)(v49 + 16) = v9;
        *(_QWORD *)(v49 + 24) = v9;
      }
    }
    if ( *(_DWORD *)(v6 + 3736) )
      *(_DWORD *)(v6 + 3736) = 2;
  }
  else
  {
    v37 = *(int *)(v6 + 3736);
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v38 = DeferredContext[8];
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 1414807140;
        *(_QWORD *)(v39 + 8) = v9;
        *(_QWORD *)(v39 + 16) = v9;
        *(_QWORD *)(v39 + 24) = v37;
      }
    }
    v40 = KeQueryTimeIncrement();
    KeSetTimer((PKTIMER)(v6 + 3848), (LARGE_INTEGER)(int)(-149999 - v40), (PKDPC)(v6 + 3784));
    v5 = 0;
LABEL_44:
    v8 = v69;
    v9 = 0LL;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    v41 = DeferredContext[8];
    if ( v41 )
    {
      v42 = *(_QWORD *)(v41 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
      *(_DWORD *)v42 = 827878756;
      *(_QWORD *)(v42 + 8) = v9;
      *(_QWORD *)(v42 + 16) = v9;
      *(_QWORD *)(v42 + 24) = v9;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v8);
  if ( v5 )
  {
    v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    v44 = DeferredContext[8];
    if ( !v44 )
      UsbhTrapFatal_Dbg(DeferredContext, 0LL);
    if ( *(_DWORD *)v44 != 541218120 )
      UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8]);
    v45 = (_QWORD *)(v44 + 2512);
    if ( (_QWORD *)*v45 == v45 )
      goto LABEL_116;
    v46 = (_QWORD *)*v45;
    v47 = 0LL;
    if ( !*v45 )
      goto LABEL_116;
    while ( v46 != v45 )
    {
      v47 = v46 - 3;
      if ( v46 == (_QWORD *)24 )
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext);
      if ( *(_DWORD *)v47 != 1397515890 )
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext);
      if ( v47[2] == v6 + 3848 )
        break;
      v46 = (_QWORD *)*v46;
      if ( !v46 )
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext);
    }
    if ( !v47 || v46 == v45 )
    {
LABEL_116:
      v67 = *(_DWORD *)(v44 + 2528);
      if ( v67 )
        *(_DWORD *)(v44 + 2528) = v67 - 1;
    }
    else
    {
      v50 = (_QWORD *)*v46;
      v51 = (_QWORD *)v46[1];
      if ( *(_QWORD **)(*v46 + 8LL) != v46 || (_QWORD *)*v51 != v46 )
        __fastfail(3u);
      *v51 = v50;
      v50[1] = v51;
      ExFreePoolWithTag(v47, 0);
    }
    if ( (_QWORD *)*v45 == v45 && !*(_DWORD *)(v44 + 2528) )
      KeSetEvent((PRKEVENT)(v44 + 2488), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v43);
  }
}
