/*
 * XREFs of ObGetObjectInformation @ 0x1406F01B4
 * Callers:
 *     ExpGetObjectInformation @ 0x1407543C4 (ExpGetObjectInformation.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x1400191D8 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x14012FF68 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 *     ObpCreateTypeArray @ 0x1406F0828 (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x1406F0908 (ObpDestroyTypeArray.c)
 *     ObQueryTypeName @ 0x1406F0C50 (ObQueryTypeName.c)
 */

__int64 __fastcall ObGetObjectInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r15
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v6; // r12
  unsigned int v8; // r14d
  unsigned int v9; // esi
  unsigned int *TypeArray; // rbx
  unsigned int v11; // edx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  unsigned int *v14; // r13
  __int64 v15; // r11
  char v16; // dl
  unsigned int i; // eax
  __int64 v18; // rdi
  __int64 v19; // r10
  __int64 v20; // rcx
  _DWORD *v21; // r8
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned int v25; // r8d
  int *v26; // rax
  int v27; // ecx
  int v28; // edx
  __int64 *v29; // rax
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // rax
  int v34; // edi
  unsigned __int16 *v35; // rdx
  unsigned int v36; // eax
  unsigned __int16 *v37; // rbx
  unsigned __int64 v38; // rbx
  unsigned __int16 *v39; // rbx
  __int16 v40; // ax
  __int16 v41; // di
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-B8h] BYREF
  int NumberOfBytes_4; // [rsp+34h] [rbp-B4h]
  char v44; // [rsp+38h] [rbp-B0h]
  unsigned int v45; // [rsp+3Ch] [rbp-ACh]
  unsigned __int16 *v46; // [rsp+40h] [rbp-A8h]
  int v47; // [rsp+48h] [rbp-A0h]
  unsigned int v48; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v49; // [rsp+50h] [rbp-98h]
  __int64 v50; // [rsp+58h] [rbp-90h]
  unsigned int *v51; // [rsp+60h] [rbp-88h]
  unsigned __int16 *v52; // [rsp+68h] [rbp-80h]
  _DWORD *v53; // [rsp+70h] [rbp-78h]
  __int64 v54; // [rsp+78h] [rbp-70h]
  unsigned int *v55; // [rsp+80h] [rbp-68h]
  char *v56; // [rsp+88h] [rbp-60h]
  __int64 v57; // [rsp+90h] [rbp-58h]
  __int64 v58; // [rsp+98h] [rbp-50h]
  unsigned __int16 *v59; // [rsp+A0h] [rbp-48h]

  v4 = 0LL;
  v51 = 0LL;
  v54 = 536LL;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x218uLL, 0x7241624Fu);
  v6 = PoolWithTag;
  v52 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v46 = PoolWithTag;
  v8 = 0;
  v9 = 0;
  v50 = 0LL;
  TypeArray = (unsigned int *)ObpCreateTypeArray(ObpTypeObjectType);
  v55 = TypeArray;
  if ( !TypeArray )
  {
    ExFreePoolWithTag(v6, 0x7241624Fu);
    return 3221225473LL;
  }
  v11 = 0;
