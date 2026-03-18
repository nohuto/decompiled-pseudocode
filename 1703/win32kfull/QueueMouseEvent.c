/*
 * XREFs of QueueMouseEvent @ 0x1C01A0984
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00EB950 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C01033A4 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z @ 0x1C019CEF8 (-ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z.c)
 *     EditionMouseMove @ 0x1C01A0190 (EditionMouseMove.c)
 *     xxxOnPTPMouseOperation @ 0x1C01B1678 (xxxOnPTPMouseOperation.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01D57B4 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0221A98 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     WakeDIT @ 0x1C0104328 (WakeDIT.c)
 *     WakeRIT @ 0x1C0109844 (WakeRIT.c)
 *     UserBeep @ 0x1C01963EC (UserBeep.c)
 *     MonotonicTick @ 0x1C01A0938 (MonotonicTick.c)
 */

void __fastcall QueueMouseEvent(
        __int16 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const double *a9,
        int a10,
        int a11,
        char a12,
        char a13,
        int a14,
        char a15,
        int a16,
        _DWORD *a17,
        __int64 *a18)
{
  int v19; // edi
  __int64 v20; // xmm0_8
  int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r10d
  int v30; // r12d
  __int64 v31; // r8
  __int64 v32; // rdx
  __int16 v33; // r9
  char v34; // al
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // r8
  const double *v38; // rax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // edx
  __int64 v43; // [rsp+28h] [rbp-28h]
  int v44; // [rsp+30h] [rbp-20h]
  _BYTE v45[8]; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v46[16]; // [rsp+40h] [rbp-10h] BYREF

  v19 = 0;
  if ( a10 )
  {
    if ( a18 )
    {
      v20 = *a18;
      v21 = *((_DWORD *)a18 + 2);
      goto LABEL_7;
    }
    EnterCrit(0LL, 1LL);
    v43 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v23, v22) + 824);
    v21 = *(int *)(PsGetCurrentProcessWin32Process(v43, v24) + 12) < 0;
    UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  }
  else
  {
    v21 = v44;
  }
  v20 = v43;
LABEL_7:
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresMouseEventQueue);
  v29 = 0;
  v30 = a11;
  if ( a16 )
  {
    if ( gdwMouseEvents )
    {
      *((_DWORD *)&gMouseEventQueue + 26 * (unsigned int)gdwMouseQueueHead + 12) ^= (*((_DWORD *)&gMouseEventQueue
                                                                                     + 26
                                                                                     * (unsigned int)gdwMouseQueueHead
                                                                                     + 12) ^ (a16 << 7)) & 0x80;
      v19 = 0;
      if ( a17 )
        *a17 = 1;
    }
    goto LABEL_37;
  }
  MonotonicTick();
  v32 = (unsigned int)gdwMouseEvents;
  if ( !gdwMouseEvents )
    goto LABEL_17;
  LOBYTE(v31) = a14 != v29;
  LOBYTE(v32) = a10 != v29;
  ComputeMouseDataInputSource(a8, v32, v31, v46);
  GetMouseEventInputSource((char *)&gMouseEventQueue + 104 * (unsigned int)gdwMouseQueueHead, v45);
  LODWORD(v32) = gdwMouseEvents;
  v29 = 0;
  v33 = a1;
  if ( !gdwMouseEvents
    || a1
    || *((_WORD *)&gMouseEventQueue + 52 * (unsigned int)gdwMouseQueueHead)
    || a8 && (*(_BYTE *)(a8 + 2) & 8) != 0 )
  {
    goto LABEL_18;
  }
  v34 = IsEqualInputSource(v46, v45);
  v29 = 0;
  if ( !v34 )
  {
    LODWORD(v32) = gdwMouseEvents;
LABEL_17:
    v33 = a1;
LABEL_18:
    if ( (unsigned int)v32 >= 0x10 )
    {
      if ( glDitMouseHandling == v29 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
        EtwTraceWakeRIT(4LL);
        WakeRIT(4u);
      }
      else
      {
        ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
        EtwTraceWakeDIT(64LL);
        WakeDIT(0x40u);
      }
      UserBeep(440, 125);
      return;
    }
    v35 = ((_BYTE)gdwMouseQueueHead + 1) & 0xF;
    v36 = 104LL * (((_BYTE)gdwMouseQueueHead + 1) & 0xF);
    gdwMouseQueueHead = v35;
    gdwMouseEvents = v32 + 1;
    *(_WORD *)((char *)&gMouseEventQueue + v36) = v33;
    *(_WORD *)((char *)&gMouseEventQueue + v36 + 2) = a2;
    goto LABEL_24;
  }
  EtwTraceMouseInputCoalesced();
  v35 = gdwMouseQueueHead;
  v29 = 0;
