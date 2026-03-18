/*
 * XREFs of _anonymous_namespace_::InputTypeToInertiaSourceType @ 0x180166C7C
 * Callers:
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801670BC (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::InputTypeToInertiaSourceType(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return 2;
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
