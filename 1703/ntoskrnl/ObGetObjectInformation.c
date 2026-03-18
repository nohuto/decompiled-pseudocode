/*
 * XREFs of ObGetObjectInformation @ 0x1406C1730
 * Callers:
 *     ExpGetObjectInformation @ 0x1407151F0 (ExpGetObjectInformation.c)
 * Callees:
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x14003AB48 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x140088018 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 *     ObpCreateTypeArray @ 0x1406C1DAC (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x1406C1E8C (ObpDestroyTypeArray.c)
 *     ObQueryTypeName @ 0x1406C21D0 (ObQueryTypeName.c)
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
  unsigned int *v13; // r13
  __int64 v14; // r11
  char v15; // dl
  unsigned int i; // eax
  __int64 v17; // rdi
  __int64 v18; // r10
  __int64 v19; // rcx
  _DWORD *v20; // r8
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  int *v25; // rax
  int v26; // ecx
  int v27; // edx
  __int64 *v28; // rax
  unsigned int v29; // r8d
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rax
  int v33; // edi
  unsigned __int16 *v34; // rdx
  unsigned int v35; // eax
  unsigned __int16 *v36; // rbx
  unsigned __int64 v37; // rbx
  unsigned __int16 *v38; // rbx
  __int16 v39; // ax
  __int16 v40; // di
  bool v41; // cf
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
      goto LABEL_73;
    v53 = (_DWORD *)(v12 + 80);
    if ( (PVOID)(v12 + 80) == ObpTypeObjectType )
      goto LABEL_73;
    v13 = (unsigned int *)ObpCreateTypeArray(v12 + 80);
    v51 = v13;
    LODWORD(v14) = 0;
    if ( !v13 )
      goto LABEL_72;
    v15 = 1;
    v44 = 1;
    for ( i = 0; ; ++i )
    {
      v49 = i;
      if ( i >= *v13 )
      {
LABEL_71:
        ObpDestroyTypeArray(v13);
        v51 = 0LL;
        TypeArray = v55;
LABEL_72:
        v11 = v48;
LABEL_73:
        ++v11;
        goto LABEL_6;
      }
      v17 = *(_QWORD *)&v13[2 * i + 2];
      if ( v17 )
        break;
LABEL_70:
      ;
    }
    v18 = v17 + 80;
    v56 = (char *)(v17 + 80);
    if ( v15 )
    {
      v44 = v14;
      if ( v50 && v9 < a3 )
        *(_DWORD *)v50 = v9;
      v19 = a2 + v9;
      v50 = v19;
      v57 = v19;
      v9 += 48;
      v45 = v9;
      if ( v9 < 0x30 )
        goto LABEL_18;
      if ( v9 >= a3 )
        goto LABEL_21;
      *(_DWORD *)v19 = v14;
      v20 = v53;
      *(_DWORD *)(v19 + 4) = v53[11];
      *(_DWORD *)(v19 + 8) = v20[12];
      *(_DWORD *)(v19 + 12) = *((unsigned __int8 *)v20 + 40);
      *(_DWORD *)(v19 + 16) = v20[18];
      *(_OWORD *)(v19 + 20) = *(_OWORD *)(v20 + 19);
      *(_DWORD *)(v19 + 36) = v20[23];
      *(_DWORD *)(v19 + 40) = v20[25];
      *(_BYTE *)(v19 + 44) = (*((_BYTE *)v20 + 66) & 8) != 0;
      NumberOfBytes = v14;
      v21 = ObQueryTypeName(v17 + 80, v19 + 48, a3 - v9, &NumberOfBytes);
      v47 = v21;
      v22 = (NumberOfBytes + 7) & 0xFFFFFFF8;
      NumberOfBytes = v22;
      LODWORD(v14) = 0;
      if ( v21 < 0 )
      {
        v8 = v21;
        NumberOfBytes_4 = v21;
      }
      else
      {
        v23 = v50;
        *(_WORD *)(v50 + 50) = v22 - 16;
        *(_QWORD *)(v23 + 56) += a1 - a2;
        v22 = NumberOfBytes;
      }
      v9 += v22;
      v45 = v9;
      if ( v9 < v22 )
      {
LABEL_18:
        v8 = -1073741675;
LABEL_19:
        NumberOfBytes_4 = v8;
        goto LABEL_71;
      }
      v18 = v17 + 80;
      v24 = a3;
    }
    else
    {
      v24 = a3;
      if ( v9 < a3 )
        *(_DWORD *)v4 = v9;
    }
    v4 = a2 + v9;
    v58 = v4;
    v9 += 64;
    v45 = v9;
    if ( v9 < 0x40 )
      goto LABEL_18;
    if ( v9 >= v24 )
    {
LABEL_21:
      v8 = -1073741820;
      goto LABEL_19;
    }
    *(_DWORD *)v4 = v14;
    *(_QWORD *)(v4 + 8) = v18;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(v17 + 16);
    *(_WORD *)(v4 + 24) = *(_WORD *)(v17 + 24);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v17 + 32);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v17 + 40);
    *(_WORD *)(v4 + 26) = *(unsigned __int8 *)(v17 + 59);
    *(_QWORD *)(v4 + 56) = *(_QWORD *)(v17 + 72) & 0xFFFFFFFFFFFFFFF0uLL;
    v25 = (int *)OBJECT_HEADER_TO_QUOTA_INFO(v17 + 32);
    v26 = v53[26];
    v27 = v53[27];
    if ( v25 )
    {
      v26 = *v25;
      v27 = v25[1];
    }
    *(_DWORD *)(v4 + 36) = v26;
    *(_DWORD *)(v4 + 40) = v27;
    v28 = (__int64 *)OBJECT_HEADER_TO_PROCESS_INFO(v17 + 32);
    if ( v28 )
    {
      v32 = *v28;
      if ( v32 )
        *(_QWORD *)(v4 + 48) = *(_QWORD *)(v32 + 736);
    }
    NumberOfBytes = v14;
    v33 = v14;
    v47 = v14;
    if ( *(_QWORD *)(v30 + 160) != v14 && (POBJECT_TYPE *)v30 == IoFileObjectType )
    {
      v34 = v46;
      *(_OWORD *)v46 = *(_OWORD *)(v31 + 88);
      if ( *v34 && *((_QWORD *)v34 + 1) != v14 )
      {
        v35 = *v34 + 2;
        NumberOfBytes = v35;
        if ( v35 > 0x208 )
        {
          NumberOfBytes = 520;
          *v34 = 518;
          v35 = NumberOfBytes;
        }
        v36 = v34 + 8;
        memmove(v34 + 8, *((const void **)v34 + 1), v35 - 2LL);
        v34 = v46;
        *((_QWORD *)v46 + 1) = v36;
        v34[1] = NumberOfBytes;
        LODWORD(v14) = 0;
        *(_WORD *)(*((_QWORD *)v34 + 1) + 2LL * (*v34 >> 1)) = 0;
        NumberOfBytes += 16;
        v29 = a3;
      }
LABEL_52:
      if ( NumberOfBytes )
      {
        NumberOfBytes = (NumberOfBytes + 7) & 0xFFFFFFF8;
        v9 += NumberOfBytes;
        v45 = v9;
        if ( v9 < NumberOfBytes )
          goto LABEL_18;
        if ( v33 < 0 )
        {
          v9 += 16;
          v45 = v9;
          if ( v9 < 0x10 )
            goto LABEL_18;
          if ( v9 < v29 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
            v8 = v33;
            NumberOfBytes_4 = v33;
            goto LABEL_68;
          }
        }
        else
        {
          v39 = *v34;
          if ( *v34 && v9 < v29 )
          {
            v40 = v39 + 2;
            *(_WORD *)(v4 + 64) = v39;
            memmove((void *)(v4 + 80), *((const void **)v34 + 1), (unsigned __int16)(v39 + 2));
            *(_QWORD *)(v4 + 72) = a1 + v4 + 80 - a2;
            *(_WORD *)(v4 + 66) = v40;
LABEL_68:
            LODWORD(v14) = 0;
            goto LABEL_69;
          }
          if ( *v34 == (_WORD)v14 )
          {
            v41 = v9 < v29;
            goto LABEL_65;
          }
        }
LABEL_66:
        v8 = -1073741820;
        NumberOfBytes_4 = -1073741820;
LABEL_69:
        i = v49;
        v15 = v44;
        goto LABEL_70;
      }
      v9 += 16;
      v45 = v9;
      if ( v9 < 0x10 )
        goto LABEL_18;
      v41 = v9 < v29;
LABEL_65:
      if ( v41 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
        goto LABEL_68;
      }
      goto LABEL_66;
    }
    v37 = v54;
    v33 = ObQueryNameStringMode((char *)v31, (__int64)v46, v54, &NumberOfBytes, v14);
    v47 = v33;
    v29 = a3;
    if ( v33 == -1073741820 && NumberOfBytes > v37 && NumberOfBytes + v9 < a3 )
    {
      v38 = v6;
      v6 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7241624Fu);
      v52 = v6;
      LODWORD(v14) = 0;
      if ( !v6 )
      {
        v6 = v38;
        v52 = v38;
        v33 = -1073741670;
        v47 = -1073741670;
        v29 = a3;
LABEL_51:
        v34 = v46;
        goto LABEL_52;
      }
      ExFreePoolWithTag(v38, 0x7241624Fu);
      v54 = NumberOfBytes;
      v46 = v6;
      v59 = v6;
      v33 = ObQueryNameStringMode(v56, (__int64)v6, NumberOfBytes, &NumberOfBytes, 0);
      v47 = v33;
      v29 = a3;
    }
    LODWORD(v14) = 0;
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
