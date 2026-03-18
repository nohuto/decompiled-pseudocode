/*
 * XREFs of PHIDTtoPT @ 0x1C0023614
 * Callers:
 *     _GetPointerDeviceInfoProperties @ 0x1C0023504 (_GetPointerDeviceInfoProperties.c)
 *     PostPointerEventMessage @ 0x1C00B0620 (PostPointerEventMessage.c)
 *     _GetPointerDeviceType @ 0x1C01A7E5C (_GetPointerDeviceType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PHIDTtoPT(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 24);
  result = 1LL;
  if ( v1 > 0 )
  {
    if ( v1 > 4 )
    {
      if ( v1 != 5 )
      {
        if ( v1 == 6 )
        {
          return 2LL;
        }
        else if ( v1 == 7 )
        {
          return 4LL;
        }
      }
    }
    else
    {
      return 3LL;
    }
  }
  return result;
}
