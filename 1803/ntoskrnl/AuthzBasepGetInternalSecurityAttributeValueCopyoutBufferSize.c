/*
 * XREFs of AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x14006E5F0
 * Callers:
 *     AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize @ 0x14050B740 (AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // r9d
  signed int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  __int64 *v12; // rbx
  __int64 *i; // r10
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  int v17; // eax
  __int64 *v18; // rbx
  __int64 *k; // r10
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // r8d
  int v23; // eax
  __int64 *v24; // rbx
  __int64 *j; // r10
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // r8d
  int v29; // eax

  v4 = (*a2 + 7) & 0xFFFFFFF8;
  if ( v4 < *a2 )
    return (unsigned int)-1073741675;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 60) << 6;
  v6 = -1;
  v7 = v4;
  if ( v5 <= 0xFFFFFFFF )
    v6 = *(_DWORD *)(a1 + 60) << 6;
  v8 = v5 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v5 <= 0xFFFFFFFF )
  {
    v9 = v4 + v6;
    v7 = -1;
    if ( v9 >= v4 )
      v7 = v9;
    v8 = v9 < v4 ? 0xC0000095 : 0;
    if ( v9 >= v4 )
    {
      v10 = *(unsigned __int16 *)(a1 + 48);
      if ( !*(_WORD *)(a1 + 48) )
      {
LABEL_20:
        v8 = -1073741811;
        goto LABEL_10;
      }
      if ( v10 <= 2 )
        goto LABEL_10;
      switch ( v10 )
      {
        case 3u:
          v12 = (__int64 *)(a1 + 72);
          for ( i = *(__int64 **)(a1 + 72); i != v12; i = (__int64 *)*i )
          {
            v14 = v7;
            v15 = v7 + *((unsigned __int16 *)i + 20);
            v16 = v7;
            v17 = -1;
            if ( v15 >= v7 )
              v17 = v7 + *((unsigned __int16 *)i + 20);
            v7 = v17;
            v8 = v15 < v14 ? 0xC0000095 : 0;
            if ( v15 < v16 )
              break;
          }
          goto LABEL_10;
        case 4u:
          v24 = (__int64 *)(a1 + 72);
          for ( j = *(__int64 **)(a1 + 72); j != v24; j = (__int64 *)*j )
          {
            v26 = v7;
            v27 = v7 + *((unsigned __int16 *)j + 24);
            v28 = v7;
            v29 = -1;
            if ( v27 >= v7 )
              v29 = v7 + *((unsigned __int16 *)j + 24);
            v7 = v29;
            v8 = v27 < v26 ? 0xC0000095 : 0;
            if ( v27 < v28 )
              break;
          }
          goto LABEL_10;
        case 5u:
LABEL_26:
          v18 = (__int64 *)(a1 + 72);
          for ( k = *(__int64 **)(a1 + 72); k != v18; k = (__int64 *)*k )
          {
            v20 = v7;
            v21 = v7 + *((_DWORD *)k + 12);
            v22 = v7;
            v23 = -1;
            if ( v21 >= v7 )
              v23 = v7 + *((_DWORD *)k + 12);
            v7 = v23;
            v8 = v21 < v20 ? 0xC0000095 : 0;
            if ( v21 < v22 )
              break;
          }
          goto LABEL_10;
      }
      if ( v10 != 6 )
      {
        if ( v10 == 16 )
          goto LABEL_26;
        goto LABEL_20;
      }
    }
  }
LABEL_10:
  if ( v8 >= 0 )
    *a2 = v7;
  return (unsigned int)v8;
}
