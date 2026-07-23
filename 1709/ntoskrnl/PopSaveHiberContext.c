/*
 * XREFs of PopSaveHiberContext @ 0x140434F40
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140188D80 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x1400D4B20 (RtlNumberOfClearBits.c)
 *     RtlCopyBitMap @ 0x1400D4E00 (RtlCopyBitMap.c)
 *     RtlSetAllBits @ 0x14012CF30 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlDisableEnlightenment @ 0x1401E96B8 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x1401EE3F0 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401EE450 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x1401EE6E4 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401EE7F8 (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x1401F23F4 (VslNotifyShutdown.c)
 *     IoDumpStackResumeCapable @ 0x1401F5844 (IoDumpStackResumeCapable.c)
 *     IoGetDumpHiberRanges @ 0x1401F62FC (IoGetDumpHiberRanges.c)
 *     IoInitializeDumpStack @ 0x1401F66E0 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x1401F67A4 (IoNotifyDump.c)
 *     KdPowerTransition @ 0x140201790 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x14023A308 (_PopInternalError.c)
 *     PopResetRangeEnum @ 0x140241F70 (PopResetRangeEnum.c)
 *     PopWriteSecurePages @ 0x140242034 (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x1402509BC (DbgUnLoadImageSymbols.c)
 *     PopCompressHiberBlocks @ 0x140432774 (PopCompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x140432A08 (PopCreateDumpMdl.c)
 *     PopMarkComponentsBootPhase @ 0x140433C3C (PopMarkComponentsBootPhase.c)
 *     PopWriteChecksumPages @ 0x140435A30 (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140435AC8 (PopWriteHeaderPages.c)
 *     PopWriteHiberImage @ 0x140435DD4 (PopWriteHiberImage.c)
 *     PopWriteImageHeader @ 0x140436198 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x14043A2E8 (PopNotifyShutdownListener.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSaveHiberContext(char *Address, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Number; // rbx
  int v6; // ebx
  __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // r13
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // rsi
  unsigned int v13; // r8d
  _DWORD *v14; // rcx
  _DWORD *v15; // rdx
  _RTL_BITMAP *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  ULONG_PTR v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  char *v25; // rbx
  char *v26; // rax
  unsigned __int64 v27; // rbp
  char *v28; // r12
  unsigned __int64 v29; // rdi
  _QWORD *v30; // rcx
  PVOID v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rdx
  ULONG v38; // eax
  _DWORD *v39; // rdi
  int v40; // esi
  __int64 v41; // rbx
  __int64 v42; // rbp
  unsigned __int64 v43; // rcx
  unsigned int i; // r8d
  __int64 v45; // rdx
  ULONG v46; // eax
  _DWORD *v47; // rdi
  int v48; // esi
  __int64 v49; // rbx
  unsigned __int64 v50; // rbp
  char v52; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 v53; // [rsp+38h] [rbp-2A0h]
  __int128 v54; // [rsp+40h] [rbp-298h]
  __int128 v55; // [rsp+50h] [rbp-288h]
  __int128 v56; // [rsp+60h] [rbp-278h]
  _OWORD v57[5]; // [rsp+90h] [rbp-248h] BYREF
  _OWORD v58[5]; // [rsp+E0h] [rbp-1F8h] BYREF
  char v59; // [rsp+130h] [rbp-1A8h] BYREF
  char v60[24]; // [rsp+150h] [rbp-188h] BYREF
  void *Src; // [rsp+168h] [rbp-170h]
  size_t Size; // [rsp+178h] [rbp-160h]
  int v63; // [rsp+2D0h] [rbp-8h]

  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)Address + 5, 1u);
      while ( *((_DWORD *)Address + 5) )
        _mm_pause();
      if ( PoResumeFromHibernate )
        return 1073742484;
      _InterlockedAdd((volatile signed __int32 *)Address + 6, 1u);
      while ( *((_DWORD *)Address + 6) )
        _mm_pause();
    }
  }
  else
  {
    PopCheckpointSystemSleep(19LL, a2, a3, a4);
  }
  if ( (unsigned int)Number >= *((_DWORD *)Address + 66) )
    return 0;
  if ( (_DWORD)Number )
  {
    while ( !Address[4] )
      _mm_pause();
    v7 = Number << 7;
    PopCompressHiberBlocks((__int64)Address, v7 + *((_QWORD *)Address + 34), 1);
    _InterlockedAdd((volatile signed __int32 *)Address + 3, 1u);
    while ( *((_DWORD *)Address + 3) )
      _mm_pause();
    return (unsigned int)PopCompressHiberBlocks((__int64)Address, v7 + *((_QWORD *)Address + 34), 0);
  }
  PopWatchdogTimerCount = 0;
  _disable();
  if ( (v63 & 0x200) != 0 )
    PopInternalError(0xA18DAuLL);
  if ( (PopSimulateHiberBugcheck & 0x80u) == 0 )
  {
    v52 = IoDumpStackResumeCapable();
    if ( v52 )
      goto LABEL_27;
  }
  else
  {
    v52 = 0;
  }
  dword_140365BC8 |= 4u;
  byte_140365B41 = 1;
LABEL_27:
  if ( (unsigned int)PshedArePluginsPresent() )
  {
    dword_140365BC8 |= 8u;
    byte_140365B41 = 1;
  }
  if ( !(unsigned __int8)off_140353590[0]() )
  {
    dword_140365BC8 |= 1u;
    byte_140365B41 = 1;
  }
  v8 = HvlHypervisorConnected == 0;
  v9 = *((_QWORD *)Address + 25);
  *((_QWORD *)Address + 20) = &v59;
  *((_QWORD *)Address + 22) = &PoWakeState;
  Address[2] = 1;
  if ( !v8 )
  {
    HvlDisableEnlightenment(0);
    off_1403534E0[0]();
    if ( (HvlpFlags & 2) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)Address + 5, 1u);
      while ( *((_DWORD *)Address + 5) != (_DWORD)KeNumberProcessors_0 )
        _mm_pause();
      *(_QWORD *)&v54 = qword_1403A49C8;
      *((_QWORD *)&v54 + 1) = qword_1403A4968;
      *(_QWORD *)&v55 = qword_1403A4970;
      *((_QWORD *)&v55 + 1) = qword_1403A4960;
      *(_QWORD *)&v56 = qword_1403A4980;
      *((_QWORD *)&v56 + 1) = qword_1403A4978;
      if ( Address[460] )
      {
        v57[0] = v54;
        v57[2] = v56;
        v57[1] = v55;
        v57[4] = xmmword_1403A49B8;
        v57[3] = xmmword_1403A49A8;
        v10 = HvlPrepareForSecureHibernate(v57);
      }
      else
      {
        v58[0] = v54;
        v58[2] = v56;
        v58[1] = v55;
        v58[4] = xmmword_1403A49B8;
        v58[3] = xmmword_1403A49A8;
        v10 = HvlPrepareForHibernate(
                v58,
                (_QWORD *)(v9 + 872),
                (_QWORD *)(v9 + 880),
                (_QWORD *)(v9 + 888),
                (_QWORD *)(v9 + 896));
      }
      v11 = v10;
      if ( v10 < 0 )
      {
        PopInternalAddToDumpFile(*((_QWORD *)Address + 21), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v11, *((_QWORD *)Address + 21), 0LL);
      }
      *((_DWORD *)Address + 5) = 0;
      _InterlockedAdd((volatile signed __int32 *)Address + 6, 1u);
      while ( *((_DWORD *)Address + 6) != (_DWORD)KeNumberProcessors_0 )
        _mm_pause();
      *((_DWORD *)Address + 5) = KeNumberProcessors_0;
      *((_DWORD *)Address + 6) = 0;
    }
    if ( Address[460] )
      HvlDiscardSecurePagesFromHibernation(Address);
    else
      HvlDiscardPagesFromHibernation(Address);
  }
  ++*(_DWORD *)v9;
  v12 = Address + 48;
  v13 = 0;
  v14 = (_DWORD *)*((_QWORD *)Address + 7);
  v15 = (_DWORD *)*((_QWORD *)Address + 5);
  if ( (*((_DWORD *)Address + 12) & 0xFFFFFFE0) != 0 )
  {
    do
    {
      ++v13;
      *v14++ |= *v15++;
    }
    while ( v13 < *v12 >> 5 );
  }
  if ( byte_140365B41 )
  {
    v16 = (_RTL_BITMAP *)(Address + 32);
  }
  else
  {
    RtlCopyBitMap((PRTL_BITMAP)Address + 3, (PRTL_BITMAP)Address + 2, 0);
    v16 = (_RTL_BITMAP *)(Address + 48);
  }
  RtlSetAllBits(v16);
  v17 = *((_QWORD *)Address + 21);
  *((_DWORD *)Address + 46) = 8;
  IoGetDumpHiberRanges(v18, v17);
  if ( !byte_140365B41 )
    IoNotifyDump(1);
  v19 = __rdtsc();
  v20 = (int)IoInitializeDumpStack(*((_QWORD *)Address + 21));
  v23 = __rdtsc();
  v24 = (unsigned __int64)HIDWORD(v23) << 32;
  qword_140365C68 += (v24 | (unsigned int)v23) - v19;
  if ( (v20 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
  {
    PopCheckpointSystemSleep(20LL, v24, v21, v22);
    PopInternalAddToDumpFile(*((_QWORD *)Address + 21), 0x178u, 0LL);
    KeBugCheckEx(0xA0u, 0xCuLL, v20, *((_QWORD *)Address + 21), 0LL);
  }
  PopMarkComponentsBootPhase(Address);
  PoHiberInProgress = 1;
  v25 = (char *)*((_QWORD *)Address + 8);
  while ( v25 != Address + 64 )
  {
    v26 = v25;
    v25 = *(char **)v25;
    v27 = *((_QWORD *)v26 + 4);
    v28 = (char *)*((_QWORD *)v26 + 5);
    v29 = *((_QWORD *)v26 + 3);
    *((_QWORD *)Address + 11) += v27 - v29;
    while ( v29 < v27 )
    {
      PopCreateDumpMdl((__int64)Address, (ULONG_PTR)v60, v29, v27);
      memmove(v28, Src, (unsigned int)Size);
      v28 += (unsigned int)Size;
      v29 += (unsigned __int64)(unsigned int)Size >> 12;
    }
  }
  PopResetRangeEnum(Address);
  v30 = (_QWORD *)*((_QWORD *)Address + 20);
  v31 = qword_140365B18;
  *v30 = qword_140365B18;
  v30[1] = v31;
  v30[2] = 0LL;
  v53 = __rdtsc();
  v6 = PopWriteHeaderPages(Address, v9);
  if ( v6 < 0 )
    goto LABEL_81;
  v35 = *(_DWORD *)(v9 + 80);
  if ( Address[460] )
  {
    v36 = (unsigned int)PopHiberScratchPages;
    v37 = (unsigned int)(*((_DWORD *)Address + 64) + 2);
    *((_DWORD *)Address + 46) = 3;
    *(_QWORD *)(v9 + 96) = v37 + ((unsigned __int64)(4 * v36 + 4095) >> 12);
    PopWriteSecurePages((ULONG_PTR)Address);
    qword_140365DF0 = *((unsigned int *)Address + 65);
  }
  *((_DWORD *)Address + 46) = 4;
  *((_QWORD *)Address + 12) = v12;
  v38 = RtlNumberOfClearBits((PRTL_BITMAP)Address + 3);
  v39 = qword_140365B98;
  v40 = *((_DWORD *)Address + 72);
  v41 = *((_QWORD *)Address + 35);
  v42 = (v38 + *((_QWORD *)Address + 11)) << 12;
  memset(qword_140365B98, 0, 0x40uLL);
  v39[6] = 0;
  *(_QWORD *)v39 = v41;
  v39[2] = v40;
  *((_QWORD *)v39 + 2) = v42;
  qword_140365DF8 = 0LL;
  qword_140365E00 = 0LL;
  *((_DWORD *)Address + 84) = 0;
  *((_QWORD *)Address + 44) = 0LL;
  if ( v52 && *(_QWORD *)(*((_QWORD *)Address + 21) + 128LL) )
    Address[400] = 1;
  v43 = *((unsigned int *)Address + 65)
      + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
      + (unsigned int)(*((_DWORD *)Address + 64) + 2);
  *(_QWORD *)(v9 + 104) = v43;
  *((_QWORD *)Address + 48) = v43 << 12;
  Address[4] = 1;
  PopWriteHiberImage((ULONG_PTR)Address);
  _InterlockedIncrement((volatile signed __int32 *)Address + 3);
  while ( *((_DWORD *)Address + 3) != *((_DWORD *)Address + 66) )
    _mm_pause();
  for ( i = 0; i < *((_DWORD *)Address + 66); *(_QWORD *)(v45 + *((_QWORD *)Address + 34) + 56) = 0LL )
  {
    v45 = i++;
    v45 <<= 7;
    qword_140365DF8 += *(_QWORD *)(v45 + *((_QWORD *)Address + 34) + 56);
  }
  qword_140365E08 = qword_140365E28;
  qword_140365E18 = (unsigned int)dword_140365E30;
  qword_140365E28 = 0LL;
  dword_140365E30 = 0;
  *((_DWORD *)Address + 46) = 5;
  *((_QWORD *)Address + 12) = Address + 32;
  *((_QWORD *)Address + 14) = 0LL;
  v46 = RtlNumberOfClearBits((PRTL_BITMAP)Address + 2);
  v47 = qword_140365B98;
  v48 = *((_DWORD *)Address + 72);
  v49 = *((_QWORD *)Address + 35);
  v50 = (unsigned __int64)v46 << 12;
  memset(qword_140365B98, 0, 0x40uLL);
  v47[6] = 0;
  *(_QWORD *)v47 = v49;
  v47[2] = v48;
  *((_QWORD *)v47 + 2) = v50;
  *(_QWORD *)(v9 + 112) = (unsigned __int64)(*((_QWORD *)Address + 48) + 4095LL) >> 12;
  *((_DWORD *)Address + 3) = 0;
  *((_QWORD *)Address + 44) = 0LL;
  PopWriteHiberImage((ULONG_PTR)Address);
  *((_DWORD *)Address + 46) = 7;
  PopWriteChecksumPages(Address);
  *((_DWORD *)Address + 46) = 6;
  PopWriteImageHeader(Address, v9, v35, v53);
  v6 = *((_DWORD *)Address + 47);
  if ( v6 < 0 )
    goto LABEL_81;
  if ( (PopSimulate & 0x8000) == 0 && dword_140365800 == dword_140365808 )
  {
    DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFELL, 0LL);
    VslNotifyShutdown(1u);
  }
  if ( (PopSimulate & 0x1000) == 0 )
  {
    v6 = 0;
    if ( (PopSimulateHiberBugcheck & 0x10) == 0 )
      goto LABEL_82;
    v6 = 1073742484;
LABEL_81:
    if ( v6 == 1073742484 )
      goto LABEL_83;
    goto LABEL_82;
  }
  v6 = -1073741632;
LABEL_82:
  KdPowerTransition(4LL, v32);
LABEL_83:
  if ( v6 >= 0 && v6 != 1073742484 && dword_140365800 == 5 )
    PopNotifyShutdownListener();
  PopCheckpointSystemSleep(24LL, v32, v33, v34);
  off_140353608[0]();
  return (unsigned int)v6;
}
