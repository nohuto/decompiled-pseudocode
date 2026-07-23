/*
 * XREFs of MiGetUltraHugeAlreadyActive @ 0x14015CF08
 * Callers:
 *     MiGetLargePageToZero @ 0x140129020 (MiGetLargePageToZero.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14005ED00 (RtlFindClearBitsAndSet.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiDecrementHugeContext @ 0x14015D00C (MiDecrementHugeContext.c)
 */

unsigned int **__fastcall MiGetUltraHugeAlreadyActive(__int64 a1, __int64 a2)
{
  unsigned int **p_Buffer; // rbx
  __int64 v4; // r15
  ULONG ClearBitsAndSet; // eax
  __int16 v6; // bp
  __int64 v7; // rdi
  _RTL_BITMAP **v9; // r15
  _RTL_BITMAP *i; // r14
  ULONG v11; // eax

  p_Buffer = *(unsigned int ***)(a2 + 112);
  v4 = *(_QWORD *)(a2 + 144);
  if ( p_Buffer )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(p_Buffer + 11), 1u, 0);
    v6 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1 )
    {
      v7 = (__int64)p_Buffer[21];
      MiLockPageAtDpcInline(v7);
      if ( !*((_BYTE *)p_Buffer + 68) )
      {
LABEL_4:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        *(_WORD *)(a2 + 106) = v6;
        return p_Buffer;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiDecrementHugeContext(a2);
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  v9 = (_RTL_BITMAP **)(v4 + 168);
  for ( i = *v9; i != (_RTL_BITMAP *)v9; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    p_Buffer = &i[-5].Buffer;
    v11 = RtlFindClearBitsAndSet(i + 1, 1u, 0);
    v6 = v11;
    if ( v11 != -1 )
    {
      v7 = (__int64)p_Buffer[21];
      MiLockPageAtDpcInline(v7);
      if ( !*((_BYTE *)p_Buffer + 68) )
      {
        ++*((_DWORD *)p_Buffer + 47);
        *(_QWORD *)(a2 + 112) = p_Buffer;
        goto LABEL_4;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return 0LL;
}
