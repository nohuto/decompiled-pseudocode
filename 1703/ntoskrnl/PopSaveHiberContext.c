/*
 * XREFs of PopSaveHiberContext @ 0x140405800
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140189280 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlCopyBitMap @ 0x14001E390 (RtlCopyBitMap.c)
 *     PopResetRangeEnum @ 0x14003CCD8 (PopResetRangeEnum.c)
 *     RtlNumberOfClearBits @ 0x14006E260 (RtlNumberOfClearBits.c)
 *     RtlSetAllBits @ 0x14012DAF0 (RtlSetAllBits.c)
 *     IoDumpStackResumeCapable @ 0x140136E90 (IoDumpStackResumeCapable.c)
 *     IoInitializeDumpStack @ 0x140136EC0 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x140136F20 (IoNotifyDump.c)
 *     IoGetDumpHiberRanges @ 0x14013EE44 (IoGetDumpHiberRanges.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlDisableEnlightenment @ 0x1401E49F0 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x1401E91F4 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401E9254 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x1401E9554 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401E9668 (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x1401ED5D4 (VslNotifyShutdown.c)
 *     KdPowerTransition @ 0x1401FBA80 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x140227114 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x140227528 (_PopInternalError.c)
 *     PopWriteSecurePages @ 0x14022E020 (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x14023B110 (DbgUnLoadImageSymbols.c)
 *     PopWriteHeaderPages @ 0x140405288 (PopWriteHeaderPages.c)
 *     PopCreateDumpMdl @ 0x14040572C (PopCreateDumpMdl.c)
 *     PopWriteHiberImage @ 0x140406638 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x140406950 (PopCompressHiberBlocks.c)
 *     PopCheckpointSystemSleep @ 0x140408338 (PopCheckpointSystemSleep.c)
 *     PopMarkComponentsBootPhase @ 0x14040D5C8 (PopMarkComponentsBootPhase.c)
 *     PopWriteChecksumPages @ 0x140419D64 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x140419DFC (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x14041A5AC (PopNotifyShutdownListener.c)
 */

