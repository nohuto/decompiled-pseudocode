/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x1404FC5B0
 * Callers:
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1404F3234 (ObQuerySecurityDescriptorInfo.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x1404FC558 (CmpQuerySecurityDescriptorInfo.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14070C7F8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlpFilterSacl @ 0x1404FCA4C (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  unsigned int v6; // r13d
  ULONG v7; // ecx
  unsigned int *v8; // rax
  __int16 v9; // dx
  __int64 v10; // rcx
  unsigned __int8 *v11; // r14
  __int64 v12; // rcx
  unsigned __int8 *v13; // r15
  __int64 v14; // rcx
  unsigned __int16 *v15; // rsi
  char *v16; // r11
  __int16 v17; // r10
  ULONG v18; // ebx
  char v19; // dl
  char v20; // al
  DWORD v21; // r9d
  int v22; // eax
  char *v23; // rbx
  char v24; // r14
  __int64 v25; // rcx
  DWORD v27; // ecx
  size_t Size; // [rsp+24h] [rbp-84h]
  char *v29; // [rsp+38h] [rbp-70h]
  ULONG v30; // [rsp+48h] [rbp-60h]
  __int128 v31; // [rsp+50h] [rbp-58h]
  int v32; // [rsp+B8h] [rbp+10h] BYREF
  ULONG *v33; // [rsp+C0h] [rbp+18h]

  v33 = Length;
  v6 = 0;
  Size = 0LL;
  v32 = 0;
  v7 = *Length;
  v30 = *Length;
  v8 = (unsigned int *)*ObjectsSecurityDescriptor;
  if ( !*ObjectsSecurityDescriptor )
  {
    *Length = 20;
    if ( v7 < 0x14 )
      return -1073741789;
    *(_QWORD *)SecurityDescriptor = 0LL;
    *((_QWORD *)SecurityDescriptor + 1) = 0LL;
    *((_DWORD *)SecurityDescriptor + 4) = 0;
    *(_BYTE *)SecurityDescriptor = 1;
    *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
    return 0;
  }
  v31 = *(_OWORD *)v8;
  v9 = *((_WORD *)v8 + 1);
  if ( v9 >= 0 )
  {
    v11 = (unsigned __int8 *)*((_QWORD *)v8 + 1);
  }
  else
  {
    v10 = v8[1];
    if ( (_DWORD)v10 )
      v11 = (unsigned __int8 *)v8 + v10;
    else
      v11 = 0LL;
  }
  if ( v9 >= 0 )
  {
    v13 = (unsigned __int8 *)*((_QWORD *)v8 + 2);
  }
  else
  {
    v12 = v8[2];
    if ( (_DWORD)v12 )
      v13 = (unsigned __int8 *)v8 + v12;
    else
      v13 = 0LL;
  }
  if ( (v9 & 4) != 0 )
  {
    if ( v9 >= 0 )
    {
      v15 = (unsigned __int16 *)*((_QWORD *)v8 + 4);
    }
    else
    {
      v14 = v8[4];
      if ( (_DWORD)v14 )
        v15 = (unsigned __int16 *)((char *)v8 + v14);
      else
        v15 = 0LL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( (~(_BYTE)v9 & 0x10) != 0 )
  {
    v16 = 0LL;
    v29 = 0LL;
  }
  else
  {
    if ( v9 >= 0 )
    {
      v16 = (char *)*((_QWORD *)v8 + 3);
    }
    else
    {
      v25 = v8[3];
      if ( !(_DWORD)v25 )
      {
        v16 = 0LL;
        v29 = 0LL;
        goto LABEL_14;
      }
      v16 = (char *)v8 + v25;
    }
    v29 = v16;
  }
LABEL_14:
  v17 = WORD1(v31) & 0x7FFF;
  v18 = 20;
  v19 = (unsigned __int8)*SecurityInformation >> 7;
  v20 = BYTE1(*SecurityInformation) & 1;
  if ( (*SecurityInformation & 0x10000) != 0 )
  {
    v27 = *SecurityInformation | 0x1FF;
    *SecurityInformation = v27;
    if ( !v19 )
      *SecurityInformation = v27 & 0xFFFFFF7F;
    if ( !v20 )
      *SecurityInformation &= ~0x100u;
  }
  v21 = *SecurityInformation;
  if ( (*SecurityInformation & 1) != 0 && v11 )
  {
    v22 = v11[1];
    v6 = 4 * v22 + 8;
    v18 = ((4 * v22 + 11) & 0xFFFFFFFC) + 20;
  }
  if ( (v21 & 2) != 0 && v13 )
  {
    LODWORD(Size) = 4 * v13[1] + 8;
    v18 += (4 * v13[1] + 11) & 0xFFFFFFFC;
  }
  if ( (v21 & 4) != 0 && (BYTE2(v31) & 4) != 0 && v15 )
  {
    HIDWORD(Size) = (v15[1] + 3) & 0xFFFFFFFC;
    v18 += HIDWORD(Size);
    Length = v33;
  }
  if ( (v21 & 0x1F8) != 0 && (BYTE2(v31) & 0x10) != 0 && v16 )
  {
    RtlpFilterSacl(v16, 0LL, &v32);
    v18 += v32;
    v17 = WORD1(v31) & 0x7FFF;
    Length = v33;
  }
  *Length = v18;
  if ( v18 > v30 )
    return -1073741789;
  *(_QWORD *)SecurityDescriptor = 0LL;
  *((_QWORD *)SecurityDescriptor + 1) = 0LL;
  *((_DWORD *)SecurityDescriptor + 4) = 0;
  *(_BYTE *)SecurityDescriptor = 1;
  *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
  v23 = (char *)(((unsigned __int64)SecurityDescriptor + 23) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (*SecurityInformation & 1) != 0 && v11 )
  {
    memmove((void *)(((unsigned __int64)SecurityDescriptor + 23) & 0xFFFFFFFFFFFFFFFCuLL), v11, v6);
    *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v23 - (_DWORD)SecurityDescriptor;
    v17 = WORD1(v31) & 0x7FFF;
    *((_WORD *)SecurityDescriptor + 1) |= BYTE2(v31) & 1;
    v23 += (v6 + 3) & 0xFFFFFFFC;
  }
  if ( (*SecurityInformation & 2) != 0 && v13 )
  {
    memmove(v23, v13, (unsigned int)Size);
    *((_DWORD *)SecurityDescriptor + 2) = (_DWORD)v23 - (_DWORD)SecurityDescriptor;
    v17 = WORD1(v31) & 0x7FFF;
    *((_WORD *)SecurityDescriptor + 1) |= BYTE2(v31) & 2;
    v23 += ((_DWORD)Size + 3) & 0xFFFFFFFC;
  }
  if ( (*SecurityInformation & 4) != 0 )
  {
    *((_WORD *)SecurityDescriptor + 1) |= v17 & 0x140C;
    v24 = BYTE2(v31);
    if ( (BYTE2(v31) & 4) != 0 && v15 )
    {
      memmove(v23, v15, v15[1]);
      *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v23 - (_DWORD)SecurityDescriptor;
      v23 += HIDWORD(Size);
    }
  }
  else
  {
    v24 = BYTE2(v31);
  }
  if ( (*SecurityInformation & 0x1F8) != 0 )
  {
    *((_WORD *)SecurityDescriptor + 1) |= WORD1(v31) & 0x2830;
    if ( (v24 & 0x10) != 0 )
    {
      if ( v29 )
      {
        RtlpFilterSacl(v29, v23, &v32);
        *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v23 - (_DWORD)SecurityDescriptor;
      }
    }
  }
  return 0;
}
