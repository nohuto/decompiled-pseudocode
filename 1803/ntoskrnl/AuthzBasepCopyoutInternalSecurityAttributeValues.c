/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1400A095C
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x140544638 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rbp
  int v7; // r14d
  unsigned __int64 v9; // rdi
  char *v10; // r9
  __int64 *v11; // r12
  __int64 *v12; // rsi
  unsigned int v13; // eax
  unsigned __int64 *v14; // rcx
  const UNICODE_STRING *v16; // rdx
  __int64 v17; // r8
  char *v18; // r15
  UNICODE_STRING *v19; // rcx
  size_t v20; // rax
  __int64 v21; // r8

  v5 = 0;
  v6 = a3 + a4;
  v7 = a3;
  if ( v6 >= a3 )
  {
    v9 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = (char *)(v9 + (unsigned int)(*(_DWORD *)(a1 + 60) << 6));
    *a5 = 0;
    if ( (unsigned __int64)v10 <= v6 )
    {
      v11 = (__int64 *)(a1 + 72);
      v12 = *(__int64 **)(a1 + 72);
      while ( 1 )
      {
        if ( v12 == v11 )
        {
          *a5 = (_DWORD)v10 - v7;
          return v5;
        }
        *(_DWORD *)(v9 + 32) = 0;
        v13 = *(unsigned __int16 *)(a1 + 48);
        if ( !*(_WORD *)(a1 + 48) )
          return (unsigned int)-1073741811;
        if ( v13 <= 2 )
        {
LABEL_7:
          *(_QWORD *)(v9 + 40) = v12[5];
          goto LABEL_8;
        }
        if ( v13 == 3 )
          break;
        if ( v13 == 4 )
        {
          v16 = (const UNICODE_STRING *)(v12 + 6);
          v21 = *((unsigned __int16 *)v12 + 24);
          v18 = &v10[v21];
          if ( (unsigned __int64)&v10[v21] > v6 )
            return (unsigned int)-2147483643;
          v19 = (UNICODE_STRING *)(v9 + 48);
          *(_QWORD *)(v9 + 40) = v12[5];
          *(_WORD *)(v9 + 50) = v21;
          *(_QWORD *)(v9 + 56) = v10;
          goto LABEL_15;
        }
        if ( v13 != 5 )
        {
          if ( v13 == 6 )
            goto LABEL_7;
          if ( v13 != 16 )
            return (unsigned int)-1073741811;
        }
        v20 = *((unsigned int *)v12 + 12);
        v18 = &v10[v20];
        if ( (unsigned __int64)&v10[v20] > v6 )
          return (unsigned int)-2147483643;
        *(_DWORD *)(v9 + 48) = v20;
        *(_QWORD *)(v9 + 40) = v10;
        memmove(v10, (const void *)v12[5], v20);
LABEL_16:
        v10 = v18;
LABEL_8:
        v14 = *(unsigned __int64 **)(a2 + 80);
        if ( *v14 != a2 + 72 )
          __fastfail(3u);
        *(_QWORD *)v9 = a2 + 72;
        *(_QWORD *)(v9 + 8) = v14;
        *v14 = v9;
        *(_QWORD *)(a2 + 80) = v9;
        ++*(_DWORD *)(a2 + 60);
        v12 = (__int64 *)*v12;
        v9 += 64LL;
      }
      v16 = (const UNICODE_STRING *)(v12 + 5);
      v17 = *((unsigned __int16 *)v12 + 20);
      v18 = &v10[v17];
      if ( (unsigned __int64)&v10[v17] > v6 )
        return (unsigned int)-2147483643;
      v19 = (UNICODE_STRING *)(v9 + 40);
      *(_WORD *)(v9 + 42) = v17;
      *(_QWORD *)(v9 + 48) = v10;
LABEL_15:
      v19->Length = 0;
      RtlCopyUnicodeString(v19, v16);
      goto LABEL_16;
    }
  }
  return (unsigned int)-2147483643;
}
