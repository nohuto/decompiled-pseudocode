/*
 * XREFs of NtGdiRemoveFontResourceW @ 0x1C028B250
 * Callers:
 *     <none>
 * Callees:
 *     bCheckAndCapThePath @ 0x1C00FB67C (bCheckAndCapThePath.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GreRemoveFontResourceW @ 0x1C026A618 (GreRemoveFontResourceW.c)
 *     ProbeAndReadDesignVector @ 0x1C028B75C (ProbeAndReadDesignVector.c)
 */

__int64 __fastcall NtGdiRemoveFontResourceW(
        WCHAR *a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        struct tagDESIGNVECTOR *a6)
{
  struct tagDESIGNVECTOR *v9; // rsi
  WCHAR *v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r15d
  _BYTE v14[4]; // [rsp+70h] [rbp-138h] BYREF
  int v15; // [rsp+74h] [rbp-134h]
  _BYTE v16[160]; // [rsp+C0h] [rbp-E8h] BYREF

  v9 = a6;
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v10 = (WCHAR *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = (WCHAR *)v16;
    }
    if ( v10 )
      v11 = bCheckAndCapThePath(v10, a1, a2, a3);
  }
  if ( v11 && a6 )
  {
    if ( (unsigned int)ProbeAndReadDesignVector(v14, a6) )
    {
      if ( v15 )
      {
        v9 = (struct tagDESIGNVECTOR *)v14;
        v12 = 4 * v15 + 8;
      }
      else
      {
        v9 = 0LL;
      }
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v11 )
    v11 = GreRemoveFontResourceW(v10, a2, a3, a4, a5, v9, v12);
  if ( v10 && v10 != (WCHAR *)v16 )
    FreeTmpBuffer(v10);
  return v11;
}