LABEL_6:
  v48 = v11;
  if ( v11 < *TypeArray )
  {
    v12 = *(_QWORD *)&TypeArray[2 * v11 + 2];
    if ( !v12 )
      goto LABEL_72;
    v13 = (_DWORD *)(v12 + 80);
    v53 = v13;
    if ( v13 == ObpTypeObjectType )
      goto LABEL_72;
    v14 = (unsigned int *)ObpCreateTypeArray(v13);
    v51 = v14;
    LODWORD(v15) = 0;
    if ( !v14 )
      goto LABEL_71;
    v16 = 1;
    v44 = 1;
    for ( i = 0; ; ++i )
    {
      v49 = i;
      if ( i >= *v14 )
      {
LABEL_70:
        ObpDestroyTypeArray(v14);
        v51 = 0LL;
        TypeArray = v55;
LABEL_71:
        v11 = v48;
LABEL_72:
        ++v11;
        goto LABEL_6;
      }
      v18 = *(_QWORD *)&v14[2 * i + 2];
      if ( v18 )
        break;
LABEL_69:
      ;
    }
    v19 = v18 + 80;
    v56 = (char *)(v18 + 80);
    if ( v16 )
    {
      v44 = v15;
      if ( v50 && v9 < a3 )
        *(_DWORD *)v50 = v9;
      v20 = a2 + v9;
      v50 = v20;
      v57 = v20;
      v9 += 48;
      v45 = v9;
      if ( v9 < 0x30 )
        goto LABEL_18;
      if ( v9 >= a3 )
        goto LABEL_21;
      *(_DWORD *)v20 = v15;
      v21 = v53;
      *(_DWORD *)(v20 + 4) = v53[11];
      *(_DWORD *)(v20 + 8) = v21[12];
      *(_DWORD *)(v20 + 12) = *((unsigned __int8 *)v21 + 40);
      *(_DWORD *)(v20 + 16) = v21[18];
      *(_OWORD *)(v20 + 20) = *(_OWORD *)(v21 + 19);
      *(_DWORD *)(v20 + 36) = v21[23];
      *(_DWORD *)(v20 + 40) = v21[25];
      *(_BYTE *)(v20 + 44) = (*((_BYTE *)v21 + 66) & 8) != 0;
      NumberOfBytes = v15;
      v22 = ObQueryTypeName(v18 + 80, v20 + 48, a3 - v9, &NumberOfBytes);
      v47 = v22;
      v23 = (NumberOfBytes + 7) & 0xFFFFFFF8;
      NumberOfBytes = v23;
      LODWORD(v15) = 0;
      if ( v22 < 0 )
      {
        v8 = v22;
        NumberOfBytes_4 = v22;
      }
      else
      {
        v24 = v50;
        *(_WORD *)(v50 + 50) = v23 - 16;
        *(_QWORD *)(v24 + 56) += a1 - a2;
        v23 = NumberOfBytes;
      }
      v9 += v23;
      v45 = v9;
      if ( v9 < v23 )
      {
LABEL_18:
        v8 = -1073741675;
LABEL_19:
        NumberOfBytes_4 = v8;
        goto LABEL_70;
      }
      v19 = v18 + 80;
      v25 = a3;
    }
    else
    {
      v25 = a3;
      if ( v9 < a3 )
        *(_DWORD *)v4 = v9;
    }
    v4 = a2 + v9;
    v58 = v4;
    v9 += 64;
    v45 = v9;
    if ( v9 < 0x40 )
      goto LABEL_18;
    if ( v9 >= v25 )
    {
LABEL_21:
      v8 = -1073741820;
      goto LABEL_19;
    }
    *(_DWORD *)v4 = v15;
    *(_QWORD *)(v4 + 8) = v19;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(v18 + 16);
    *(_WORD *)(v4 + 24) = *(_WORD *)(v18 + 24);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v18 + 32);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v18 + 40);
    *(_WORD *)(v4 + 26) = *(unsigned __int8 *)(v18 + 59);
    *(_QWORD *)(v4 + 56) = *(_QWORD *)(v18 + 72) & 0xFFFFFFFFFFFFFFF0uLL;
    v26 = (int *)OBJECT_HEADER_TO_QUOTA_INFO(v18 + 32);
    v27 = v53[26];
    v28 = v53[27];
    if ( v26 )
    {
      v27 = *v26;
      v28 = v26[1];
    }
    *(_DWORD *)(v4 + 36) = v27;
    *(_DWORD *)(v4 + 40) = v28;
    v29 = (__int64 *)OBJECT_HEADER_TO_PROCESS_INFO(v18 + 32);
    if ( v29 )
    {
      v33 = *v29;
      if ( v33 )
        *(_QWORD *)(v4 + 48) = *(_QWORD *)(v33 + 736);
    }
    NumberOfBytes = v15;
    v34 = v15;
    v47 = v15;
    if ( *(_QWORD *)(v31 + 160) != v15 && (POBJECT_TYPE *)v31 == IoFileObjectType )
    {
      v35 = v46;
      *(_OWORD *)v46 = *(_OWORD *)(v32 + 88);
      if ( *v35 && *((_QWORD *)v35 + 1) != v15 )
      {
        v36 = *v35 + 2;
        NumberOfBytes = v36;
        if ( v36 > 0x208 )
        {
          NumberOfBytes = 520;
          *v35 = 518;
          v36 = NumberOfBytes;
        }
        v37 = v35 + 8;
        memmove(v35 + 8, *((const void **)v35 + 1), v36 - 2LL);
        v35 = v46;
        *((_QWORD *)v46 + 1) = v37;
        v35[1] = NumberOfBytes;
        LODWORD(v15) = 0;
        *(_WORD *)(*((_QWORD *)v35 + 1) + 2LL * (*v35 >> 1)) = 0;
        NumberOfBytes += 16;
        v30 = a3;
      }
LABEL_52:
      if ( NumberOfBytes )
      {
        NumberOfBytes = (NumberOfBytes + 7) & 0xFFFFFFF8;
        v9 += NumberOfBytes;
        v45 = v9;
        if ( v9 < NumberOfBytes )
          goto LABEL_18;
        if ( v34 < 0 )
        {
          v9 += 16;
          v45 = v9;
          if ( v9 < 0x10 )
            goto LABEL_18;
          if ( v9 < v30 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
            v8 = v34;
            NumberOfBytes_4 = v34;
            goto LABEL_67;
          }
        }
        else
        {
          v40 = *v35;
          if ( *v35 && v9 < v30 )
          {
            v41 = v40 + 2;
            *(_WORD *)(v4 + 64) = v40;
            memmove((void *)(v4 + 80), *((const void **)v35 + 1), (unsigned __int16)(v40 + 2));
            *(_QWORD *)(v4 + 72) = a1 + v4 + 80 - a2;
            *(_WORD *)(v4 + 66) = v41;
LABEL_67:
            LODWORD(v15) = 0;
            goto LABEL_68;
          }
          if ( *v35 == (_WORD)v15 )
            goto LABEL_64;
        }
LABEL_65:
        v8 = -1073741820;
        NumberOfBytes_4 = -1073741820;
LABEL_68:
        i = v49;
        v16 = v44;
        goto LABEL_69;
      }
      v9 += 16;
      v45 = v9;
      if ( v9 < 0x10 )
        goto LABEL_18;
LABEL_64:
      if ( v9 < v30 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
        goto LABEL_67;
      }
      goto LABEL_65;
    }
    v38 = v54;
    v34 = ObQueryNameStringMode((char *)v32, (__int64)v46, v54, &NumberOfBytes, v15);
    v47 = v34;
    v30 = a3;
    if ( v34 == -1073741820 && NumberOfBytes > v38 && NumberOfBytes + v9 < a3 )
    {
      v39 = v6;
      v6 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7241624Fu);
      v52 = v6;
      LODWORD(v15) = 0;
      if ( !v6 )
      {
        v6 = v39;
        v52 = v39;
        v34 = -1073741670;
        v47 = -1073741670;
        v30 = a3;
LABEL_51:
        v35 = v46;
        goto LABEL_52;
      }
      ExFreePoolWithTag(v39, 0x7241624Fu);
      v54 = NumberOfBytes;
      v46 = v6;
      v59 = v6;
      v34 = ObQueryNameStringMode(v56, (__int64)v6, NumberOfBytes, &NumberOfBytes, 0);
      v47 = v34;
      v30 = a3;
    }
    LODWORD(v15) = 0;
    goto LABEL_51;
  }
  if ( a4 )
    *a4 = v9;
  ObpDestroyTypeArray(TypeArray);
  ExFreePoolWithTag(v6, 0x7241624Fu);
  if ( !v50 )
    return (unsigned int)-1073741823;
  return v8;
}
