/*
 * XREFs of DrvDbGetConfigurationSubKeyCallback @ 0x140268090
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     _PnpCtxRegOpenKey @ 0x1405D1A38 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegCloseKey @ 0x140739BD0 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x140739C98 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall DrvDbGetConfigurationSubKeyCallback(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v7; // r12d
  __int64 v8; // rcx
  NTSTATUS v9; // edi
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+48h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  v19 = 0LL;
  v18 = 0;
  v7 = 0;
  v20 = 0;
  v17 = 0;
  if ( !a4 )
    return 3;
  v9 = PnpCtxRegOpenKey(a1, a2, a3, 0LL, 1, &v19);
  if ( v9 >= 0 )
  {
    v16 = 4;
    if ( *(_BYTE *)(a4 + 16) )
    {
      v10 = PnpCtxRegQueryValue(v8, v19, L"ConfigScope", &v17, &v18, &v16);
      v9 = v10;
      if ( v10 < 0 || v17 != 4 || v16 != 4 )
      {
        if ( v10 == -1073741772 )
          v9 = 0;
        goto LABEL_33;
      }
      v7 = v18;
    }
    else
    {
      v9 = PnpCtxRegQueryValue(v8, v19, L"ConfigFlags", &v17, &v20, &v16);
      if ( v9 < 0 || v17 != 4 || v16 != 4 )
      {
        if ( v9 == -1073741772 )
          v9 = 0;
        goto LABEL_33;
      }
    }
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v13 = *(unsigned int *)(a4 + 12);
    if ( *(_DWORD *)(a4 + 8) < (unsigned int)(v13 + v12) )
      v9 = -1073741789;
    else
      memmove((void *)(*(_QWORD *)a4 + 2 * v13), a3, 2LL * (unsigned int)v12);
    *(_DWORD *)(a4 + 12) += v12;
    v14 = *(unsigned int *)(a4 + 12);
    if ( !*(_BYTE *)(a4 + 16) )
    {
LABEL_27:
      if ( *(_DWORD *)(a4 + 8) < (unsigned int)(v14 + 1) )
        v9 = -1073741789;
      else
        *(_WORD *)(*(_QWORD *)a4 + 2 * v14) = 0;
      ++*(_DWORD *)(a4 + 12);
      goto LABEL_33;
    }
    if ( *(_DWORD *)(a4 + 8) >= (unsigned int)(v14 + 1) )
      *(_WORD *)(*(_QWORD *)a4 + 2 * v14) = 58;
    ++*(_DWORD *)(a4 + 12);
    v9 = RtlStringCchPrintfW(pszDest, 9uLL, L"%X", v7);
    if ( v9 >= 0 )
    {
      do
        ++v11;
      while ( pszDest[v11] );
      if ( *(_DWORD *)(a4 + 8) < (unsigned int)(v11 + *(_DWORD *)(a4 + 12)) )
        v9 = -1073741789;
      else
        memmove((void *)(*(_QWORD *)a4 + 2LL * *(unsigned int *)(a4 + 12)), pszDest, 2LL * (unsigned int)v11);
      *(_DWORD *)(a4 + 12) += v11;
      v14 = *(unsigned int *)(a4 + 12);
      goto LABEL_27;
    }
  }
LABEL_33:
  if ( v19 )
    PnpCtxRegCloseKey();
  if ( v9 < 0 )
  {
    *(_DWORD *)(a4 + 20) = v9;
    if ( v9 != -1073741789 )
      return 3;
  }
  return v4;
}
