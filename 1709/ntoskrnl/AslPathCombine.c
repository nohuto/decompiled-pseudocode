/*
 * XREFs of AslPathCombine @ 0x140772D1C
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x14028CB70 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x14028CCF0 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppPatch @ 0x140770E20 (SdbpGetPathAppPatch.c)
 *     SdbpGetPathAppraiser @ 0x140770F10 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdb @ 0x140771050 (SdbpGetPathCustomSdb.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140772FA8 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140773204 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1400DF440 (RtlStringCchLengthW.c)
 *     RtlStringCchCatW @ 0x1400F9E18 (RtlStringCchCatW.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCombine(const wchar_t *a1, const wchar_t *a2, wchar_t *a3, size_t a4)
{
  NTSTATUS v8; // ebx
  const wchar_t *v9; // r11
  const wchar_t *v10; // r8
  unsigned int v11; // ebp
  size_t pcchLength[5]; // [rsp+30h] [rbp-28h] BYREF
  size_t v13; // [rsp+78h] [rbp+20h] BYREF

  pcchLength[0] = 0LL;
  v13 = 0LL;
  if ( !a4 )
    return 3221225507LL;
  v8 = RtlStringCchLengthW(a1, 0x7FFFFFFFuLL, pcchLength);
  if ( v8 < 0 )
    goto LABEL_22;
  v8 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &v13);
  if ( v8 < 0 )
    goto LABEL_22;
  if ( pcchLength[0] )
  {
    if ( v13 )
    {
      v11 = (v9[pcchLength[0] - 1] == 92) + 1;
      if ( *a2 != 92 )
        v11 = v9[pcchLength[0] - 1] == 92;
      if ( v11 > 1 )
      {
        ++a2;
        --v11;
      }
      v8 = RtlStringCchCopyW(a3, a4, v9);
      if ( v8 < 0 )
        goto LABEL_22;
      if ( !v11 )
      {
        v8 = RtlStringCchCatW(a3, a4, L"\\");
        if ( v8 < 0 )
          goto LABEL_22;
      }
      v8 = RtlStringCchCatW(a3, a4, a2);
      if ( v8 < 0 )
        goto LABEL_22;
      v8 = 0;
LABEL_21:
      if ( v8 >= 0 )
        return (unsigned int)v8;
LABEL_22:
      AslLogCallPrintf(1LL);
      return (unsigned int)v8;
    }
    v10 = v9;
LABEL_9:
    v8 = RtlStringCchCopyW(a3, a4, v10);
    goto LABEL_21;
  }
  if ( v13 )
  {
    v10 = a2;
    goto LABEL_9;
  }
  *a3 = 0;
  return 0;
}
