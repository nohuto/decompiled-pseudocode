/*
 * XREFs of DpiDisableInterruptResources @ 0x1C01C64A8
 * Callers:
 *     DpiFdoHandleFilterResources @ 0x1C01169A0 (DpiFdoHandleFilterResources.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiDisableInterruptResources(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int i; // r8d
  unsigned int j; // eax
  __int64 v4; // r9

  if ( a1 )
  {
    v1 = a1 + 32;
    for ( i = 0; i < *(_DWORD *)(a1 + 28); v1 += 32LL * *(unsigned int *)(v1 + 4) + 8 )
    {
      for ( j = 0; j < *(_DWORD *)(v1 + 4); ++j )
      {
        v4 = 32LL * j;
        if ( *(_BYTE *)(v4 + v1 + 9) == 2 )
          *(_BYTE *)(v4 + v1 + 9) = 0;
      }
      ++i;
    }
  }
}
