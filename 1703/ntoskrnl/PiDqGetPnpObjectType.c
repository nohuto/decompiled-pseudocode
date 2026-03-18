/*
 * XREFs of PiDqGetPnpObjectType @ 0x1404BD764
 * Callers:
 *     PiDqActionDataCreate @ 0x1404B99CC (PiDqActionDataCreate.c)
 *     PiDqPropertyCallback @ 0x1404BD530 (PiDqPropertyCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x1404BD794 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryValidateQueryData @ 0x1404BDB84 (PiDqQueryValidateQueryData.c)
 *     PiDqIrpPropertySet @ 0x1405959E0 (PiDqIrpPropertySet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqGetPnpObjectType(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v6 = v4 - 1;
        if ( v6 )
        {
          if ( v6 == 3 )
            return 2;
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 5;
    }
  }
  else
  {
    return 3;
  }
  return v1;
}
