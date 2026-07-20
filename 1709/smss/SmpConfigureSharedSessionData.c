/*
 * XREFs of SmpConfigureSharedSessionData @ 0x140006178
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140007224 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpCopyListToSharedSection @ 0x140006650 (SmpCopyListToSharedSection.c)
 *     SmpDeallocSavedRegistryEntry @ 0x140009004 (SmpDeallocSavedRegistryEntry.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14000C867 (memcpy_0.c)
 */

NTSTATUS SmpConfigureSharedSessionData()
{
  int v0; // ebx
  NTSTATUS result; // eax
  PVOID *v2; // rdi
  PVOID *v3; // rcx
  PVOID *v4; // rax
  PVOID **v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned int v8; // ecx
  bool v9; // zf
  char *v10; // rdi
  char *v11; // rdi
  __int64 v12; // rsi
  char *v13; // rdi
  char *v14; // rdi
  NTSTATUS v15; // eax
  _QWORD *v16; // rcx
  _WORD *v17; // [rsp+58h] [rbp-B0h] BYREF
  char *v18; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-A0h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  __int64 (__usercall *v22)@<rax>(wchar_t *@<rcx>, int, __int64); // [rsp+A8h] [rbp-60h] BYREF
  int v23; // [rsp+B0h] [rbp-58h]
  const wchar_t *v24; // [rsp+B8h] [rbp-50h]
  int *v25; // [rsp+C0h] [rbp-48h]
  int v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  int v28; // [rsp+D8h] [rbp-30h]
  void *v29; // [rsp+E0h] [rbp-28h]
  int v30; // [rsp+E8h] [rbp-20h]
  const wchar_t *v31; // [rsp+F0h] [rbp-18h]
  int *v32; // [rsp+F8h] [rbp-10h]
  int v33; // [rsp+100h] [rbp-8h]
  __int64 v34; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+110h] [rbp+8h]
  void *v36; // [rsp+118h] [rbp+10h]
  int v37; // [rsp+120h] [rbp+18h]
  const wchar_t *v38; // [rsp+128h] [rbp+20h]
  int *v39; // [rsp+130h] [rbp+28h]
  int v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  int v42; // [rsp+148h] [rbp+40h]
  __int64 (__fastcall *v43)(int, int, int, int, int, __int64); // [rsp+150h] [rbp+48h]
  int v44; // [rsp+158h] [rbp+50h]
  const wchar_t *v45; // [rsp+160h] [rbp+58h]
  int *v46; // [rsp+168h] [rbp+60h]
  int v47; // [rsp+170h] [rbp+68h]
  __int64 v48; // [rsp+178h] [rbp+70h]
  int v49; // [rsp+180h] [rbp+78h]
  __int64 v50; // [rsp+188h] [rbp+80h]
  int v51; // [rsp+190h] [rbp+88h]
  __int128 v52; // [rsp+198h] [rbp+90h]
  int v53; // [rsp+1A8h] [rbp+A0h]
  __int64 v54; // [rsp+1B0h] [rbp+A8h]
  int v55; // [rsp+1B8h] [rbp+B0h]

  v0 = 0;
  v23 = 17;
  v26 = 0;
  v25 = &dword_1400219D8;
  v29 = &SmpBuildSubSystemLists;
  v22 = SmpConfigureSubSystems;
  v30 = 16;
  v24 = L"SubSystems";
  v32 = &dword_1400219D8;
  v31 = L"Required";
  v36 = &SmpBuildSubSystemLists;
  v38 = L"Optional";
  v37 = 16;
  v43 = SmpConfigureExecute;
  v39 = &dword_1400219D8;
  v45 = L"Execute";
  v46 = &dword_1400219D8;
  qword_1400219F8 = (__int64)&qword_1400219F0;
  qword_1400219F0 = (__int64)&qword_1400219F0;
  v27 = 0LL;
  v28 = 0;
  v33 = 0;
  v34 = 0LL;
  v35 = 0;
  v40 = 0;
  v41 = 0LL;
  v42 = 0;
  v44 = 2;
  v47 = 0;
  v48 = 0LL;
  v49 = 0;
  v50 = 0LL;
  v51 = 0;
  v52 = 0LL;
  v53 = 0;
  v54 = 0LL;
  v55 = 0;
  qword_1400219E8 = (__int64)&BaseAddress;
  BaseAddress = &BaseAddress;
  qword_140021A08 = (__int64)&qword_140021A00;
  qword_140021A00 = (__int64)&qword_140021A00;
  result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &v22, 0LL, 0LL);
  if ( result >= 0 )
  {
    v2 = (PVOID *)BaseAddress;
    while ( v2 != &BaseAddress )
    {
      v3 = v2;
      v2 = (PVOID *)*v2;
      v4 = (PVOID *)*v3;
      if ( *((PVOID **)*v3 + 1) != v3 || (v5 = (PVOID **)v3[1], *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      SmpDeallocSavedRegistryEntry(v3);
    }
    if ( (__int64 *)qword_140021A00 == &qword_140021A00 )
    {
      v6 = 0LL;
      SmpInitExecuteCmd = 0LL;
    }
    else
    {
      v6 = qword_140021A08;
      v16 = *(_QWORD **)(qword_140021A08 + 8);
      if ( *(__int64 **)qword_140021A08 != &qword_140021A00 || *v16 != qword_140021A08 )
        __fastfail(3u);
      qword_140021A08 = *(_QWORD *)(qword_140021A08 + 8);
      *v16 = &qword_140021A00;
      SmpInitExecuteCmd = v6;
    }
    v7 = (16LL * (unsigned int)dword_1400219D8 + 105) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 )
      v8 = *(unsigned __int16 *)(v6 + 16);
    else
      v8 = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    MaximumSize.QuadPart = (unsigned int)dword_1400219DC
                         + (unsigned __int64)v8
                         + v7
                         + SmpS0InitCmd.Length
                         + SmpDefaultLibPath.Length
                         + 6LL;
    ObjectAttributes.Attributes = 2;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtCreateSection(&SmpSharedSection, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
    if ( result >= 0 )
    {
      ViewSize = 0LL;
      result = NtMapViewOfSection(
                 SmpSharedSection,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &SmpMappedView,
                 0LL,
                 0LL,
                 0LL,
                 &ViewSize,
                 ViewUnmap,
                 0,
                 4u);
      if ( result >= 0 )
      {
        v9 = SmpS0CommandOverride == 0;
        *(_DWORD *)SmpMappedView = 0;
        if ( !v9 )
          *(_DWORD *)SmpMappedView |= 1u;
        v10 = (char *)SmpMappedView + v7;
        *((_QWORD *)SmpMappedView + 1) = v10 - (_BYTE *)SmpMappedView;
        *((_WORD *)SmpMappedView + 8) = SmpDefaultLibPath.Length;
        memcpy_0(v10, SmpDefaultLibPath.Buffer, SmpDefaultLibPath.Length);
        v11 = &v10[SmpDefaultLibPath.Length];
        *(_WORD *)v11 = 0;
        v11 += 2;
        *((_QWORD *)SmpMappedView + 3) = v11 - (_BYTE *)SmpMappedView;
        *((_WORD *)SmpMappedView + 16) = SmpS0InitCmd.Length;
        memcpy_0(v11, SmpS0InitCmd.Buffer, SmpS0InitCmd.Length);
        v12 = SmpInitExecuteCmd;
        v13 = &v11[SmpS0InitCmd.Length];
        *(_WORD *)v13 = 0;
        v14 = v13 + 2;
        *((_QWORD *)SmpMappedView + 5) = v14 - (_BYTE *)SmpMappedView;
        if ( v12 && *(_QWORD *)(v12 + 24) )
        {
          *((_WORD *)SmpMappedView + 24) = *(_WORD *)(v12 + 16);
          memcpy_0(v14, *(const void **)(v12 + 24), *(unsigned __int16 *)(v12 + 16));
          v14 += *(unsigned __int16 *)(v12 + 16);
        }
        else
        {
          *((_WORD *)SmpMappedView + 24) = 0;
        }
        *(_WORD *)v14 = 0;
        v18 = (char *)SmpMappedView + 104;
        v17 = v14 + 2;
        SmpCopyListToSharedSection((unsigned int)&qword_1400219F0, 0, 1, 0, (__int64)&v18, (__int64)&v17);
        SmpCopyListToSharedSection((unsigned int)&SmpSubSystemsRequired, 1, 0, 1, (__int64)&v18, (__int64)&v17);
        SmpCopyListToSharedSection((unsigned int)&qword_140021A00, 0, 1, 2, (__int64)&v18, (__int64)&v17);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, SmpMappedView);
        result = NtDuplicateObject(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   SmpSharedSection,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &SmpSharedSection,
                   4u,
                   2u,
                   9u);
        if ( result >= 0 )
        {
          ViewSize = 0LL;
          SmpMappedView = 0LL;
          v15 = NtMapViewOfSection(
                  SmpSharedSection,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &SmpMappedView,
                  0LL,
                  0LL,
                  0LL,
                  &ViewSize,
                  ViewUnmap,
                  0,
                  2u);
          if ( v15 < 0 )
            return v15;
          return v0;
        }
      }
    }
  }
  return result;
}
