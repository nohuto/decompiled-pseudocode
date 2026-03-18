/*
 * XREFs of KiNmiInterruptStart @ 0x14018C080
 * Callers:
 *     KiNmiInterruptShadow @ 0x14026C200 (KiNmiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14000B7B0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x140181D20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140181D90 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiSetSpecCtrlNmi @ 0x140185060 (KiSetSpecCtrlNmi.c)
 *     KxNmiInterrupt @ 0x14018C400 (KxNmiInterrupt.c)
 *     KiBugCheckDispatch @ 0x140191B80 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x140201080 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140202010 (KiCopyCounters.c)
 */

__int64 __fastcall KiNmiInterruptStart(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  bool v15; // zf
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r10
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v29; // cf
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v35; // rcx
  int v36; // r9d
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  _BYTE v41[41]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int8 v42; // [rsp+29h] [rbp-57h]
  unsigned __int8 v43; // [rsp+2Ah] [rbp-56h]
  char v44; // [rsp+2Bh] [rbp-55h]
  unsigned int v45; // [rsp+2Ch] [rbp-54h]
  __int64 v46; // [rsp+30h] [rbp-50h]
  __int64 v47; // [rsp+38h] [rbp-48h]
  __int64 v48; // [rsp+40h] [rbp-40h]
  __int64 v49; // [rsp+48h] [rbp-38h]
  __int64 v50; // [rsp+50h] [rbp-30h]
  __int64 v51; // [rsp+58h] [rbp-28h]
  __int64 v52; // [rsp+60h] [rbp-20h]
  unsigned __int64 v53; // [rsp+68h] [rbp-18h]
  _OWORD v54[6]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v55; // [rsp+D0h] [rbp+50h]
  __int16 v56; // [rsp+100h] [rbp+80h]
  __int64 (__fastcall *retaddr)(); // [rsp+168h] [rbp+E8h]
  char v58; // [rsp+170h] [rbp+F0h]

  v44 = 0;
  v46 = v8;
  v47 = a1;
  v48 = a2;
  v49 = a3;
  v50 = a4;
  v51 = v9;
  v52 = v10;
  if ( (v58 & 1) == 0 )
  {
    v53 = __readmsr(0xC0000101);
    v16 = __segmentlimit(0x50u);
    if ( v15 )
    {
      v19 = (v16 & 0x3FF) << 6;
      v18 = v16 >> 14;
    }
    else
    {
      if ( !MEMORY[0xFFFFF78000000294] )
      {
        __sgdt(v54);
        v17 = *(_QWORD *)(*(_QWORD *)((char *)v54 + 2) - 8000LL);
LABEL_8:
        v20 = v17;
        v21 = HIDWORD(v17);
        __writemsr(0xC0000101, __PAIR64__(v21, v20));
        v22 = __readcr2();
        v55 = v22;
        KiSetSpecCtrlNmi(3221225729LL, v21);
        goto LABEL_13;
      }
      __asm { rdtscp }
      v18 = 1;
      v19 = 805306432;
    }
    v17 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v19 | v18]] - 384;
    goto LABEL_8;
  }
  if ( (KiKvaShadow & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  ((void (*)(void))KiSetSpecCtrlNmi)();
  v15 = (*(_BYTE *)(v27 + 3) & 3) == 0;
  v56 = 0;
  if ( !v15 )
    *(double *)&v11 = KiSaveDebugRegisterState(v26, v25);
LABEL_13:
  v45 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v54[0] = v11;
  v54[1] = v12;
  v54[2] = v13;
  v54[3] = v14;
  v54[4] = v23;
  v54[5] = v24;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)v41);
  }
  __incgsdword(0x5D00u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v42 = CurrentIrql;
  v29 = _bittestandset16(MK_FP(__GS__, 23142LL), 0);
  if ( v29
    || (v58 & 1) == 0
    && (unsigned __int64)KiNmiInterruptStart <= (unsigned __int64)retaddr
    && &KiNmiInterruptEnd > (_UNKNOWN *)retaddr
    || (unsigned __int64)KiNmiInterruptShadow <= (unsigned __int64)retaddr
    && &KiNmiInterruptShadowEnd > (_UNKNOWN *)retaddr )
  {
    KiBugCheckDispatch(273LL, 0LL, 0LL, 0LL);
  }
  KxNmiInterrupt();
  __writegsbyte(0x5A66u, 0);
  __writecr8(v42);
  if ( (v58 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
      KiRestoreSetContextState((__int64)CurrentThread, v31, v32, v33, v41[32]);
    v35 = KeGetCurrentThread();
    if ( (v35->Header.LockNV & 0x40010000) != 0 && (v35->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      v35 = KeGetCurrentThread();
    }
    _mm_setcsr(v45);
    if ( v56 )
      KiRestoreDebugRegisterState(v35);
    v36 = v50;
    v37 = v49;
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v43);
    v38 = v48;
    v39 = v47;
    if ( (KiKvaShadow & 1) == 0 )
    {
      __asm
      {
        swapgs
        iretq
      }
    }
  }
  else
  {
    _mm_setcsr(v45);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v43);
    __writemsr(0xC0000101, v53);
    __writecr2(v55);
    v36 = v50;
    v37 = v49;
    v38 = v48;
    v39 = v47;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstExit(v39, v38, v37, v36, a5, a6, a7, a8);
}
