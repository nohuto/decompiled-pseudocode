/*
 * XREFs of sub_1800DA028 @ 0x1800DA028
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800DA028(_DWORD *a1, _DWORD *a2, _DWORD *a3, size_t a4, size_t *a5)
{
  size_t *v5; // rsi
  unsigned int v6; // ebx
  __int64 v10; // r13
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  int v13; // r9d
  __int64 v14; // rbp
  unsigned int v15; // edx
  _DWORD *v16; // rdi
  __int64 v17; // r15
  unsigned __int64 v18; // rcx
  _WORD *v19; // rsi
  _WORD *v20; // rsi
  __int64 v21; // r15
  unsigned int v22; // ebp
  unsigned __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+28h] [rbp-70h]
  __int64 v28; // [rsp+30h] [rbp-68h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  int v30; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a5;
  v6 = 0;
  v31 = -1073741595;
  v32 = 0LL;
  v30 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( *a2 >= (unsigned int)(*(_DWORD *)((char *)a1 + (unsigned int)a1[6] + 8) - 1) )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      *a2,
      *(_DWORD *)((char *)a1 + (unsigned int)a1[6] + 8));
    return (unsigned int)-1073741811;
  }
  sub_180079324(&v30, (int *)&v31, a3, a4, v5, 0x68uLL, a1, v29, 2u, &v32, &a5);
  if ( v30 == 2 )
    return v31;
  v10 = v32;
  v11 = a2[1];
  v12 = *(_DWORD *)(v32 + 20);
  if ( v11 >= v12 )
  {
    LODWORD(v28) = *a2;
    LODWORD(v27) = *(_DWORD *)(v32 + 20);
    LODWORD(v26) = a2[1];
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() received invalid file index (%u, max is %u) in Assembly (%u)\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      v26,
      v27,
      v28);
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(v32 + 24) )
    return (unsigned int)-1072365547;
  v13 = 0;
  v14 = v32 + *(unsigned int *)(v32 + 24);
  v15 = 0;
  if ( !v12 )
    return (unsigned int)-1072365547;
  while ( *(_DWORD *)(v14 + 24LL * v15 + 20) != *a2 + 1 )
  {
LABEL_15:
    if ( ++v15 >= v12 )
      return (unsigned int)-1072365547;
  }
  if ( v13 != v11 || !*(_DWORD *)(v14 + 24LL * v15 + 12) )
  {
    ++v13;
    goto LABEL_15;
  }
  v16 = (_DWORD *)(v32 + *(unsigned int *)(v14 + 24LL * v15 + 12));
  if ( !v16 )
    return (unsigned int)-1072365547;
  v17 = 3LL * v15;
  v18 = 32LL;
  if ( *(_DWORD *)(v14 + 24LL * v15 + 8) )
    v18 = *(unsigned int *)(v14 + 24LL * v15 + 8) + 34LL;
  if ( v16[2] )
    v18 += (unsigned int)v16[2] + 2LL;
  if ( v18 > a4 )
  {
    if ( v5 )
      *v5 = v18;
    return (unsigned int)-1073741789;
  }
  v19 = a3 + 8;
  *a3 = v16[1];
  a3[1] = *(_DWORD *)(v14 + 24LL * v15 + 8);
  a3[2] = v16[2];
  *((_QWORD *)a3 + 2) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  if ( *(_DWORD *)(v14 + 24LL * v15 + 8) )
  {
    memmove(
      a3 + 8,
      (const void *)(v10 + *(unsigned int *)(v14 + 24LL * v15 + 4)),
      *(unsigned int *)(v14 + 24LL * v15 + 8));
    *((_QWORD *)a3 + 2) = v19;
    v20 = (_WORD *)((char *)v19 + *(unsigned int *)(v14 + 8 * v17 + 8));
    *v20 = 0;
    v19 = v20 + 1;
  }
  if ( v16[2] )
  {
    if ( v16[4] )
    {
      v21 = v10 + 44LL * (unsigned int)v16[4];
      if ( v21 )
      {
        *((_QWORD *)a3 + 3) = v19;
        v22 = 0;
        if ( !v16[3] )
        {
LABEL_37:
          *v19 = 0;
          return v6;
        }
        v23 = (unsigned __int64)a3 + a4;
        while ( 1 )
        {
          v24 = *(unsigned int *)(v21 + 8LL * v22 + 4);
          if ( (unsigned __int64)v19 + v24 + 2 > v23 )
            return (unsigned int)-1072365547;
          if ( (_DWORD)v24 )
          {
            memmove(v19, (const void *)(v24 + v10), *(unsigned int *)(v21 + 8LL * v22));
            v19 = (_WORD *)((char *)v19 + *(unsigned int *)(v21 + 8LL * v22));
          }
          if ( ++v22 >= v16[3] )
            goto LABEL_37;
        }
      }
    }
  }
  return v6;
}
