/*
 * XREFs of SepCaptureTokenSecurityAttributesInformation @ 0x140545A44
 * Callers:
 *     NtCreateTokenEx @ 0x140542F04 (NtCreateTokenEx.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405458FC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SepCaptureInt64Array @ 0x140545F24 (SepCaptureInt64Array.c)
 *     SepCaptureUnicodeStringArray @ 0x140546370 (SepCaptureUnicodeStringArray.c)
 *     SepCaptureFqbnArray @ 0x140790690 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1407908F0 (SepCaptureOctetStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        unsigned __int64 a1,
        char a2,
        char a3,
        unsigned __int64 **a4)
{
  signed int v5; // ebx
  unsigned int *v6; // rsi
  unsigned __int64 *PoolWithTag; // r14
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned int i; // r15d
  unsigned __int16 v14; // ax
  PVOID v15; // r12
  unsigned __int16 v16; // cx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned int j; // ecx
  __int64 v20; // r15
  __int64 v21; // rdx
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v25; // r15d
  unsigned int v26; // edi
  unsigned int v27; // r15d
  unsigned int v28; // r14d
  unsigned int v29; // [rsp+24h] [rbp-64h]
  PVOID P; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v31; // [rsp+30h] [rbp-58h]
  unsigned int v32; // [rsp+34h] [rbp-54h]
  int v33; // [rsp+38h] [rbp-50h]
  int v34; // [rsp+3Ch] [rbp-4Ch]
  PVOID v35; // [rsp+40h] [rbp-48h]
  __int64 v36; // [rsp+48h] [rbp-40h]
  unsigned int *v37; // [rsp+50h] [rbp-38h]
  unsigned __int64 *v38; // [rsp+58h] [rbp-30h]

  v5 = 0;
  v6 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v31 = 0;
  v33 = 0;
  v32 = 0;
  v34 = 0;
  P = 0LL;
  if ( !a2 )
    return 3221225659LL;
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74416553u);
  v38 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  if ( a2 != 1 )
    goto LABEL_62;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  *(_WORD *)PoolWithTag = *(_WORD *)a1;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)(a1 + 2);
  v8 = *(unsigned int *)(a1 + 4);
  *((_DWORD *)PoolWithTag + 1) = v8;
  if ( !(_DWORD)v8 )
  {
    *a4 = PoolWithTag;
    return 0LL;
  }
  PoolWithTag[1] = *(_QWORD *)(a1 + 8);
  v9 = 40 * v8;
  v36 = v9;
  v10 = 0xFFFFFFFFLL;
  if ( v9 <= 0xFFFFFFFF )
    v10 = (unsigned int)v9;
  v5 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v9 > 0xFFFFFFFF )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v5;
  }
  v6 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x74416553u);
  v37 = v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  if ( (_DWORD)v10 )
  {
    v11 = PoolWithTag[1];
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 + v10 > 0x7FFFFFFF0000LL || v11 + v10 < v11 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(v6, (const void *)PoolWithTag[1], (unsigned int)v10);
  for ( i = 0; ; ++i )
  {
    v35 = 0LL;
    if ( i >= *((_DWORD *)PoolWithTag + 1) )
      break;
    v36 = 5LL * i;
    v14 = v6[10 * i];
    if ( !v14 )
    {
      v5 = -1073741811;
      v35 = 0LL;
      goto LABEL_62;
    }
    v15 = ExAllocatePoolWithTag(PagedPool, v14, 0x74416553u);
    v35 = v15;
    if ( !v15 )
    {
      v5 = -1073741670;
      goto LABEL_62;
    }
    v16 = v6[2 * v36];
    if ( v16 )
    {
      v17 = *(_QWORD *)&v6[2 * v36 + 2];
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = v17 + v16;
      if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v16 = v6[2 * v36];
      }
    }
    memmove(v15, *(const void **)&v6[2 * v36 + 2], v16);
    *(_QWORD *)&v6[2 * v36 + 2] = v15;
    v33 = ++v31;
    v35 = 0LL;
  }
  if ( v5 < 0 )
    goto LABEL_62;
  for ( j = 0; ; ++j )
  {
    v29 = j;
    if ( j >= *((_DWORD *)PoolWithTag + 1) )
    {
LABEL_38:
      PoolWithTag[1] = (unsigned __int64)v6;
      goto LABEL_62;
    }
    v20 = 5LL * j;
    v21 = v6[10 * j + 6];
    if ( !(_DWORD)v21 )
      break;
    v22 = LOWORD(v6[10 * j + 4]);
    if ( LOWORD(v6[10 * j + 4]) )
    {
      if ( v22 <= 2 )
        goto LABEL_31;
      switch ( v22 )
      {
        case 3u:
          LOBYTE(v12) = 1;
          v23 = SepCaptureUnicodeStringArray(*(_QWORD *)&v6[10 * j + 8], v21, v12, &P);
          goto LABEL_32;
        case 4u:
          v23 = SepCaptureFqbnArray(*(void **)&v6[10 * j + 8]);
          goto LABEL_32;
        case 5u:
          goto LABEL_59;
        case 6u:
LABEL_31:
          v23 = SepCaptureInt64Array(*(void **)&v6[10 * j + 8]);
LABEL_32:
          v5 = v23;
          if ( v23 >= 0 )
            *(_QWORD *)&v6[2 * v20 + 8] = P;
          j = v29;
          goto LABEL_35;
        case 0x10u:
LABEL_59:
          v23 = SepCaptureOctetStringArray(*(void **)&v6[10 * j + 8]);
          goto LABEL_32;
      }
    }
    v5 = -1073741637;
LABEL_35:
    if ( v5 < 0 )
      goto LABEL_38;
    v34 = ++v32;
    P = 0LL;
LABEL_37:
    ;
  }
  if ( a3 )
  {
    *(_QWORD *)&v6[10 * j + 8] = 0LL;
    goto LABEL_37;
  }
  v5 = -1073741811;
LABEL_62:
  if ( v5 < 0 )
  {
    if ( v6 )
    {
      v25 = 0;
      v26 = v31;
      while ( v25 < v26 )
        ExFreePoolWithTag(*(PVOID *)&v6[10 * v25++ + 2], 0);
      v27 = 0;
      v28 = v32;
      while ( v27 < v28 )
        ExFreePoolWithTag(*(PVOID *)&v6[10 * v27++ + 8], 0);
      ExFreePoolWithTag(v6, 0);
      PoolWithTag = v38;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    *a4 = PoolWithTag;
  }
  return (unsigned int)v5;
}
