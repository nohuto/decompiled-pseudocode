/*
 * XREFs of AslpFileGetVersionBlock @ 0x1407DD710
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1407DD65C (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x1401618FC (RtlFileMapFree.c)
 *     RtlVerifyVersionInfo @ 0x14016AC50 (RtlVerifyVersionInfo.c)
 *     VerSetConditionMask @ 0x14016C1E0 (VerSetConditionMask.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFileMapMapView @ 0x1402C28B0 (RtlFileMapMapView.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     LdrResSearchResource @ 0x1405BD3B0 (LdrResSearchResource.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407D969C (AslFileMappingEnsure.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  ULONGLONG v13; // rax
  ULONGLONG v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  const wchar_t *v17; // rax
  __int64 v18; // r8
  void *v19; // r13
  size_t v20; // rbx
  unsigned __int64 v21; // rdx
  int v22; // eax
  const char *v23; // r9
  int v24; // r8d
  __int64 v25; // rcx
  _WORD *v26; // rax
  _WORD *v27; // r15
  __int64 v28; // rcx
  __int64 v30; // [rsp+20h] [rbp-1F8h]
  __int64 v31; // [rsp+28h] [rbp-1F0h]
  __int64 v32; // [rsp+28h] [rbp-1F0h]
  size_t Size; // [rsp+48h] [rbp-1D0h] BYREF
  _WORD *v34; // [rsp+50h] [rbp-1C8h]
  unsigned __int64 v35; // [rsp+58h] [rbp-1C0h]
  __int64 v36; // [rsp+60h] [rbp-1B8h]
  _QWORD v37[3]; // [rsp+68h] [rbp-1B0h] BYREF
  _QWORD v38[8]; // [rsp+80h] [rbp-198h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+C0h] [rbp-158h] BYREF
  void *Src; // [rsp+238h] [rbp+20h] BYREF

  Src = 0LL;
  v34 = 0LL;
  Size = 0LL;
  memset(v38, 0, 0x38uLL);
  v6 = *(_QWORD *)(a3 + 72);
  if ( v6 )
  {
    v7 = *(_WORD *)(v6 + 2);
    v8 = v6 + 40;
    v9 = 0LL;
    if ( v7 >= 0x34u )
      v9 = v8;
    *a2 = v9;
    *a1 = *(_QWORD *)(a3 + 72);
    v10 = 0;
    goto LABEL_53;
  }
  v11 = AslFileMappingEnsure(a3);
  v10 = v11;
  if ( v11 < 0 )
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1328,
      (unsigned int)"AslFileMappingEnsure failed [%x]",
      v11);
    goto LABEL_53;
  }
  if ( *(_DWORD *)(a3 + 64) != 6 )
  {
    v10 = -1073741687;
    goto LABEL_53;
  }
  v37[0] = 16LL;
  v37[1] = 1LL;
  v37[2] = 0LL;
  v35 = *(_QWORD *)(a3 + 32);
  v36 = *(_QWORD *)(a3 + 40);
  v12 = LdrResSearchResource(v35, v37, 3u, *(_BYTE *)(a3 + 59) == 0 ? 0x200 : 0, (unsigned int **)&Src, &Size, 0LL, 0LL);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v18 = v36;
  }
  else
  {
    if ( (unsigned int)(v12 + 1073741687) <= 2 )
      goto LABEL_53;
    if ( v12 != -1073741701 || *(_BYTE *)(a3 + 59) || *(_DWORD *)(a3 + 84) )
    {
      LODWORD(v31) = v12;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetVersionBlock",
        1453,
        (unsigned int)"LdrResFindResource failed %ls [%x]",
        *(_QWORD *)a3,
        v31);
      goto LABEL_53;
    }
    memset(&VersionInfo, 0, sizeof(VersionInfo));
    VersionInfo.dwOSVersionInfoSize = 284;
    VersionInfo.dwMajorVersion = 6;
    VersionInfo.dwMinorVersion = 2;
    v13 = VerSetConditionMask(0LL, 2u, 3u);
    v14 = VerSetConditionMask(v13, 1u, 3u);
    if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v14) < 0 )
    {
LABEL_15:
      v10 = -1073741687;
      goto LABEL_53;
    }
    v15 = *(_QWORD *)(a3 + 8);
    memset(v38, 0, 0x38uLL);
    LOBYTE(v38[6]) = 0;
    v38[0] = v15;
    v16 = RtlFileMapMapView((__int64)v38, 1);
    v10 = v16;
    if ( v16 < 0 )
    {
      LODWORD(v30) = v16;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetVersionBlock",
        1420,
        (unsigned int)"RtlFileMapMapView failed [%x]",
        v30);
      goto LABEL_53;
    }
    AslLogCallPrintf(
      3LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1429,
      (unsigned int)"Re-mapped file as image to get version block: %ls",
      *(_QWORD *)a3);
    v35 = v38[3];
    v10 = LdrResSearchResource(v38[3], v37, 3u, 0, (unsigned int **)&Src, &Size, 0LL, 0LL);
    v17 = L"Found";
    if ( v10 < 0 )
      v17 = L"Did not find";
    LODWORD(v32) = v10;
    AslLogCallPrintf(
      2LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1442,
      (unsigned int)"%ls version block after re-mapping as image [%x]",
      v17,
      v32);
    if ( v10 < 0 )
    {
      LODWORD(v30) = v10;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetVersionBlock",
        1445,
        (unsigned int)"LdrResFindResource failed [%x]",
        v30);
      goto LABEL_53;
    }
    v18 = v38[4];
  }
  v19 = Src;
  if ( !Src )
  {
    LODWORD(v30) = v10;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetVersionBlock",
      1460,
      (unsigned int)"LdrResFindResource returned null version block with status: [%x]",
      v30);
    goto LABEL_15;
  }
  v20 = Size;
  v21 = (unsigned __int64)Src + Size;
  if ( (char *)Src + Size < Src )
  {
    v21 = -1LL;
    v22 = -1073741675;
  }
  else
  {
    v22 = 0;
  }
  if ( v22 < 0 )
  {
    v23 = "Version block has bad size";
    v24 = 1474;
    goto LABEL_51;
  }
  if ( (unsigned __int64)Src < v35 || v21 > v18 + v35 )
  {
    v24 = 1486;
    goto LABEL_50;
  }
  if ( !*(_BYTE *)(a3 + 59) && !v38[1] && v21 > *(_QWORD *)(a3 + 24) + v35 )
  {
    v24 = 1504;
LABEL_50:
    v23 = "Version block out of range";
LABEL_51:
    v10 = -1073741687;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetVersionBlock", v24, (_DWORD)v23);
    goto LABEL_53;
  }
  if ( Size < 0x26 || wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
  {
    v10 = -1073741595;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetVersionBlock", 1515, (unsigned int)"Version block invalid");
  }
  else
  {
    v26 = AslAlloc(v25, v20);
    v27 = v26;
    v34 = v26;
    if ( v26 )
    {
      memmove(v26, v19, v20);
      if ( v20 < (unsigned __int16)*v27 )
        *v27 = v20;
      *(_QWORD *)(a3 + 72) = v27;
      v34 = 0LL;
      v28 = *(_QWORD *)(a3 + 72);
      if ( *(_WORD *)(v28 + 2) >= 0x34u )
        *a2 = v28 + 40;
      else
        *a2 = 0LL;
      *a1 = v28;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
      AslLogCallPrintf(1LL, (unsigned int)"AslpFileGetVersionBlock", 1526, (unsigned int)"Out of memory");
    }
  }
LABEL_53:
  RtlFileMapFree(v38);
  return (unsigned int)v10;
}
