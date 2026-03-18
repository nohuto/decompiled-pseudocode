/*
 * XREFs of NtGdiGetRegionData @ 0x1C003F080
 * Callers:
 *     <none>
 * Callees:
 *     FreeTmpBuffer @ 0x1C00223F0 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C003EB80 (AllocFreeTmpBuffer.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 *     GreGetRegionData @ 0x1C0091230 (GreGetRegionData.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetRegionData(HRGN a1, unsigned int a2, volatile void *a3)
{
  unsigned int v5; // esi
  _BYTE *v6; // rdi
  unsigned int RegionData; // eax
  _BYTE v9[432]; // [rsp+30h] [rbp-1E8h] BYREF

  v5 = 1;
  v6 = 0LL;
  if ( a3 )
  {
    if ( a2 > 0x1B0 )
    {
      if ( a2 <= 0x2710000 )
        v6 = (_BYTE *)AllocFreeTmpBuffer(a2);
    }
    else
    {
      v6 = v9;
    }
    if ( !v6 )
    {
      EngSetLastError(0x57u);
      v5 = 0;
    }
  }
  if ( v5 )
  {
    RegionData = GreGetRegionData(a1);
    v5 = RegionData;
    if ( a3 )
    {
      if ( RegionData )
      {
        ProbeForWrite(a3, RegionData, 4u);
        memmove((void *)a3, v6, v5);
      }
    }
  }
  if ( v6 && v6 != v9 )
    FreeTmpBuffer(v6);
  return v5;
}
