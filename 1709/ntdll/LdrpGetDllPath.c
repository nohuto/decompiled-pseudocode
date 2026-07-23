/*
 * XREFs of LdrpGetDllPath @ 0x180037BA4
 * Callers:
 *     LdrGetDllPath @ 0x180037B80 (LdrGetDllPath.c)
 *     LdrpComputeLazyDllPath @ 0x18007DED8 (LdrpComputeLazyDllPath.c)
 * Callees:
 *     LdrpLogDllStateEx2 @ 0x180037DF8 (LdrpLogDllStateEx2.c)
 *     RtlpGetCachedPath @ 0x180037E50 (RtlpGetCachedPath.c)
 *     RtlDetermineDosPathNameType_U @ 0x18007DBB0 (RtlDetermineDosPathNameType_U.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180082DE0 (LdrpLogRelativePathWithAlteredSearchError.c)
 */

__int64 __fastcall LdrpGetDllPath(LPCWSTR pwsz, int a2, _QWORD *a3, _QWORD *a4, _DWORD *a5, _OWORD *a6, _QWORD *a7)
{
  bool v9; // r12
  bool v10; // di
  unsigned int v11; // ebx
  char v12; // si
  LPCWSTR v13; // rcx
  __int64 CachedPath; // rax
  __int64 v15; // rdx
  __int64 v17; // rax
  RTL_PATH_TYPE v18; // eax
  __int64 v19; // r8
  __int64 v20; // rax

  v9 = (a2 & 0x2000) != 0;
  v10 = 0;
  v11 = a2 & 0xFFFFDFFF;
  if ( (a2 & 8) != 0 )
  {
    if ( v11 != 8 )
      return 3221225485LL;
    v11 = 0;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( v11 )
      goto LABEL_4;
  }
  if ( LdrpDefaultDllDirectories )
  {
    v9 = (a2 & 0x2000) != 0 || (LdrpDefaultDllDirectories & 0x2000) != 0;
    v11 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_4:
  v13 = 0LL;
  if ( (v11 & 0x100) != 0 || v12 )
  {
    v18 = RtlDetermineDosPathNameType_U(pwsz);
    if ( (unsigned int)(v18 - 1) > 1 )
      v10 = v18 != RtlPathTypeLocalDevice
         || pwsz[2] != 63
         || RtlDetermineDosPathNameType_U(pwsz + 4) != RtlPathTypeDriveAbsolute;
    v13 = pwsz;
    if ( v10 )
    {
      if ( v12 )
      {
        LdrpLogRelativePathWithAlteredSearchError(pwsz);
        v13 = pwsz;
        if ( (LdrpPolicyBits & 0x40) != 0 )
        {
          v12 = 0;
          v10 = (v11 & 0x100) != 0;
        }
      }
      if ( v10 )
      {
        if ( v11 )
          return 3221225485LL;
        goto LABEL_7;
      }
    }
  }
  if ( !v11 )
  {
LABEL_7:
    CachedPath = RtlpGetCachedPath(&RtlpDllSearchPath, RtlpComputeDllPath, v13, 0LL);
    *a7 = 0LL;
    v15 = CachedPath;
    goto LABEL_8;
  }
  if ( (v11 & 0x1000) != 0 )
  {
    v11 |= 0xA00u;
    if ( (LdrpPolicyBits & 4) != 0 )
      v11 |= 0x400u;
  }
  v19 = v11;
  LODWORD(v19) = v11 | 0x100;
  if ( !v12 )
    v19 = v11;
  v20 = RtlpGetCachedPath(&RtlpDllSearchPathWithOptions, RtlpComputeDllPathWithOptions, v19, v13);
  v15 = v20;
  if ( !v20 )
    goto LABEL_46;
  *a7 = *(_QWORD *)(v20 + 88);
LABEL_8:
  if ( v15 )
  {
    if ( a6 )
    {
      *a6 = *(_OWORD *)v15;
      a6[1] = *(_OWORD *)(v15 + 16);
      a6[2] = *(_OWORD *)(v15 + 32);
      a6[3] = *(_OWORD *)(v15 + 48);
      a6[4] = *(_OWORD *)(v15 + 64);
    }
    *a3 = v15 + 112;
    if ( a4 )
    {
      if ( v9 )
        v17 = *(_QWORD *)(v15 + 104);
      else
        v17 = 0LL;
      *a4 = v17;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(v15 + 96);
    LdrpLogDllStateEx2(a5, pwsz, *a3, 5313LL);
    return 0LL;
  }
LABEL_46:
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  *a7 = 0LL;
  return 3221225495LL;
}
