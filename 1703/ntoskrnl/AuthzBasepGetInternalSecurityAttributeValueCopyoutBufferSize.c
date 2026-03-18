/*
 * XREFs of AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x14003F098
 * Callers:
 *     AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize @ 0x14046F088 (AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // r11d
  signed int v8; // ecx
  unsigned int v9; // eax
  __int64 *v11; // rbx
  __int64 *i; // r10
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  __int64 *v17; // rbx
  __int64 *k; // r10
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // eax
  __int64 *v23; // rbx
  __int64 *j; // r10
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // r8d
  int v28; // eax

  v4 = (*a2 + 7) & 0xFFFFFFF8;
  if ( v4 < *a2 )
    return (unsigned int)-1073741675;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 60) << 6;
  if ( v5 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v6 = v4 + v5;
  v7 = -1;
  if ( v6 >= v4 )
    v7 = v6;
  v8 = v6 < v4 ? 0xC0000095 : 0;
  if ( v6 >= v4 )
  {
    v9 = *(unsigned __int16 *)(a1 + 48);
    if ( !*(_WORD *)(a1 + 48) )
    {
LABEL_37:
      v8 = -1073741811;
      goto LABEL_8;
    }
    if ( v9 <= 2 )
      goto LABEL_8;
    switch ( v9 )
    {
      case 3u:
        v11 = (__int64 *)(a1 + 72);
        for ( i = *(__int64 **)(a1 + 72); i != v11; i = (__int64 *)*i )
        {
          v13 = v7;
          v14 = v7 + *((unsigned __int16 *)i + 20);
          v15 = v7;
          v16 = -1;
          if ( v14 >= v7 )
            v16 = v7 + *((unsigned __int16 *)i + 20);
          v7 = v16;
          v8 = v14 < v13 ? 0xC0000095 : 0;
          if ( v14 < v15 )
            break;
        }
        goto LABEL_8;
      case 4u:
        v23 = (__int64 *)(a1 + 72);
        for ( j = *(__int64 **)(a1 + 72); j != v23; j = (__int64 *)*j )
        {
          v25 = v7;
          v26 = v7 + *((unsigned __int16 *)j + 24);
          v27 = v7;
          v28 = -1;
          if ( v26 >= v7 )
            v28 = v7 + *((unsigned __int16 *)j + 24);
          v7 = v28;
          v8 = v26 < v25 ? 0xC0000095 : 0;
          if ( v26 < v27 )
            break;
        }
        goto LABEL_8;
      case 5u:
LABEL_23:
        v17 = (__int64 *)(a1 + 72);
        for ( k = *(__int64 **)(a1 + 72); k != v17; k = (__int64 *)*k )
        {
          v19 = v7;
          v20 = v7 + *((_DWORD *)k + 12);
          v21 = v7;
          v22 = -1;
          if ( v20 >= v7 )
            v22 = v7 + *((_DWORD *)k + 12);
          v7 = v22;
          v8 = v20 < v19 ? 0xC0000095 : 0;
          if ( v20 < v21 )
            break;
        }
        goto LABEL_8;
    }
    if ( v9 != 6 )
    {
      if ( v9 == 16 )
        goto LABEL_23;
      goto LABEL_37;
    }
  }
LABEL_8:
  if ( v8 >= 0 )
    *a2 = v7;
  return (unsigned int)v8;
}
