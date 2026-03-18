/*
 * XREFs of PoEnergyContextUpdateComponentPower @ 0x1406D031C
 * Callers:
 *     PsUpdateComponentPower @ 0x140116230 (PsUpdateComponentPower.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeQueryTimelineBitmapTime @ 0x1401FD9A4 (KeQueryTimelineBitmapTime.c)
 *     RtlTimelineBitmapUpdate @ 0x140204B38 (RtlTimelineBitmapUpdate.c)
 *     RtlStateDurationUpdate @ 0x140234F3C (RtlStateDurationUpdate.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140234FD8 (RtlTimelineBitmapUpdateRange.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406D0F54 (PopEtEnergyContextProcessStateUpdate.c)
 *     PopEtEnergyContextSetState @ 0x1406D0FDC (PopEtEnergyContextSetState.c)
 */

void __fastcall PoEnergyContextUpdateComponentPower(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  int v5; // ebp
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  unsigned int v10; // eax
  int v11; // r9d
  unsigned int v12; // r10d
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // edx
  unsigned int TimelineBitmapTime; // eax
  unsigned int *v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int *v22; // rcx
  _DWORD v24[36]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 1832);
  v5 = a3;
  PopAcquireRwLockExclusive(v3 + 344);
  v7 = a2 - 4;
  if ( !v7 )
  {
    RtlStateDurationUpdate(
      (unsigned __int64 *)(v3 + 104),
      v5 != 0,
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    if ( v5 )
    {
      *(_WORD *)(v3 + 376) |= 1u;
      TimelineBitmapTime = KeQueryTimelineBitmapTime();
      v19 = (unsigned int *)(v3 + 304);
      goto LABEL_24;
    }
    *(_WORD *)(v3 + 376) &= ~1u;
    v20 = KeQueryTimelineBitmapTime();
    v22 = (unsigned int *)(v3 + 304);
LABEL_26:
    RtlTimelineBitmapUpdateRange(v22, v20 - (v21 >> 12), v20);
    goto LABEL_27;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    RtlStateDurationUpdate(
      (unsigned __int64 *)(v3 + 112),
      v5 != 0,
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    if ( v5 )
    {
      *(_WORD *)(v3 + 376) |= 2u;
      TimelineBitmapTime = KeQueryTimelineBitmapTime();
      v19 = (unsigned int *)(v3 + 312);
LABEL_24:
      RtlTimelineBitmapUpdate(v19, TimelineBitmapTime);
LABEL_27:
      PopEtEnergyContextProcessStateUpdate(a1);
      goto LABEL_28;
    }
    *(_WORD *)(v3 + 376) &= ~2u;
    v20 = KeQueryTimelineBitmapTime();
    v22 = (unsigned int *)(v3 + 312);
    goto LABEL_26;
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      memset(v24, 0, sizeof(v24));
      v24[1] = HIDWORD(a3);
      v24[0] = v5;
      PopEtEnergyContextSetState(a1, v24);
    }
  }
  else
  {
    v10 = KeQueryTimelineBitmapTime();
    v11 = -1;
    v12 = v10;
    if ( (_WORD)v5 )
    {
      v13 = *(_DWORD *)(v3 + 128);
      if ( ~(unsigned __int16)v5 < v13 )
        v14 = -1;
      else
        v14 = v13 + (unsigned __int16)v5;
      *(_DWORD *)(v3 + 128) = v14;
      RtlTimelineBitmapUpdate((unsigned int *)(v3 + 320), v12);
    }
    if ( WORD1(a3) )
    {
      v15 = *(_DWORD *)(v3 + 132);
      v16 = v15 + WORD1(a3);
      if ( ~WORD1(a3) < v15 )
        v16 = v11;
      *(_DWORD *)(v3 + 132) = v16;
      RtlTimelineBitmapUpdate((unsigned int *)(v3 + 328), v12);
    }
    if ( WORD2(a3) )
    {
      v17 = *(_DWORD *)(v3 + 136);
      if ( ~WORD2(a3) >= v17 )
        v11 = v17 + WORD2(a3);
      *(_DWORD *)(v3 + 136) = v11;
      RtlTimelineBitmapUpdate((unsigned int *)(v3 + 336), v12);
    }
  }
LABEL_28:
  PopReleaseRwLock(v3 + 344);
}
