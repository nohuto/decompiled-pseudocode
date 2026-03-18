/*
 * XREFs of KeUnmaskInterrupt @ 0x140207FF4
 * Callers:
 *     IopUnmaskInterrupt @ 0x1401FDA00 (IopUnmaskInterrupt.c)
 * Callees:
 *     KiIsInterruptTypeSecondary @ 0x1400B378C (KiIsInterruptTypeSecondary.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140207438 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeUnmaskInterrupt(__int64 a1, unsigned __int8 a2, _DWORD *a3)
{
  char IsInterruptTypeSecondary; // al
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx

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
    if ( a3[2] )
      return 0LL;
    v12 = (unsigned int)a3[16];
    if ( IsInterruptTypeSecondary != 0 )
      v11 = KiUnmaskSecondaryInterruptInternal(*(_DWORD *)(*(_QWORD *)a1 + 88LL), v12);
    else
      v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))off_1403534B8[0])(v12, 0LL, v8);
  }
  if ( v11 != 296 )
    return v11;
  return v7;
}
