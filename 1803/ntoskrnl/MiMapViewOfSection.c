/*
 * XREFs of MiMapViewOfSection @ 0x140593F20
 * Callers:
 *     MmMapSecureViewOfSection @ 0x1404D4AC0 (MmMapSecureViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x1404E8D2C (MiMapViewOfSectionExCommon.c)
 *     MmMapViewOfSection @ 0x1404EA390 (MmMapViewOfSection.c)
 *     NtMapViewOfSection @ 0x140593910 (NtMapViewOfSection.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     MiArbitraryCodeBlocked @ 0x1404D6800 (MiArbitraryCodeBlocked.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        __int64 a2,
        void **a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        int a6,
        int a7)
{
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // rax
  _WORD *v13; // r8
  __int64 v14; // r10
  _DWORD *v15; // r12
  __int64 v16; // rsi
  void *v17; // r11
  int v18; // r8d
  int v19; // ecx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  int v31; // r9d
  void **v32; // rax
  void *v33; // rdx
  unsigned __int64 v34; // rax
  int v35; // r8d
  __int16 v36; // ax
  unsigned int v37; // ecx
  int ProtectionMask; // esi
  int v39; // r8d
  _KPROCESS *v40; // r10
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v42; // rcx
  int v43; // eax
  int v44; // eax
  int v45; // edi
  int v47; // eax
  size_t v48; // r15
  ULONG_PTR v49; // r13
  int v50; // eax
  void *v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  BOOLEAN v54; // al
  int v55; // eax
  void *v56; // r13
  char v57[8]; // [rsp+50h] [rbp-F8h] BYREF
  void *Src; // [rsp+58h] [rbp-F0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-E8h]
  int v60; // [rsp+68h] [rbp-E0h]
  void *v61; // [rsp+70h] [rbp-D8h] BYREF
  unsigned __int64 *v62; // [rsp+78h] [rbp-D0h]
  int v63; // [rsp+80h] [rbp-C8h]
  int v64; // [rsp+84h] [rbp-C4h]
  __int64 v65; // [rsp+88h] [rbp-C0h]
  _DWORD *v66; // [rsp+90h] [rbp-B8h]
  void **v67; // [rsp+98h] [rbp-B0h]
  ULONG_PTR v68; // [rsp+A0h] [rbp-A8h]
  __int64 v69; // [rsp+A8h] [rbp-A0h]
  size_t v70; // [rsp+B0h] [rbp-98h]
  __int64 v71; // [rsp+C0h] [rbp-88h]
  void **v72; // [rsp+D0h] [rbp-78h]
  _BYTE v73[48]; // [rsp+D8h] [rbp-70h] BYREF

  v67 = a3;
  v65 = a1;
  v71 = a2;
  v72 = a3;
  v11 = a5;
  v62 = a5;
  BugCheckParameter1 = *(_QWORD *)(a2 + 80);
  v68 = BugCheckParameter1;
  v60 = 0;
  v69 = a1;
  v12 = MiSectionControlArea(a1);
  v15 = (_DWORD *)v12;
  v66 = (_DWORD *)v12;
  v16 = *(_QWORD *)v12;
  v17 = *(void **)(a2 + 24);
  Src = v17;
  if ( !a7 )
  {
    if ( (unsigned int)(a6 - 1) > 1 )
      return 3221225485LL;
    if ( (*(_DWORD *)(v12 + 56) & 0x400) == 0 && *(_QWORD *)(a2 + 16) >= 0x10000uLL && (*v13 || *(_WORD *)a5) )
      return 3221226016LL;
    if ( (*(_DWORD *)(a2 + 40) & 0x9F2BDFFF) != 0
      || (*(_DWORD *)(a2 + 40) & 0x40000000) != 0 && !*(_QWORD *)(v14 + 1808) )
    {
      return 3221225485LL;
    }
  }
  v57[0] = 1;
  v18 = *(_DWORD *)(a2 + 44);
  if ( (v18 & 0x40000000) != 0 )
  {
    if ( (v18 & 0xF0) == 0 )
      return 3221225485LL;
    v57[0] = 0;
    *(_DWORD *)(a2 + 44) = v18 & 0xBFFFFFFF;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 72) )
      return 3221225485LL;
    v47 = *(_DWORD *)(a2 + 40);
    if ( (v47 & 0x2000) != 0 )
      return 3221225485LL;
    if ( (v47 & 0x20000000) != 0 )
    {
      if ( *a5
        || (MiFlags & 0x40000) != 0
        || (v15[14] & 0x20000) != 0
        || (v54 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a2 + 96)), v17 = Src, !v54) )
      {
        *(_DWORD *)(a2 + 40) &= ~0x20000000u;
      }
    }
  }
  else
  {
    v19 = MmCompatibleProtectionMask[MiMakeProtectionMask(*(_DWORD *)(a1 + 60) & 0xFFF) & 7] | 0x700;
    if ( (v19 | v20) != v19 )
      return 3221225550LL;
    v21 = *(_DWORD *)(a2 + 40);
    if ( (v21 & 0x840000) != 0 || (v21 & 0x20002000) != 0 && (v15[14] & 0x400) != 0 )
      return 3221225485LL;
  }
  v22 = *(_QWORD *)(a2 + 24);
  v23 = *a5 + v22;
  if ( v23 < *a5 )
    return 3221225503LL;
  v24 = *(_QWORD *)(a1 + 48);
  if ( v23 > v24 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  if ( !v22 )
    *(_QWORD *)(a2 + 24) = v24 - *a5;
  if ( (v15[14] & 0x400) != 0 )
  {
    if ( (*(_DWORD *)a5 & 0xFFF) != 0 )
    {
      if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 &= 0xFFFFF000;
    }
  }
  else
  {
    v25 = *(_QWORD *)(a2 + 16);
    v26 = *(unsigned int *)a5;
    v27 = v26 & (v25 - 1);
    if ( v27 )
    {
      if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
        return 3221226016LL;
      *(_DWORD *)a5 = v26 & ~(v25 - 1);
      if ( (v15[14] & 0x20) == 0 )
      {
        v53 = *(_QWORD *)(a2 + 24);
        if ( v53 + v27 < v53 )
          return 3221225503LL;
        *(_QWORD *)(a2 + 24) = v53 + v27;
      }
    }
  }
  v28 = *(_QWORD *)(a2 + 24);
  if ( (__int64)v28 <= 0 )
    return 3221225503LL;
  v29 = *(_QWORD *)(a2 + 16) - 1LL;
  if ( ((unsigned __int64)*a3 & v29) == 0 )
    goto LABEL_22;
  if ( (*(_DWORD *)(a2 + 64) & 2) != 0 )
    return 3221226016LL;
  *a3 = (void *)((unsigned __int64)*a3 & ~v29);
  v28 = *(_QWORD *)(a2 + 24);
LABEL_22:
  *(_QWORD *)(a2 + 32) = v28;
  v30 = v28;
  if ( (v28 & 0xFFF) != 0 )
  {
    v52 = 4096 - (unsigned int)(v28 & 0xFFF);
    if ( v28 + v52 >= v28 )
    {
      v30 = v28 + v52;
      *(_QWORD *)(a2 + 24) = v28 + v52;
      goto LABEL_23;
    }
    return 3221225503LL;
  }
LABEL_23:
  v31 = *(_DWORD *)(a2 + 64) & 1;
  v32 = a3;
  if ( !v31 )
    v32 = (void **)a2;
  v33 = *v32;
  v34 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int64)v33 > v34 )
    return 3221225485LL;
  if ( v34 - (unsigned __int64)v33 + 1 < v30 )
    return (unsigned int)(v31 != 0) - 1073741801;
  if ( a4 > v28 && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225485LL;
  if ( v28 > *(_QWORD *)(a1 + 48) && (*(_DWORD *)(a2 + 40) & 0x2000) == 0 )
    return 3221225503LL;
  v35 = *(_DWORD *)(a2 + 40);
  if ( (v35 & 0x2000) != 0 && (*(_DWORD *)(a1 + 60) & 0x44) == 0 )
    return 3221225550LL;
  if ( (v35 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v35 & 0x20000000) != 0)
    || (*(_DWORD *)(a2 + 52) & 0x4000000) != 0
    && ((v15[14] & 0x420) != 0
     || (v35 & 0xFFFFDFFF) != 0
     || !v31
     || *a3 != (void *)((unsigned __int64)*a3 & 0xFFFFFFFFFFFFF000uLL)
     || !v17) )
  {
    return 3221225485LL;
  }
  v36 = *(_WORD *)(v16 + 12);
  v37 = *(_DWORD *)(a2 + 44);
  if ( v36 < 0 )
  {
    v37 = v37 & 0xFFFFF9FF | 0x200;
    *(_DWORD *)(a2 + 44) = v37;
    v36 = *(_WORD *)(v16 + 12);
  }
  if ( (v36 & 0x4000) != 0 )
  {
    v37 = v37 & 0xFFFFF9FF | 0x400;
    *(_DWORD *)(a2 + 44) = v37;
  }
  ProtectionMask = MiMakeProtectionMask(v37);
  v63 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  v42 = *(_QWORD *)(a2 + 88);
  if ( (*(_DWORD *)(v42 + 2088) & 0x100) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 40) = v39 & 0xDFFFFFFF;
    }
    else if ( (ProtectionMask & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(v42);
    }
  }
  if ( (_KPROCESS *)v42 != v40 )
  {
    KiStackAttachProcess(v40, 0, (__int64)v73);
    v60 = 1;
  }
  v43 = v15[14];
  if ( (v43 & 0x400) != 0 )
  {
    if ( *(_QWORD *)(a2 + 72) )
    {
      v45 = -1073741811;
      goto LABEL_44;
    }
    v44 = MiMapViewOfPhysicalSection(a2, (_DWORD)a3, (_DWORD)a5, ProtectionMask, (__int64)v57);
  }
  else
  {
    if ( (v43 & 0x20) != 0 )
    {
      v61 = *a3;
      Src = v61;
      v48 = *(_QWORD *)(a2 + 24);
      v70 = v48;
      v49 = BugCheckParameter1;
      while ( 1 )
      {
        v45 = MiMapViewOfImageSection(
                v15,
                (unsigned __int64 *)a2,
                (unsigned __int64 *)&v61,
                v11,
                a1,
                a6,
                ProtectionMask,
                0);
        v64 = v45;
        v50 = *(_DWORD *)(a2 + 40);
        if ( (v50 & 0x20000000) == 0 )
        {
          v51 = v61;
          goto LABEL_54;
        }
        *(_DWORD *)(a2 + 40) = v50 & 0xDFFFFFFF;
        v55 = MiMapViewOfImageSection(
                v15,
                (unsigned __int64 *)a2,
                (unsigned __int64 *)&Src,
                v62,
                a1,
                a6,
                ProtectionMask,
                0);
        if ( v45 < 0 )
        {
          v51 = Src;
          v45 = v55;
          goto LABEL_54;
        }
        if ( v55 >= 0 )
          break;
        MiUnmapViewOfSection(v49, (unsigned __int64)v61, 0, 0);
        v15 = v66;
        v11 = v62;
      }
      v56 = Src;
      v51 = v61;
      memmove(v61, Src, v48);
      MiUnmapViewOfSection(BugCheckParameter1, (unsigned __int64)v56, 0, 0);
LABEL_54:
      if ( v45 >= 0 )
        *v67 = v51;
      goto LABEL_44;
    }
    v44 = MiMapViewOfDataSection((_DWORD)v15, a2, (_DWORD)a3, (_DWORD)a5, a1, a6, ProtectionMask, a4, (__int64)v57);
  }
  v45 = v44;
LABEL_44:
  if ( v60 )
    KiUnstackDetachProcess((__int64)v73, 0LL);
  return (unsigned int)v45;
}
