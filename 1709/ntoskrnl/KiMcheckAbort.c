/*
 * XREFs of KiMcheckAbort @ 0x14018F280
 * Callers:
 *     KiMcheckAbortShadow @ 0x140297980 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401034E0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x140181760 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401817E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiSetSpecCtrlNmi @ 0x140184B00 (KiSetSpecCtrlNmi.c)
 *     KxMcheckAbort @ 0x14018F700 (KxMcheckAbort.c)
 *     KiBugCheckDispatch @ 0x140191D40 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x140207510 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402085E0 (KiCopyCounters.c)
 */

__int64 __fastcall KiMcheckAbort(
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
  __int64 v23; // rdx
  __int128 v24; // xmm4
  __int128 v25; // xmm5
  __int64 v26; // rcx
  __int64 v27; // r10
  unsigned __int8 CurrentIrql; // al
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v33; // rcx
  int v34; // r9d
  int v35; // r8d
  __int64 (__fastcall **v36)(); // rcx
  __int64 (__fastcall *v37)(); // rax
  _KIDTENTRY64 *IdtBase; // rax
  int v39; // edx
  int v40; // ecx
  __m128i v42; // [rsp+0h] [rbp-90h] BYREF
  _BYTE v43[41]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int8 v44; // [rsp+39h] [rbp-57h]
  unsigned __int8 v45; // [rsp+3Ah] [rbp-56h]
  char v46; // [rsp+3Bh] [rbp-55h]
  unsigned int v47; // [rsp+3Ch] [rbp-54h]
  __int64 v48; // [rsp+40h] [rbp-50h]
  __int64 v49; // [rsp+48h] [rbp-48h]
  __int64 v50; // [rsp+50h] [rbp-40h]
  __int64 v51; // [rsp+58h] [rbp-38h]
  __int64 v52; // [rsp+60h] [rbp-30h]
  __int64 v53; // [rsp+68h] [rbp-28h]
  __int64 v54; // [rsp+70h] [rbp-20h]
  unsigned __int64 v55; // [rsp+78h] [rbp-18h]
  _OWORD v56[6]; // [rsp+80h] [rbp-10h] BYREF
  unsigned __int64 v57; // [rsp+E0h] [rbp+50h]
  __int16 v58; // [rsp+110h] [rbp+80h]
  __int64 (__fastcall *retaddr)(); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v60; // [rsp+180h] [rbp+F0h]
  unsigned int v61; // [rsp+188h] [rbp+F8h]
  __int64 (__fastcall *v62)(); // [rsp+190h] [rbp+100h]
  unsigned __int16 v63; // [rsp+198h] [rbp+108h]

  v46 = 0;
  v48 = v8;
  v49 = a1;
  v50 = a2;
  v51 = a3;
  v52 = a4;
  v53 = v9;
  v54 = v10;
  if ( (v60 & 1) == 0 )
  {
    v55 = __readmsr(0xC0000101);
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
        __sgdt(v56);
        v17 = *(_QWORD *)(*(_QWORD *)((char *)v56 + 2) - 8000LL);
LABEL_8:
        v20 = v17;
        v21 = HIDWORD(v17);
        __writemsr(0xC0000101, __PAIR64__(v21, v20));
        v22 = __readcr2();
        v57 = v22;
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
  KiSetSpecCtrlNmi(a1, a2);
  v15 = (*(_BYTE *)(v27 + 3) & 3) == 0;
  v58 = 0;
  if ( !v15 )
    *(double *)&v11 = KiSaveDebugRegisterState(v26, v23);
LABEL_13:
  v47 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v56[0] = v11;
  v56[1] = v12;
  v56[2] = v13;
  v56[3] = v14;
  v56[4] = v24;
  v56[5] = v25;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)v43);
  }
  __incgsdword(0x5D00u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  v44 = CurrentIrql;
  _enable();
  if ( (v60 & 1) == 0 && &KiMcheckRecurseStart <= (_UNKNOWN *)retaddr && &KiMcheckRecurseEnd > (_UNKNOWN *)retaddr )
    KiBugCheckDispatch(251LL, 0LL, 0LL, 0LL);
  KxMcheckAbort(v43, v23, &v42);
  if ( (v42.m128i_i8[0] & 1) != 0 )
  {
    *((__m128i *)KeGetCurrentThread()->InitialStack - 26) = _mm_load_si128(&v42);
    v46 = 1;
  }
  v31 = 0LL;
  __writemsr(0x17Au, 0LL);
  _disable();
  __writecr8(v44);
  _disable();
  if ( (v60 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x8000000) != 0 )
      KiRestoreSetContextState((__int64)CurrentThread, 0LL, v29, v30, v43[32]);
    v33 = KeGetCurrentThread();
    if ( (v33->Header.LockNV & 0x40010000) != 0 && (v33->Header.Size & 1) != 0 )
    {
      KiCopyCounters(v33, v31);
      v33 = KeGetCurrentThread();
    }
    _mm_setcsr(v47);
    if ( v58 )
      KiRestoreDebugRegisterState(v33);
    v34 = v52;
    v35 = v51;
    if ( v46 )
    {
      v36 = (__int64 (__fastcall **)())((char *)KeGetCurrentThread()->InitialStack - 40);
      *v36 = retaddr;
      v36[1] = (__int64 (__fastcall *)())v60;
      v36[2] = (__int64 (__fastcall *)())v61;
      v36[3] = v62;
      v36[4] = (__int64 (__fastcall *)())v63;
      v37 = KxMcheckAlternateReturn;
      if ( (KiKvaShadow & 1) != 0 )
      {
        IdtBase = KeGetPcr()->IdtBase;
        *(&IdtBase[1119].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
        IdtBase[1119].Alignment = (unsigned __int64)KeGetPcr();
        IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
        IdtBase->Alignment = (unsigned __int64)*v36;
        *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v36 + 1);
        *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v36[3];
        IdtBase[2].Alignment = (unsigned __int64)v36;
        v37 = KxMcheckAlternateReturnShadow;
      }
      retaddr = v37;
    }
    else if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
    {
      __writemsr(0x48u, v45);
    }
    v39 = v50;
    v40 = v49;
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
    _mm_setcsr(v47);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v45);
    __writemsr(0xC0000101, v55);
    __writecr2(v57);
    v34 = v52;
    v35 = v51;
    v39 = v50;
    v40 = v49;
    if ( (KiKvaShadow & 1) == 0 )
      __asm { iretq }
  }
  return KiKernelIstMceExit(v40, v39, v35, v34, a5, a6, a7, a8);
}
