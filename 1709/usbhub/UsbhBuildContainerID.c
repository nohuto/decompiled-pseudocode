/*
 * XREFs of UsbhBuildContainerID @ 0x1C0028130
 * Callers:
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     RtlStringCbCatW @ 0x1C00286D0 (RtlStringCbCatW.c)
 *     RtlStringCopyWorkerW @ 0x1C002874C (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1C00287A0 (RtlStringLengthWorkerW.c)
 *     memmove @ 0x1C0029500 (memmove.c)
 *     memset @ 0x1C0029840 (memset.c)
 */

__int64 __fastcall UsbhBuildContainerID(__int64 a1, __int64 a2)
{
  UCHAR *v2; // rsi
  wchar_t *v4; // r12
  __int64 v6; // r9
  _DWORD *v7; // r15
  unsigned __int16 v8; // di
  _QWORD *PoolWithTag; // rbx
  _WORD *v10; // rdx
  POOL_TYPE v11; // ecx
  unsigned __int16 v12; // r14
  _QWORD *v13; // rdi
  _WORD *v14; // rdx
  unsigned __int16 v15; // r13
  unsigned __int16 v16; // di
  SIZE_T v17; // r14
  char *v18; // rax
  char *v19; // r13
  char *v20; // rax
  size_t v21; // r14
  wchar_t *v22; // rax
  size_t *v23; // r8
  NTSTATUS v24; // ecx
  unsigned __int64 v25; // rdi
  NTSTATUS Property; // ebx
  const wchar_t *v27; // r8
  NTSTATUS v28; // r8d
  ULONG v29; // edi
  UCHAR *v30; // rax
  UCHAR *v31; // r14
  UCHAR *v32; // rax
  __int64 v34; // r9
  int v35; // r8d
  __int64 v36; // rcx
  int v37; // r8d
  size_t cchToCopy; // [rsp+20h] [rbp-58h]
  unsigned int Size; // [rsp+40h] [rbp-38h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-28h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-20h] BYREF
  void *Src; // [rsp+60h] [rbp-18h] BYREF
  ULONG pbOutput; // [rsp+D0h] [rbp+58h] BYREF
  ULONG pcbResult; // [rsp+D8h] [rbp+60h] BYREF

  v2 = 0LL;
  phHash = 0LL;
  pbOutput = 0;
  pcbResult = 0;
  phAlgorithm = 0LL;
  v4 = 0LL;
  Log(a1, 4096, 1111705924, a2, 0LL);
  v7 = PdoExt(v6);
  v8 = *((_WORD *)v7 + 700);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8uLL, 0x42554855u);
  if ( !PoolWithTag )
  {
    v34 = a2;
    v35 = 1111699745;
    v36 = a1;
    goto LABEL_69;
  }
  v10 = PoolWithTag;
  *PoolWithTag = 0LL;
  for ( *PoolWithTag = *(_QWORD *)L"nnnn"; *v10 != 110; ++v10 )
    ;
  *v10 = (unsigned __int8)Nibble[(unsigned __int64)v8 >> 12];
  v10[1] = (unsigned __int8)Nibble[((unsigned __int64)v8 >> 8) & 0xF];
  v10[2] = (unsigned __int8)Nibble[((unsigned __int64)v8 >> 4) & 0xF];
  v11 = ExDefaultNonPagedPoolType;
  v10[3] = (unsigned __int8)Nibble[v8 & 0xF];
  v12 = *((_WORD *)v7 + 701);
  Src = ExAllocatePoolWithTag(v11, 0x10uLL, 0x42554855u);
  v13 = Src;
  if ( Src )
  {
    v14 = (char *)Src + 8;
    *(_QWORD *)Src = 0LL;
    v15 = 16;
    v13[1] = 0LL;
    *v13 = *PoolWithTag;
    v13[1] = *(_QWORD *)L"nnnn";
    Size = 16;
    if ( *((_WORD *)v13 + 4) != 110 )
    {
      do
        ++v14;
      while ( *v14 != 110 );
    }
    *v14 = (unsigned __int8)Nibble[(unsigned __int64)v12 >> 12];
    v14[1] = (unsigned __int8)Nibble[((unsigned __int64)v12 >> 8) & 0xF];
    v14[2] = (unsigned __int8)Nibble[((unsigned __int64)v12 >> 4) & 0xF];
    v14[3] = (unsigned __int8)Nibble[v12 & 0xF];
  }
  else
  {
    v15 = 0;
    Size = 0;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !v13 )
  {
    v34 = a2;
    v35 = 1111700001;
    v36 = a1;
LABEL_69:
    Property = -1073741670;
    Log(v36, 4096, v35, v34, -1073741670LL);
    return (unsigned int)Property;
  }
  v16 = *((_WORD *)v7 + 702);
  v17 = v15 + 10LL;
  v18 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v17, 0x42554855u);
  v19 = v18;
  if ( v18 )
  {
    memset(v18, 0, v17);
    memmove(v19, Src, Size);
    v20 = &v19[Size];
    for ( *(_QWORD *)v20 = *(_QWORD *)L"nnnn"; *(_WORD *)v20 != 110; v20 += 2 )
      ;
    *(_WORD *)v20 = (v16 >> 12) + 48;
    *((_WORD *)v20 + 1) = (HIBYTE(v16) & 0xF) + 48;
    *((_WORD *)v20 + 2) = ((unsigned __int8)v16 >> 4) + 48;
    *((_WORD *)v20 + 3) = (v16 & 0xF) + 48;
  }
  else
  {
    LODWORD(v17) = 0;
  }
  ExFreePoolWithTag(Src, 0);
  if ( !v19 )
  {
    v34 = a2;
    v35 = 1111700257;
    v36 = a1;
    goto LABEL_69;
  }
  v21 = (unsigned int)(v7[531] + v17);
  if ( v21 < 2 )
  {
    v37 = 1111700769;
LABEL_66:
    Property = -1073741670;
    Log(a1, 4096, v37, a2, -1073741670LL);
    goto LABEL_67;
  }
  v22 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)v21, 0x42554855u);
  v4 = v22;
  if ( !v22 )
  {
    v37 = 1111700513;
    goto LABEL_66;
  }
  memset(v22, 0, (unsigned int)v21);
  v24 = 0;
  v25 = (unsigned __int64)(unsigned int)v21 >> 1;
  if ( v25 - 1 > 0x7FFFFFFE )
    v24 = -1073741811;
  if ( v24 < 0 )
  {
    if ( v25 )
      *v4 = 0;
  }
  else
  {
    v24 = RtlStringCopyWorkerW(v4, (unsigned __int64)(unsigned int)v21 >> 1, v23, (STRSAFE_PCNZWCH)v19, cchToCopy);
  }
  Property = v24;
  if ( v24 < 0 )
    goto LABEL_67;
  v27 = (const wchar_t *)*((_QWORD *)v7 + 266);
  if ( v27 )
  {
    Property = RtlStringCbCatW(v4, v21, v27);
    if ( Property < 0 )
      goto LABEL_67;
  }
  Src = 0LL;
  if ( v25 > 0x7FFFFFFF )
  {
    v28 = -1073741811;
    goto LABEL_59;
  }
  v28 = RtlStringLengthWorkerW(v4, (unsigned __int64)(unsigned int)v21 >> 1, (size_t *)&Src);
  if ( v28 < 0 )
  {
LABEL_59:
    v29 = 0;
    goto LABEL_26;
  }
  v29 = 2 * (_DWORD)Src;