LABEL_24:
  v37 = 104LL * v35;
  *(_QWORD *)((char *)&gMouseEventQueue + v37 + 8) = a3;
  *(_QWORD *)((char *)&gMouseEventQueue + v37 + 16) = a4;
  *(_QWORD *)((char *)&gMouseEventQueue + v37 + 24) = a5;
  *(_QWORD *)((char *)&gMouseEventQueue + v37 + 32) = a6;
  *(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) ^= (*(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) ^ a10) & 1;
  *(_QWORD *)((char *)&gMouseEventQueue + v37 + 40) = a7;
  v38 = a9;
  *(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) = *(_DWORD *)((_BYTE *)&gMouseEventQueue + v37 + 48) & 0xFFFFF38F | (16 * (a14 & 1 | (2 * (a12 & 1 | (2 * (a13 & 1 | (16 * (a15 & 1))))))));
  if ( !a9 )
    v38 = &DOUBLE_0_0;
  *(double *)((char *)&gMouseEventQueue + v37 + 96) = *v38;
  if ( a10 != v29 && (!a11 || a18) )
  {
    *(_QWORD *)((char *)&gMouseEventQueue + v37 + 52) = v20;
    *(_DWORD *)((char *)&gMouseEventQueue + v37 + 60) = v21;
    *(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) |= 0x800u;
  }
  if ( a8 )
  {
    v39 = *(_DWORD *)((_BYTE *)&gMouseEventQueue + v37 + 48) & 0xFFFFFFFD | (2
                                                                           * ((*(unsigned __int16 *)(a8 + 2) >> 3) & 1));
    *(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) = v39;
    v40 = v39 & 0xFFFFFFFB | (4 * ((*(unsigned __int16 *)(a8 + 2) >> 4) & 1));
    *(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) = v40;
    v41 = v40 & 0xFFFFFFF7 | (8 * ((*(unsigned __int16 *)(a8 + 2) >> 6) & 1));
    *(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) = v41;
    v42 = v41 & 0xFFFFFEFF | (((*(unsigned __int16 *)(a8 + 2) >> 7) & 1) << 8);
    *(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) = v42;
    *(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) = v42 & 0xFFFFFDFF | ((HIBYTE(*(unsigned __int16 *)(a8 + 2)) & 1) << 9);
    *(_OWORD *)((char *)&gMouseEventQueue + v37 + 72) = *(_OWORD *)a8;
    *(_QWORD *)((char *)&gMouseEventQueue + v37 + 88) = *(_QWORD *)(a8 + 16);
  }
  else
  {
    *(_DWORD *)((char *)&gMouseEventQueue + v37 + 48) &= 0xFFFFFCF1;
    *(_WORD *)((char *)&gMouseEventQueue + v37 + 72) = -1;
  }
  v19 = 0;
LABEL_37:
  if ( glDitMouseHandling != v29 )
  {
    v19 = 1;
    v30 = v29;
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
  if ( v19 )
  {
    EtwTraceWakeDIT(64LL);
    WakeDIT(0x40u);
  }
  if ( v30 )
  {
    EtwTraceWakeRIT(4LL);
    WakeRIT(4u);
  }
}
