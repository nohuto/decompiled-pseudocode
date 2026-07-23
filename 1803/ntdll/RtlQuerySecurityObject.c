/*
 * XREFs of RtlQuerySecurityObject @ 0x1800D22A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E1A34 @ 0x1800E1A34 (sub_1800E1A34.c)
 */

NTSTATUS __cdecl RtlQuerySecurityObject(
        PSECURITY_DESCRIPTOR ObjectDescriptor,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ResultantDescriptor,
        ULONG DescriptorLength,
        PULONG ReturnLength)
{
  int v6; // ecx
  char v7; // si
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  unsigned int v11; // r10d
  unsigned __int16 *v12; // rbp
  char *v13; // rbx
  unsigned __int8 *v14; // r12
  SECURITY_INFORMATION v15; // r8d
  char *v16; // rsi
  ULONG v17; // ecx
  char *v18; // rsi
  __int16 v19; // dx
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // eax
  __int16 v23; // ax
  __int64 v24; // rbx
  int v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-68h]
  SECURITY_INFORMATION v28; // [rsp+24h] [rbp-64h]
  SECURITY_INFORMATION v29; // [rsp+28h] [rbp-60h]
  void *Src; // [rsp+30h] [rbp-58h]
  unsigned int v31; // [rsp+90h] [rbp+8h] BYREF
  int v32; // [rsp+98h] [rbp+10h]
  size_t Size; // [rsp+A0h] [rbp+18h]
  ULONG v34; // [rsp+A8h] [rbp+20h]

  v34 = DescriptorLength;
  v31 = 0;
  v6 = 0;
  v27 = 0;
  LODWORD(Size) = 0;
  v7 = SecurityInformation;
  v29 = SecurityInformation & 2;
  Src = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (SecurityInformation & 2) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v14 = (unsigned __int8 *)*((_QWORD *)ObjectDescriptor + 2);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 2) )
        goto LABEL_8;
      v14 = (unsigned __int8 *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 2);
    }
    if ( v14 )
    {
      v9 = (4 * v14[1] + 11) & 0xFFFFFFFC;
      v27 = v9;
    }
  }
LABEL_8:
  v28 = SecurityInformation & 4;
  if ( (SecurityInformation & 4) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 4) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v12 = (unsigned __int16 *)*((_QWORD *)ObjectDescriptor + 4);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 4) )
        goto LABEL_16;
      v12 = (unsigned __int16 *)((char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 4));
    }
    if ( v12 )
      v10 = (v12[1] + 3) & 0xFFFFFFFC;
  }
LABEL_16:
  v15 = SecurityInformation & 0x1F8;
  v32 = v15;
  if ( (SecurityInformation & 0x1F8) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 0x10) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v13 = (char *)*((_QWORD *)ObjectDescriptor + 3);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 3) )
        goto LABEL_24;
      v13 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 3);
    }
    if ( v13 )
    {
      sub_1800E1A34(v13, 0LL, &v31, SecurityInformation & 0x1F8);
      v11 = v31;
      v15 = v32;
      v6 = Size;
      DescriptorLength = v34;
    }
  }
LABEL_24:
  v32 = v7 & 1;
  if ( (v7 & 1) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v16 = (char *)*((_QWORD *)ObjectDescriptor + 1);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 1) )
      {
        Src = 0LL;
        goto LABEL_32;
      }
      v16 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 1);
    }
    Src = v16;
    if ( v16 )
    {
      v6 = (4 * (unsigned __int8)v16[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v6;
    }
  }
LABEL_32:
  v17 = v9 + v10 + v11 + v6 + 20;
  *ReturnLength = v17;
  if ( v17 > DescriptorLength || !ResultantDescriptor )
    return -1073741789;
  v18 = (char *)ResultantDescriptor + 20;
  *(_QWORD *)ResultantDescriptor = 0LL;
  *((_QWORD *)ResultantDescriptor + 1) = 0LL;
  *((_DWORD *)ResultantDescriptor + 4) = 0;
  *(_BYTE *)ResultantDescriptor = 1;
  v19 = *((_WORD *)ResultantDescriptor + 1) | 0x8000;
  *((_WORD *)ResultantDescriptor + 1) = v19;
  if ( v15 )
  {
    v20 = v19;
    if ( v11 )
    {
      sub_1800E1A34(v13, (char *)ResultantDescriptor + 20, &v31, v15);
      *((_DWORD *)ResultantDescriptor + 3) = 20;
      v18 += v31;
      v20 = *((_WORD *)ResultantDescriptor + 1);
    }
    v19 = v20 | *((_WORD *)ObjectDescriptor + 1) & 0x2830;
    *((_WORD *)ResultantDescriptor + 1) = v19;
  }
  if ( v28 )
  {
    v21 = v19;
    if ( v10 )
    {
      memmove(v18, v12, v10);
      v22 = (int)v18;
      v18 += v10;
      *((_DWORD *)ResultantDescriptor + 4) = v22 - (_DWORD)ResultantDescriptor;
      v21 = *((_WORD *)ResultantDescriptor + 1);
    }
    v19 = v21 | *((_WORD *)ObjectDescriptor + 1) & 0x140C;
    *((_WORD *)ResultantDescriptor + 1) = v19;
  }
  if ( v32 )
  {
    v23 = v19;
    if ( (_DWORD)Size )
    {
      v24 = (unsigned int)Size;
      memmove(v18, Src, (unsigned int)Size);
      v25 = (int)v18;
      v18 += v24;
      *((_DWORD *)ResultantDescriptor + 1) = v25 - (_DWORD)ResultantDescriptor;
      v23 = *((_WORD *)ResultantDescriptor + 1);
    }
    v19 = v23 | *((_WORD *)ObjectDescriptor + 1) & 1;
    *((_WORD *)ResultantDescriptor + 1) = v19;
  }
  if ( v29 )
  {
    if ( v27 )
    {
      memmove(v18, v14, v27);
      v19 = *((_WORD *)ResultantDescriptor + 1);
      *((_DWORD *)ResultantDescriptor + 2) = (_DWORD)v18 - (_DWORD)ResultantDescriptor;
    }
    *((_WORD *)ResultantDescriptor + 1) = v19 | *((_WORD *)ObjectDescriptor + 1) & 2;
  }
  return 0;
}
