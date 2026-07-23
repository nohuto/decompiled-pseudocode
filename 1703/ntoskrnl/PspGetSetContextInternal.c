/*
 * XREFs of PspGetSetContextInternal @ 0x140521E20
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x1401892D0 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x140028F98 (PspGetBaseTrapFrame.c)
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400E6B30 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400E6D30 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x1400E6E50 (RtlpVirtualUnwind.c)
 *     RtlpGetStackLimits @ 0x1400E77D0 (RtlpGetStackLimits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x140189570 (RtlpCaptureContext.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeDoesTebMatchThread @ 0x1402081C8 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1402081E4 (KeGetCurrentUmsTeb.c)
 *     PspSetContext @ 0x140521660 (PspSetContext.c)
 *     PspGetContext @ 0x140521A80 (PspGetContext.c)
 *     VslGetSetSecureContext @ 0x140688040 (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x1406AD550 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x1406AD838 (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1406ADF70 (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x1406AE268 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1406AE52C (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1406AEBC4 (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x1406E4B1C (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x1406E4F20 (PspSetContextState.c)
 *     RtlCopyContext @ 0x1406EED8C (RtlCopyContext.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned __int8 v6; // bl
  _QWORD *v7; // r14
  struct _KTHREAD *CurrentThread; // r13
  PEPROCESS v9; // rax
  _QWORD *i; // rsi
  __int64 TrapFrame; // rsi
  char Reserved1; // cl
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 BaseTrapFrame; // rax
  __int64 v21; // rcx
  _DWORD *Object; // rbx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edi
  int v27; // eax
  __int64 v28; // r8
  int v29; // eax
  unsigned __int64 CurrentUmsTeb; // rax
  bool DoesTebMatchThread; // al
  __int64 v32; // rcx
  bool v33; // bl
  int updated; // eax
  CONTEXT *v35; // rbx
  char v36[3]; // [rsp+61h] [rbp-5C7h] BYREF
  int v37; // [rsp+64h] [rbp-5C4h] BYREF
  _QWORD *v38; // [rsp+68h] [rbp-5C0h]
  __int64 v39; // [rsp+70h] [rbp-5B8h]
  unsigned __int64 v40; // [rsp+78h] [rbp-5B0h] BYREF
  unsigned __int64 v41; // [rsp+80h] [rbp-5A8h] BYREF
  __int64 v42[3]; // [rsp+88h] [rbp-5A0h] BYREF
  __int128 v43; // [rsp+A0h] [rbp-588h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-578h]
  __int64 v45; // [rsp+B8h] [rbp-570h] BYREF
  unsigned __int64 v46[4]; // [rsp+C0h] [rbp-568h] BYREF
  char v47[144]; // [rsp+E0h] [rbp-548h] BYREF
  char v48; // [rsp+170h] [rbp-4B8h] BYREF
  unsigned __int64 *v49; // [rsp+178h] [rbp-4B0h] BYREF
  char v50; // [rsp+180h] [rbp-4A8h] BYREF
  char v51; // [rsp+188h] [rbp-4A0h] BYREF
  char v52; // [rsp+190h] [rbp-498h] BYREF
  char v53; // [rsp+1B8h] [rbp-470h] BYREF
  char v54; // [rsp+1C0h] [rbp-468h] BYREF
  char v55; // [rsp+1C8h] [rbp-460h] BYREF
  char v56; // [rsp+1D0h] [rbp-458h] BYREF
  unsigned __int64 v57; // [rsp+1D8h] [rbp-450h]
  char v58; // [rsp+2E0h] [rbp-348h] BYREF
  char v59; // [rsp+2F0h] [rbp-338h] BYREF
  char v60; // [rsp+300h] [rbp-328h] BYREF
  char v61; // [rsp+310h] [rbp-318h] BYREF
  char v62; // [rsp+320h] [rbp-308h] BYREF
  char v63; // [rsp+330h] [rbp-2F8h] BYREF
  char v64; // [rsp+340h] [rbp-2E8h] BYREF
  char v65; // [rsp+350h] [rbp-2D8h] BYREF
  char v66; // [rsp+360h] [rbp-2C8h] BYREF
  char v67; // [rsp+370h] [rbp-2B8h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+5B0h] [rbp-78h] BYREF
  __int64 v69; // [rsp+5E0h] [rbp-48h]
  __int64 v70; // [rsp+5E8h] [rbp-40h]

  v3 = (_QWORD *)a3;
  v38 = (_QWORD *)a3;
  v39 = a2;
  v42[1] = a1;
  v42[2] = a3;
  v6 = 0;
  v37 = 0;
  v7 = (_QWORD *)(a1 + 128);
  CurrentThread = KeGetCurrentThread();
  v9 = IoThreadToProcess(CurrentThread);
  if ( !*(_BYTE *)(a1 + 88) )
  {
    TrapFrame = (__int64)CurrentThread->TrapFrame;
    if ( !TrapFrame || *(_WORD *)(TrapFrame + 368) != 16 )
    {
      *(_DWORD *)(a1 + 92) = -1073741823;
      goto LABEL_21;
    }
LABEL_6:
    if ( (*(_BYTE *)(a1 + 89) & 2) == 0 )
    {
      BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread);
      v7[19] = BaseTrapFrame - 320 + 256;
      v7[22] = BaseTrapFrame - 320 + 272;
      v7[23] = BaseTrapFrame - 320 + 264;
      v7[28] = BaseTrapFrame - 320 + 280;
      v7[29] = BaseTrapFrame - 320 + 288;
      v7[30] = BaseTrapFrame - 320 + 296;
      v7[31] = BaseTrapFrame - 320 + 304;
      v7[6] = BaseTrapFrame - 320 + 48;
      v7[7] = BaseTrapFrame - 320 + 64;
      v7[8] = BaseTrapFrame - 320 + 80;
      v7[9] = BaseTrapFrame - 320 + 96;
      v7[10] = BaseTrapFrame - 320 + 112;
      v7[11] = BaseTrapFrame - 320 + 128;
      v7[12] = BaseTrapFrame - 320 + 144;
      v7[13] = BaseTrapFrame - 320 + 160;
      v7[14] = BaseTrapFrame - 320 + 176;
      v7[15] = BaseTrapFrame - 320 + 192;
      v7[21] = TrapFrame + 344;
LABEL_16:
      v17 = *(_QWORD *)(a1 + 120);
      v18 = *(_DWORD *)(v17 + 48) & 0x100008;
      if ( v39 )
      {
        if ( v18 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
          v6 = 1;
        if ( CurrentThread[1].WaitBlock[3].Object
          && *(_BYTE *)(a1 + 88) == 1
          && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
        {
          PspSetContextState(CurrentThread, *(_QWORD *)(a1 + 120));
        }
        else
        {
          PspSetContext(TrapFrame, (__int64)v7, *(_QWORD *)(a1 + 120), *(_BYTE *)(a1 + 88));
        }
      }
      else
      {
        if ( v18 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
          _fxsave((void *)(v17 + 256));
        if ( CurrentThread[1].WaitBlock[3].Object && *(_BYTE *)(a1 + 88) == 1 )
        {
          v35 = *(CONTEXT **)(a1 + 120);
          PspGetContext(TrapFrame, (__int64)v7, (__int64)v35);
          if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
            RtlCopyContext(v35, v35->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Object);
          v6 = 0;
        }
        else
        {
          PspGetContext(TrapFrame, (__int64)v7, *(_QWORD *)(a1 + 120));
        }
      }
      *(_DWORD *)(a1 + 92) = 0;
      goto LABEL_21;
    }
    if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v41, (__int64)&v40) )
    {
      *(_DWORD *)(a1 + 92) = -1073741823;
      goto LABEL_21;
    }
    v13 = 0LL;
    v42[0] = 0LL;
    memset(v46, 0, sizeof(v46));
    v43 = *(_OWORD *)&xmmword_1403F7020;
    v44 = qword_1403F7030;
    RtlpCaptureContext();
    v7[19] = &v48;
    v7[21] = &v50;
    v7[22] = &v51;
    v7[23] = &v52;
    v7[28] = &v53;
    v7[29] = &v54;
    v7[30] = &v55;
    v7[31] = &v56;
    v7[6] = &v58;
    v7[7] = &v59;
    v7[8] = &v60;
    v7[9] = &v61;
    v7[10] = &v62;
    v7[11] = &v63;
    v7[12] = &v64;
    v7[13] = &v65;
    v7[14] = &v66;
    v7[15] = &v67;
    v7[20] = &v49;
    v36[0] = 0;
    v14 = v57;
    v15 = (unsigned __int64)v49;
    while ( 1 )
    {
      if ( v14 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v41, v15, &v40, v46) )
      {
        if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          goto LABEL_76;
        goto LABEL_77;
      }
      v16 = RtlpLookupFunctionEntryForStackWalks(v14, (__int64)&v43);
      if ( v16 )
      {
        if ( (int)RtlpVirtualUnwind(
                    0,
                    *((__int64 *)&v43 + 1),
                    v14,
                    v16,
                    (__int64)v47,
                    v36,
                    &v45,
                    v42,
                    (__int64)v7,
                    &v41,
                    &v40) < 0 )
        {
          if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
LABEL_76:
            __int2c();
LABEL_77:
          v3 = v38;
          *(_DWORD *)(a1 + 92) = -1073741823;
LABEL_78:
          v6 = 0;
          goto LABEL_21;
        }
        v13 = v42[0];
        v14 = v57;
        v15 = (unsigned __int64)v49;
      }
      else
      {
        if ( !*((_QWORD *)&v43 + 1) )
          goto LABEL_77;
        v14 = *v49;
        v57 = *v49;
        v15 = (unsigned __int64)++v49;
      }
      if ( v13 == TrapFrame )
      {
        v6 = 0;
        v3 = v38;
        goto LABEL_16;
      }
    }
  }
  if ( v9->SecurePid )
  {
    v21 = *(_QWORD *)(a1 + 120);
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = 8 * ((((unsigned __int64)(v21 & 0xFFF) + 5327) >> 12) + 6);
    MemoryDescriptorList.MdlFlags = 0;
    MemoryDescriptorList.StartVa = (PVOID)(v21 & 0xFFFFFFFFFFFFF000uLL);
    MemoryDescriptorList.ByteOffset = v21 & 0xFFF;
    MemoryDescriptorList.ByteCount = 1232;
    MmProbeAndLockPages(&MemoryDescriptorList, 0, IoModifyAccess);
    *(_DWORD *)(a1 + 92) = VslGetSetSecureContext(a2, *(_QWORD *)(a1 + 120), v69, v70);
    MmUnlockPages(&MemoryDescriptorList);
    goto LABEL_21;
  }
  for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
    ;
  TrapFrame = (__int64)(i - 50);
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) == 0 )
  {
LABEL_5:
    if ( Reserved1 < 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v33 = DoesTebMatchThread;
      if ( v39 )
      {
        updated = KeUpdatePrimaryThreadContext(v32, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = updated;
        if ( !v33 )
          goto LABEL_78;
        v6 = 0;
        if ( updated < 0 )
          goto LABEL_21;
      }
      else
      {
        if ( !DoesTebMatchThread )
        {
          *(_DWORD *)(a1 + 92) = KeBuildPrimaryThreadContext(v32, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
          goto LABEL_78;
        }
        v6 = 0;
      }
    }
    goto LABEL_6;
  }
  Object = CurrentThread->WaitBlock[3].Object;
  if ( (Object[20] & 4) == 0 )
  {
    v6 = 0;
    goto LABEL_5;
  }
  v23 = *(_QWORD *)Object;
  v24 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v37, v23, 0LL);
  *(_DWORD *)(a1 + 92) = v24;
  if ( v24 < 0 )
    goto LABEL_78;
  if ( v39 )
  {
    *(_DWORD *)(a1 + 92) = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v37);
  }
  else
  {
    v25 = *(_QWORD *)(a1 + 120);
    v26 = 0;
    if ( (v37 & 2) != 0 )
      v26 = KeCopyContextFromUmsContext(v25, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
    else
      KeCopyContextFromUch(v25, CurrentThread->WaitBlock[3].SparePtr);
    *(_DWORD *)(a1 + 92) = v26;
    v3 = v38;
  }
  v27 = KeClearUmsThreadKernelLock(v23);
  if ( v27 < 0 )
    *(_DWORD *)(a1 + 92) = v27;
  if ( (v37 & 8) == 0 )
    goto LABEL_78;
  LOBYTE(v28) = 1;
  v29 = KeUpdateUmsThreadState(v23, 0LL, v28);
  v6 = 0;
  if ( v29 < 0 )
    *(_DWORD *)(a1 + 92) = v29;
LABEL_21:
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *v3 = a1 + 96;
  else
    *v3 = 0LL;
  return v6;
}
