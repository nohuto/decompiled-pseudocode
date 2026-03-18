/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x14045CBD8
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x14045CA70 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140014444 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v6; // rbp
  _DWORD *v7; // r12
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  signed int v10; // ebx
  unsigned __int64 v11; // r14
  unsigned int *v12; // rax
  __int64 v13; // r15
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  int v16; // eax
  unsigned __int64 v17; // r14
  unsigned __int16 v18; // r8
  unsigned __int64 v19; // r14
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h]

  if ( !a2 || !a3 )
  {
    v10 = -1073741811;
    goto LABEL_15;
  }
  v6 = (unsigned __int64)a2 + a3;
  if ( v6 < (unsigned __int64)a2 )
  {
    v10 = -1073741811;
    goto LABEL_18;
  }
  memset(a2, 0, a3);
  if ( (unsigned __int64)(a2 + 12) <= v6 )
  {
    *a2 = 0;
    v7 = a2 + 2;
    *((_QWORD *)a2 + 2) = a2 + 2;
    *((_QWORD *)a2 + 1) = a2 + 2;
    a2[6] = 0;
    *((_QWORD *)a2 + 5) = a2 + 8;
    *((_QWORD *)a2 + 4) = a2 + 8;
    v8 = 112LL * *a1;
    v9 = -1;
    if ( v8 <= 0xFFFFFFFF )
      v9 = 112 * *a1;
    v10 = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v8 > 0xFFFFFFFF )
      goto LABEL_15;
    v11 = (unsigned __int64)a2 + v9 + 48;
    if ( v11 <= v6 )
    {
      v12 = a1 + 2;
      v13 = *((_QWORD *)a1 + 1);
      if ( (unsigned int *)v13 != v12 )
      {
        v14 = a2 + 38;
        do
        {
          v15 = (_QWORD *)*((_QWORD *)a2 + 2);
          if ( (_DWORD *)*v15 != v7 )
            __fastfail(3u);
          *(v14 - 12) = v15;
          *(v14 - 13) = v7;
          *v15 = v14 - 13;
          *((_QWORD *)a2 + 2) = v14 - 13;
          ++*a2;
          *((_WORD *)v14 - 28) = *(_WORD *)(v13 + 48);
          v16 = *(_DWORD *)(v13 + 52);
          *(v14 - 6) = 0LL;
          *((_DWORD *)v14 - 13) = v16;
          *((_DWORD *)v14 - 10) = 0;
          *(v14 - 3) = v14 - 4;
          v17 = (v11 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          *(v14 - 4) = v14 - 4;
          *((_DWORD *)v14 - 4) = 0;
          *v14 = v14 - 1;
          *(v14 - 1) = v14 - 1;
          v18 = *(_WORD *)(v13 + 32);
          v22 = v18;
          v23 = v18;
          if ( v17 + v18 > v6 )
            goto LABEL_20;
          *((_WORD *)v14 - 35) = v18;
          *((_WORD *)v14 - 36) = 0;
          *(v14 - 8) = v17;
          RtlCopyUnicodeString((PUNICODE_STRING)(v14 - 9), (PCUNICODE_STRING)(v13 + 32));
          v19 = v23 + v17;
          v10 = AuthzBasepCopyoutInternalSecurityAttributeValues(
                  v13,
                  (__int64)(v14 - 13),
                  v19,
                  (int)v6 - (int)v19,
                  &v22);
          if ( v10 < 0 )
            goto LABEL_18;
          v14 += 14;
          v11 = v22 + v19;
          v13 = *(_QWORD *)v13;
        }
        while ( (unsigned int *)v13 != a1 + 2 );
      }
LABEL_15:
      if ( v10 >= 0 )
        return (unsigned int)v10;
      goto LABEL_18;
    }
  }
LABEL_20:
  v10 = -2147483643;
LABEL_18:
  if ( a3 >= 0x30 )
    memset(a2, 0, 0x30uLL);
  return (unsigned int)v10;
}
