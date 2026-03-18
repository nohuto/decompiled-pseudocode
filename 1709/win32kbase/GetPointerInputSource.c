/*
 * XREFs of GetPointerInputSource @ 0x1C012E7B0
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01233C8 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPointerInputSource(int a1, int a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  result = 2LL;
  v5 = a1 - 2;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          *a4 = 16;
        else
          *a4 = 0;
      }
      else
      {
        *a4 = 2;
      }
    }
    else
    {
      *a4 = 8;
    }
  }
  else
  {
    *a4 = 4;
  }
  if ( !a2 || a3 )
    a4[1] = 1;
  else
    a4[1] = 2;
  return result;
}
