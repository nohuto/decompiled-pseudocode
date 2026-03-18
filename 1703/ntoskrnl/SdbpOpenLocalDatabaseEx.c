/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x14072D3A4
 * Callers:
 *     SdbTagRefToTagID @ 0x1405D4EB4 (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcsstr @ 0x14016BDC0 (wcsstr.c)
 *     SdbOpenDatabaseEx @ 0x14072AD3C (SdbOpenDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x14072D314 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabase @ 0x14072D64C (SdbResolveDatabase.c)
 *     AslStringUpper @ 0x14072E6F4 (AslStringUpper.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, __int64 **a4, unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned int v9; // edi
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int16 v14; // ax
  __int64 *v15; // r8
  int v16; // ecx
  __int64 v17; // rdx
  __int128 v18; // xmm0
  int v20; // [rsp+30h] [rbp-258h] BYREF
  wchar_t Str[264]; // [rsp+40h] [rbp-248h] BYREF

  v5 = 0;
  v20 = 0;
  v9 = *a5;
  if ( (*a5 & 0xF0000000) != 0 )
    v9 >>= 28;
  if ( v9 >= 0x10 )
  {
    v10 = "Bad index 0x%lx";
    v11 = 841;
LABEL_23:
    v16 = 1;
    goto LABEL_24;
  }
  SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9);
  if ( (unsigned int)SdbResolveDatabase(a1, (_DWORD)a2, (unsigned int)&v20, (unsigned int)Str) - 1 > 0x102 )
  {
    v10 = "Cannot resolve database, the path length is 0x%lx";
    v11 = 874;
    goto LABEL_23;
  }
  AslStringUpper(Str);
  if ( *(_WORD *)(a1 + 576) != 0x7FFF )
  {
    if ( wcsstr(Str, L"\\CUSTOM64\\") )
    {
      if ( *(_WORD *)(a1 + 576) != 332 )
        goto LABEL_11;
    }
    else
    {
      v14 = *(_WORD *)(a1 + 576);
      if ( v14 != -31132 && v14 != 512 && v14 != -21916 )
        goto LABEL_11;
    }
    v11 = 896;
    v10 = "Database \"%ws\" is not of the same type as the main EXE";
    v16 = 3;
LABEL_24:
    AslLogCallPrintf(v16, (unsigned int)"SdbpOpenLocalDatabaseEx", v11, (_DWORD)v10);
    return v5;
  }
LABEL_11:
  v15 = SdbOpenDatabaseEx(Str, v12, v13);
  if ( v15 )
  {
    v17 = 32LL * v9;
    *(_QWORD *)(v17 + a1 + 48) = v15;
    *(_DWORD *)(v17 + a1 + 56) = 2;
    *(_DWORD *)(a1 + 28) |= 1 << v9;
    if ( a2 )
    {
      v18 = *a2;
      *(_DWORD *)(v17 + a1 + 56) |= 1u;
      *(_OWORD *)(v17 + a1 + 32) = v18;
    }
    else
    {
      *(_QWORD *)(v17 + a1 + 32) = 0LL;
      *(_QWORD *)(v17 + a1 + 40) = 0LL;
    }
    v5 = 1;
    if ( v9 == 1 )
      *(_QWORD *)(a1 + 16) = v15;
    *a5 = v9 << 28;
    if ( a4 )
      *a4 = v15;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", 912, (unsigned int)"Failed to open database");
  }
  return v5;
}
