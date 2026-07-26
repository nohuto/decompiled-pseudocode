/*
 * XREFs of ndisClonePMPatternList @ 0x1C0049B4C
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C0014590 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C00249E0 (ndisPMAddWOLPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

__int64 __fastcall ndisClonePMPatternList(unsigned int *Src, _QWORD *a2)
{
  unsigned int v2; // ebp
  unsigned int *v4; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx

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
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
      WPP_SF_(0x62u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids);
    v2 = -1073741670;
    while ( 1 )
    {
      v7 = (_QWORD *)*a2;
      if ( !*a2 )
        break;
      *a2 = *v7;
      ExFreePoolWithTag(v7, 0);
    }
  }
  return v2;
}
