/*
 * XREFs of NtGdiExtCreateRegion @ 0x1C005AC90
 * Callers:
 *     <none>
 * Callees:
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 *     FreeTmpBuffer @ 0x1C005A0F0 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C005A4F0 (AllocFreeTmpBuffer.c)
 *     ProbeAndConvertXFORM @ 0x1C005AE30 (ProbeAndConvertXFORM.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall NtGdiExtCreateRegion(_BYTE *a1, unsigned int a2, char *a3)
{
  size_t v4; // rsi
  __int64 Region; // rbx
  struct _RECTL *v7; // rdi
  int v8; // eax
  _BYTE v10[24]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a2;
  Region = 0LL;
  if ( a2 - 32 <= 0x270FFE0 )
  {
    v7 = (struct _RECTL *)AllocFreeTmpBuffer(a2);
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
        if ( &a3[v4] < a3 || (unsigned __int64)&a3[v4] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v7, a3, v4);
        Region = 1LL;
      }
      if ( Region )
        Region = (__int64)GreExtCreateRegion((__int64)a1, v4, v7);
      FreeTmpBuffer((char *)v7);
    }
  }
  return Region;
}
