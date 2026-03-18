/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x140483530
 * Callers:
 *     CmpQuerySecurityDescriptorInfo @ 0x1404834DC (CmpQuerySecurityDescriptorInfo.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140483D4C (ObQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140747E84 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlpFilterSacl @ 0x1404839D0 (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  _QWORD *v4; // r10
  unsigned int v6; // r15d
  unsigned int v7; // r13d
  ULONG v8; // ecx
  unsigned int *v9; // rax
  __int16 v10; // cx
  __int64 v11; // r8
  unsigned __int8 *v12; // r14
  __int64 v13; // rdx
  unsigned __int8 *v14; // rsi
  __int64 v15; // rdx
  unsigned __int16 *v16; // rdi
  char *v17; // r11
  unsigned __int64 v18; // rcx
  ULONG v19; // ebx
  DWORD v20; // edx
  DWORD v21; // r8d
  DWORD v22; // r9d
  int v23; // eax
  char *v24; // rbx
  int v25; // r15d
  char v26; // si
  __int64 v27; // rcx
  DWORD v29; // eax
  int v30; // [rsp+24h] [rbp-94h] BYREF
  size_t Size; // [rsp+28h] [rbp-90h]
  unsigned __int64 v32; // [rsp+30h] [rbp-88h]
  char *v33; // [rsp+38h] [rbp-80h]
  char *v34; // [rsp+40h] [rbp-78h]
  ULONG v35; // [rsp+48h] [rbp-70h]
  __int128 v36; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v37; // [rsp+60h] [rbp-58h]
  char *v38; // [rsp+68h] [rbp-50h]
  unsigned __int16 *v39; // [rsp+70h] [rbp-48h]

  v4 = SecurityDescriptor;
  v6 = 0;
  LODWORD(Size) = 0;
  v7 = 0;
  v30 = 0;
  v8 = *Length;
  v35 = *Length;
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
  v36 = *(_OWORD *)v9;
  LODWORD(v37) = v9[4];
  v10 = *((_WORD *)v9 + 1);
  if ( v10 >= 0 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)v9 + 1);
  }
  else
  {
    v11 = v9[1];
    if ( (_DWORD)v11 )
      v12 = (unsigned __int8 *)v9 + v11;
    else
      v12 = 0LL;
  }
  *((_QWORD *)&v36 + 1) = v12;
  if ( v10 < 0 )
  {
    v13 = v9[2];
    if ( (_DWORD)v13 )
      v14 = (unsigned __int8 *)v9 + v13;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = (unsigned __int8 *)*((_QWORD *)v9 + 2);
  }
  v37 = v14;
  if ( (v10 & 4) != 0 )
  {
    if ( v10 >= 0 )
    {
      v16 = (unsigned __int16 *)*((_QWORD *)v9 + 4);
    }
    else
    {
      v15 = v9[4];
      if ( (_DWORD)v15 )
        v16 = (unsigned __int16 *)((char *)v9 + v15);
      else
        v16 = 0LL;
    }
  }
  else
  {
    v16 = 0LL;
  }
  v39 = v16;
  if ( (v10 & 0x10) != 0 )
  {
    if ( v10 >= 0 )
    {
      v17 = (char *)*((_QWORD *)v9 + 3);
    }
    else
    {
      v27 = v9[3];
      if ( !(_DWORD)v27 )
      {
        v17 = 0LL;
        v33 = 0LL;
        goto LABEL_14;
      }
      v17 = (char *)v9 + v27;
    }
    v33 = v17;
  }
  else
  {
    v17 = 0LL;
    v33 = 0LL;
  }
LABEL_14:
  v38 = v17;
  v18 = (unsigned __int64)v36 >> 16;
  LOWORD(v18) = WORD1(v36) & 0x7FFF;
  v32 = v18;
  WORD1(v36) &= ~0x8000u;
  v19 = 20;
  v20 = *SecurityInformation & 0x80;
  v21 = *SecurityInformation & 0x100;
  if ( (*SecurityInformation & 0x10000) != 0 )
  {
    v29 = *SecurityInformation | 0x1FF;
    *SecurityInformation = v29;
    if ( !v20 )
      *SecurityInformation = v29 & 0xFFFFFF7F;
    if ( !v21 )
      *SecurityInformation &= ~0x100u;
  }
  v22 = *SecurityInformation;
  if ( (*SecurityInformation & 1) != 0 && v12 )
  {
    v23 = v12[1];
    v6 = 4 * v23 + 8;
    v19 = ((4 * v23 + 11) & 0xFFFFFFFC) + 20;
  }
  if ( (v22 & 2) != 0 && v14 )
  {
    LODWORD(Size) = 4 * v14[1] + 8;
    v19 += (Size + 3) & 0xFFFFFFFC;
  }
  if ( (v22 & 4) != 0 && (BYTE2(v36) & 4) != 0 && v16 )
  {
    v7 = (v16[1] + 3) & 0xFFFFFFFC;
    v19 += v7;
  }
  if ( (v22 & 0x1F8) != 0 && (BYTE2(v36) & 0x10) != 0 && v17 )
  {
    RtlpFilterSacl(v17, 0LL, &v30);
    v19 += v30;
    v4 = SecurityDescriptor;
    LOWORD(v18) = v32;
  }
  *Length = v19;
  if ( v19 > v35 )
    return -1073741789;
  *v4 = 0LL;
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = 0;
  *(_BYTE *)v4 = 1;
  *((_WORD *)v4 + 1) |= 0x8000u;
  v24 = (char *)(((unsigned __int64)v4 + 23) & 0xFFFFFFFFFFFFFFFCuLL);
  v34 = v24;
  if ( (*SecurityInformation & 1) != 0 && v12 )
  {
    memmove((void *)(((unsigned __int64)v4 + 23) & 0xFFFFFFFFFFFFFFFCuLL), v12, v6);
    v4 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v24 - (_DWORD)SecurityDescriptor;
    LOWORD(v18) = v32;
    *((_WORD *)SecurityDescriptor + 1) |= v32 & 1;
    v24 += (v6 + 3) & 0xFFFFFFFC;
    v34 = v24;
  }
  if ( (*SecurityInformation & 2) != 0 && v14 )
  {
    v25 = Size;
    memmove(v24, v14, (unsigned int)Size);
    v4 = SecurityDescriptor;
    *((_DWORD *)SecurityDescriptor + 2) = (_DWORD)v24 - (_DWORD)SecurityDescriptor;
    LOWORD(v18) = v32;
    *((_WORD *)SecurityDescriptor + 1) |= v32 & 2;
    v24 += (v25 + 3) & 0xFFFFFFFC;
    v34 = v24;
  }
  if ( (*SecurityInformation & 4) != 0 )
  {
    *((_WORD *)v4 + 1) |= v18 & 0x140C;
    v26 = BYTE2(v36);
    if ( (BYTE2(v36) & 4) != 0 && v16 )
    {
      memmove(v24, v16, v16[1]);
      v4 = SecurityDescriptor;
      *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v24 - (_DWORD)SecurityDescriptor;
      v24 += v7;
      v34 = v24;
    }
  }
  else
  {
    v26 = BYTE2(v36);
  }
  if ( (*SecurityInformation & 0x1F8) != 0 )
  {
    *((_WORD *)v4 + 1) |= v32 & 0x2830;
    if ( (v26 & 0x10) != 0 )
    {
      if ( v33 )
      {
        RtlpFilterSacl(v33, v24, &v30);
        *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v24 - (_DWORD)SecurityDescriptor;
        v34 = &v24[v30];
      }
    }
  }
  return 0;
}
