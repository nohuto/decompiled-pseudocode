/*
 * XREFs of PopFxAllocatePowerIrp @ 0x1400B420C
 * Callers:
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IoAcquireRemoveLockEx @ 0x1400FD8A0 (IoAcquireRemoveLockEx.c)
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
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
  char v18; // al
  bool v19; // zf
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  signed __int32 v22; // ett
  signed __int32 v23; // r8d
  __int16 v24; // ax
  _BOOL8 v25; // rcx
  signed __int32 v26; // r8d
  KIRQL v27; // [rsp+80h] [rbp+38h]
  volatile LONG *SpinLocka; // [rsp+88h] [rbp+40h]

  SpinLocka = (volatile LONG *)(a1 + 88);
  *(_QWORD *)SpinLock = 0LL;
  *a7 = 0LL;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v15 = *(_QWORD *)(a1 + 80);
  v27 = v14;
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
  v18 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
  _m_prefetchw((const void *)(v15 + 32));
  v19 = (v18 & 0x10) == 0;
  v20 = *(_DWORD *)(v15 + 32);
  if ( v19 )
  {
    do
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 32), v20, v20);
    }
    while ( v21 != v20 );
    if ( (v20 & 0x10) == 0 )
    {
      _m_prefetchw((const void *)(v15 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x20) != 0 )
      {
        if ( a6 )
        {
          _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
          _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x100u);
          _m_prefetchw((const void *)(v15 + 32));
          v26 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x100;
          _m_prefetchw((const void *)(v15 + 32));
          if ( (v26 != 0) == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1) )
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
  }
  else
  {
    do
    {
      v22 = v20;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 32), v20, v20);
    }
    while ( v22 != v20 );
    if ( (v20 & 0x20) != 0
      && (_m_prefetchw((const void *)(v15 + 32)),
          v23 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x100,
          _m_prefetchw((const void *)(v15 + 32)),
          (v23 != 0) == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1)) )
    {
      v16 = -1073741670;
    }
    else
    {
      _m_prefetchw((const void *)(v15 + 32));
      v24 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
      _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x20u);
      _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x200u);
      v16 = 259;
      v25 = (v24 & 0x200) != 0;
      *(_QWORD *)(v15 + 8 * v25 + 488) = a2;
      *(_DWORD *)(v15 + 4 * v25 + 504) = a3;
      *(_QWORD *)(v15 + 8 * v25 + 512) = a4;
      *(_QWORD *)(v15 + 8 * v25 + 528) = a5;
    }
  }
LABEL_3:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
  __writecr8(v27);
  if ( v15 )
    PopFxAddLogEntry(*(_QWORD *)(v15 + 48), 0LL, 21LL, v16);
  return (unsigned int)v16;
}
