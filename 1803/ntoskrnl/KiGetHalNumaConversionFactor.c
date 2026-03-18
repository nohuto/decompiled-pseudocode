/*
 * XREFs of KiGetHalNumaConversionFactor @ 0x1408E0018
 * Callers:
 *     KiComputeNumaCosts @ 0x1408B32B4 (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiGetHalNumaConversionFactor(_DWORD *a1)
{
  int v1; // r8d
  int v3; // r9d
  __int64 v4; // r10
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 result; // rax

  v1 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      v3 = 0;
      if ( KeNumberNodes )
        break;
LABEL_6:
      if ( ++v1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
        goto LABEL_7;
    }
    while ( 1 )
    {
      v4 = v3 + v1 * (unsigned int)(unsigned __int16)KeNumberNodes;
      v5 = *((_QWORD *)KiActualNodeCost + v4);
      if ( v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v6 = *((unsigned int *)KeNodeDistance + v4);
        if ( (unsigned int)v6 > 1 )
          break;
      }
      if ( ++v3 >= (unsigned int)(unsigned __int16)KeNumberNodes )
        goto LABEL_6;
    }
    if ( v6 < v5 )
      result = 100 * v5 / v6;
    else
      result = (unsigned int)(100 * v6) / v5;
    *a1 = 3 - (v6 < v5);
  }
  else
  {
LABEL_7:
    *a1 = 1;
    return 0LL;
  }
  return result;
}
