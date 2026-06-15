/*
 * XREFs of Pdcv2ActivationClientActivate @ 0x18002B784
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x18002A8D4 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x18002BC90 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x18002BD50 (PdcReleaseRwLockExclusive2.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x18002BDBC (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 *     PdcAcquireRwLockExclusive2 @ 0x18002C1D0 (PdcAcquireRwLockExclusive2.c)
 *     PdcPortSendMessageSynchronously @ 0x18002C240 (PdcPortSendMessageSynchronously.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x18002C2E0 (PdcCreateWatchdogAroundClientCall.c)
 *     PdcpResizeDiagnosticContext @ 0x18002C324 (PdcpResizeDiagnosticContext.c)
 *     Pdcv2pValidateActivationParameters @ 0x18002C35C (Pdcv2pValidateActivationParameters.c)
 *     memset @ 0x180033A5A (memset.c)
 */

__int64 __fastcall Pdcv2ActivationClientActivate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _DWORD *a8)
{
  _DWORD *v8; // r12
  __int64 v12; // r15
  _QWORD *v13; // rax
  _QWORD *Heap; // rax
  _QWORD *v15; // rdi
  ULONGLONG TickCount64; // rax
  _WORD *v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int16 v20; // ax
  __int64 v21; // rbx
  _WORD *v22; // rax
  _WORD *v23; // rcx
  __int64 v24; // rdx
  __int16 v25; // ax
  _WORD *v26; // rax
  _WORD *v27; // rcx
  __int64 v28; // rdx
  signed __int64 v29; // r8
  __int16 v30; // ax
  _WORD *v31; // rax
  __int64 v32; // rbx
  _WORD *v33; // rcx
  __int16 v34; // ax
  _WORD *v35; // rax
  __int64 v36; // rcx
  int v37; // ebx
  int v38; // ecx
  int v39; // eax
  _QWORD *v40; // rcx
  _BYTE pv[48]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v43[96]; // [rsp+58h] [rbp-B0h] BYREF
  int v44; // [rsp+3A0h] [rbp+298h] BYREF

  v44 = a4;
  v8 = a8;
  LOBYTE(v44) = 0;
  v12 = 0LL;
  if ( !a8 )
  {
    v37 = -1073741578;
    goto LABEL_42;
  }
  v13 = a7;
  *a8 = 1;
  if ( !v13 )
  {
    v37 = -1073741579;
    goto LABEL_42;
  }
  *v13 = 0LL;
  if ( !a1 )
    goto LABEL_50;
  v12 = a1;
  if ( *(_DWORD *)a1 != 843138128 )
  {
    v12 = 0LL;
LABEL_50:
    v37 = -1073741585;
    goto LABEL_42;
  }
  if ( (unsigned __int8)Pdcv2pValidateActivationParameters(a2) )
  {
    PdcCreateWatchdogAroundClientCall(pv);
    PdcAcquireRwLockExclusive2(v12 + 8, &v44);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x258uLL);
    v15 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x258uLL);
      *((_DWORD *)v15 + 4) = 1094927440;
      *((_DWORD *)v15 + 5) = 1;
      v15[3] = v12;
      TickCount64 = GetTickCount64();
      v17 = v15 + 9;
      *((_DWORD *)v15 + 12) = 2;
      v15[5] = TickCount64;
      LODWORD(TickCount64) = *(_DWORD *)(a2 + 4);
      v18 = 128LL;
      v15[4] = a3;
      *((_DWORD *)v15 + 13) = TickCount64;
      v19 = 128LL;
      do
      {
        if ( v19 == -2147483518 )
          break;
        v20 = *(_WORD *)((char *)v17 + (char *)L"TimerForAudioPlayback" - (char *)(v15 + 9));
        if ( !v20 )
          break;
        *v17++ = v20;
        --v19;
      }
      while ( v19 );
      v21 = *(_QWORD *)(a2 + 16);
      v22 = v17 - 1;
      if ( v19 )
        v22 = v17;
      *v22 = 0;
      if ( v21 )
      {
        v23 = v15 + 41;
        v24 = 128LL;
        do
        {
          if ( v24 == -2147483518 )
            break;
          v25 = *(_WORD *)((char *)v23 + v21 - (_QWORD)(v15 + 41));
          if ( !v25 )
            break;
          *v23++ = v25;
          --v24;
        }
        while ( v24 );
        v26 = v23 - 1;
        if ( v24 )
          v26 = v23;
        *v26 = 0;
      }
      memset(v43, 0, sizeof(v43));
      v43[9] = *(_QWORD *)(a2 + 8);
      v27 = &v43[11];
      HIDWORD(v43[10]) = *(_DWORD *)(a2 + 4);
      v28 = 128LL;
      LODWORD(v43[5]) = 10;
      v29 = (char *)L"TimerForAudioPlayback" - (char *)&v43[11];
      LODWORD(v43[8]) = 2;
      LODWORD(v43[10]) = 0;
      do
      {
        if ( v28 == -2147483518 )
          break;
        v30 = *(_WORD *)((char *)v27 + v29);
        if ( !v30 )
          break;
        *v27++ = v30;
        --v28;
      }
      while ( v28 );
      v31 = v27 - 1;
      if ( v28 )
        v31 = v27;
      *v31 = 0;
      if ( v21 )
      {
        v32 = v21 - (_QWORD)&v43[43];
        v33 = &v43[43];
        do
        {
          if ( v18 == -2147483518 )
            break;
          v34 = *(_WORD *)((char *)v33 + v32);
          if ( !v34 )
            break;
          *v33++ = v34;
          --v18;
        }
        while ( v18 );
        v35 = v33 - 1;
        if ( v18 )
          v35 = v33;
        *v35 = 0;
      }
      v36 = *(_QWORD *)(a2 + 24);
      if ( v36 )
        PdcpResizeDiagnosticContext(v36, &v43[75], v29);
      v37 = PdcPortSendMessageSynchronously(*(_QWORD *)(a1 + 32), v43, v29);
      if ( v37 < 0
        || (v37 = v43[6], v38 = HIDWORD(v43[6]), v39 = ~LODWORD(v43[6]), *v8 = HIDWORD(v43[6]), v39 >= 0)
        || v38 == 300 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
      }
      else
      {
        v15[74] = v43[7];
        *((_BYTE *)v15 + 60) = 0;
        *((_DWORD *)v15 + 14) = HIDWORD(v43[6]);
        ++*(_DWORD *)(a1 + 220);
        ++*(_DWORD *)(a1 + 224);
        ++*(_DWORD *)(a1 + 236);
        v40 = *(_QWORD **)(a1 + 80);
        if ( *v40 != a1 + 72 )
          __fastfail(3u);
        *v15 = a1 + 72;
        v15[1] = v40;
        *v40 = v15;
        *(_QWORD *)(a1 + 80) = v15;
        *a7 = v15;
        Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(v15, a1, (unsigned int)v37);
      }
    }
    else
    {
      v37 = -1073741801;
    }
  }
  else
  {
    v37 = -1073741584;
  }
LABEL_42:
  if ( v37 < 0 )
    Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(0LL, v12, (unsigned int)v37);
  if ( (_BYTE)v44 )
    PdcReleaseRwLockExclusive2(v12 + 8, &v44);
  PdcCancelWatchdogAroundClientCall(pv);
  return (unsigned int)v37;
}
