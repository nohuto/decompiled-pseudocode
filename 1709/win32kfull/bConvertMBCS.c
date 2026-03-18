/*
 * XREFs of bConvertMBCS @ 0x1C0228554
 * Callers:
 *     bConvertExtras @ 0x1C02282EC (bConvertExtras.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00F1C50 (ConvertToAndFromWideChar.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0143570 (__report_rangecheckfailure.c)
 */

_BOOL8 __fastcall bConvertMBCS(WCHAR *a1, ULONG *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r10
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  __int64 v12; // rcx
  CHAR v13; // dl
  int v14; // eax
  unsigned __int64 v15; // rax
  ULONG v16; // r10d
  ULONG v17; // r8d
  ULONG v18; // eax
  int v19; // eax
  CHAR v20[256]; // [rsp+30h] [rbp-318h] BYREF
  WCHAR v21[256]; // [rsp+130h] [rbp-218h] BYREF

  v5 = 0LL;
  if ( (a4 & 1) != 0 )
    return 0LL;
  v10 = 0;
  v11 = a4 >> 1;
  if ( v11 )
  {
    do
    {
      v12 = 2 * v10;
      v13 = *(_BYTE *)(v12 + a3);
      if ( v13 )
      {
        if ( (unsigned int)(v5 + 2) >= 0x100 )
          return 0LL;
        v20[v5] = v13;
        v20[(unsigned int)(v5 + 1)] = *(_BYTE *)((unsigned int)(v12 + 1) + a3);
        v14 = 2;
      }
      else
      {
        if ( (unsigned int)(v5 + 1) >= 0x100 )
          return 0LL;
        v20[v5] = *(_BYTE *)((unsigned int)(v12 + 1) + a3);
        v14 = 1;
      }
      v5 = (unsigned int)(v14 + v5);
      ++v10;
    }
    while ( v10 < v11 );
  }
  v15 = (unsigned int)v5;
  v16 = v5 + 1;
  if ( v15 >= 0x100 )
    _report_rangecheckfailure();
  v17 = *a2;
  v20[v15] = 0;
  if ( v17 )
  {
    v19 = ConvertToAndFromWideChar(a5, a1, v17, v20, v16, 1);
    return v19 != -1 && v19 == *a2 && !*((_BYTE *)a1 + v19 - 1);
  }
  v18 = ConvertToAndFromWideChar(a5, v21, 0x200u, v20, v16, 1);
  if ( v18 == -1 )
    return 0LL;
  *a2 = v18;
  return 1LL;
}
