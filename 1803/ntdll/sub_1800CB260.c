/*
 * XREFs of sub_1800CB260 @ 0x1800CB260
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CB140 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrResolveDelayLoadsFromDll @ 0x1800CB220 (LdrResolveDelayLoadsFromDll.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     _stricmp @ 0x18008C460 (_stricmp.c)
 */

char *__fastcall sub_1800CB260(unsigned __int64 a1, const char *a2)
{
  NTSTATUS v4; // eax
  char *v5; // rbp
  __int64 v6; // rdi
  DWORD v7; // ebx
  DWORD v8; // esi
  DWORD v10; // [rsp+80h] [rbp+18h] BYREF
  char *v11; // [rsp+88h] [rbp+20h] BYREF

  v4 = sub_18001014C(a1, 1, 0xDu, &v10, &v11);
  v5 = v11;
  v6 = 0LL;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v7 = 0;
    v8 = v10 >> 5;
    if ( *((_DWORD *)v5 + 1) )
    {
      while ( v7 < v8 )
      {
        if ( !stricmp((const char *)(a1 + *(unsigned int *)&v5[32 * v7 + 4]), a2) )
          return &v5[32 * v7];
        if ( !*(_DWORD *)&v5[32 * ++v7 + 4] )
          return (char *)v6;
      }
    }
  }
  return (char *)v6;
}
