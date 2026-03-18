/*
 * XREFs of ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800BB6E4
 * Callers:
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x1800AA384 (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800AA4CC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AddToResourceCount(_DWORD *a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( a2 <= 78 )
  {
    if ( a2 == 78 )
    {
      a1[18] += a3;
      return;
    }
    if ( a2 != 26 )
    {
      if ( a2 <= 28 )
        goto LABEL_6;
      if ( a2 != 34 && a2 > 31 )
      {
        if ( a2 == 35 )
        {
          a1[20] += a3;
          return;
        }
LABEL_6:
        a1[16] += a3;
        return;
      }
    }
    a1[19] += a3;
    return;
  }
  v3 = a2 - 79;
  if ( v3 )
  {
    v4 = v3 - 44;
    if ( v4 )
    {
      v5 = v4 - 11;
      if ( v5 )
      {
        if ( v5 != 5 )
          goto LABEL_6;
      }
    }
  }
  a1[17] += a3;
}
