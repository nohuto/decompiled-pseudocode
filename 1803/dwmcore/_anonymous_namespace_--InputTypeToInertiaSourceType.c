/*
 * XREFs of _anonymous_namespace_::InputTypeToInertiaSourceType @ 0x1801920A4
 * Callers:
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x18019267C (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::InputTypeToInertiaSourceType(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = 0;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 2 )
          return 4;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 3;
    }
  }
  else
  {
    return 1;
  }
  return v1;
}