__int64 __fastcall PopSaveHiberContext(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 Number; // rdi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // r13
  _RTL_BITMAP *v8; // rsi
  unsigned int v9; // r8d
  _DWORD *v10; // rcx
  _DWORD *v11; // rdx
  _RTL_BITMAP *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  ULONG_PTR v16; // rbp
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbp
  char *v21; // rsi
  _QWORD *v22; // rcx
  PVOID v23; // rax
  __int64 v24; // rdx
  signed int v25; // edi
  unsigned int v26; // r12d
  ULONG v27; // eax
  _DWORD *v28; // rsi
  int v29; // ebp
  __int64 v30; // rdi
  __int64 v31; // r14
  unsigned __int64 v32; // rcx
  int v33; // eax
  int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned int i; // r8d
  __int64 v38; // rdx
  ULONG v39; // eax
  _DWORD *v40; // rsi
  int v41; // ebp
  __int64 v42; // rdi
  unsigned __int64 v43; // r14
  __int16 v44; // cx
  char v46; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 v47; // [rsp+38h] [rbp-2A0h]
  __int128 v48; // [rsp+40h] [rbp-298h]
  __int128 v49; // [rsp+50h] [rbp-288h]
  __int128 v50; // [rsp+60h] [rbp-278h]
  _OWORD v51[5]; // [rsp+90h] [rbp-248h] BYREF
  _OWORD v52[5]; // [rsp+E0h] [rbp-1F8h] BYREF
  char v53; // [rsp+130h] [rbp-1A8h] BYREF
  _BYTE v54[24]; // [rsp+150h] [rbp-188h] BYREF
  void *Src; // [rsp+168h] [rbp-170h]
  size_t Size; // [rsp+178h] [rbp-160h]
  int v57; // [rsp+2D0h] [rbp-8h]

  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
      while ( *(_DWORD *)(BugCheckParameter3 + 20) )
        _mm_pause();
      if ( PoResumeFromHibernate )
        return 1073742484;
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
      while ( *(_DWORD *)(BugCheckParameter3 + 24) )
        _mm_pause();
    }
  }
  else
  {
    PopCheckpointSystemSleep(19LL);
  }
  if ( (unsigned int)Number >= *(_DWORD *)(BugCheckParameter3 + 264) )
  {
    return 0;
  }
  else if ( (_DWORD)Number )
  {
    while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
      _mm_pause();
    LOBYTE(a3) = 1;
    v5 = Number << 7;
    PopCompressHiberBlocks(BugCheckParameter3, v5 + *(_QWORD *)(BugCheckParameter3 + 272), a3);
    _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
    while ( *(_DWORD *)(BugCheckParameter3 + 12) )
      _mm_pause();
    return (unsigned int)PopCompressHiberBlocks(BugCheckParameter3, v5 + *(_QWORD *)(BugCheckParameter3 + 272), 0LL);
  }
  else
  {
    PopWatchdogTimerCount = 0;
    _disable();
    if ( (v57 & 0x200) != 0 )
      PopInternalError(0xA1889uLL);
    v46 = IoDumpStackResumeCapable();
    if ( !v46 )
    {
      dword_14034B368 |= 4u;
      byte_14034B2E1 = 1;
    }
    if ( (unsigned int)PshedArePluginsPresent() )
    {
      dword_14034B368 |= 8u;
      byte_14034B2E1 = 1;
    }
    if ( !(unsigned __int8)off_14033B560[0]() )
    {
      dword_14034B368 |= 1u;
      byte_14034B2E1 = 1;
    }
    v6 = HvlHypervisorConnected == 0;
    v7 = *(_QWORD *)(BugCheckParameter3 + 200);
    *(_QWORD *)(BugCheckParameter3 + 160) = &v53;
    *(_QWORD *)(BugCheckParameter3 + 176) = &PoWakeState;
    *(_BYTE *)(BugCheckParameter3 + 2) = 1;
    if ( !v6 )
    {
      HvlDisableEnlightenment(0);
      off_14033B4B0[0]();
      if ( (HvlpFlags & 2) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
        while ( *(_DWORD *)(BugCheckParameter3 + 20) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_QWORD *)&v48 = qword_1403859E8;
        *((_QWORD *)&v48 + 1) = qword_140385988;
        *(_QWORD *)&v49 = qword_140385990;
        *((_QWORD *)&v49 + 1) = qword_140385980;
        *(_QWORD *)&v50 = qword_1403859A0;
        *((_QWORD *)&v50 + 1) = qword_140385998;
        if ( *(_BYTE *)(BugCheckParameter3 + 460) )
        {
          v51[0] = v48;
          v51[2] = v50;
          v51[1] = v49;
          v51[4] = xmmword_1403859D8;
          v51[3] = xmmword_1403859C8;
          v33 = HvlPrepareForSecureHibernate(v51);
        }
        else
        {
          v52[0] = v48;
          v52[2] = v50;
          v52[1] = v49;
          v52[4] = xmmword_1403859D8;
          v52[3] = xmmword_1403859C8;
          v33 = HvlPrepareForHibernate(
                  v52,
                  (_QWORD *)(v7 + 872),
                  (_QWORD *)(v7 + 880),
                  (_QWORD *)(v7 + 888),
                  (_QWORD *)(v7 + 896));
        }
        v34 = v33;
        if ( v33 < 0 )
        {
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v34, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
        }
        *(_DWORD *)(BugCheckParameter3 + 20) = 0;
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
        while ( *(_DWORD *)(BugCheckParameter3 + 24) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_DWORD *)(BugCheckParameter3 + 20) = KeNumberProcessors_0;
        *(_DWORD *)(BugCheckParameter3 + 24) = 0;
      }
      if ( *(_BYTE *)(BugCheckParameter3 + 460) )
        HvlDiscardSecurePagesFromHibernation((PVOID)BugCheckParameter3);
      else
        HvlDiscardPagesFromHibernation((PVOID)BugCheckParameter3);
    }
    ++*(_DWORD *)v7;
    v8 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    v9 = 0;
    v10 = *(_DWORD **)(BugCheckParameter3 + 56);
    v11 = *(_DWORD **)(BugCheckParameter3 + 40);
    if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        ++v9;
        *v10++ |= *v11++;
      }
      while ( v9 < v8->SizeOfBitMap >> 5 );
    }
    if ( byte_14034B2E1 )
    {
      v12 = (_RTL_BITMAP *)(BugCheckParameter3 + 32);
    }
    else
    {
      RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter3 + 48), (PRTL_BITMAP)(BugCheckParameter3 + 32), 0);
      v12 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    RtlSetAllBits(v12);
    v13 = *(_QWORD *)(BugCheckParameter3 + 168);
    *(_DWORD *)(BugCheckParameter3 + 184) = 8;
    IoGetDumpHiberRanges(v14, v13);
    if ( !byte_14034B2E1 )
      IoNotifyDump(1);
    v15 = __rdtsc();
    v16 = (int)IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
    v17 = __rdtsc();
    qword_14034B5E8 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v15;
    if ( (v16 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
    {
      PopCheckpointSystemSleep(20LL);
      PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
      KeBugCheckEx(0xA0u, 0xCuLL, v16, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
    }
    PopMarkComponentsBootPhase((PVOID)BugCheckParameter3);
    v18 = *(_QWORD **)(BugCheckParameter3 + 64);
    PoHiberInProgress = 1;
    if ( v18 != (_QWORD *)(BugCheckParameter3 + 64) )
    {
      do
      {
        v19 = v18[4];
        v20 = v18[3];
        v21 = (char *)v18[5];
        v18 = (_QWORD *)*v18;
        for ( *(_QWORD *)(BugCheckParameter3 + 88) += v19 - v20;
              v20 < v19;
              v20 += (unsigned __int64)(unsigned int)Size >> 12 )
        {
          PopCreateDumpMdl(BugCheckParameter3, (ULONG_PTR)v54, v20, v19);
          memmove(v21, Src, (unsigned int)Size);
          v21 += (unsigned int)Size;
        }
      }
      while ( v18 != (_QWORD *)(BugCheckParameter3 + 64) );
      v8 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    PopResetRangeEnum((_QWORD *)BugCheckParameter3);
    v22 = *(_QWORD **)(BugCheckParameter3 + 160);
    v23 = qword_14034B2B8;
    *v22 = qword_14034B2B8;
    v22[1] = v23;
    v22[2] = 0LL;
    v47 = __rdtsc();
    v25 = PopWriteHeaderPages(BugCheckParameter3, (_DWORD *)v7);
    if ( v25 >= 0 )
    {
      v26 = *(_DWORD *)(v7 + 80);
      if ( *(_BYTE *)(BugCheckParameter3 + 460) )
      {
        v35 = (unsigned int)PopHiberScratchPages;
        v36 = (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 256) + 2);
        *(_DWORD *)(BugCheckParameter3 + 184) = 3;
        *(_QWORD *)(v7 + 96) = v36 + ((unsigned __int64)(4 * v35 + 4095) >> 12);
        PopWriteSecurePages(BugCheckParameter3);
        qword_14034B770 = *(unsigned int *)(BugCheckParameter3 + 260);
      }
      *(_DWORD *)(BugCheckParameter3 + 184) = 4;
      *(_QWORD *)(BugCheckParameter3 + 96) = v8;
      v27 = RtlNumberOfClearBits(v8);
      v28 = qword_14034B338;
      v29 = *(_DWORD *)(BugCheckParameter3 + 288);
      v30 = *(_QWORD *)(BugCheckParameter3 + 280);
      v31 = (v27 + *(_QWORD *)(BugCheckParameter3 + 88)) << 12;
      memset(qword_14034B338, 0, 0x40uLL);
      v28[6] = 0;
      *(_QWORD *)v28 = v30;
      v28[2] = v29;
      *((_QWORD *)v28 + 2) = v31;
      qword_14034B778 = 0LL;
      qword_14034B780 = 0LL;
      *(_DWORD *)(BugCheckParameter3 + 336) = 0;
      *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
      if ( v46 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 168) + 128LL) )
        *(_BYTE *)(BugCheckParameter3 + 400) = 1;
      v32 = *(unsigned int *)(BugCheckParameter3 + 260)
          + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
          + (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 256) + 2);
      *(_QWORD *)(v7 + 104) = v32;
      *(_QWORD *)(BugCheckParameter3 + 384) = v32 << 12;
      *(_BYTE *)(BugCheckParameter3 + 4) = 1;
      PopWriteHiberImage(BugCheckParameter3);
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
      while ( *(_DWORD *)(BugCheckParameter3 + 12) != *(_DWORD *)(BugCheckParameter3 + 264) )
        _mm_pause();
      for ( i = 0;
            i < *(_DWORD *)(BugCheckParameter3 + 264);
            *(_QWORD *)(v38 + *(_QWORD *)(BugCheckParameter3 + 272) + 56) = 0LL )
      {
        v38 = i++;
        v38 <<= 7;
        qword_14034B778 += *(_QWORD *)(v38 + *(_QWORD *)(BugCheckParameter3 + 272) + 56);
      }
      qword_14034B788 = qword_14034B7A8;
      qword_14034B798 = (unsigned int)qword_14034B7B0;
      qword_14034B7A8 = 0LL;
      LODWORD(qword_14034B7B0) = 0;
      *(_DWORD *)(BugCheckParameter3 + 184) = 5;
      *(_QWORD *)(BugCheckParameter3 + 96) = BugCheckParameter3 + 32;
      *(_QWORD *)(BugCheckParameter3 + 112) = 0LL;
      v39 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 32));
      v40 = qword_14034B338;
      v41 = *(_DWORD *)(BugCheckParameter3 + 288);
      v42 = *(_QWORD *)(BugCheckParameter3 + 280);
      v43 = (unsigned __int64)v39 << 12;
      memset(qword_14034B338, 0, 0x40uLL);
      v40[6] = 0;
      *(_QWORD *)v40 = v42;
      v40[2] = v41;
      *((_QWORD *)v40 + 2) = v43;
      *(_QWORD *)(v7 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 384) + 4095LL) >> 12;
      *(_DWORD *)(BugCheckParameter3 + 12) = 0;
      *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
      PopWriteHiberImage(BugCheckParameter3);
      *(_DWORD *)(BugCheckParameter3 + 184) = 7;
      PopWriteChecksumPages(BugCheckParameter3);
      *(_DWORD *)(BugCheckParameter3 + 184) = 6;
      PopWriteImageHeader(BugCheckParameter3, v7, v26, v47);
      v25 = *(_DWORD *)(BugCheckParameter3 + 188);
      if ( v25 >= 0 )
      {
        v44 = PopSimulate;
        if ( (PopSimulate & 0x8000) == 0 && dword_14034B1A0 == dword_14034B1A8 )
        {
          DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFELL, 0LL);
          VslNotifyShutdown(1u);
          v44 = PopSimulate;
        }
        v25 = (v44 & 0x1000) != 0 ? 0xC00000C0 : 0;
      }
    }
    KdPowerTransition(4LL, v24);
    if ( v25 >= 0 && v25 != 1073742484 && dword_14034B1A0 == 5 )
      PopNotifyShutdownListener();
    PopCheckpointSystemSleep(24LL);
    off_14033B5D8[0]();
  }
  return (unsigned int)v25;
}
