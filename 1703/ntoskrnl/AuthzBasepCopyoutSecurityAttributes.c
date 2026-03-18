/*
 * XREFs of AuthzBasepCopyoutSecurityAttributes @ 0x1400891D0
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14008A070 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutSecurityAttributeValues @ 0x140089444 (AuthzBasepCopyoutSecurityAttributeValues.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14008A4C0 (AuthzBasepFindSecurityAttribute.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall AuthzBasepCopyoutSecurityAttributes(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        size_t Size)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  _DWORD *v10; // rcx
  unsigned int v11; // r8d
  unsigned __int128 v12; // rax
  char *v13; // rbx
  __int64 *v14; // r14
  _DWORD *v15; // r15
  char *v16; // rbx
  __int64 v17; // r13
  char *v18; // rbx
  int v19; // ecx
  __int64 result; // rax
  _DWORD *v21; // r15
  __int64 SecurityAttribute; // rax
  int v23; // ecx
  char *v24; // rbx
  __int64 v25; // rcx
  char *v26; // rbx
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  __int64 v28; // [rsp+38h] [rbp-40h]
  int v30; // [rsp+98h] [rbp+20h]

  v8 = a1;
  if ( !a4 || !Size || (v9 = (unsigned __int64)a4 + Size, (_DWORD *)((char *)a4 + Size) < a4) )
  {
    v19 = -1073741811;
    goto LABEL_30;
  }
  memset(a4, 0, Size);
  v10 = a4 + 4;
  if ( (unsigned __int64)(a4 + 4) > v9 )
  {
    v19 = -1073741789;
  }
  else
  {
    v11 = a3;
    if ( !a2 )
      v11 = *(_DWORD *)v8;
    v12 = 0x28 * (unsigned __int128)v11;
    if ( !is_mul_ok(0x28uLL, v11) )
    {
      v19 = -1073741675;
      goto LABEL_30;
    }
    v13 = (char *)v10 + v12;
    if ( (unsigned __int64)((unsigned __int64)v10 + v12) > v9 )
      goto LABEL_25;
    *a4 = 1;
    a4[1] = v11;
    *((_QWORD *)a4 + 1) = v10;
    if ( !a2 )
    {
      v14 = *(__int64 **)(v8 + 8);
      if ( v14 == (__int64 *)(v8 + 8) )
        return DWORD2(v12);
      v15 = a4 + 10;
      while ( 1 )
      {
        *((_WORD *)v15 - 4) = *((_WORD *)v14 + 24);
        v16 = (char *)((unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
        *v15 = *((_DWORD *)v14 + 15);
        *((_WORD *)v15 - 3) = WORD4(v12);
        *(v15 - 1) = *((_DWORD *)v14 + 13);
        v17 = *((unsigned __int16 *)v14 + 16);
        v27 = v17;
        if ( (unsigned __int64)&v16[v17] > v9 )
          break;
        *((_WORD *)v15 - 12) = v17;
        *((_WORD *)v15 - 11) = v17;
        *((_QWORD *)v15 - 2) = v16;
        memmove(v16, (const void *)v14[5], (unsigned int)v17);
        v18 = &v16[v17];
        v19 = AuthzBasepCopyoutSecurityAttributeValues(
                (_DWORD)v14,
                (int)v15 - 24,
                (_DWORD)v18,
                (int)v9 - (int)v18,
                (__int64)&v27);
        if ( v19 < 0 )
          goto LABEL_30;
        v15 += 10;
        v13 = &v18[v27];
        v14 = (__int64 *)*v14;
        WORD4(v12) = 0;
        if ( v14 == (__int64 *)(a1 + 8) )
          return (unsigned int)v19;
      }
LABEL_25:
      v19 = -2147483643;
      goto LABEL_30;
    }
    v30 = (0x28 * (unsigned __int128)v11) >> 64;
    result = DWORD2(v12);
    if ( !a3 )
      return result;
    v21 = a4 + 10;
    while ( 1 )
    {
      SecurityAttribute = AuthzBasepFindSecurityAttribute(v8, a2 + 16LL * (unsigned int)result);
      v28 = SecurityAttribute;
      if ( !SecurityAttribute )
        break;
      *((_WORD *)v21 - 4) = *(_WORD *)(SecurityAttribute + 48);
      v23 = *(_DWORD *)(SecurityAttribute + 60);
      *((_WORD *)v21 - 3) = 0;
      *v21 = v23;
      v24 = (char *)((unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
      *(v21 - 1) = *(_DWORD *)(SecurityAttribute + 52);
      v25 = *(unsigned __int16 *)(SecurityAttribute + 32);
      v27 = v25;
      if ( (unsigned __int64)&v24[v25] > v9 )
        goto LABEL_25;
      *((_WORD *)v21 - 12) = v25;
      *((_WORD *)v21 - 11) = v25;
      *((_QWORD *)v21 - 2) = v24;
      memmove(v24, *(const void **)(SecurityAttribute + 40), (unsigned int)v25);
      v26 = &v24[v27];
      v19 = AuthzBasepCopyoutSecurityAttributeValues(v28, (int)v21 - 24, (_DWORD)v26, (int)v9 - (int)v26, (__int64)&v27);
      if ( v19 < 0 )
        goto LABEL_30;
      v21 += 10;
      v13 = &v26[v27];
      LODWORD(result) = v30 + 1;
      v8 = a1;
      v30 = result;
      if ( (unsigned int)result >= a3 )
        return (unsigned int)v19;
    }
    v19 = -1073741275;
  }
LABEL_30:
  if ( Size >= 0x10 )
  {
    *(_QWORD *)a4 = 0LL;
    *((_QWORD *)a4 + 1) = 0LL;
  }
  return (unsigned int)v19;
}
