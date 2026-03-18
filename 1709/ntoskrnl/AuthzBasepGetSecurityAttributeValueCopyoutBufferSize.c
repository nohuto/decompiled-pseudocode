/*
 * XREFs of AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x140017FE0
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1400179E0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  int v4; // edx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // r10
  __int64 *v9; // rdx
  unsigned __int64 v10; // r8
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  unsigned __int64 v15; // r10
  __int64 *v16; // rdx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r10
  __int64 *v19; // rdx
  unsigned __int64 v20; // r10

  v2 = *a2;
  v4 = *(unsigned __int16 *)(a1 + 48);
  if ( v4 == 2 )
  {
LABEL_2:
    v5 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 >= v2 && is_mul_ok(8uLL, *(unsigned int *)(a1 + 60)) )
    {
      v6 = v5 + 8LL * *(unsigned int *)(a1 + 60);
      if ( v6 >= v5 )
        goto LABEL_5;
    }
    return 3221225621LL;
  }
  if ( v4 == 3 )
  {
    v8 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v8 >= v2 && is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
    {
      v6 = v8 + 16LL * *(unsigned int *)(a1 + 60);
      if ( v6 >= v8 )
      {
        v9 = *(__int64 **)(a1 + 72);
        if ( v9 != (__int64 *)(a1 + 72) )
        {
          while ( 1 )
          {
            v10 = v6 + *((unsigned __int16 *)v9 + 20);
            if ( v10 < v6 )
              break;
            v9 = (__int64 *)*v9;
            v6 = v10;
            if ( v9 == (__int64 *)(a1 + 72) )
            {
              *a2 = v10;
              return 0LL;
            }
          }
          return 3221225621LL;
        }
LABEL_5:
        *a2 = v6;
        return 0LL;
      }
    }
    return 3221225621LL;
  }
  v11 = v4 - 1;
  if ( !v11 )
    goto LABEL_2;
  v12 = v11 - 3;
  if ( !v12 )
  {
    v18 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v18 >= v2 && is_mul_ok(0x18uLL, *(unsigned int *)(a1 + 60)) )
    {
      v6 = v18 + 24LL * *(unsigned int *)(a1 + 60);
      if ( v6 >= v18 )
      {
        v19 = *(__int64 **)(a1 + 72);
        if ( v19 != (__int64 *)(a1 + 72) )
        {
          while ( 1 )
          {
            v20 = v6 + *((unsigned __int16 *)v19 + 24);
            if ( v20 < v6 )
              return 3221225621LL;
            v19 = (__int64 *)*v19;
            v6 = v20;
            if ( v19 == (__int64 *)(a1 + 72) )
              goto LABEL_5;
          }
        }
        goto LABEL_5;
      }
    }
    return 3221225621LL;
  }
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_22;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_2;
  if ( v14 == 10 )
  {
LABEL_22:
    v15 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v15 >= v2 && is_mul_ok(0x10uLL, *(unsigned int *)(a1 + 60)) )
    {
      v6 = v15 + 16LL * *(unsigned int *)(a1 + 60);
      if ( v6 >= v15 )
      {
        v16 = *(__int64 **)(a1 + 72);
        if ( v16 != (__int64 *)(a1 + 72) )
        {
          while ( 1 )
          {
            v17 = v6 + *((unsigned int *)v16 + 12);
            if ( v17 < v6 )
              return 3221225621LL;
            v16 = (__int64 *)*v16;
            v6 = v17;
            if ( v16 == (__int64 *)(a1 + 72) )
              goto LABEL_5;
          }
        }
        goto LABEL_5;
      }
    }
    return 3221225621LL;
  }
  return 3221225485LL;
}
