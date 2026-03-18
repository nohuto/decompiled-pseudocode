/*
 * XREFs of PoEnergyContextUpdateComponentPower @ 0x14050D500
 * Callers:
 *     PsUpdateComponentPower @ 0x1400D4850 (PsUpdateComponentPower.c)
 *     NtSetThreadExecutionState @ 0x1404F19F4 (NtSetThreadExecutionState.c)
 *     PopProcessDisplayRequiredChange @ 0x1404F23DC (PopProcessDisplayRequiredChange.c)
 * Callees:
 *     RtlTimelineBitmapUpdate @ 0x1400071A8 (RtlTimelineBitmapUpdate.c)
 *     RtlTimelineBitmapUpdateRange @ 0x140008488 (RtlTimelineBitmapUpdateRange.c)
 *     RtlStateDurationUpdate @ 0x14001319C (RtlStateDurationUpdate.c)
 *     KeQueryTimelineBitmapTime @ 0x140025A10 (KeQueryTimelineBitmapTime.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopEtEnergyContextSetState @ 0x140457394 (PopEtEnergyContextSetState.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1404574E8 (PopEtEnergyContextProcessStateUpdate.c)
 */

void __fastcall PoEnergyContextUpdateComponentPower(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  int v7; // esi
  int v8; // esi
  int v9; // esi
  unsigned int v10; // eax
  int v11; // r9d
  unsigned int v12; // r10d
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  __int64 *v16; // rcx
  unsigned int TimelineBitmapTime; // edx
  unsigned int v18; // edx
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // edx
  int v22; // r9d
  unsigned __int8 v23; // bl
  unsigned int v24; // eax
  unsigned int v25; // r8d
  __int64 *v26; // rcx
  unsigned int v27; // eax
  unsigned int *v28; // rcx
  unsigned __int8 v29; // bl
  __int64 v30; // rbp
  unsigned __int8 v31; // bl
  __int64 *v32; // rbp
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // r8d
  bool v36; // zf
  _QWORD *v37; // r11
  int v38; // r8d
  unsigned int v39; // edx
  int v40; // r9d
  int v41; // eax
  int v42; // eax
  int v43; // ebx
  __int64 v44; // [rsp+20h] [rbp-D8h]
  __int64 v45; // [rsp+20h] [rbp-D8h]
  _DWORD v47[36]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 1856);
  v4 = a3;
  if ( v3 )
  {
    PopAcquireRwLockExclusive(v3 + 432);
    if ( a2 == 9 )
    {
      v20 = HIDWORD(*(_QWORD *)(v3 + 384));
      v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_QWORD *)(v3 + 384);
      if ( v21 > 0x3E8 )
        v21 = 1000;
      v22 = -1;
      if ( ~v21 >= (v20 & 0x7FFFFFFFu) )
        v22 = (v20 & 0x7FFFFFFF) + v21;
      HIDWORD(v44) = (v20 ^ v22) & 0x7FFFFFFF ^ v20;
      LODWORD(v44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_QWORD *)(v3 + 384) = v44;
      TimelineBitmapTime = KeQueryTimelineBitmapTime();
      v16 = (__int64 *)(v3 + 344);
      goto LABEL_16;
    }
    if ( a2 > 9 )
    {
      if ( a2 <= 11 )
      {
        v30 = 360LL;
        v31 = v4 != 0;
        if ( a2 != 11 )
          v30 = 352LL;
        v32 = (__int64 *)(v3 + v30);
        v33 = 400LL;
        if ( a2 != 11 )
          v33 = 392LL;
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + v33),
          v31,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v34 = KeQueryTimelineBitmapTime();
        v36 = v31 == 0;
        v16 = v32;
      }
      else
      {
        if ( a2 == 13 )
        {
          ++*(_DWORD *)(v3 + 424);
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v16 = (__int64 *)(v3 + 376);
          goto LABEL_16;
        }
        if ( a2 != 12 )
        {
          if ( a2 == 14 )
            ++*(_DWORD *)(v3 + 428);
          goto LABEL_17;
        }
        v37 = (_QWORD *)(v3 + 408);
        switch ( v4 )
        {
          case 3:
            if ( *(int *)(v3 + 412) < 0 )
              goto LABEL_17;
            v38 = HIDWORD(*v37);
            v39 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *v37;
            if ( v39 > 0x1000 )
              v39 = 4096;
            v40 = -1;
            if ( ~v39 >= (v38 & 0x7FFFFFFFu) )
              v40 = (v38 & 0x7FFFFFFF) + v39;
            HIDWORD(v45) = (v38 ^ v40) & 0x7FFFFFFF ^ v38;
            LODWORD(v45) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            *v37 = v45;
            TimelineBitmapTime = KeQueryTimelineBitmapTime();
            v16 = (__int64 *)(v3 + 368);
            goto LABEL_16;
          case 1:
            if ( ++*(_DWORD *)(v3 + 472) > 1u )
              goto LABEL_17;
            break;
          case 2:
            v41 = *(_DWORD *)(v3 + 472);
            if ( v41 )
            {
              v42 = v41 - 1;
              *(_DWORD *)(v3 + 472) = v42;
              if ( v42 )
                goto LABEL_17;
            }
            break;
          default:
            goto LABEL_17;
        }
        v43 = *(_DWORD *)(v3 + 472);
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 408),
          v43 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v34 = KeQueryTimelineBitmapTime();
        v36 = v43 == 0;
        v16 = (__int64 *)(v3 + 368);
      }
      TimelineBitmapTime = v34;
      if ( v36 )
      {
        RtlTimelineBitmapUpdateRange(v16, v34 - (v35 >> 12), v34);
        goto LABEL_17;
      }
      goto LABEL_16;
    }
    v7 = a2 - 4;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            memset(v47, 0, sizeof(v47));
            v47[1] = HIDWORD(a3);
            v47[0] = v4;
            PopEtEnergyContextSetState(a1, v47);
          }
          goto LABEL_17;
        }
        v10 = KeQueryTimelineBitmapTime();
        v11 = -1;
        v12 = v10;
        if ( (_WORD)v4 )
        {
          v13 = *(_DWORD *)(v3 + 128);
          if ( ~(unsigned __int16)v4 < v13 )
            v14 = -1;
          else
            v14 = v13 + (unsigned __int16)v4;
          *(_DWORD *)(v3 + 128) = v14;
          RtlTimelineBitmapUpdate((unsigned int *)(v3 + 320), v12);
        }
        if ( WORD1(a3) )
        {
          v18 = *(_DWORD *)(v3 + 132);
          v19 = v18 + WORD1(a3);
          if ( ~WORD1(a3) < v18 )
            v19 = v11;
          *(_DWORD *)(v3 + 132) = v19;
          RtlTimelineBitmapUpdate((unsigned int *)(v3 + 328), v12);
        }
        if ( !WORD2(a3) )
        {
LABEL_17:
          PopReleaseRwLock(v3 + 432);
          return;
        }
        v15 = *(_DWORD *)(v3 + 136);
        if ( ~WORD2(a3) >= v15 )
          v11 = v15 + WORD2(a3);
        *(_DWORD *)(v3 + 136) = v11;
        v16 = (__int64 *)(v3 + 336);
        TimelineBitmapTime = v12;
