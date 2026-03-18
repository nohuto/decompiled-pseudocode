/*
 * XREFs of UsbhBuildContainerID @ 0x1C00523B0
 * Callers:
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     RtlStringCbCatW @ 0x1C0052298 (RtlStringCbCatW.c)
 *     RtlStringCopyWorkerW @ 0x1C0052314 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1C0052368 (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall UsbhBuildContainerID(__int64 a1, __int64 a2)
{
  UCHAR *v2; // rdi
  wchar_t *v4; // rsi
  __int64 v6; // r9
  _DWORD *v7; // r15
  unsigned __int16 v8; // r12
  _QWORD *PoolWithTag; // rbx
  _WORD *v10; // rdx
  POOL_TYPE v11; // ecx
  _QWORD *v12; // r12
  _WORD *v13; // rdx
  unsigned int v14; // ecx
  int v15; // r8d
  SIZE_T v16; // r12
  wchar_t *v17; // rax
  const wchar_t *v18; // rbx
  char *v19; // rcx
  unsigned __int16 v20; // dx
  SIZE_T v21; // r12
  int v22; // r8d
  wchar_t *v23; // rax
  size_t *v24; // r8
  NTSTATUS v25; // ecx
  unsigned __int64 v26; // r14
  NTSTATUS Property; // ebx
  const wchar_t *v28; // r8
  NTSTATUS v29; // r8d
  ULONG v30; // r12d
  UCHAR *v31; // rax
  UCHAR *v32; // r14
  UCHAR *v33; // rax
  size_t cchToCopy; // [rsp+20h] [rbp-50h]
  ULONG pcbResult; // [rsp+40h] [rbp-30h] BYREF
  size_t Size; // [rsp+44h] [rbp-2Ch]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-20h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-18h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+60h] [rbp-10h]
  void *Src; // [rsp+68h] [rbp-8h]
  size_t pcchLength; // [rsp+C0h] [rbp+50h] BYREF
  ULONG pbOutput; // [rsp+C8h] [rbp+58h] BYREF

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
    v15 = 1111699745;
    goto LABEL_68;
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
  LOWORD(pcchLength) = *((_WORD *)v7 + 701);
  Src = ExAllocatePoolWithTag(v11, 0x10uLL, 0x42554855u);
  v12 = Src;
  if ( Src )
  {
    LODWORD(Size) = 16;
    *(_QWORD *)Src = 0LL;
    v13 = v12 + 1;
    v12[1] = 0LL;
    *v12 = *PoolWithTag;
    for ( v12[1] = *(_QWORD *)L"nnnn"; *v13 != 110; ++v13 )
      ;
    v14 = (unsigned __int16)pcchLength;
    *v13 = (unsigned __int8)Nibble[(unsigned __int64)(unsigned __int16)pcchLength >> 12];
    v13[1] = (unsigned __int8)Nibble[(v14 >> 8) & 0xF];
    v13[2] = (unsigned __int8)Nibble[(unsigned __int8)v14 >> 4];
    v13[3] = (unsigned __int8)Nibble[v14 & 0xF];
  }
  else
  {
    LODWORD(Size) = 0;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !v12 )
  {
    v15 = 1111700001;
LABEL_68:
    Property = -1073741670;
    Log(a1, 4096, v15, a2, -1073741670LL);
    return (unsigned int)Property;
  }
  v16 = (unsigned __int16)Size + 10LL;
  LOWORD(pcchLength) = *((_WORD *)v7 + 702);
  v17 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v16, 0x42554855u);
  pszSrc = v17;
  v18 = v17;
  if ( v17 )
  {
    memset(v17, 0, v16);
    memmove((void *)pszSrc, Src, (unsigned int)Size);
    v19 = (char *)pszSrc + (unsigned int)Size;
    for ( *(_QWORD *)v19 = *(_QWORD *)L"nnnn"; *(_WORD *)v19 != 110; v19 += 2 )
      ;
    v20 = pcchLength;
    v18 = pszSrc;
    *(_WORD *)v19 = ((unsigned __int16)pcchLength >> 12) + 48;
    *((_WORD *)v19 + 1) = (HIBYTE(v20) & 0xF) + 48;
    *((_WORD *)v19 + 2) = ((unsigned __int8)v20 >> 4) + 48;
    *((_WORD *)v19 + 3) = (v20 & 0xF) + 48;
  }
  else
  {
    LODWORD(v16) = 0;
  }
  ExFreePoolWithTag(Src, 0);
  if ( !v18 )
  {
    v15 = 1111700257;
    goto LABEL_68;
  }
  v21 = (unsigned int)(v7[531] + v16);
  if ( v21 < 2 )
  {
    v22 = 1111700769;
LABEL_55:
    Property = -1073741670;
    Log(a1, 4096, v22, a2, -1073741670LL);
    goto LABEL_56;
  }
  v23 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v21, 0x42554855u);
  v4 = v23;
  if ( !v23 )
  {
    v22 = 1111700513;
    goto LABEL_55;
  }
  memset(v23, 0, v21);
  v25 = 0;
  v26 = v21 >> 1;
  if ( (v21 >> 1) - 1 > 0x7FFFFFFE )
    v25 = -1073741811;
  if ( v25 < 0 )
  {
    if ( v26 )
      *v4 = 0;
  }
  else
  {
    v25 = RtlStringCopyWorkerW(v4, v21 >> 1, v24, v18, cchToCopy);
  }
  Property = v25;
  if ( v25 < 0 )
    goto LABEL_56;
  v28 = (const wchar_t *)*((_QWORD *)v7 + 266);
  if ( v28 )
  {
    Property = RtlStringCbCatW(v4, v21, v28);
    if ( Property < 0 )
      goto LABEL_56;
  }
  pcchLength = 0LL;
  if ( v26 > 0x7FFFFFFF )
  {
    v29 = -1073741811;
  }
  else
  {
    v29 = RtlStringLengthWorkerW(v4, v21 >> 1, &pcchLength);
    if ( v29 >= 0 )
    {
      v30 = 2 * pcchLength;
      goto LABEL_35;
    }
  }
  v30 = 0;
LABEL_35:
  Property = v29;
  if ( v29 < 0 )
  {
LABEL_56:
    v32 = 0LL;
    goto LABEL_57;
  }
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
  if ( Property < 0 )
  {
    phAlgorithm = 0LL;
    goto LABEL_56;
  }
  Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0);
  if ( Property < 0 )
    goto LABEL_56;
  if ( pcbResult != 4 )
  {
    Property = -1073741306;
    goto LABEL_56;
  }
  v31 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
  v32 = v31;
  if ( !v31 )
    goto LABEL_53;
  memset(v31, 0, pbOutput);
  Property = BCryptCreateHash(phAlgorithm, &phHash, v32, pbOutput, 0LL, 0, 0);
  if ( Property < 0 )
    goto LABEL_57;
  Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
  if ( Property < 0 )
    goto LABEL_57;
  Property = BCryptHashData(phHash, (PUCHAR)v4, v30, 0);
  if ( Property < 0 )
    goto LABEL_57;
  Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0);
  if ( Property < 0 )
    goto LABEL_57;
  if ( pcbResult == 4 )
  {
    if ( pbOutput < 0x10 )
    {
      Property = -1073741811;
      goto LABEL_57;
    }
    v33 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
    v2 = v33;
    if ( v33 )
    {
      memset(v33, 0, pbOutput);
      Property = BCryptFinishHash(phHash, v2, pbOutput, 0);
      if ( Property >= 0 )
      {
        *(_OWORD *)(v7 + 673) = *(_OWORD *)v2;
        *((_WORD *)v7 + 1349) = *((_WORD *)v7 + 1349) & 0xFFF | 0x5000;
        *((_BYTE *)v7 + 2700) = v7[675] & 0x3F | 0x80;
        *((_BYTE *)v7 + 2708) = 1;
      }
      goto LABEL_57;
    }
LABEL_53:
    Property = -1073741670;
    goto LABEL_57;
  }
  Property = -1073741811;
LABEL_57:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
