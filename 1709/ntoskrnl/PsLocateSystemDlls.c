/*
 * XREFs of PsLocateSystemDlls @ 0x1405BF504
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x140143C10 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x1405BF580 (PspLocateSystemDll.c)
 */

__int64 PsLocateSystemDlls()
{
  _QWORD *v0; // rdi
  __int64 v1; // rsi
  int i; // ebx
  int SystemDll; // eax

  if ( !ExVerifySuite(EmbeddedNT) || (PsEmbeddedNTMask & 1) == 0 )
  {
    v0 = &PspSystemDlls;
    v1 = VslGetNestedPageProtectionFlags() & 4;
    for ( i = 0; i < 6; ++i )
    {
      if ( *v0 )
      {
        SystemDll = PspLocateSystemDll(*v0, (unsigned int)v1);
        if ( SystemDll < 0 && (*(_DWORD *)(*v0 + 16LL) & 1) != 0 )
          KeBugCheckEx(0x6Bu, SystemDll, 2uLL, i, 0LL);
      }
      ++v0;
    }
  }
  return 0LL;
}
