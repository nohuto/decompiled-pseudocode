/*
 * XREFs of KeUnmaskInterrupt @ 0x14013CD98
 * Callers:
 *     IopUnmaskInterrupt @ 0x14013CD24 (IopUnmaskInterrupt.c)
 * Callees:
 *     KiIsInterruptTypeSecondary @ 0x14014CAA4 (KiIsInterruptTypeSecondary.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140200F98 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeUnmaskInterrupt(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  char IsInterruptTypeSecondary; // al
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax

  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v7 = 0;
  LOBYTE(v8) = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 8LL * (unsigned __int8)v8);
      _m_prefetchw((const void *)(v9 + 104));
      if ( (_InterlockedAnd((volatile signed __int32 *)(v9 + 104), 0xFFFFFFFE) & 1) == 0 )
        break;
      LOBYTE(v8) = v8 + 1;
      if ( (unsigned __int8)v8 >= a2 )
        goto LABEL_4;
    }
    v11 = 295;
  }
  else
  {
LABEL_4:
    if ( *(_DWORD *)(a3 + 8) )
      return 0LL;
    v10 = *(unsigned int *)(a3 + 64);
    if ( IsInterruptTypeSecondary != 0 )
      v11 = KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(*(_QWORD *)a1 + 88LL), (unsigned int)v10, v8);
    else
      v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))off_14033B488[0])(v10, 0LL, v8);
  }
  if ( v11 != 296 )
    return v11;
  return v7;
}
