/*
 * XREFs of ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800C3638
 * Callers:
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D06C (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18002D440 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AddToResourceCount(_DWORD *a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx

  if ( a2 > 84 )
  {
    v3 = a2 - 85;
    if ( !v3 )
    {
LABEL_8:
      a1[17] += a3;
      return;
    }
    v4 = v3 - 52;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 13;
        if ( v6 )
        {
          if ( v6 != 7 )
            goto LABEL_7;
        }
      }
      goto LABEL_8;
    }
    goto LABEL_16;
  }
  if ( a2 == 84 )
  {
    a1[18] += a3;
  }
  else
  {
    if ( a2 == 28 )
      goto LABEL_19;
    if ( a2 <= 30 )
      goto LABEL_7;
    if ( a2 == 36 || a2 <= 33 )
    {
LABEL_19:
      a1[19] += a3;
    }
    else
    {
      if ( a2 != 37 )
      {
        if ( a2 == 39 )
        {
LABEL_16:
          a1[15] += a3;
          return;
        }
LABEL_7:
        a1[16] += a3;
        return;
      }
      a1[20] += a3;
    }
  }
}
