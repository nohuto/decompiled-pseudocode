/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x140544638
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1405445B0 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1400A095C (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v6; // r12
  _QWORD *v7; // r14
  _DWORD *v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  signed int v11; // ebx
  char *v12; // rcx
  __int64 v13; // r15
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h]

  if ( !a2 || !a3 )
  {
    v11 = -1073741811;
    goto LABEL_15;
  }
  v6 = (unsigned __int64)a2 + a3;
  if ( v6 < (unsigned __int64)a2 )
  {
    v11 = -1073741811;
    goto LABEL_18;
  }
  memset(a2, 0, a3);
  v7 = a2 + 12;
  if ( (unsigned __int64)(a2 + 12) <= v6 )
  {
    *a2 = 0;
    v8 = a2 + 2;
    *((_QWORD *)a2 + 2) = a2 + 2;
    *((_QWORD *)a2 + 1) = a2 + 2;
    a2[6] = 0;
    *((_QWORD *)a2 + 5) = a2 + 8;
    *((_QWORD *)a2 + 4) = a2 + 8;
    v9 = 112LL * *a1;
    v10 = -1;
    if ( v9 <= 0xFFFFFFFF )
      v10 = 112 * *a1;
    v11 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v9 > 0xFFFFFFFF )
      goto LABEL_15;
    v12 = (char *)v7 + v10;
    if ( (unsigned __int64)v12 <= v6 )
    {
      v13 = *((_QWORD *)a1 + 1);
      if ( (unsigned int *)v13 != a1 + 2 )
      {
        v14 = a2 + 38;
        do
        {
          v15 = (_QWORD *)*((_QWORD *)a2 + 2);
          if ( (_DWORD *)*v15 != v8 )
            __fastfail(3u);
          *(v14 - 12) = v15;
          *v7 = v8;
          *v15 = v7;
          v16 = (unsigned __int64)(v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          *((_QWORD *)a2 + 2) = v7;
          ++*a2;
          *((_WORD *)v14 - 28) = *(_WORD *)(v13 + 48);
          v17 = *(_DWORD *)(v13 + 52);
          *(v14 - 6) = 0LL;
          *((_DWORD *)v14 - 13) = v17;
          *((_DWORD *)v14 - 10) = 0;
          *(v14 - 3) = v14 - 4;
          *(v14 - 4) = v14 - 4;
          *((_DWORD *)v14 - 4) = 0;
          *v14 = v14 - 1;
          *(v14 - 1) = v14 - 1;
          v18 = *(unsigned __int16 *)(v13 + 32);
          v22 = *(unsigned __int16 *)(v13 + 32);
          v19 = v16 + v18;
          v23 = v16 + v18;
          if ( v16 + v18 > v6 )
            goto LABEL_20;
          *((_WORD *)v14 - 35) = v18;
          *((_WORD *)v14 - 36) = 0;
          *(v14 - 8) = v16;
          RtlCopyUnicodeString((PUNICODE_STRING)(v14 - 9), (PCUNICODE_STRING)(v13 + 32));
          v11 = AuthzBasepCopyoutInternalSecurityAttributeValues(v13, (__int64)v7, v19, (int)v6 - (int)v19, &v22);
          if ( v11 < 0 )
            goto LABEL_18;
          v7 += 14;
          v14 += 14;
          v12 = (char *)(v23 + v22);
          v13 = *(_QWORD *)v13;
        }
        while ( (unsigned int *)v13 != a1 + 2 );
      }
LABEL_15:
      if ( v11 >= 0 )
        return (unsigned int)v11;
      goto LABEL_18;
    }
  }
LABEL_20:
  v11 = -2147483643;
LABEL_18:
  if ( a3 >= 0x30 )
    memset(a2, 0, 0x30uLL);
  return (unsigned int)v11;
}
