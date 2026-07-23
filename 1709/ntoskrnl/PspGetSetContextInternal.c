/*
 * XREFs of PspGetSetContextInternal @ 0x140514300
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x140188DD0 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400D83C0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400D85C0 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x1400D86E0 (RtlpVirtualUnwind.c)
 *     RtlpGetStackLimits @ 0x1400D9050 (RtlpGetStackLimits.c)
 *     PspGetBaseTrapFrame @ 0x1400D9BC4 (PspGetBaseTrapFrame.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x140189070 (RtlpCaptureContext.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeDoesTebMatchThread @ 0x14020EBF8 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x14020EC14 (KeGetCurrentUmsTeb.c)
 *     PspGetContext @ 0x140514840 (PspGetContext.c)
 *     PspSetContext @ 0x140514BE0 (PspSetContext.c)
 *     VslGetSetSecureContext @ 0x1406B3E00 (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x1406D8994 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x1406D8C7C (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1406D93B0 (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x1406D96B8 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1406D997C (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1406DA014 (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14071CD5C (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x14071CF0C (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x14071D310 (PspSetContextState.c)
 *     RtlCopyContext @ 0x140727268 (RtlCopyContext.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  unsigned __int8 v5; // r9
  _QWORD *v6; // r14
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *i; // rsi
  _KTRAP_FRAME *TrapFrame; // rsi
  char Reserved1; // cl
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned int *v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // r8
  __int64 v19; // rcx
  _DWORD *Object; // rbx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // edi
  int v25; // eax
  __int64 v26; // r8
  int updated; // eax
  unsigned __int64 CurrentUmsTeb; // rax
  bool DoesTebMatchThread; // al
  __int64 v30; // rcx
  bool v31; // bl
  int v32; // eax
  CONTEXT *v33; // rbx
  char v34; // [rsp+60h] [rbp-5D8h]
  char v35[6]; // [rsp+62h] [rbp-5D6h] BYREF
  _QWORD *v36; // [rsp+68h] [rbp-5D0h]
  int v37; // [rsp+70h] [rbp-5C8h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-5C0h] BYREF
  unsigned __int64 v39; // [rsp+80h] [rbp-5B8h] BYREF
  __int64 v40[3]; // [rsp+88h] [rbp-5B0h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-598h]
  __int128 v42; // [rsp+A8h] [rbp-590h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-580h]
  __int64 v44; // [rsp+C0h] [rbp-578h] BYREF
  unsigned __int64 v45[5]; // [rsp+C8h] [rbp-570h] BYREF
  char v46[144]; // [rsp+F0h] [rbp-548h] BYREF
  char v47; // [rsp+180h] [rbp-4B8h] BYREF
  unsigned __int64 *v48; // [rsp+188h] [rbp-4B0h] BYREF
  char v49; // [rsp+190h] [rbp-4A8h] BYREF
  char v50; // [rsp+198h] [rbp-4A0h] BYREF
  char v51; // [rsp+1A0h] [rbp-498h] BYREF
  char v52; // [rsp+1C8h] [rbp-470h] BYREF
  char v53; // [rsp+1D0h] [rbp-468h] BYREF
  char v54; // [rsp+1D8h] [rbp-460h] BYREF
  char v55; // [rsp+1E0h] [rbp-458h] BYREF
  unsigned __int64 v56; // [rsp+1E8h] [rbp-450h]
  char v57; // [rsp+2F0h] [rbp-348h] BYREF
  char v58; // [rsp+300h] [rbp-338h] BYREF
  char v59; // [rsp+310h] [rbp-328h] BYREF
  char v60; // [rsp+320h] [rbp-318h] BYREF
  char v61; // [rsp+330h] [rbp-308h] BYREF
  char v62; // [rsp+340h] [rbp-2F8h] BYREF
  char v63; // [rsp+350h] [rbp-2E8h] BYREF
  char v64; // [rsp+360h] [rbp-2D8h] BYREF
  char v65; // [rsp+370h] [rbp-2C8h] BYREF
  char v66; // [rsp+380h] [rbp-2B8h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+5C0h] [rbp-78h] BYREF
  __int64 v68; // [rsp+5F0h] [rbp-48h]
  __int64 v69; // [rsp+5F8h] [rbp-40h]

  v36 = a3;
  v3 = a2;
  v41 = a2;
  v40[1] = a1;
  v40[2] = (__int64)a3;
  v5 = 0;
  v34 = 0;
  v37 = 0;
  v6 = (_QWORD *)(a1 + 128);
  CurrentThread = KeGetCurrentThread();
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 120);
      MemoryDescriptorList.Next = 0LL;
      MemoryDescriptorList.Size = 8 * ((((unsigned __int64)(v19 & 0xFFF) + 5327) >> 12) + 6);
      MemoryDescriptorList.MdlFlags = 0;
      MemoryDescriptorList.StartVa = (PVOID)(v19 & 0xFFFFFFFFFFFFF000uLL);
      MemoryDescriptorList.ByteOffset = v19 & 0xFFF;
      MemoryDescriptorList.ByteCount = 1232;
      MmProbeAndLockPages(&MemoryDescriptorList, 0, IoModifyAccess);
      *(_DWORD *)(a1 + 92) = VslGetSetSecureContext(v3, *(_QWORD *)(a1 + 120), v68, v69);
      MmUnlockPages(&MemoryDescriptorList);
      goto LABEL_75;
    }
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    TrapFrame = (_KTRAP_FRAME *)(i - 50);
    Reserved1 = CurrentThread->Header.Reserved1;
    if ( (Reserved1 & 0x40) != 0 )
    {
      Object = CurrentThread->WaitBlock[3].Object;
      if ( (Object[20] & 4) != 0 )
      {
        v21 = *(_QWORD *)Object;
        v22 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v37, v21, 0LL);
        *(_DWORD *)(a1 + 92) = v22;
        if ( v22 < 0 )
          goto LABEL_75;
        if ( v3 )
        {
          *(_DWORD *)(a1 + 92) = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v37);
        }
        else
        {
          v23 = *(_QWORD *)(a1 + 120);
          v24 = 0;
          if ( (v37 & 2) != 0 )
            v24 = KeCopyContextFromUmsContext(v23, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
          else
            KeCopyContextFromUch(v23, CurrentThread->WaitBlock[3].SparePtr);
          *(_DWORD *)(a1 + 92) = v24;
        }
        v25 = KeClearUmsThreadKernelLock(v21);
        if ( v25 < 0 )
          *(_DWORD *)(a1 + 92) = v25;
        if ( (v37 & 8) == 0 )
          goto LABEL_75;
        LOBYTE(v26) = 1;
        updated = KeUpdateUmsThreadState(v21, 0LL, v26);
        v5 = 0;
        a3 = v36;
        if ( updated < 0 )
          *(_DWORD *)(a1 + 92) = updated;
        goto LABEL_22;
      }
    }
    if ( Reserved1 < 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v31 = DoesTebMatchThread;
      if ( v3 )
      {
        v32 = KeUpdatePrimaryThreadContext(v30, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = v32;
        if ( !v31 || v32 < 0 )
          goto LABEL_75;
      }
      else if ( !DoesTebMatchThread )
      {
        *(_DWORD *)(a1 + 92) = KeBuildPrimaryThreadContext(v30, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
        goto LABEL_75;
      }
    }
  }
  else
  {
    TrapFrame = CurrentThread->TrapFrame;
    if ( !TrapFrame || TrapFrame->SegCs != 16 )
    {
      *(_DWORD *)(a1 + 92) = -1073741823;
      goto LABEL_22;
    }
  }
  if ( (*(_BYTE *)(a1 + 89) & 2) == 0 )
  {
    v18 = PspGetBaseTrapFrame((__int64)CurrentThread) - 320;
    v6[19] = v18 + 256;
    v6[22] = v18 + 272;
    v6[23] = v18 + 264;
    v6[28] = v18 + 280;
    v6[29] = v18 + 288;
    v6[30] = v18 + 296;
    v6[31] = v18 + 304;
    v6[6] = v18 + 48;
    v6[7] = v18 + 64;
    v6[8] = v18 + 80;
    v6[9] = v18 + 96;
    v6[10] = v18 + 112;
    v6[11] = v18 + 128;
    v6[12] = v18 + 144;
    v6[13] = v18 + 160;
    v6[14] = v18 + 176;
    v6[15] = v18 + 192;
    v6[21] = &TrapFrame->Rbp;
LABEL_16:
    v15 = *(_QWORD *)(a1 + 120);
    v16 = *(_DWORD *)(v15 + 48) & 0x100008;
    if ( v3 )
    {
      if ( v16 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
        v34 = 1;
      if ( CurrentThread[1].WaitBlock[3].Object
        && *(_BYTE *)(a1 + 88) == 1
        && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
      {
        PspSetContextState(CurrentThread, v15);
      }
      else
      {
        PspSetContext(TrapFrame, v6, v15, *(unsigned __int8 *)(a1 + 88));
      }
    }
    else
    {
      if ( v16 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
        _fxsave((void *)(v15 + 256));
      if ( CurrentThread[1].WaitBlock[3].Object && *(_BYTE *)(a1 + 88) == 1 )
      {
        v33 = *(CONTEXT **)(a1 + 120);
        PspGetContext(TrapFrame, v6, v33);
        if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
          RtlCopyContext(v33, v33->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Object);
      }
      else
      {
        PspGetContext(TrapFrame, v6, *(_QWORD *)(a1 + 120));
      }
    }
    *(_DWORD *)(a1 + 92) = 0;
    v5 = v34;
    goto LABEL_21;
  }
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v39, (__int64)&v38) )
    goto LABEL_74;
  v11 = 0LL;
  v40[0] = 0LL;
  memset(v45, 0, 0x20uLL);
  v42 = *(_OWORD *)&xmmword_140418020;
  v43 = qword_140418030;
  RtlpCaptureContext();
  v6[19] = &v47;
  v6[21] = &v49;
  v6[22] = &v50;
  v6[23] = &v51;
  v6[28] = &v52;
  v6[29] = &v53;
  v6[30] = &v54;
  v6[31] = &v55;
  v6[6] = &v57;
  v6[7] = &v58;
  v6[8] = &v59;
  v6[9] = &v60;
  v6[10] = &v61;
  v6[11] = &v62;
  v6[12] = &v63;
  v6[13] = &v64;
  v6[14] = &v65;
  v6[15] = &v66;
  v6[20] = &v48;
  v35[0] = 0;
  v12 = v56;
  v13 = (unsigned __int64)v48;
  while ( 1 )
  {
    if ( v12 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v39, v13, &v38, v45) )
    {
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        goto LABEL_73;
      goto LABEL_74;
    }
    v14 = RtlpLookupFunctionEntryForStackWalks(v12, (__int64)&v42);
    if ( !v14 )
    {
      if ( !*((_QWORD *)&v42 + 1) )
        goto LABEL_74;
      v12 = *v48;
      v56 = *v48;
      v13 = (unsigned __int64)++v48;
      goto LABEL_14;
    }
    if ( (int)RtlpVirtualUnwind(
                0,
                *((__int64 *)&v42 + 1),
                v12,
                v14,
                (__int64)v46,
                v35,
                &v44,
                v40,
                (__int64)v6,
                &v39,
                &v38) < 0 )
      break;
    v11 = v40[0];
    v12 = v56;
    v13 = (unsigned __int64)v48;
LABEL_14:
    if ( (_KTRAP_FRAME *)v11 == TrapFrame )
    {
      v3 = v41;
      goto LABEL_16;
    }
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
LABEL_73:
    __int2c();
LABEL_74:
  *(_DWORD *)(a1 + 92) = -1073741823;
LABEL_75:
  v5 = 0;
LABEL_21:
  a3 = v36;
LABEL_22:
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *a3 = a1 + 96;
  else
    *a3 = 0LL;
  return v5;
}
