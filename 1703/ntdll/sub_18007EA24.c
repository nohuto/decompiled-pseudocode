/*
 * XREFs of sub_18007EA24 @ 0x18007EA24
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_18007ED38 @ 0x18007ED38 (sub_18007ED38.c)
 *     sub_18007EDF0 @ 0x18007EDF0 (sub_18007EDF0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18007EA24(_DWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 *a5)
{
  unsigned __int64 *v5; // rsi
  unsigned __int64 v9; // rdi
  int v10; // r8d
  __int64 result; // rax
  char *v12; // r8
  __int64 v13; // rax
  char *v14; // rdx
  _BYTE *v15; // rcx
  _DWORD *v16; // r14
  _DWORD *v17; // r13
  char *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  __int64 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+B8h] [rbp+48h] BYREF
  _DWORD *v23; // [rsp+C0h] [rbp+50h] BYREF

  v5 = a5;
  LODWORD(v23) = -1073741595;
  v22 = 0;
  if ( a5 )
    *a5 = 0LL;
  v9 = 64LL;
  sub_18007ED38(&v22, &v23, a3);
  if ( v22 == 2 )
    return (unsigned int)v23;
  result = sub_18007EDF0(v21, (_DWORD)a5, v10, (unsigned int)&a5, (_DWORD)v5, 64);
  if ( (int)result >= 0 )
  {
    v12 = (char *)a1 + (unsigned int)a1[6];
    v13 = 1LL;
    v14 = (char *)a1 + *((unsigned int *)v12 + 3);
    if ( *((_DWORD *)v12 + 2) > 1u )
    {
      v15 = v14 + 24;
      do
      {
        if ( (*v15 & 2) != 0 )
          break;
        v13 = (unsigned int)(v13 + 1);
        v15 += 24;
      }
      while ( (unsigned int)v13 < *((_DWORD *)v12 + 2) );
    }
    if ( (_DWORD)v13 == *((_DWORD *)v12 + 2) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() found activation context data at %p with assembly roster that has no root\n",
        "RtlpQueryInformationActivationContextDetailedInformation",
        a1);
      return 3222601731LL;
    }
    else
    {
      v16 = (_DWORD *)((char *)a1 + *(unsigned int *)&v14[24 * v13 + 16]);
      if ( v16[5] )
        v9 = (unsigned int)v16[5] + 66LL;
      if ( v16[10] )
        v9 += (unsigned int)v16[10] + 2LL;
      v17 = v23;
      if ( v23[11] )
        v9 += (unsigned int)v23[11] + 2LL;
      if ( v9 <= a4 )
      {
        v18 = (char *)(a3 + 64);
        *(_DWORD *)a3 = a1[7];
        *(_DWORD *)(a3 + 4) = a1[2];
        *(_DWORD *)(a3 + 8) = *((_DWORD *)v12 + 2) - 1;
        *(_DWORD *)(a3 + 12) = v16[4];
        *(_DWORD *)(a3 + 16) = v16[5] >> 1;
        *(_QWORD *)(a3 + 40) = 0LL;
        *(_DWORD *)(a3 + 20) = v16[9];
        *(_DWORD *)(a3 + 24) = v16[10] >> 1;
        *(_QWORD *)(a3 + 48) = 0LL;
        *(_DWORD *)(a3 + 28) = v17[10];
        *(_DWORD *)(a3 + 32) = v17[11] >> 1;
        *(_QWORD *)(a3 + 56) = 0LL;
        if ( v16[5] )
        {
          memmove((void *)(a3 + 64), (const void *)(v21 + (unsigned int)v16[6]), (unsigned int)v16[5]);
          *(_QWORD *)(a3 + 40) = v18;
          v19 = &v18[v16[5]];
          *(_WORD *)v19 = 0;
          v18 = v19 + 2;
        }
        if ( v16[10] )
        {
          memmove(v18, (const void *)(v21 + (unsigned int)v16[11]), (unsigned int)v16[10]);
          *(_QWORD *)(a3 + 48) = v18;
          v20 = &v18[v16[10]];
          *(_WORD *)v20 = 0;
          v18 = v20 + 2;
        }
        if ( v17[11] )
        {
          memmove(v18, (char *)v17 + (unsigned int)v17[12], (unsigned int)v17[11]);
          *(_QWORD *)(a3 + 56) = v18;
          *(_WORD *)&v18[v17[11]] = 0;
        }
        if ( v5 )
          *v5 = v9;
        return 0LL;
      }
      else
      {
        if ( v5 )
          *v5 = v9;
        return 3221225507LL;
      }
    }
  }
  return result;
}
