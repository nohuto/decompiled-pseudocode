/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x1404A5E30
 * Callers:
 *     ObQuerySecurityDescriptorInfo @ 0x1404A5144 (ObQuerySecurityDescriptorInfo.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x1404A5DD4 (CmpQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1407A95C8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlpFilterSacl @ 0x1404A62F0 (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  _QWORD *v4; // r10
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  ULONG v8; // ecx
  unsigned int *v9; // rax
  __int16 v10; // r8
  __int16 v11; // cx
  __int64 v12; // rdx
  unsigned __int8 *v13; // rsi
  __int64 v14; // rdx
  unsigned __int8 *v15; // r14
  __int64 v16; // rdx
  unsigned __int16 *v17; // rdi
  char *v18; // r11
  unsigned __int64 v19; // rdx
  ULONG v20; // ebx
  DWORD v21; // r9d
  DWORD v22; // eax
  DWORD v23; // ecx
  int v24; // eax
  __int16 v25; // cx
  char *v26; // rbx
  DWORD v27; // eax
  PSECURITY_INFORMATION v28; // r15
  int v29; // esi
  __int64 v30; // rcx
  int v32; // [rsp+24h] [rbp-94h] BYREF
  size_t Size; // [rsp+28h] [rbp-90h]
  unsigned __int64 v34; // [rsp+30h] [rbp-88h]
  char *v35; // [rsp+38h] [rbp-80h]
  char *v36; // [rsp+40h] [rbp-78h]
  ULONG v37; // [rsp+48h] [rbp-70h]
  __int128 v38; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v39; // [rsp+60h] [rbp-58h]
  char *v40; // [rsp+68h] [rbp-50h]
  unsigned __int16 *v41; // [rsp+70h] [rbp-48h]

  v4 = SecurityDescriptor;
  v6 = 0;
  LODWORD(Size) = 0;
  v7 = 0;
  v32 = 0;
  v8 = *Length;
  v37 = *Length;
  v9 = (unsigned int *)*ObjectsSecurityDescriptor;
  if ( !*ObjectsSecurityDescriptor )
  {
    *Length = 20;
    if ( v8 < 0x14 )
      return -1073741789;
    *(_QWORD *)SecurityDescriptor = 0LL;
    *((_QWORD *)SecurityDescriptor + 1) = 0LL;
    *((_DWORD *)SecurityDescriptor + 4) = 0;
    *(_BYTE *)SecurityDescriptor = 1;
    *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
    return 0;
  }
  v38 = *(_OWORD *)v9;
  LODWORD(v39) = v9[4];
  v10 = *((_WORD *)v9 + 1);
  v11 = v10 & 0x8000;
  if ( v10 >= 0 )
  {
    v13 = (unsigned __int8 *)*((_QWORD *)v9 + 1);
  }
  else
  {
    v12 = v9[1];
    if ( (_DWORD)v12 )
      v13 = (unsigned __int8 *)v9 + v12;
    else
      v13 = 0LL;
  }
  *((_QWORD *)&v38 + 1) = v13;
  if ( v11 )
  {
    v14 = v9[2];
    if ( (_DWORD)v14 )
      v15 = (unsigned __int8 *)v9 + v14;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = (unsigned __int8 *)*((_QWORD *)v9 + 2);
  }
  v39 = v15;
  if ( (v10 & 4) != 0 )
  {
    if ( v11 )
    {
      v16 = v9[4];
      if ( (_DWORD)v16 )
        v17 = (unsigned __int16 *)((char *)v9 + v16);
      else
        v17 = 0LL;
    }
    else
    {
      v17 = (unsigned __int16 *)*((_QWORD *)v9 + 4);
    }
  }
  else
  {
    v17 = 0LL;
  }
  v41 = v17;
  if ( (v10 & 0x10) != 0 )
  {
    if ( v11 )
    {
      v30 = v9[3];
      if ( !(_DWORD)v30 )
      {
        v18 = 0LL;
        v35 = 0LL;
        goto LABEL_14;
      }
      v18 = (char *)v9 + v30;
    }
    else
    {
      v18 = (char *)*((_QWORD *)v9 + 3);
    }
    v35 = v18;
  }
  else
  {
    v18 = 0LL;
    v35 = 0LL;
  }
LABEL_14:
  v40 = v18;
  v19 = (unsigned __int64)v38 >> 16;
  LOWORD(v19) = WORD1(v38) & 0x7FFF;
  v34 = v19;
  WORD1(v38) &= ~0x8000u;
  v20 = 20;
  v21 = *SecurityInformation;
  v22 = *SecurityInformation & 0x80;
  v23 = *SecurityInformation & 0x100;
  if ( (*SecurityInformation & 0x10000) != 0 )
  {
    v21 |= 0x1FFu;
    *SecurityInformation = v21;
    if ( !v22 )
    {
      v21 &= ~0x80u;
      *SecurityInformation = v21;
    }
    if ( !v23 )
    {
      v21 &= ~0x100u;
      *SecurityInformation = v21;
    }
  }
  if ( (v21 & 1) != 0 && v13 )
  {
    v24 = v13[1];
    v6 = 4 * v24 + 8;
    v20 = ((4 * v24 + 11) & 0xFFFFFFFC) + 20;
  }
  if ( (v21 & 2) != 0 && v15 )
  {
    LODWORD(Size) = 4 * v15[1] + 8;
    v20 += (Size + 3) & 0xFFFFFFFC;
  }
  if ( (v21 & 4) != 0 && (BYTE2(v38) & 4) != 0 && v17 )
  {
    v7 = (v17[1] + 3) & 0xFFFFFFFC;
    v20 += v7;
  }
  if ( (v21 & 0x1F8) != 0 && (BYTE2(v38) & 0x10) != 0 && v18 )
  {
    RtlpFilterSacl(v18, 0LL, &v32);
    v20 += v32;
    LOWORD(v19) = v34;
    v4 = SecurityDescriptor;
  }
  *Length = v20;
  if ( v20 > v37 )
    return -1073741789;
  *v4 = 0LL;
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = 0;
  *(_BYTE *)v4 = 1;
  v25 = *((_WORD *)v4 + 1) | 0x8000;
  *((_WORD *)v4 + 1) = v25;
  v26 = (char *)(((unsigned __int64)v4 + 23) & 0xFFFFFFFFFFFFFFFCuLL);
  v36 = v26;
  v27 = *SecurityInformation;
  if ( (*SecurityInformation & 1) != 0 && v13 )
  {
    memmove((void *)(((unsigned __int64)v4 + 23) & 0xFFFFFFFFFFFFFFFCuLL), v13, v6);
    v4 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
    LOWORD(v19) = v34;
    *((_WORD *)SecurityDescriptor + 1) |= v34 & 1;
    v25 = *((_WORD *)SecurityDescriptor + 1);
    v26 += (v6 + 3) & 0xFFFFFFFC;
    v36 = v26;
    v28 = SecurityInformation;
    v27 = *SecurityInformation;
  }
  else
  {
    v28 = SecurityInformation;
  }
  if ( (v27 & 2) != 0 && v15 )
  {
    v29 = Size;
    memmove(v26, v15, (unsigned int)Size);
    v4 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 2) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
    LOWORD(v19) = v34;
    *((_WORD *)SecurityDescriptor + 1) |= v34 & 2;
    v25 = *((_WORD *)SecurityDescriptor + 1);
    v26 += (v29 + 3) & 0xFFFFFFFC;
    v36 = v26;
    v27 = *v28;
  }
  if ( (v27 & 4) != 0 )
  {
    *((_WORD *)v4 + 1) = v25 | v19 & 0x140C;
    if ( (BYTE2(v38) & 4) != 0 )
    {
      if ( v17 )
      {
        memmove(v26, v17, v17[1]);
        v4 = SecurityDescriptor;
        *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
        v26 += v7;
        v36 = v26;
      }
    }
  }
  if ( (*v28 & 0x1F8) != 0 )
  {
    *((_WORD *)v4 + 1) |= v34 & 0x2830;
    if ( (BYTE2(v38) & 0x10) != 0 )
    {
      if ( v35 )
      {
        RtlpFilterSacl(v35, v26, &v32);
        *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
        v36 = &v26[v32];
      }
    }
  }
  return 0;
}
