/*
 * XREFs of SmKmKeyGenStart @ 0x14073ABA4
 * Callers:
 *     SmcCacheManagerStart @ 0x14073C3A4 (SmcCacheManagerStart.c)
 * Callees:
 *     SmAlloc @ 0x1400064E8 (SmAlloc.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14027285C (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall SmKmKeyGenStart(__int64 a1, const struct _UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  SIZE_T v5; // r14
  char *v6; // rax
  char *v7; // rbp
  __int64 v8; // rax
  char *v9; // rdx
  __int16 v10; // cx
  __int16 v11; // cx

  v2 = 0;
  if ( a2 )
  {
    v5 = (unsigned int)a2->Length + 2;
    v6 = (char *)SmAlloc(v5, 0x474B6D73u);
    v7 = v6;
    if ( v6 )
    {
      RtlStringCbCopyUnicodeString(v6, v5, a2);
      *(_DWORD *)(a1 + 24) = 0;
      v8 = 0x7FFFLL;
      *(_QWORD *)(a1 + 32) = 0LL;
      v9 = v7;
      do
      {
        if ( !*(_WORD *)v9 )
          break;
        v9 += 2;
        --v8;
      }
      while ( v8 );
      if ( v8 )
        v10 = 0x7FFF - v8;
      else
        v10 = 0;
      if ( v8 )
      {
        v11 = 2 * v10;
        *(_QWORD *)(a1 + 32) = v7;
        *(_WORD *)(a1 + 24) = v11;
        *(_WORD *)(a1 + 26) = v11 + 2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
