/*
 * XREFs of ?GetPointerDeviceType@@YAXAEAKPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C00D6E8C
 * Callers:
 *     UpdatePointerDeviceSystemMetrics @ 0x1C00D6C00 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     <none>
 */

void __fastcall GetPointerDeviceType(unsigned int *a1, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 6);
  if ( v2 > 0 )
  {
    if ( v2 > 4 )
    {
      if ( v2 == 5 )
      {
        *a1 |= 4u;
      }
      else if ( v2 == 6 )
      {
        *a1 |= 8u;
      }
    }
    else
    {
      *a1 |= 1u;
    }
  }
}
