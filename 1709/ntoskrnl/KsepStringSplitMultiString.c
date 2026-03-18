/*
 * XREFs of KsepStringSplitMultiString @ 0x1405EA860
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140546714 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400F9FD8 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400FA000 (KsepPoolAllocatePaged.c)
 *     RtlAssert @ 0x1402538E0 (RtlAssert.c)
 *     KsepStringDuplicate @ 0x1405464B4 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x140546878 (KsepStringFree.c)
 */

__int64 __fastcall KsepStringSplitMultiString(__int64 a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  _QWORD *Paged; // rdi
  unsigned int v10; // esi
  unsigned int v11; // edx
  __int64 v12; // r8
  __int16 v13; // cx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebp
  unsigned int v17; // r15d
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rbp

  v5 = a2 >> 1;
  v6 = 0LL;
  Paged = 0LL;
  if ( !a1 || (a2 & 1) != 0 || !a3 || !a4 )
  {
    v20 = -1073741811;
    goto LABEL_32;
  }
  if ( v5 < 3 || *(_WORD *)(a1 + 2 * v5 - 2) || *(_WORD *)(a1 + 2 * v5 - 4) )
    return (unsigned int)-1073741811;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  do
  {
    ++v11;
    v13 = *(_WORD *)(2 * v12 + a1);
    v14 = v10 + 1;
    v12 = v11;
    if ( v13 )
      v14 = v10;
    v10 = v14;
  }
  while ( v11 < v5 );
  if ( v14 < 2 )
  {
    v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v22 + 1] = -1073740768;
    KsepHistoryErrors[2 * v22] = 197557;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("NullCount >= 2", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3B5u, 0LL);
  }
  v6 = v10 - 1;
  Paged = KsepPoolAllocatePaged(16LL * (unsigned int)v6);
  if ( !Paged )
    return (unsigned int)-1073741801;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = v5 - 1;
  if ( !v18 )
  {
LABEL_19:
    if ( v16 != (_DWORD)v6 )
    {
      v23 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v23 + 1] = -1073740768;
      KsepHistoryErrors[2 * v23] = 197597;
      if ( (KsepDebugFlag & 4) != 0 )
        RtlAssert("Count == StringsVectorSize", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3DDu, 0LL);
    }
    *a3 = Paged;
    v20 = 0;
    *a4 = v6;
    return v20;
  }
  v19 = 0LL;
  while ( *(_WORD *)(a1 + 2 * v19) )
  {
LABEL_18:
    v19 = ++v17;
    if ( v17 >= v18 )
      goto LABEL_19;
  }
  if ( (int)KsepStringDuplicate((__int64)&Paged[2 * v16], (_WORD *)(a1 + 2LL * v15)) >= 0 )
  {
    v15 = v17 + 1;
    ++v16;
    goto LABEL_18;
  }
  v20 = -1073741801;
LABEL_32:
  if ( Paged )
  {
    if ( (_DWORD)v6 )
    {
      v24 = Paged;
      do
      {
        KsepStringFree(v24);
        v24 += 2;
        --v6;
      }
      while ( v6 );
    }
    KsepPoolFreePaged(Paged);
  }
  return v20;
}
