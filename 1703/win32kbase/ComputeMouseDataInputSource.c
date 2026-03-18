/*
 * XREFs of ComputeMouseDataInputSource @ 0x1C012E690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ComputeMouseDataInputSource(__int64 a1, char a2, char a3, unsigned int *a4)
{
  __int16 v4; // ax

  if ( a1 )
  {
    v4 = *(_WORD *)(a1 + 2);
    if ( (v4 & 0x10) != 0 )
    {
      *a4 = 4;
    }
    else if ( (v4 & 0x40) != 0 )
    {
      *a4 = 8;
    }
    else if ( (v4 & 0x80u) == 0 )
    {
      *a4 = (v4 & 0x100 | 0x10u) >> 3;
    }
    else
    {
      *a4 = 18;
    }
    if ( a3 )
      a4[1] = 1;
    else
      a4[1] = a2 != 0 ? 2 : 0;
  }
  else
  {
    *a4 = 0;
    a4[1] = 4;
  }
}
