/*
 * XREFs of PopFxAllocatePowerIrp @ 0x140167CD0
 * Callers:
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     PopFxAddLogEntry @ 0x140077F7C (PopFxAddLogEntry.c)
 *     IoAcquireRemoveLockEx @ 0x1400782B0 (IoAcquireRemoveLockEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     IoReleaseRemoveLockEx @ 0x1400BA4B0 (IoReleaseRemoveLockEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall PopFxAllocatePowerIrp(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7,
        PEX_SPIN_LOCK SpinLock)
{
  KIRQL v14; // al
  __int64 v15; // rdi
  NTSTATUS v16; // esi
  signed __int32 v18; // edx
  char v19; // al
  signed __int32 v20; // r8d
  __int16 v21; // ax
  _BOOL8 v22; // rcx
  signed __int32 v23; // r8d
  KIRQL v24; // [rsp+80h] [rbp+38h]
  volatile LONG *SpinLocka; // [rsp+88h] [rbp+40h]

  SpinLocka = (volatile LONG *)(a1 + 88);
  *(_QWORD *)SpinLock = 0LL;
  *a7 = 0LL;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v15 = *(_QWORD *)(a1 + 80);
  v24 = v14;
  if ( !v15 )
  {
    v16 = -1073741130;
    goto LABEL_3;
  }
  if ( a6 )
  {
    v16 = 0;
  }
  else
  {
    v16 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v15 + 216), 0LL, &File, 1u, 0x20u);
    if ( v16 < 0 )
      goto LABEL_3;
  }
  _m_prefetchw((const void *)(v15 + 32));
  v18 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x10;
  _m_prefetchw((const void *)(v15 + 32));
  v19 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
  if ( v18 )
  {
    if ( (v19 & 0x20) != 0
      && (_m_prefetchw((const void *)(v15 + 32)),
          v20 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x100,
          _m_prefetchw((const void *)(v15 + 32)),
          (v20 != 0) == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1)) )
    {
      v16 = -1073741670;
    }
    else
    {
      _m_prefetchw((const void *)(v15 + 32));
      v21 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
      _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x20u);
      _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x200u);
      v16 = 259;
      v22 = (v21 & 0x200) != 0;
      *(_QWORD *)(v15 + 8 * v22 + 488) = a2;
      *(_DWORD *)(v15 + 4 * v22 + 504) = a3;
      *(_QWORD *)(v15 + 8 * v22 + 512) = a4;
      *(_QWORD *)(v15 + 8 * v22 + 528) = a5;
    }
  }
  else if ( (v19 & 0x10) == 0 )
  {
    _m_prefetchw((const void *)(v15 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x20) != 0 )
    {
      if ( a6 )
      {
        _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
        _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x100u);
        _m_prefetchw((const void *)(v15 + 32));
        v23 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x100;
        _m_prefetchw((const void *)(v15 + 32));
        if ( (v23 != 0) == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1) )
          _InterlockedAnd((volatile signed __int32 *)(v15 + 32), 0xFFFFFFDF);
        _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x10u);
        v16 = 0;
        *a7 = *(_QWORD *)(v15 + 16);
        *(_QWORD *)SpinLock = *(_QWORD *)(v15 + 24);
      }
      else
      {
        v16 = -1073741670;
      }
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v15 + 216), 0LL, 0x20u);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x10u);
      KeResetEvent((PRKEVENT)(v15 + 544));
      v16 = 0;
      *a7 = *(_QWORD *)(v15 + 16);
      *(_QWORD *)SpinLock = *(_QWORD *)(v15 + 24);
    }
  }
LABEL_3:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
  __writecr8(v24);
  if ( v15 )
    PopFxAddLogEntry(*(_QWORD *)(v15 + 48), 0, 21, v16);
  return (unsigned int)v16;
}
