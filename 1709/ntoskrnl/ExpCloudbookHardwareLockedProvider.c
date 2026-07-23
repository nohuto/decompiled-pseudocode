/*
 * XREFs of ExpCloudbookHardwareLockedProvider @ 0x1405DEBD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExpOsProductCacheProviderHelper @ 0x1405DED04 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpCloudbookHardwareLockedProvider(
        _DWORD *a1,
        void *a2,
        unsigned int a3,
        unsigned int *a4,
        _BYTE *a5)
{
  unsigned int v9; // ebx
  int Src; // [rsp+30h] [rbp-68h] BYREF
  _BYTE SystemInformation[40]; // [rsp+38h] [rbp-60h] BYREF

  memset(SystemInformation, 0, 0x24uLL);
  v9 = ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_14078D358, (__int64)a4, (ULONG)a5);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
  {
    *a4 = 4;
    v9 = 0;
    if ( ZwQuerySystemInformation(SystemCodeIntegrityUnlockInformation, SystemInformation, 0x24u, 0LL) < 0 )
    {
      v9 = -1073741772;
    }
    else if ( a3 < *a4 )
    {
      v9 = -1073741789;
    }
    else
    {
      if ( (SystemInformation[0] & 1) == 0 || (Src = 1, (SystemInformation[0] & 8) == 0) )
        Src = 0;
      *a1 = 4;
      memmove(a2, &Src, *a4);
    }
    *a5 = 1;
  }
  return v9;
}
