/*
 * XREFs of MiGetUltraHugeAlreadyActive @ 0x14017BB60
 * Callers:
 *     MiGetHugePageToZero @ 0x14017B9F8 (MiGetHugePageToZero.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14006C950 (RtlFindClearBitsAndSet.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiDecrementHugeContext @ 0x14017C0A4 (MiDecrementHugeContext.c)
 *     MiReleaseLargeZeroingVa @ 0x140266E48 (MiReleaseLargeZeroingVa.c)
 */

unsigned int **__fastcall MiGetUltraHugeAlreadyActive(__int64 a1, __int64 a2)
{
  unsigned int **p_Buffer; // rbx
  __int64 v4; // r15
  ULONG v5; // eax
  __int16 v6; // bp
  __int64 v7; // rdi
  _RTL_BITMAP **v9; // r15
  _RTL_BITMAP *i; // r14
  ULONG ClearBitsAndSet; // eax

  p_Buffer = *(unsigned int ***)(a2 + 216);
  v4 = *(_QWORD *)(a2 + 224);
  if ( !p_Buffer )
  {
LABEL_5:
    v9 = (_RTL_BITMAP **)(v4 + 32);
    for ( i = *v9; ; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
    {
      if ( i == (_RTL_BITMAP *)v9 )
        return 0LL;
      p_Buffer = &i[-5].Buffer;
      ClearBitsAndSet = RtlFindClearBitsAndSet(i + 1, 1u, 0);
      v6 = ClearBitsAndSet;
      if ( ClearBitsAndSet != -1 )
      {
        v7 = (__int64)p_Buffer[21];
        MiLockPageAtDpcInline(v7);
        if ( !*((_BYTE *)p_Buffer + 69) )
        {
          ++*((_DWORD *)p_Buffer + 47);
          *(_QWORD *)(a2 + 216) = p_Buffer;
          goto LABEL_4;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  v5 = RtlFindClearBitsAndSet((PRTL_BITMAP)(p_Buffer + 11), 1u, 0);
  v6 = v5;
  if ( v5 == -1 )
  {
LABEL_13:
    if ( (unsigned int)MiDecrementHugeContext(p_Buffer) )
      MiReleaseLargeZeroingVa(a2, 1LL);
    *(_QWORD *)(a2 + 216) = 0LL;
    goto LABEL_5;
  }
  v7 = (__int64)p_Buffer[21];
  MiLockPageAtDpcInline(v7);
  if ( *((_BYTE *)p_Buffer + 69) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_13;
  }
LABEL_4:
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_WORD *)(a2 + 208) = v6;
  return p_Buffer;
}