LABEL_26:
  Property = v28;
  if ( v28 < 0 )
    goto LABEL_67;
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
  if ( Property < 0 )
  {
    phAlgorithm = 0LL;
    goto LABEL_67;
  }
  Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0);
  if ( Property < 0 )
  {
LABEL_67:
    v31 = 0LL;
    goto LABEL_40;
  }
  if ( pcbResult != 4 )
  {
    Property = -1073741306;
    goto LABEL_67;
  }
  v30 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
  v31 = v30;
  if ( !v30 )
  {
LABEL_64:
    Property = -1073741670;
    goto LABEL_40;
  }
  memset(v30, 0, pbOutput);
  Property = BCryptCreateHash(phAlgorithm, &phHash, v31, pbOutput, 0LL, 0, 0);
  if ( Property < 0 )
    goto LABEL_40;
  Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
  if ( Property < 0 )
    goto LABEL_40;
  Property = BCryptHashData(phHash, (PUCHAR)v4, v29, 0);
  if ( Property < 0 )
    goto LABEL_40;
  Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0);
  if ( Property < 0 )
    goto LABEL_40;
  if ( pcbResult == 4 )
  {
    if ( pbOutput >= 0x10 )
    {
      v32 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
      v2 = v32;
      if ( v32 )
      {
        memset(v32, 0, pbOutput);
        Property = BCryptFinishHash(phHash, v2, pbOutput, 0);
        if ( Property >= 0 )
        {
          *(_OWORD *)(v7 + 677) = *(_OWORD *)v2;
          *((_WORD *)v7 + 1357) = *((_WORD *)v7 + 1357) & 0xFFF | 0x5000;
          *((_BYTE *)v7 + 2716) = v7[679] & 0x3F | 0x80;
          *((_BYTE *)v7 + 2724) = 1;
        }
        goto LABEL_40;
      }
      goto LABEL_64;
    }
    Property = -1073741811;
  }
  else
  {
    Property = -1073741811;
  }
LABEL_40:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(v19, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
