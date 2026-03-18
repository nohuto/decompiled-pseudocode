/*
 * XREFs of cMapRemoteFonts @ 0x1C02699AC
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C02696A0 (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C02697A0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00B1074 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C00B35BC (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     Win32CreateSection @ 0x1C0115260 (Win32CreateSection.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall cMapRemoteFonts(unsigned __int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  char *v14; // rcx
  void *v15; // r9
  void *v16; // r13
  _DWORD *v17; // r8
  __int64 v18; // rax
  _DWORD *v19; // rcx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  ULONG64 v22; // rcx
  ULONG64 v23; // rdx
  _DWORD *v24; // rcx
  _DWORD *v25; // r8
  _DWORD *v26; // rcx
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // r8
  char *v30; // rbx
  int v31; // eax
  enum _SECTION_INHERIT v33; // [rsp+30h] [rbp-C8h]
  unsigned int v34; // [rsp+38h] [rbp-C0h]
  unsigned int v35; // [rsp+40h] [rbp-B8h]
  PVOID Object; // [rsp+58h] [rbp-A0h] BYREF
  void *v37; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-90h] BYREF
  int v39; // [rsp+70h] [rbp-88h]
  unsigned int v40; // [rsp+74h] [rbp-84h]
  int v41; // [rsp+78h] [rbp-80h]
  union _LARGE_INTEGER v42; // [rsp+80h] [rbp-78h] BYREF
  int v43; // [rsp+88h] [rbp-70h]
  unsigned __int64 v44; // [rsp+90h] [rbp-68h]
  void *v45; // [rsp+98h] [rbp-60h]
  unsigned __int64 v46; // [rsp+A0h] [rbp-58h]
  _DWORD *v47; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v48[9]; // [rsp+B0h] [rbp-48h] BYREF

  v6 = a2;
  v43 = a4;
  v41 = 0;
  v7 = *a1;
  v44 = *a1;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 )
    return 0LL;
  Object = 0LL;
  v37 = 0LL;
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
      v41 = 1;
      v8 = 2;
    }
  }
  else
  {
    v8 = 1;
  }
  v9 = (4 * v8 + 15) & 0xFFFFFFF8;
  v40 = v9;
  if ( (unsigned int)v6 < v9 )
    return 0LL;
  v46 = v6;
  if ( (int)Win32CreateSection(&Object) < 0 )
    return 0LL;
  v42.QuadPart = 0LL;
  v38 = v6;
  CurrentProcess = PsGetCurrentProcess(v11, v10);
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v37, 0LL, v38, &v42, &v38, 2, 0x400000, 4) < 0 )
  {
LABEL_16:
    ObfDereferenceObject(Object);
    return 0LL;
  }
  v15 = v37;
  v16 = v37;
  v45 = v37;
  v17 = v37;
  v47 = v37;
  if ( (unsigned __int64)v37 > v7 )
    goto LABEL_20;
  v14 = (char *)v37 + v38;
  if ( v7 < (unsigned __int64)v37 + v38 )
  {
LABEL_21:
    v18 = PsGetCurrentProcess(v14, v13);
    MmUnmapViewOfSection(v18, v16);
    goto LABEL_16;
  }
  if ( (unsigned __int64)v37 >= v7 )
  {
LABEL_20:
    if ( (unsigned __int64)v37 < v7 + v6 )
      goto LABEL_21;
  }
  if ( a4 == 2 )
  {
    LODWORD(v6) = v6 - 16;
    v37 = (char *)v37 + 16;
    v19 = v17;
    if ( (unsigned __int64)v17 >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = 0;
    v20 = v17 + 1;
    if ( (unsigned __int64)(v17 + 1) >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = v8;
    v21 = v17 + 2;
    if ( (unsigned __int64)(v17 + 2) >= MmUserProbeAddress )
      v21 = (_DWORD *)MmUserProbeAddress;
    *v21 = v6;
    v39 = 1;
    v15 = v37;
  }
  LODWORD(v44) = v6;
  if ( (_DWORD)v6 )
  {
    v22 = v7 + (unsigned int)v6;
    if ( v22 > MmUserProbeAddress || v22 < v7 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v15 = v37;
    }
  }
  memmove(v15, (const void *)v7, (unsigned int)v6);
  v39 = 1;
  if ( v41 )
  {
    v23 = MmUserProbeAddress;
    v25 = v47;
    v26 = v47;
    if ( (unsigned __int64)v47 >= MmUserProbeAddress )
      v26 = (_DWORD *)MmUserProbeAddress;
    *v26 = 0;
    v24 = v25 + 1;
    if ( (unsigned __int64)(v25 + 1) >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = v8;
  }
  v27 = PsGetCurrentProcess(v24, v23);
  if ( (int)MmUnmapViewOfSection(v27, v16) < 0 )
    goto LABEL_16;
  v37 = 0LL;
  v38 = 0LL;
  v42.QuadPart = 0LL;
  UmfdHostLifeTimeManager::EnsureUmfdHost();
  *(_DWORD *)(a3 + 40) |= 0x20u;
  v28 = -1073741823;
  if ( UmfdHostLifeTimeManager::EnsureUmfdHost() )
    v28 = UmfdHostLifeTimeManager::MmMapViewOfSection(Object, &v37, v29, v38, &v42, &v38, v33, v34, v35, v48);
  if ( v28 < 0 )
    goto LABEL_16;
  v30 = (char *)v37;
  *(_QWORD *)(a3 + 104) = v37;
  *(_QWORD *)(a3 + 16) = &v30[v9];
  v31 = v6 + 16;
  if ( v43 != 2 )
    v31 = v44;
  *(_DWORD *)(a3 + 24) = v31 - v9;
  *(_QWORD *)(a3 + 88) = v38;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  *(_QWORD *)(a3 + 32) = Object;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v48[0];
  *a1 = (unsigned __int64)v30;
  return v8;
}
