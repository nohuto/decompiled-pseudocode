/*
 * XREFs of ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C000B910
 * Callers:
 *     FinishStockFontInit @ 0x1C000A820 (FinishStockFontInit.c)
 * Callees:
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C000BB4C (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     GreSetLFONTOwner @ 0x1C000C7F0 (GreSetLFONTOwner.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C000C954 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     bDeleteFont @ 0x1C000CA30 (bDeleteFont.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C002BA68 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     bInitOneStockFontInternal @ 0x1C0388494 (bInitOneStockFontInternal.c)
 */

void __fastcall FinishStockFontInitInternal(const unsigned __int16 *a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned __int16 *v6; // r12
  unsigned __int16 *v7; // rbp
  signed int v8; // r9d
  void **v9; // rcx
  _QWORD *v10; // rbx
  int *v11; // rdi
  unsigned int i; // r13d
  unsigned int v13; // r15d
  HANDLE *v14; // r14
  unsigned __int64 v15; // rdx
  unsigned __int16 *v16; // rax
  unsigned __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v19; // rbx
  HANDLE *v20; // rbx
  _QWORD *v21; // [rsp+28h] [rbp-80h]
  PCWSTR SourceString[3]; // [rsp+30h] [rbp-78h]
  _QWORD v23[3]; // [rsp+48h] [rbp-60h] BYREF

  v2 = 0;
  SourceString[0] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  SourceString[1] = a1;
  SourceString[2] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize";
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( !(unsigned int)bOpenKey(SourceString[v5], (PHANDLE)&v23[v4]) )
      v23[v5] = 0LL;
    ++v4;
    ++v5;
  }
  while ( v4 < 3 );
  v6 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v7 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  if ( a2 )
    v9 = gahStockObjects96;
  else
    v9 = gahStockObjects;
  v10 = *v9;
  v11 = (int *)&unk_1C02DC504;
  v21 = *v9;
  for ( i = 0; i < 3; ++i )
  {
    v13 = 0;
    v14 = (HANDLE *)v23;
    while ( 1 )
    {
      if ( !*v14 || !v6 || !v7 || !bGetRegString(*v14, *(const unsigned __int16 **)(v11 - 3), v6, v8) )
        goto LABEL_35;
      v15 = 260LL;
      v16 = v7;
      v8 = 0;
      while ( v15 != -2147483386LL )
      {
        v17 = *(unsigned __int16 *)((char *)v16 + (char *)L"\\SystemRoot\\Fonts\\" - (char *)v7);
        if ( !v17 )
          break;
        *v16++ = v17;
        if ( !--v15 )
        {
          --v16;
          v8 = -2147024774;
          break;
        }
      }
      *v16 = 0;
      if ( v8 < 0 || (int)StringCchCatW(v7, v15, v6) < 0 )
        goto LABEL_35;
      LOBYTE(v18) = 10;
      v19 = v10[*v11];
      if ( !(unsigned int)HmgValidHandle(v19, v18) )
        v19 = 0LL;
      if ( (unsigned int)bInitOneStockFontInternal(v7) )
        break;
      v10 = v21;
LABEL_35:
      ++v13;
      ++v14;
      if ( v13 >= 3 )
        goto LABEL_25;
    }
    GreSetLFONTOwner(v21[*v11], 0LL);
    if ( v19 )
      bDeleteFont(v19, 1LL);
LABEL_25:
    v10 = v21;
    v11 += 4;
  }
  if ( v6 )
    FreeTmpBuffer(v6);
  if ( v7 )
    FreeTmpBuffer(v7);
  v20 = (HANDLE *)v23;
  do
  {
    if ( *v20 )
      ZwClose(*v20);
    ++v2;
    ++v20;
  }
  while ( v2 < 3 );
}
