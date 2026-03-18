/*
 * XREFs of CcSetLazyWriteScanQueued @ 0x1400326C0
 * Callers:
 *     CcLazyWriteScan @ 0x1400AEDEC (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x14015E860 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     <none>
 */

void __fastcall CcSetLazyWriteScanQueued(_BYTE *a1, int a2, char a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        v6 = v5 - 4;
        if ( v6 )
        {
          if ( v6 == 8 )
            a1[670] = a3;
        }
        else
        {
          a1[666] = a3;
        }
      }
      else
      {
        a1[667] = a3;
      }
    }
    else
    {
      a1[669] = a3;
    }
  }
  else
  {
    a1[668] = a3;
  }
}
