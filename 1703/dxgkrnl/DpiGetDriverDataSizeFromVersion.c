/*
 * XREFs of DpiGetDriverDataSizeFromVersion @ 0x1C012068C
 * Callers:
 *     DpiInitializeEx @ 0x1C011FF5C (DpiInitializeEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDriverDataSizeFromVersion(int a1, unsigned int a2, int a3, int *a4)
{
  int v5; // eax

  *a4 = a3;
  if ( !a1 )
  {
    if ( a2 < 0x2001 )
    {
      *a4 = 496;
    }
    else if ( a2 < 0x2002 )
    {
      *a4 = 544;
    }
    else if ( a2 < 0x2003 )
    {
      *a4 = 552;
    }
    else if ( a2 < 0x3001 )
    {
      *a4 = 568;
    }
    else if ( a2 < 0x3002 )
    {
      *a4 = 576;
    }
    else if ( a2 < 0x3004 )
    {
      *a4 = 624;
    }
    else if ( a2 < 0x3005 )
    {
      *a4 = 632;
    }
    else if ( a2 < 0x300D )
    {
      *a4 = 656;
    }
    else if ( a2 < 0x4000 )
    {
      *a4 = 664;
    }
    else if ( a2 < 0x4002 )
    {
      *a4 = 696;
    }
    else if ( a2 < 0x5000 )
    {
      *a4 = 712;
    }
    else if ( a2 >= 0x6000 )
    {
      if ( a2 < 0x6002 )
      {
        *a4 = 864;
      }
      else if ( a2 < 0x7000 )
      {
        *a4 = 880;
      }
      else if ( a2 < 0x7002 )
      {
        *a4 = 936;
      }
      else if ( a2 < 0x7003 )
      {
        *a4 = 952;
      }
      else
      {
        v5 = a3;
        if ( a2 < 0x7004 )
          v5 = 1008;
        *a4 = v5;
      }
    }
    else
    {
      *a4 = 832;
    }
  }
  return 0LL;
}
