/*
 * XREFs of FreePointerDeviceCalData @ 0x1C01CA390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreePointerDeviceCalData(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = *a1;
  if ( v4 )
  {
    result = Win32FreePool(v4, a2, a3);
    *a1 = 0LL;
  }
  v6 = a1[2];
  if ( v6 )
  {
    result = Win32FreePool(v6, a2, a3);
    a1[2] = 0LL;
  }
  v7 = a1[4];
  if ( v7 )
  {
    result = Win32FreePool(v7, a2, a3);
    a1[4] = 0LL;
  }
  v8 = a1[6];
  if ( v8 )
  {
    result = Win32FreePool(v8, a2, a3);
    a1[6] = 0LL;
  }
  v9 = a1[8];
  if ( v9 )
  {
    result = Win32FreePool(v9, a2, a3);
    a1[8] = 0LL;
  }
  return result;
}
