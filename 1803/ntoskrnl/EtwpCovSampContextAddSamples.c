/*
 * XREFs of EtwpCovSampContextAddSamples @ 0x1407B414C
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x1407B358C (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampContextAddAddresses @ 0x1407B4058 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1407B6E40 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     EtwCovSampHash @ 0x1402B4674 (EtwCovSampHash.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x1407B3640 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampHashLookupInTable @ 0x1407B5FB8 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1407B6098 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1407B7634 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCovSampContextAddSamples(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned int v6; // r15d
  unsigned int v7; // esi
  volatile signed __int32 *v8; // r14
  __int64 v9; // r12
  unsigned int RoomAndAcquireLock; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  _DWORD *v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned int i; // r10d
  _QWORD *v19; // r13
  _QWORD *v21; // [rsp+30h] [rbp-88h]
  unsigned __int64 v22; // [rsp+38h] [rbp-80h]
  _QWORD *v23; // [rsp+40h] [rbp-78h]
  __int64 v24; // [rsp+48h] [rbp-70h]
  ULONG_PTR v25; // [rsp+58h] [rbp-60h]
  _QWORD *v26; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+D8h] [rbp+20h]

  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = (volatile signed __int32 *)(BugCheckParameter2 + 16);
  v25 = BugCheckParameter2 + 16;
  v9 = qword_1403A1CE8;
  RoomAndAcquireLock = EtwpCovSampHashMakeRoomAndAcquireLock(BugCheckParameter2);
  v28 = RoomAndAcquireLock;
  if ( RoomAndAcquireLock < a3 )
  {
    EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v9, 1);
    RoomAndAcquireLock = v28;
  }
  v14 = 0LL;
  while ( RoomAndAcquireLock && (unsigned int)v14 < a3 )
  {
    v15 = (_DWORD *)(v4 + 8 * v14);
    v23 = v15;
    v16 = *(_QWORD *)(BugCheckParameter2 + 1176);
    if ( !v16 )
      goto LABEL_14;
    LODWORD(v24) = *(_DWORD *)(v25 + 12);
    HIDWORD(v24) = v24;
    LODWORD(v22) = v15[1];
    HIDWORD(v22) = *v15;
    v17 = EtwCovSampHash(v22, v24);
    v13 = 1LL;
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 1192); ++i )
    {
      LOBYTE(v12) = *(_BYTE *)(((*(_DWORD *)(BugCheckParameter2 + 1188) & ((unsigned int)v17 + i * HIDWORD(v17))) >> 3)
                             + v16);
      v11 = (unsigned int)(1 << (*(_BYTE *)(BugCheckParameter2 + 1188) & (v17 + i * BYTE4(v17)) & 7));
      if ( ((unsigned __int8)v12 & (unsigned __int8)v11) == 0 )
      {
        v13 = 0LL;
        break;
      }
    }
    if ( !(_DWORD)v13 )
    {
      v15 = v23;
LABEL_14:
      v19 = *(_QWORD **)(BugCheckParameter2 + 1152);
      while ( 1 )
      {
        v21 = v19;
        if ( (unsigned int)EtwpCovSampHashLookupInTable(v19, v15, &v26) )
          break;
        v19 = (_QWORD *)*v19;
        v15 = v23;
        if ( v19 == (_QWORD *)(BugCheckParameter2 + 1152) )
        {
          *v26 = *v23;
          ++*((_DWORD *)v21 + 4);
          ++v6;
          RoomAndAcquireLock = --v28;
          goto LABEL_19;
        }
      }
    }
    ++v7;
    RoomAndAcquireLock = v28;
LABEL_19:
    v14 = (unsigned int)(v14 + 1);
    v4 = a2;
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v11, v12, v13);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  _InterlockedExchangeAdd(v8 + 150, v6);
  _InterlockedExchangeAdd(v8 + 151, v7);
  if ( a3 > v7 + v6 )
    _InterlockedExchangeAdd(v8 + 152, a3 - v7 - v6);
  return v6;
}
