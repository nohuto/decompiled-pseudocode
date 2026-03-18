/*
 * XREFs of EtwpEnableKernelTrace @ 0x140596E88
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x140596CD8 (EtwpUpdateGlobalGroupMasks.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoPerfInit @ 0x1401FB2F0 (IoPerfInit.c)
 *     KeStartProfile @ 0x14020834C (KeStartProfile.c)
 *     DbgSetDebugPrintCallback @ 0x140250990 (DbgSetDebugPrintCallback.c)
 *     EtwpDisableKernelTrace @ 0x1405970E0 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14059726C (EtwpUpdateFileInfoDriverState.c)
 *     KeInitializeProfileCallback @ 0x1406D8620 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x1406D8798 (KeSetIntervalProfile.c)
 *     AlpcRegisterLogRoutine @ 0x1406DE260 (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x1406F0D00 (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x140742968 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(const __m128i *a1, char *a2, unsigned int a3)
{
  int updated; // r15d
  int v7; // r14d
  int v8; // eax
  __int64 v9; // r12
  int v10; // ebx
  int v11; // esi
  int v12; // eax
  unsigned int i; // ebx
  signed __int64 v15; // rdi
  _BYTE *v16; // rax
  unsigned int v17; // [rsp+20h] [rbp-60h]
  _QWORD v18[2]; // [rsp+28h] [rbp-58h] BYREF
  _DWORD v19[8]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v20[32]; // [rsp+58h] [rbp-28h] BYREF

  v17 = a3;
  updated = 0;
  memset(v19, 0, sizeof(v19));
  v7 = v19[1];
  if ( a2 )
  {
    v8 = *((_DWORD *)a2 + 1);
    if ( (v8 & 0x80000) != 0 )
    {
      v7 = v19[1] | 0x80000;
      v19[1] |= 0x80000u;
    }
    if ( (v8 & 0x800000) != 0 )
    {
      v7 |= 0x800000u;
      v19[1] = v7;
    }
  }
  if ( a1 && (a1->m128i_i32[1] & 0x880000) != 0 )
  {
    v18[1] = -1LL;
    v18[0] = 0LL;
    KeSetTimer2(
      (__int64)&EtwpMemInfoTimer,
      -10000LL * (unsigned int)EtwpMemInfoInterval,
      10000LL * (unsigned int)EtwpMemInfoInterval,
      (__int64)v18);
  }
  v9 = 2LL;
  if ( EtwpFileSystemReady && (updated = EtwpUpdateFileInfoDriverState(a1, a2, 1LL, a3, v17)) != 0 || !a2 )
  {
LABEL_55:
    if ( updated >= 0 )
      return (unsigned int)updated;
    goto LABEL_68;
  }
  v10 = v19[0];
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    v10 = v19[0] | 0x2000000;
    qword_1403560C8 = (__int64)EtwpTraceFileIo;
    v19[0] |= 0x2000000u;
  }
  if ( (*(_DWORD *)a2 & 0x4000000) != 0 )
  {
    v10 |= 0x4000000u;
    qword_1403560C0 = (__int64)EtwpTraceFileIo;
    v19[0] = v10;
  }
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
  {
    v10 |= 0x200u;
    qword_1403560B8 = (__int64)EtwpTraceFileName;
    v19[0] = v10;
  }
  if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    v10 |= 0x100u;
    EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
    qword_1403554A8 = (__int64)EtwpTraceRedirectedIo;
    v19[0] = v10;
  }
  if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    v10 |= 0x400u;
    qword_1403A2D00 = (__int64)EtwpTraceIoInit;
    v19[0] = v10;
  }
  v11 = v19[4];
  if ( (*((_DWORD *)a2 + 4) & 1) != 0 )
  {
    v11 = v19[4] | 1;
    qword_1403A2D08 = (__int64)EtwpTraceOpticalIo;
    v19[4] |= 1u;
  }
  if ( (*((_DWORD *)a2 + 4) & 2) != 0 )
  {
    v11 |= 2u;
    qword_1403A2D10 = (__int64)EtwpTraceOpticalIoInit;
    v19[4] = v11;
  }
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    v10 |= 0x200000u;
    EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
    v19[0] = v10;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x400000) != 0 )
  {
    v11 |= 0x400000u;
    qword_140355488 = (__int64)EtwpTraceFltIo;
    v19[4] = v11;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x80000) != 0 )
  {
    v11 |= 0x80000u;
    qword_140355490 = (__int64)EtwpTraceFltIo;
    v19[4] = v11;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x100000) != 0 )
  {
    v11 |= 0x100000u;
    qword_140355498 = (__int64)EtwpTraceFltTimedIo;
    v19[4] = v11;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x200000) != 0 )
  {
    v11 |= 0x200000u;
    qword_1403554A0 = (__int64)EtwpTraceFltTimedIo;
    v19[4] = v11;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x1000000) != 0 )
  {
    v11 |= 0x1000000u;
    qword_140358A88 = (__int64)EtwpTraceWdf;
    v19[4] = v11;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x2000000) != 0 )
  {
    v11 |= 0x2000000u;
    qword_140358A90 = (__int64)EtwpTraceWdf;
    v19[4] = v11;
  }
  if ( (*((_DWORD *)a2 + 2) & 0x8000000) != 0 )
  {
    v19[2] |= 0x8000000u;
    qword_140358A98 = (__int64)EtwpSystemTraceWdf;
  }
  v12 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    updated = 0;
    CmpTraceRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EtwpTraceRegistry;
    v10 |= 0x20000u;
    v19[0] = v10;
    CmpTraceTxrRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))EtwpTraceRegistryTransaction;
  }
  if ( (v12 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine();
    if ( updated < 0 )
      goto LABEL_68;
    v10 |= 0x100000u;
    v19[0] = v10;
  }
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify();
    v10 |= 0x10000u;
    v19[0] = v10;
  }
  if ( (*((_DWORD *)a2 + 1) & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_68;
    v7 |= 0x10u;
    v19[1] = v7;
  }
  if ( (*(_DWORD *)a2 & 0x40000) == 0 )
  {
LABEL_48:
    if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
    {
      KeSetIntervalProfile((unsigned int)EtwpProfileInterval, 0LL);
      KeInitializeProfileCallback(&EtwpProfileObject, EtwpProfileInterrupt, 0LL, 0LL);
      KeStartProfile((ULONG_PTR)&EtwpProfileObject);
      v7 |= 2u;
      v19[1] = v7;
    }
    if ( (*((_DWORD *)a2 + 1) & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_14035EC28 + 248 * i);
      v19[1] = v7 | 0x400;
    }
    if ( (*((_DWORD *)a2 + 4) & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace();
      v19[4] = v11 | 0x80;
    }
    if ( (*((_DWORD *)a2 + 1) & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
    goto LABEL_55;
  }
  updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
  if ( updated >= 0 )
  {
    v19[0] = v10 | 0x40000;
    goto LABEL_48;
  }
LABEL_68:
  v15 = a2 - (char *)a1;
  v16 = (_BYTE *)(v20 - (_BYTE *)a1);
  do
  {
    *(const __m128i *)((char *)a1 + (_QWORD)v16) = _mm_and_si128(
                                                     _mm_andnot_si128(
                                                       _mm_loadu_si128((const __m128i *)((char *)a1 + v15)),
                                                       (__m128i)_xmm_ffffffffffffffffffffffffffffffff),
                                                     _mm_loadu_si128(a1));
    ++a1;
    --v9;
  }
  while ( v9 );
  EtwpDisableKernelTrace(v20, v19, v17);
  return (unsigned int)updated;
}
