/*
 * XREFs of cMapRemoteFonts @ 0x1C026AC44
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C026A930 (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C026AA30 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C00215AC (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00226A8 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     Win32CreateSection @ 0x1C010BA74 (Win32CreateSection.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall cMapRemoteFonts(unsigned __int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  char *v12; // rcx
  void *v13; // r9
  void *v14; // r13
  _DWORD *v15; // r8
  __int64 v16; // rax
  _DWORD *v17; // rcx
  unsigned int *v18; // rcx
  _DWORD *v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned int *v21; // rcx
  _DWORD *v22; // r8
  _DWORD *v23; // rcx
  __int64 v24; // rax
  int v25; // r14d
  __int64 v26; // r8
  int v27; // eax
  char *v28; // r14
  enum _SECTION_INHERIT v30; // [rsp+30h] [rbp-B8h]
  unsigned int v31; // [rsp+38h] [rbp-B0h]
  unsigned int v32; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  void *v34; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-80h] BYREF
  int v36; // [rsp+70h] [rbp-78h]
  unsigned int v37; // [rsp+74h] [rbp-74h]
  int v38; // [rsp+78h] [rbp-70h]
  union _LARGE_INTEGER v39; // [rsp+80h] [rbp-68h] BYREF
  void *v40; // [rsp+88h] [rbp-60h]
  unsigned __int64 v41; // [rsp+90h] [rbp-58h]
  unsigned __int64 v42; // [rsp+98h] [rbp-50h]
  _DWORD *v43; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v44[8]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = a2;
  v38 = 0;
  v7 = *a1;
  v42 = *a1;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 )
    return 0LL;
  Object = 0LL;
  v34 = 0LL;
  if ( !a3 )
    return 0LL;
  memset((void *)a3, 0, 0x78uLL);
  if ( a4 == 1 )
  {
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = *(_DWORD *)(v7 + 4);
    if ( v8 > 3 || (unsigned int)v6 > 0x10000000 || v7 < 0x10000 || v7 > (unsigned __int64)MmHighestUserAddress )
      return 0LL;
    if ( !v8 )
    {
      v38 = 1;
      v8 = 2;
    }
  }
  else
  {
    v8 = 1;
  }
  v9 = (4 * v8 + 15) & 0xFFFFFFF8;
  v37 = v9;
  if ( (unsigned int)v6 < v9 )
    return 0LL;
  v41 = v6;
  if ( (int)Win32CreateSection(&Object) < 0 )
    return 0LL;
  v39.QuadPart = 0LL;
  v35 = v6;
  CurrentProcess = PsGetCurrentProcess(v10);
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v34, 0LL, v35, &v39, &v35, 2, 0x400000, 4) < 0 )
  {
LABEL_16:
    ObfDereferenceObject(Object);
    return 0LL;
  }
  v13 = v34;
  v14 = v34;
  v40 = v34;
  v15 = v34;
  v43 = v34;
  if ( (unsigned __int64)v34 > v7 )
    goto LABEL_20;
  v12 = (char *)v34 + v35;
  if ( v7 < (unsigned __int64)v34 + v35 )
  {
LABEL_21:
    v16 = PsGetCurrentProcess(v12);
    MmUnmapViewOfSection(v16, v14);
    goto LABEL_16;
  }
  if ( (unsigned __int64)v34 >= v7 )
  {
LABEL_20:
    if ( (unsigned __int64)v34 < v7 + v6 )
      goto LABEL_21;
  }
  if ( a4 == 2 )
  {
    LODWORD(v6) = v6 - 16;
    v34 = (char *)v34 + 16;
    v17 = v15;
    if ( (unsigned __int64)v15 >= W32UserProbeAddress )
      v17 = (_DWORD *)W32UserProbeAddress;
    *v17 = 0;
    v18 = v15 + 1;
    if ( (unsigned __int64)(v15 + 1) >= W32UserProbeAddress )
      v18 = (unsigned int *)W32UserProbeAddress;
    *v18 = v8;
    v19 = v15 + 2;
    if ( (unsigned __int64)(v15 + 2) >= W32UserProbeAddress )
      v19 = (_DWORD *)W32UserProbeAddress;
    *v19 = v6;
    v36 = 1;
    v13 = v34;
  }
  if ( (_DWORD)v6 )
  {
    v20 = v7 + (unsigned int)v6;
    if ( v20 > W32UserProbeAddress || v20 < v7 )
    {
      *W32UserProbeAddress = 0;
      v13 = v34;
    }
  }
  memmove(v13, (const void *)v7, (unsigned int)v6);
  v36 = 1;
  if ( v38 )
  {
    v22 = v43;
    v23 = v43;
    if ( (unsigned __int64)v43 >= W32UserProbeAddress )
      v23 = (_DWORD *)W32UserProbeAddress;
    *v23 = 0;
    v21 = v22 + 1;
    if ( (unsigned __int64)(v22 + 1) >= W32UserProbeAddress )
      v21 = (unsigned int *)W32UserProbeAddress;
    *v21 = v8;
  }
  v24 = PsGetCurrentProcess(v21);
  if ( (int)MmUnmapViewOfSection(v24, v14) < 0 )
    goto LABEL_16;
  v34 = 0LL;
  v35 = 0LL;
  v39.QuadPart = 0LL;
  UmfdHostLifeTimeManager::EnsureUmfdHost();
  *(_DWORD *)(a3 + 40) |= 0x20u;
  if ( (*(_DWORD *)(a3 + 40) & 0x20) != 0 )
  {
    v25 = -1073741823;
    if ( !UmfdHostLifeTimeManager::EnsureUmfdHost() )
      goto LABEL_46;
    v27 = UmfdHostLifeTimeManager::MmMapViewOfSection(Object, &v34, v26, v35, &v39, &v35, v30, v31, v32, v44);
  }
  else
  {
    v27 = MmMapViewOfSection(Object, gpepCSRSS, &v34, 0LL, v35, &v39, &v35, 2, 0x400000, 2);
  }
  v25 = v27;
LABEL_46:
  if ( v25 < 0 )
    goto LABEL_16;
  v28 = (char *)v34;
  if ( a4 == 2 )
    LODWORD(v6) = v6 + 16;
  *(_QWORD *)(a3 + 104) = v34;
  *(_QWORD *)(a3 + 16) = &v28[v9];
  *(_DWORD *)(a3 + 24) = v6 - v9;
  *(_QWORD *)(a3 + 88) = v35;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  *(_QWORD *)(a3 + 32) = Object;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v44[0];
  *a1 = (unsigned __int64)v28;
  return v8;
}
