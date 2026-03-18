/*
 * XREFs of NtGdiExtCreateRegion @ 0x1C00220D0
 * Callers:
 *     <none>
 * Callees:
 *     FreeTmpBuffer @ 0x1C00223F0 (FreeTmpBuffer.c)
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     ProbeAndConvertXFORM @ 0x1C0022DC0 (ProbeAndConvertXFORM.c)
 *     AllocFreeTmpBuffer @ 0x1C003EB80 (AllocFreeTmpBuffer.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall NtGdiExtCreateRegion(_BYTE *a1, unsigned int a2, char *a3)
{
  size_t v4; // rsi
  __int64 Region; // rbx
  void *v7; // rdi
  int v8; // eax
  _BYTE v10[24]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a2;
  Region = 0LL;
  if ( a2 - 32 <= 0x270FFE0 )
  {
    v7 = (void *)AllocFreeTmpBuffer(a2);
    if ( v7 )
    {
      v8 = 1;
      if ( a1 )
      {
        v8 = ProbeAndConvertXFORM(a1, v10);
        a1 = v10;
      }
      if ( v8 )
      {
        if ( &a3[v4] < a3 || &a3[v4] > (char *)W32UserProbeAddress )
          *(_BYTE *)W32UserProbeAddress = 0;
        memmove(v7, a3, v4);
        Region = 1LL;
      }
      if ( Region )
        Region = GreExtCreateRegion(a1, (unsigned int)v4, v7);
      FreeTmpBuffer(v7);
    }
  }
  return Region;
}