LABEL_16:
        RtlTimelineBitmapUpdate((unsigned int *)v16, TimelineBitmapTime);
        goto LABEL_17;
      }
      v29 = v4 != 0;
      RtlStateDurationUpdate(
        (unsigned __int64 *)(v3 + 112),
        v29,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      if ( !v29 )
      {
        *(_WORD *)(v3 + 464) &= ~2u;
        v24 = KeQueryTimelineBitmapTime();
        v26 = (__int64 *)(v3 + 312);
        goto LABEL_31;
      }
      *(_WORD *)(v3 + 464) |= 2u;
      v27 = KeQueryTimelineBitmapTime();
      v28 = (unsigned int *)(v3 + 312);
    }
    else
    {
      v23 = v4 != 0;
      RtlStateDurationUpdate(
        (unsigned __int64 *)(v3 + 104),
        v23,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
      if ( !v23 )
      {
        *(_WORD *)(v3 + 464) &= ~1u;
        v24 = KeQueryTimelineBitmapTime();
        v26 = (__int64 *)(v3 + 304);
LABEL_31:
        RtlTimelineBitmapUpdateRange(v26, v24 - (v25 >> 12), v24);
LABEL_32:
        PopEtEnergyContextProcessStateUpdate(a1);
        goto LABEL_17;
      }
      *(_WORD *)(v3 + 464) |= 1u;
      v27 = KeQueryTimelineBitmapTime();
      v28 = (unsigned int *)(v3 + 304);
    }
    RtlTimelineBitmapUpdate(v28, v27);
    goto LABEL_32;
  }
}
