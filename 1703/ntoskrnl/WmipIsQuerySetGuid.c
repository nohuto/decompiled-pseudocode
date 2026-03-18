/*
 * XREFs of WmipIsQuerySetGuid @ 0x140557884
 * Callers:
 *     WmipOpenBlock @ 0x140554E90 (WmipOpenBlock.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

char __fastcall WmipIsQuerySetGuid(__int64 a1)
{
  char v2; // di
  __int64 ***v3; // rbx
  __int64 **i; // rcx

  v2 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v3 = (__int64 ***)(a1 + 56);
  for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
  {
    if ( ((_DWORD)i[2] & 0x89000) == 0 )
    {
      v2 = 1;
      break;
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return v2;
}
