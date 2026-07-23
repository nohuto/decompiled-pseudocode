/*
 * XREFs of PspGetSetContextInternal @ 0x1405B7BD0
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x1401B2A30 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     PspGetBaseTrapFrame @ 0x14012B834 (PspGetBaseTrapFrame.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14012D2E0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x14012D4D8 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x14012D540 (RtlpVirtualUnwind.c)
 *     RtlpGetStackLimits @ 0x1401307E0 (RtlpGetStackLimits.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x1401B2CD0 (RtlpCaptureContext.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeDoesTebMatchThread @ 0x14024CE4C (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x14024CE68 (KeGetCurrentUmsTeb.c)
 *     PspSetContext @ 0x140558D4C (PspSetContext.c)
 *     PspGetContext @ 0x1405B8B34 (PspGetContext.c)
 *     VslGetSetSecureContext @ 0x140718A30 (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x140742A70 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x140742D5C (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x140743490 (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x140743784 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x140743A40 (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1407440E0 (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14078057C (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x14078072C (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x140780B40 (PspSetContextState.c)
 *     RtlCopyContext @ 0x14078AE74 (RtlCopyContext.c)
 */

_BOOL8 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v5; // rsi
  struct _KTHREAD *CurrentThread; // r13
  __int64 TrapFrame; // r14
  char Reserved1; // cl
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned int *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  bool v15; // bl
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 BaseTrapFrame; // rax
  __int64 v21; // rcx
  _DWORD *Object; // rdi
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // r8
  int v29; // eax
  unsigned __int64 CurrentUmsTeb; // rax
  bool DoesTebMatchThread; // al
  __int64 v32; // rcx
  bool v33; // bl
  int updated; // eax
  CONTEXT *v35; // rbx
  char v36[7]; // [rsp+61h] [rbp-5D7h] BYREF
  _QWORD *v37; // [rsp+68h] [rbp-5D0h]
  int v38; // [rsp+70h] [rbp-5C8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-5C0h]
  unsigned __int64 v40; // [rsp+80h] [rbp-5B8h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-5B0h] BYREF
  __int64 v42[4]; // [rsp+90h] [rbp-5A8h] BYREF
  __int128 v43; // [rsp+B0h] [rbp-588h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-578h]
  __int64 v45; // [rsp+C8h] [rbp-570h] BYREF
  unsigned __int64 v46[4]; // [rsp+D0h] [rbp-568h] BYREF
  char v47[144]; // [rsp+F0h] [rbp-548h] BYREF
  char v48; // [rsp+180h] [rbp-4B8h] BYREF
  unsigned __int64 *v49; // [rsp+188h] [rbp-4B0h] BYREF
  char v50; // [rsp+190h] [rbp-4A8h] BYREF
  char v51; // [rsp+198h] [rbp-4A0h] BYREF
  char v52; // [rsp+1A0h] [rbp-498h] BYREF
  char v53; // [rsp+1C8h] [rbp-470h] BYREF
  char v54; // [rsp+1D0h] [rbp-468h] BYREF
  char v55; // [rsp+1D8h] [rbp-460h] BYREF
  char v56; // [rsp+1E0h] [rbp-458h] BYREF
  unsigned __int64 v57; // [rsp+1E8h] [rbp-450h]
  char v58; // [rsp+2F0h] [rbp-348h] BYREF
  char v59; // [rsp+300h] [rbp-338h] BYREF
  char v60; // [rsp+310h] [rbp-328h] BYREF
  char v61; // [rsp+320h] [rbp-318h] BYREF
  char v62; // [rsp+330h] [rbp-308h] BYREF
  char v63; // [rsp+340h] [rbp-2F8h] BYREF
  char v64; // [rsp+350h] [rbp-2E8h] BYREF
  char v65; // [rsp+360h] [rbp-2D8h] BYREF
  char v66; // [rsp+370h] [rbp-2C8h] BYREF
  char v67; // [rsp+380h] [rbp-2B8h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+5C0h] [rbp-78h] BYREF
  __int64 v69; // [rsp+5F0h] [rbp-48h]
  __int64 v70; // [rsp+5F8h] [rbp-40h]

  v37 = (_QWORD *)a3;
  v3 = a2;
  v39 = a2;
  v42[3] = a3;
  v42[1] = a1;
  v38 = 0;
  v5 = (_QWORD *)(a1 + 128);
  CurrentThread = KeGetCurrentThread();
  if ( !*(_BYTE *)(a1 + 88) )
  {
    TrapFrame = (__int64)CurrentThread->TrapFrame;
    if ( !TrapFrame || *(_WORD *)(TrapFrame + 368) != 16 )
    {
      *(_DWORD *)(a1 + 92) = -1073741823;
      v16 = (_QWORD *)a3;
      goto LABEL_64;
    }
    goto LABEL_5;
  }
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 120);
    MemoryDescriptorList.Next = 0LL;
    MemoryDescriptorList.Size = 8 * ((((unsigned __int64)(v21 & 0xFFF) + 5327) >> 12) + 6);
    MemoryDescriptorList.MdlFlags = 0;
    MemoryDescriptorList.StartVa = (PVOID)(v21 & 0xFFFFFFFFFFFFF000uLL);
    MemoryDescriptorList.ByteOffset = v21 & 0xFFF;
    MemoryDescriptorList.ByteCount = 1232;
    MmProbeAndLockPages(&MemoryDescriptorList, 0, IoModifyAccess);
    *(_DWORD *)(a1 + 92) = VslGetSetSecureContext(v3, *(_QWORD *)(a1 + 120), v69, v70);
    MmUnlockPages(&MemoryDescriptorList);
    goto LABEL_63;
  }
  TrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread);
  Reserved1 = CurrentThread->Header.Reserved1;
  if ( (Reserved1 & 0x40) == 0 )
  {
LABEL_4:
    if ( Reserved1 < 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v33 = DoesTebMatchThread;
      if ( v3 )
      {
        updated = KeUpdatePrimaryThreadContext(v32, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = updated;
        if ( !v33 || updated < 0 )
          goto LABEL_63;
      }
      else if ( !DoesTebMatchThread )
      {
        *(_DWORD *)(a1 + 92) = KeBuildPrimaryThreadContext(v32, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
        goto LABEL_63;
      }
    }
LABEL_5:
    if ( (*(_BYTE *)(a1 + 89) & 2) == 0 )
    {
      BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread);
      v5[19] = BaseTrapFrame - 320 + 256;
      v5[22] = BaseTrapFrame - 320 + 272;
      v5[23] = BaseTrapFrame - 320 + 264;
      v5[28] = BaseTrapFrame - 320 + 280;
      v5[29] = BaseTrapFrame - 320 + 288;
      v5[30] = BaseTrapFrame - 320 + 296;
      v5[31] = BaseTrapFrame - 320 + 304;
      v5[6] = BaseTrapFrame - 320 + 48;
      v5[7] = BaseTrapFrame - 320 + 64;
      v5[8] = BaseTrapFrame - 320 + 80;
      v5[9] = BaseTrapFrame - 320 + 96;
      v5[10] = BaseTrapFrame - 320 + 112;
      v5[11] = BaseTrapFrame - 320 + 128;
      v5[12] = BaseTrapFrame - 320 + 144;
      v5[13] = BaseTrapFrame - 320 + 160;
      v5[14] = BaseTrapFrame - 320 + 176;
      v5[15] = BaseTrapFrame - 320 + 192;
      v5[21] = TrapFrame + 344;
LABEL_15:
      v13 = *(_QWORD *)(a1 + 120);
      v14 = *(_DWORD *)(v13 + 48) & 0x100008;
      if ( v3 )
      {
        v15 = v14 == 1048584 && *(_BYTE *)(a1 + 88) == 1;
        if ( CurrentThread[1].WaitBlock[3].Object
          && *(_BYTE *)(a1 + 88) == 1
          && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
        {
          PspSetContextState(CurrentThread, *(_QWORD *)(a1 + 120));
        }
        else
        {
          PspSetContext(TrapFrame, (__int64)v5, *(_QWORD *)(a1 + 120), *(_BYTE *)(a1 + 88));
        }
      }
      else
      {
        if ( v14 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
          _fxsave((void *)(v13 + 256));
        if ( CurrentThread[1].WaitBlock[3].Object && *(_BYTE *)(a1 + 88) == 1 )
        {
          v35 = *(CONTEXT **)(a1 + 120);
          PspGetContext(TrapFrame, v5, v35);
          if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
            RtlCopyContext(v35, v35->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Object);
        }
        else
        {
          PspGetContext(TrapFrame, v5, *(_QWORD *)(a1 + 120));
        }
        v15 = 0;
      }
      *(_DWORD *)(a1 + 92) = 0;
      v16 = v37;
      goto LABEL_21;
    }
    if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v41, (__int64)&v40) )
      goto LABEL_62;
    v9 = 0LL;
    v42[0] = 0LL;
    memset(v46, 0, sizeof(v46));
    v43 = *(_OWORD *)&xmmword_140463020;
    v44 = qword_140463030;
    RtlpCaptureContext();
    v5[19] = &v48;
    v5[21] = &v50;
    v5[22] = &v51;
    v5[23] = &v52;
    v5[28] = &v53;
    v5[29] = &v54;
    v5[30] = &v55;
    v5[31] = &v56;
    v5[6] = &v58;
    v5[7] = &v59;
    v5[8] = &v60;
    v5[9] = &v61;
    v5[10] = &v62;
    v5[11] = &v63;
    v5[12] = &v64;
    v5[13] = &v65;
    v5[14] = &v66;
    v5[15] = &v67;
    v5[20] = &v49;
    v36[0] = 0;
    v10 = (unsigned __int64)v49;
    while ( 1 )
    {
      v11 = v57;
      if ( v57 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v41, v10, &v40, v46) )
      {
        if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
          goto LABEL_61;
        goto LABEL_62;
      }
      v12 = RtlpLookupFunctionEntryForStackWalks(v11, (__int64)&v43);
      if ( v12 )
      {
        if ( (int)RtlpVirtualUnwind(
                    0,
                    *((__int64 *)&v43 + 1),
                    v11,
                    v12,
                    (__int64)v47,
                    v36,
                    &v45,
                    v42,
                    (__int64)v5,
                    &v41,
                    &v40) < 0 )
        {
          if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
LABEL_61:
            __int2c();
LABEL_62:
          *(_DWORD *)(a1 + 92) = -1073741823;
LABEL_63:
          v16 = v37;
LABEL_64:
          v15 = 0;
LABEL_21:
          v17 = a1;
          goto LABEL_22;
        }
        v9 = v42[0];
        v10 = (unsigned __int64)v49;
      }
      else
      {
        if ( !*((_QWORD *)&v43 + 1) )
          goto LABEL_62;
        v57 = *v49;
        v10 = (unsigned __int64)++v49;
      }
      if ( v9 == TrapFrame )
      {
        v3 = v39;
        goto LABEL_15;
      }
    }
  }
  Object = CurrentThread->WaitBlock[3].Object;
  if ( (Object[20] & 4) == 0 )
  {
    v3 = v39;
    goto LABEL_4;
  }
  v23 = *(_QWORD *)Object;
  v24 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v38, v23, 0LL);
  *(_DWORD *)(a1 + 92) = v24;
  if ( v24 < 0 )
    goto LABEL_63;
  v25 = *(_QWORD *)(a1 + 120);
  if ( v39 )
  {
    v26 = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v38);
  }
  else
  {
    v26 = 0;
    if ( (v38 & 2) != 0 )
      v26 = KeCopyContextFromUmsContext(v25, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
    else
      KeCopyContextFromUch(v25, CurrentThread->WaitBlock[3].SparePtr);
  }
  *(_DWORD *)(a1 + 92) = v26;
  v27 = KeClearUmsThreadKernelLock(v23);
  if ( v27 < 0 )
    *(_DWORD *)(a1 + 92) = v27;
  if ( (v38 & 8) != 0 )
  {
    LOBYTE(v28) = 1;
    v29 = KeUpdateUmsThreadState(v23, 0LL, v28);
    v15 = 0;
    v17 = a1;
    if ( v29 < 0 )
    {
      *(_DWORD *)(a1 + 92) = v29;
      v16 = v37;
      goto LABEL_22;
    }
  }
  else
  {
    v15 = 0;
    v17 = a1;
  }
  v16 = v37;
LABEL_22:
  v18 = v17 + 96;
  if ( (*(_BYTE *)(a1 + 89) & 1) == 0 )
    v18 = 0LL;
  *v16 = v18;
  return v15;
}
