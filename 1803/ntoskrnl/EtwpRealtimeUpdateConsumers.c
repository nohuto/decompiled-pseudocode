/*
 * XREFs of EtwpRealtimeUpdateConsumers @ 0x14058E8A0
 * Callers:
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

LONG __fastcall EtwpRealtimeUpdateConsumers(__int64 a1)
{
  ULONG_PTR v1; // rsi
  LONG result; // eax
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v9; // ebp
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *i; // rcx

  v1 = a1 + 704;
  if ( (*(_DWORD *)(a1 + 836) & 0x20) != 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
    v4 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    ExReleasePushLockEx(v1, 0LL, v5, v6);
    v7 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_OWORD *)(v7 + 80) = *(_OWORD *)(a1 + 448);
    v8 = *(_QWORD **)(a1 + 352);
    if ( *v8 != a1 + 344 )
      __fastfail(3u);
    *(_QWORD *)v4 = a1 + 344;
    *(_QWORD *)(v4 + 8) = v8;
    *v8 = v4;
    *(_QWORD *)(a1 + 352) = v4;
    ++*(_DWORD *)(a1 + 360);
    *(_BYTE *)(v4 + 90) &= ~8u;
    _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x40u);
    *(_DWORD *)(a1 + 56) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFDF);
    KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
  }
  result = *(_DWORD *)(a1 + 836);
  if ( (result & 0x10) != 0 )
  {
    v9 = -1073741162;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    v10 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 368) = 0LL;
    ExReleasePushLockEx(v1, 0LL, v11, v12);
    for ( i = *(_QWORD **)(a1 + 344); i != (_QWORD *)(a1 + 344); i = (_QWORD *)*i )
    {
      if ( (_QWORD *)v10 == i && (*(_BYTE *)(v10 + 90) & 1) == 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 836), 4u);
        *(_BYTE *)(v10 + 90) |= 1u;
        v9 = 0;
      }
    }
    *(_DWORD *)(a1 + 56) = v9;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFEF);
    return KeSetEvent((PRKEVENT)(a1 + 472), 0, 0);
  }
  return result;
}
