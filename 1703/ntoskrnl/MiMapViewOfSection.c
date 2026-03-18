/*
 * XREFs of MiMapViewOfSection @ 0x1405198A0
 * Callers:
 *     MmMapSecureViewOfSection @ 0x14047BC78 (MmMapSecureViewOfSection.c)
 *     MmMapViewOfSection @ 0x14049C1F0 (MmMapViewOfSection.c)
 *     NtMapViewOfSection @ 0x1404C9130 (NtMapViewOfSection.c)
 * Callees:
 *     MiArbitraryCodeBlocked @ 0x14007D6D0 (MiArbitraryCodeBlocked.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        _KPROCESS *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        size_t *a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        _QWORD *a12)
{
  unsigned __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // r11
  unsigned __int64 v17; // r12
  __int64 v18; // rdi
  unsigned int v19; // esi
  char ProtectionMask; // al
  unsigned int v21; // r13d
  size_t v22; // rax
  size_t v23; // r8
  unsigned __int64 v24; // r8
  unsigned __int16 v25; // ax
  int v26; // esi
  unsigned __int64 v27; // r9
  _KPROCESS *v28; // r10
  void **v29; // r11
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rdi
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  void *v36; // r14
  BOOLEAN v37; // al
  int v38; // eax
  unsigned __int8 v39[8]; // [rsp+70h] [rbp-108h] BYREF
  _KPROCESS *v40; // [rsp+78h] [rbp-100h]
  unsigned __int64 v41; // [rsp+80h] [rbp-F8h]
  int v42; // [rsp+88h] [rbp-F0h]
  void *Src; // [rsp+90h] [rbp-E8h] BYREF
  void *v44; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD *v45; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 *v46; // [rsp+A8h] [rbp-D0h]
  _QWORD *v47; // [rsp+B0h] [rbp-C8h]
  size_t *v48; // [rsp+B8h] [rbp-C0h]
  int v49; // [rsp+C0h] [rbp-B8h]
  int v50; // [rsp+C4h] [rbp-B4h]
  size_t Size; // [rsp+C8h] [rbp-B0h] BYREF
  unsigned __int64 v52; // [rsp+D0h] [rbp-A8h]
  __int64 v53; // [rsp+D8h] [rbp-A0h]
  __int64 v54; // [rsp+E0h] [rbp-98h]
  _KPROCESS *v55; // [rsp+E8h] [rbp-90h]
  _QWORD *v56; // [rsp+F0h] [rbp-88h]
  unsigned __int64 v57; // [rsp+F8h] [rbp-80h]
  $5BC46E0569261879018906DEC3127961 v58; // [rsp+100h] [rbp-78h] BYREF

  v41 = a4;
  v45 = a3;
  v40 = a2;
  v55 = a2;
  v56 = a3;
  v57 = a4;
  v46 = a6;
  v13 = a7;
  v48 = a7;
  v47 = a12;
  v42 = 0;
  v53 = a1;
  v17 = MiSectionControlArea(a1);
  v52 = v17;
  v18 = *(_QWORD *)v17;
  v39[0] = 1;
  v19 = a10;
  if ( (a10 & 0x40000000) != 0 )
  {
    if ( (a10 & 0xF0) == 0 )
      return 3221225720LL;
    v39[0] = 0;
    v19 = a10 & 0xBFFFFFFF;
  }
  if ( (*(_DWORD *)(v14 + 56) & 0x20) != 0 )
  {
    if ( v15 )
      return 3221225721LL;
    v21 = a9;
    if ( (a9 & 0x2000) != 0 )
      return 3221225719LL;
    if ( (a9 & 0x20000000) != 0 )
    {
      if ( *a6
        || (MiFlags & 0x40000) != 0
        || (*(_DWORD *)(v17 + 56) & 0x20000) != 0
        || (v37 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, KeGetCurrentThread()->PreviousMode), v16 = v45, !v37) )
      {
        v21 = a9 & 0xDFFFFFFF;
      }
    }
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(*(_DWORD *)(v14 + 60) & 0xFFF);
    if ( (v19 | MmCompatibleProtectionMask[ProtectionMask & 7] | 0x700) != (MmCompatibleProtectionMask[ProtectionMask & 7] | 0x700) )
      return 3221225550LL;
    v21 = a9;
  }
  v22 = *a7 + *a6;
  if ( v22 < *a6 )
    return 3221225503LL;
  v23 = *(_QWORD *)(a1 + 48);
  if ( v22 > v23 && (v21 & 0x2000) == 0 )
    return 3221225503LL;
  if ( !*a7 )
  {
    v24 = v23 - *a6;
    *a7 = v24;
    if ( 0x7FFFFFFE0000LL - *v16 < v24 )
      return 3221225503LL;
  }
  if ( a5 > *a7 && (v21 & 0x2000) == 0 )
    return 3221225715LL;
  if ( *a7 > *(_QWORD *)(a1 + 48) )
  {
    if ( (v21 & 0x2000) != 0 )
    {
LABEL_45:
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
        goto LABEL_12;
      return 3221225550LL;
    }
    return 3221225503LL;
  }
  if ( (v21 & 0x2000) != 0 )
    goto LABEL_45;
LABEL_12:
  if ( (v21 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v21 & 0x20000000) != 0) )
    return 3221225719LL;
  v25 = *(_WORD *)(v18 + 12);
  if ( v25 >= 0x8000u )
    v19 = v19 & 0xFFFFF9FF | 0x200;
  if ( (v25 & 0x4000) != 0 )
    v19 = v19 & 0xFFFFF9FF | 0x400;
  v26 = MiMakeProtectionMask(v19);
  v50 = v26;
  if ( v26 == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v54 = Process;
  if ( (*(_DWORD *)(Process + 768) & 0x400) != 0 && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      v21 &= ~0x20000000u;
    }
    else if ( (v26 & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(Process);
    }
  }
  if ( (_KPROCESS *)Process != v28 )
  {
    KiStackAttachProcess(v28, 0, (__int64)&v58);
    v42 = 1;
    v28 = v40;
    v29 = (void **)v45;
    v27 = v41;
  }
  v32 = *(_DWORD *)(v17 + 56);
  if ( (v32 & 0x400) != 0 )
  {
    if ( v47 )
    {
      v34 = -1073741575;
      goto LABEL_25;
    }
    v33 = MiMapViewOfPhysicalSection((_DWORD)v28, (_DWORD)v29, (_DWORD)v46, (_DWORD)a7, v26, v27, v21, (__int64)v39);
  }
  else
  {
    if ( (v32 & 0x20) != 0 )
    {
      v44 = *v29;
      Src = v44;
      Size = *a7;
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = MiMapViewOfImageSection(
                  v52,
                  Process,
                  (__int64)v28,
                  (unsigned __int64 *)&v44,
                  v46,
                  v13,
                  a1,
                  a8,
                  v26,
                  v27,
                  v21,
                  0);
          LODWORD(v47) = v34;
          if ( (v21 & 0x20000000) == 0 )
          {
            v36 = v44;
            goto LABEL_31;
          }
          v38 = MiMapViewOfImageSection(
                  v52,
                  Process,
                  (__int64)v40,
                  (unsigned __int64 *)&Src,
                  v46,
                  &Size,
                  a1,
                  a8,
                  v26,
                  v41,
                  v21 & 0xDFFFFFFF,
                  0);
          v49 = v38;
          if ( v34 < 0 )
          {
            v36 = Src;
            *v48 = Size;
            v34 = v38;
            goto LABEL_31;
          }
          if ( v38 >= 0 )
            break;
          MiUnmapViewOfSection(v40, (unsigned __int64)v44, 0);
          v21 &= ~0x20000000u;
          v13 = v48;
          v28 = v40;
          v27 = v41;
        }
        v36 = v44;
        memmove(v44, Src, Size);
        if ( v49 >= 0 )
          break;
        MiUnmapViewOfSection(v40, (unsigned __int64)v36, 0);
        MiUnmapViewOfSection(v40, (unsigned __int64)Src, 0);
        v21 &= ~0x20000000u;
        v13 = v48;
        v28 = v40;
        v27 = v41;
      }
      MiUnmapViewOfSection(v40, (unsigned __int64)Src, 0);
LABEL_31:
      if ( v34 >= 0 )
        *v45 = v36;
      goto LABEL_25;
    }
    v33 = MiMapViewOfDataSection(
            v17,
            (unsigned __int64)v28,
            (unsigned __int64 *)v29,
            v46,
            (__int64 *)a7,
            a1,
            a8,
            v26,
            a5,
            v27,
            v21,
            a11,
            v39,
            v47);
  }
  v34 = v33;
LABEL_25:
  if ( v42 )
    KiUnstackDetachProcess(&v58, 0LL);
  return (unsigned int)v34;
}
