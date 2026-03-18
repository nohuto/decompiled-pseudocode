/*
 * XREFs of SepCaptureTokenSecurityAttributesInformation @ 0x14044ADC8
 * Callers:
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14044AC80 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     NtCreateTokenEx @ 0x14046F5F4 (NtCreateTokenEx.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepCaptureInt64Array @ 0x14044B23C (SepCaptureInt64Array.c)
 *     SepCaptureUnicodeStringArray @ 0x1404F7B70 (SepCaptureUnicodeStringArray.c)
 *     SepCaptureFqbnArray @ 0x1406F4890 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1406F4AF4 (SepCaptureOctetStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureTokenSecurityAttributesInformation(
        unsigned __int64 a1,
        char a2,
        char a3,
        const void ***a4)
{
  int v6; // ebx
  unsigned int *v7; // rsi
  const void **PoolWithTag; // r14
  unsigned int v9; // eax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // r15d
  unsigned __int16 v14; // ax
  PVOID v15; // r9
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // r12d
  __int64 v20; // rdx
  unsigned int v21; // eax
  int v22; // eax
  PVOID v24; // r12
  unsigned int j; // r15d
  unsigned int v26; // r15d
  unsigned int v27; // r14d
  int v28; // [rsp+20h] [rbp-88h]
  PVOID v29; // [rsp+28h] [rbp-80h] BYREF
  unsigned int i; // [rsp+30h] [rbp-78h]
  unsigned int v31; // [rsp+34h] [rbp-74h]
  PVOID P; // [rsp+38h] [rbp-70h]
  int v33; // [rsp+40h] [rbp-68h]
  int v34; // [rsp+44h] [rbp-64h]
  unsigned __int64 v35; // [rsp+48h] [rbp-60h]
  PVOID v36; // [rsp+50h] [rbp-58h]
  unsigned int *v37; // [rsp+58h] [rbp-50h]
  const void **v38; // [rsp+60h] [rbp-48h]
  unsigned int v39; // [rsp+B8h] [rbp+10h]

  v6 = 0;
  v7 = 0LL;
  v37 = 0LL;
  P = 0LL;
  v36 = 0LL;
  LODWORD(v35) = 0;
  v39 = 0;
  v33 = 0;
  v31 = 0;
  v34 = 0;
  v29 = 0LL;
  i = 0;
  if ( !a2 )
    return 3221225659LL;
  PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74416553u);
  v38 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  if ( a2 != 1 )
  {
    v24 = 0LL;
    goto LABEL_62;
  }
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > 0x7FFFFFFF0000LL || a1 + 16 < a1 )
    MEMORY[0x7FFFFFFF0000] = 0;
  *(_WORD *)PoolWithTag = *(_WORD *)a1;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)(a1 + 2);
  v9 = *(_DWORD *)(a1 + 4);
  *((_DWORD *)PoolWithTag + 1) = v9;
  if ( !v9 )
  {
    *a4 = PoolWithTag;
    return 0LL;
  }
  PoolWithTag[1] = *(const void **)(a1 + 8);
  v10 = 40LL * *((unsigned int *)PoolWithTag + 1);
  v35 = v10;
  if ( v10 > 0xFFFFFFFF )
  {
    LODWORD(v10) = -1;
    LODWORD(v35) = -1;
    v6 = -1073741675;
  }
  else
  {
    LODWORD(v35) = v10;
    v6 = 0;
  }
  v28 = v6;
  if ( v6 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v6;
  }
  v7 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x74416553u);
  v37 = v7;
  if ( !v7 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  if ( (_DWORD)v10 )
  {
    v11 = (unsigned __int64)PoolWithTag[1];
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 + (unsigned int)v10 > 0x7FFFFFFF0000LL || v11 + (unsigned int)v10 < v11 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(v7, PoolWithTag[1], (unsigned int)v10);
  v13 = 0;
  for ( i = 0; ; i = v13 )
  {
    if ( v13 >= *((_DWORD *)PoolWithTag + 1) )
    {
      v19 = 0;
      for ( i = 0; ; i = v19 )
      {
        if ( v19 >= *((_DWORD *)PoolWithTag + 1) )
        {
LABEL_36:
          PoolWithTag[1] = v7;
          goto LABEL_61;
        }
        v20 = v7[10 * v19 + 6];
        if ( !(_DWORD)v20 )
        {
          if ( !a3 )
            goto LABEL_49;
          *(_QWORD *)&v7[10 * v19 + 8] = 0LL;
          goto LABEL_35;
        }
        v21 = LOWORD(v7[10 * v19 + 4]);
        if ( LOWORD(v7[10 * v19 + 4]) )
        {
          if ( v21 <= 2 )
            goto LABEL_30;
          switch ( v21 )
          {
            case 3u:
              LOBYTE(v12) = 1;
              v22 = SepCaptureUnicodeStringArray(*(_QWORD *)&v7[10 * v19 + 8], v20, v12, &v29, v28);
              goto LABEL_31;
            case 4u:
              v22 = SepCaptureFqbnArray(*(void **)&v7[10 * v19 + 8]);
LABEL_31:
              v6 = v22;
              v28 = v22;
              if ( v22 >= 0 )
                *(_QWORD *)&v7[10 * v19 + 8] = v29;
              goto LABEL_33;
            case 5u:
              goto LABEL_57;
            case 6u:
LABEL_30:
              v22 = SepCaptureInt64Array(*(void **)&v7[10 * v19 + 8]);
              goto LABEL_31;
            case 0x10u:
LABEL_57:
              v6 = SepCaptureOctetStringArray(*(void **)&v7[10 * v19 + 8]);
              v28 = v6;
              if ( v6 >= 0 )
                *(_QWORD *)&v7[10 * v19 + 8] = v29;
              goto LABEL_33;
          }
        }
        v6 = -1073741637;
        v28 = -1073741637;
LABEL_33:
        if ( v6 < 0 )
          goto LABEL_36;
        v34 = ++v31;
        v29 = 0LL;
LABEL_35:
        ++v19;
      }
    }
    v14 = v7[10 * v13];
    if ( !v14 )
    {
LABEL_49:
      v6 = -1073741811;
      goto LABEL_61;
    }
    v15 = ExAllocatePoolWithTag(PagedPool, v14, 0x74416553u);
    P = v15;
    v36 = v15;
    if ( !v15 )
      break;
    v16 = v7[10 * v13];
    if ( v16 )
    {
      v17 = *(_QWORD *)&v7[10 * v13 + 2];
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = v17 + v16;
      if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v15, *(const void **)&v7[10 * v13 + 2], LOWORD(v7[10 * v13]));
    *(_QWORD *)&v7[10 * v13 + 2] = P;
    v33 = ++v39;
    P = 0LL;
    v36 = 0LL;
    ++v13;
  }
  v6 = -1073741670;
LABEL_61:
  v24 = P;
LABEL_62:
  if ( v6 < 0 )
  {
    if ( v7 )
    {
      for ( j = 0; j < v39; ++j )
        ExFreePoolWithTag(*(PVOID *)&v7[10 * j + 2], 0);
      v26 = 0;
      v24 = P;
      v27 = v31;
      while ( v26 < v27 )
        ExFreePoolWithTag(*(PVOID *)&v7[10 * v26++ + 8], 0);
      ExFreePoolWithTag(v7, 0);
      PoolWithTag = v38;
    }
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    *a4 = PoolWithTag;
  }
  return (unsigned int)v6;
}
