/*
 * XREFs of NtGdiGetFontResourceInfoInternalW @ 0x1C028A540
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     bCheckAndCapThePath @ 0x1C00FB67C (bCheckAndCapThePath.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     GetFontResourceInfoInternalW @ 0x1C02B0488 (GetFontResourceInfoInternalW.c)
 */

__int64 __fastcall NtGdiGetFontResourceInfoInternalW(
        WCHAR *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        ULONG64 a5,
        void *a6,
        int a7)
{
  WCHAR *v10; // rdi
  unsigned int FontResourceInfoInternalW; // esi
  unsigned int *v12; // rbx
  ULONG64 v13; // rdx
  _DWORD *v14; // rcx
  ULONG64 v15; // rax
  __int64 v17; // [rsp+70h] [rbp-158h] BYREF
  WCHAR *v18; // [rsp+78h] [rbp-150h]
  _BYTE v19[96]; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v20[160]; // [rsp+E0h] [rbp-E8h] BYREF

  v18 = a1;
  v17 = (__int64)a6;
  v10 = 0LL;
  FontResourceInfoInternalW = 0;
  v12 = 0LL;
  memset(v19, 0, 0x5CuLL);
  if ( a2 > 1 )
  {
    if ( a2 > 0x50 )
    {
      if ( a2 <= 0x1388000 )
        v10 = (WCHAR *)AllocFreeTmpBuffer(2 * a2);
    }
    else
    {
      v10 = (WCHAR *)v20;
    }
    if ( v10 )
      FontResourceInfoInternalW = bCheckAndCapThePath(v10, v18, a2, a3);
  }
  if ( a4 <= 0x5C )
  {
    v12 = (unsigned int *)v19;
  }
  else if ( a4 > 0x2710000 || (v12 = (unsigned int *)PALLOCMEM2(a4, 1886221383LL, 1)) == 0LL )
  {
    FontResourceInfoInternalW = 0;
  }
  if ( FontResourceInfoInternalW )
  {
    FontResourceInfoInternalW = GetFontResourceInfoInternalW(v10, a2, a3, a4, (__int64)&v17, v12, a7);
    if ( FontResourceInfoInternalW )
    {
      v14 = (_DWORD *)a5;
      v13 = MmUserProbeAddress;
      if ( a5 >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = v17;
      if ( a4 )
      {
        v15 = (ULONG64)a6 + a4;
        if ( v15 > MmUserProbeAddress || v15 <= (unsigned __int64)a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v12, a4);
      }
    }
  }
  if ( v10 && v10 != (WCHAR *)v20 )
    FreeTmpBuffer(v10);
  if ( v12 && v12 != (unsigned int *)v19 )
    Win32FreePool(v12, v13);
  return FontResourceInfoInternalW;
}
