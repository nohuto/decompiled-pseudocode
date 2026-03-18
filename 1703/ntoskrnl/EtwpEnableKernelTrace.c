/*
 * XREFs of EtwpEnableKernelTrace @ 0x140435210
 * Callers:
 *     EtwpUpdateKernelGroupMasks @ 0x1404350C0 (EtwpUpdateKernelGroupMasks.c)
 * Callees:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IoPerfInit @ 0x1401F5504 (IoPerfInit.c)
 *     KeStartProfile @ 0x140201D7C (KeStartProfile.c)
 *     DbgSetDebugPrintCallback @ 0x14023B0F0 (DbgSetDebugPrintCallback.c)
 *     EtwpDisableKernelTrace @ 0x1404354A0 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140435640 (EtwpUpdateFileInfoDriverState.c)
 *     KeSetIntervalProfile @ 0x14056DF7C (KeSetIntervalProfile.c)
 *     KeInitializeProfileCallback @ 0x1406AD320 (KeInitializeProfileCallback.c)
 *     AlpcRegisterLogRoutine @ 0x1406B2510 (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x1406C2280 (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x140708DD4 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(const __m128i *a1, char *a2, unsigned int a3)
{
  int updated; // r15d
  __int64 v7; // r9
  int v8; // r14d
  int v9; // eax
  __int64 v10; // r12
  int v11; // ebx
  int v12; // esi
  int v13; // eax
  unsigned int i; // ebx
  signed __int64 v16; // rdi
  _BYTE *v17; // rax
  unsigned int v18; // [rsp+20h] [rbp-60h]
  _QWORD v19[2]; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v20[8]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v21[32]; // [rsp+58h] [rbp-28h] BYREF

  v18 = a3;
  updated = 0;
  memset(v20, 0, sizeof(v20));
  v8 = v20[1];
  if ( a2 )
  {
    v9 = *((_DWORD *)a2 + 1);
    if ( (v9 & 0x80000) != 0 )
    {
      v8 = v20[1] | 0x80000;
      v20[1] |= 0x80000u;
    }
    if ( (v9 & 0x800000) != 0 )
    {
      v8 |= 0x800000u;
      v20[1] = v8;
    }
  }
  if ( a1 && (a1->m128i_i32[1] & 0x880000) != 0 )
  {
    v19[1] = -1LL;
    v19[0] = 0LL;
    KeSetTimer2(
      (__int64)&EtwpMemInfoTimer,
      -10000LL * (unsigned int)EtwpMemInfoInterval,
      10000LL * (unsigned int)EtwpMemInfoInterval,
      (__int64)v19);
  }
  v10 = 2LL;
  if ( EtwpFileSystemReady && (updated = EtwpUpdateFileInfoDriverState(a1, a2, 1LL, a3, v18)) != 0 || !a2 )
  {
LABEL_56:
    if ( updated >= 0 )
      return (unsigned int)updated;
    goto LABEL_67;
  }
  v11 = v20[0];
  v7 = 0x2000000LL;
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    v11 = v20[0] | 0x2000000;
    qword_14033B780 = (__int64)EtwpTraceFileIo;
    v20[0] |= 0x2000000u;
  }
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
  {
    v11 |= 0x4000000u;
    qword_14033B778 = (__int64)EtwpTraceFileIo;
    v20[0] = v11;
  }
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
  {
    v11 |= 0x200u;
    qword_14033B770 = (__int64)EtwpTraceFileName;
    v20[0] = v11;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    v11 |= 0x100u;
    EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
    qword_14033B760 = (__int64)EtwpTraceRedirectedIo;
    v20[0] = v11;
  }
  if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    v11 |= 0x400u;
    qword_14036B938 = (__int64)EtwpTraceIoInit;
    v20[0] = v11;
  }
  v12 = v20[4];
  if ( (*((_DWORD *)a2 + 4) & 1) != 0 )
  {
    v12 = v20[4] | 1;
    qword_14036B940 = (__int64)EtwpTraceOpticalIo;
    v20[4] |= 1u;
  }
  if ( (*((_DWORD *)a2 + 4) & 2) != 0 )
  {
    v12 |= 2u;
    qword_14036B948 = (__int64)EtwpTraceOpticalIoInit;
    v20[4] = v12;
  }
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    v11 |= 0x200000u;
    EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
    v20[0] = v11;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x400000) != 0 )
  {
    v12 |= 0x400000u;
    qword_14033B740 = (__int64)EtwpTraceFltIo;
    v20[4] = v12;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x80000) != 0 )
  {
    v12 |= 0x80000u;
    qword_14033B748 = (__int64)EtwpTraceFltIo;
    v20[4] = v12;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x100000) != 0 )
  {
    v12 |= 0x100000u;
    qword_14033B750 = (__int64)EtwpTraceFltTimedIo;
    v20[4] = v12;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x200000) != 0 )
  {
    v12 |= 0x200000u;
    qword_14033B758 = (__int64)EtwpTraceFltTimedIo;
    v20[4] = v12;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x1000000) != 0 )
  {
    v12 |= 0x1000000u;
    qword_140340030 = (__int64)EtwpTraceWdf;
    v20[4] = v12;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x2000000) != 0 )
  {
    v12 |= 0x2000000u;
    qword_140340038 = (__int64)EtwpTraceWdf;
    v20[4] = v12;
  }
  if ( (*((_DWORD *)a2 + 2) & 0x8000000) != 0 )
  {
    v20[2] |= 0x8000000u;
    qword_140340040 = (__int64)EtwpSystemTraceWdf;
  }
  v13 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    updated = 0;
    CmpTraceRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EtwpTraceRegistry;
    v11 |= 0x20000u;
    v20[0] = v11;
    CmpTraceTxrRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))EtwpTraceRegistryTransaction;
  }
  if ( (v13 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine();
    if ( updated < 0 )
      goto LABEL_67;
    v11 |= 0x100000u;
    v20[0] = v11;
  }
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify();
    v11 |= 0x10000u;
    v20[0] = v11;
  }
  if ( (*((_DWORD *)a2 + 1) & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_67;
    v8 |= 0x10u;
    v20[1] = v8;
  }
  if ( (*(_DWORD *)a2 & 0x40000) == 0 )
  {
LABEL_49:
    if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
    {
      KeSetIntervalProfile((unsigned int)EtwpProfileInterval, 0LL);
      KeInitializeProfileCallback(&EtwpProfileObject, EtwpProfileInterrupt, 0LL, 0LL);
      KeStartProfile((ULONG_PTR)&EtwpProfileObject);
      v8 |= 2u;
      v20[1] = v8;
    }
    if ( (*((_DWORD *)a2 + 1) & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_140345208 + 248 * i);
      v20[1] = v8 | 0x400;
    }
    if ( (*((_DWORD *)a2 + 4) & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace();
      v20[4] = v12 | 0x80;
    }
    if ( (*((_DWORD *)a2 + 1) & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
    goto LABEL_56;
  }
  updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
  if ( updated >= 0 )
  {
    v20[0] = v11 | 0x40000;
    goto LABEL_49;
  }
LABEL_67:
  v16 = a2 - (char *)a1;
  v17 = (_BYTE *)(v21 - (_BYTE *)a1);
  do
  {
    *(const __m128i *)((char *)a1 + (_QWORD)v17) = _mm_and_si128(
                                                     _mm_andnot_si128(
                                                       _mm_loadu_si128((const __m128i *)((char *)a1 + v16)),
                                                       (__m128i)_xmm_ffffffffffffffffffffffffffffffff),
                                                     _mm_loadu_si128(a1));
    ++a1;
    --v10;
  }
  while ( v10 );
  EtwpDisableKernelTrace(v21, v20, v18, v7);
  return (unsigned int)updated;
}
