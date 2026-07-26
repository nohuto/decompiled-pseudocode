/*
 * XREFs of ndisClonePMPatternList @ 0x1C004ACC4
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C002319C (ndisPMAddWOLPattern.c)
 *     ndisPMAddProtocolOffload @ 0x1C004C21C (ndisPMAddProtocolOffload.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 */

__int64 __fastcall ndisClonePMPatternList(unsigned int *Src, _QWORD **a2)
{
  unsigned int v2; // ebp
  unsigned int *v4; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi
  void *v7; // rcx

  v2 = 0;
  v4 = Src;
  if ( Src )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4[4], 0x6B70444Eu);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memmove(PoolWithTag, v4, v4[4]);
      *v6 = 0LL;
      v6[1] = 0LL;
      *v6 = *a2;
      *a2 = v6;
      v4 = *(unsigned int **)v4;
      if ( !v4 )
        return v2;
    }
    if ( (unsigned __int8)byte_1C0092612 >= 2u )
      WPP_SF_(0x62u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids);
    v2 = -1073741670;
    while ( *a2 )
    {
      v7 = *a2;
      *a2 = (_QWORD *)**a2;
      ExFreePoolWithTag(v7, 0);
    }
  }
  return v2;
}
