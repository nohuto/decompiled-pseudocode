/*
 * XREFs of MiMapViewOfSection @ 0x1404CFC50
 * Callers:
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     MmMapSecureViewOfSection @ 0x14046252C (MmMapSecureViewOfSection.c)
 *     NtMapViewOfSection @ 0x1404CF7E0 (NtMapViewOfSection.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiArbitraryCodeBlocked @ 0x1404D5370 (MiArbitraryCodeBlocked.c)
 *     MiMapViewOfPhysicalSection @ 0x1405D96D4 (MiMapViewOfPhysicalSection.c)
 */

__int64 __fastcall MiMapViewOfSection(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        size_t *a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        __int64 *a12)
{
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // r11
  unsigned __int64 v17; // r12
  __int64 v18; // rdi
  unsigned int v19; // r14d
  char ProtectionMask; // al
  unsigned int v21; // r13d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r8
  __int16 v25; // ax
  __int64 v26; // r9
  _KPROCESS *v27; // r10
  void **v28; // r11
  int v29; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rdi
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  int v36; // r15d
  void *v37; // r15
  BOOLEAN v38; // al
  int v39; // eax
  char v40[8]; // [rsp+70h] [rbp-108h] BYREF
  _KPROCESS *v41; // [rsp+78h] [rbp-100h]
  __int64 v42; // [rsp+80h] [rbp-F8h]
  int v43; // [rsp+88h] [rbp-F0h]
  void *Src; // [rsp+90h] [rbp-E8h] BYREF
  void *v45; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD *v46; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 *v47; // [rsp+A8h] [rbp-D0h]
  __int64 *v48; // [rsp+B0h] [rbp-C8h]
  size_t *v49; // [rsp+B8h] [rbp-C0h]
  int v50; // [rsp+C0h] [rbp-B8h]
  int v51; // [rsp+C4h] [rbp-B4h]
  int v52; // [rsp+C8h] [rbp-B0h]
  size_t Size; // [rsp+D0h] [rbp-A8h] BYREF
  unsigned __int64 v54; // [rsp+D8h] [rbp-A0h]
  __int64 v55; // [rsp+E0h] [rbp-98h]
  _KPROCESS *v56; // [rsp+E8h] [rbp-90h]
  __int64 v57; // [rsp+F0h] [rbp-88h]
  _QWORD *v58; // [rsp+F8h] [rbp-80h]
  __int64 v59; // [rsp+100h] [rbp-78h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v60; // [rsp+108h] [rbp-70h] BYREF

  v42 = a4;
  v46 = a3;
  v41 = (_KPROCESS *)a2;
  v57 = a2;
  v58 = a3;
  v59 = a4;
  v47 = a6;
  v13 = (__int64)a7;
  v49 = a7;
  v48 = a12;
  v43 = 0;
  v55 = a1;
  v17 = MiSectionControlArea(a1);
  v54 = v17;
  v18 = *(_QWORD *)v17;
  v40[0] = 1;
  v19 = a10;
  if ( (a10 & 0x40000000) != 0 )
  {
    if ( (a10 & 0xF0) == 0 )
      return 3221225720LL;
    v40[0] = 0;
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
        || (v38 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, KeGetCurrentThread()->PreviousMode), v16 = v46, !v38) )
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
LABEL_60:
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
        goto LABEL_12;
      return 3221225550LL;
    }
    return 3221225503LL;
  }
  if ( (v21 & 0x2000) != 0 )
    goto LABEL_60;
LABEL_12:
  if ( (v21 & 0x800000) != 0 && ((*(_DWORD *)(a1 + 56) & 0x20) == 0 || (v21 & 0x20000000) != 0) )
    return 3221225719LL;
  v25 = *(_WORD *)(v18 + 12);
  if ( v25 < 0 )
    v19 = v19 & 0xFFFFF9FF | 0x200;
  if ( (v25 & 0x4000) != 0 )
    v19 = v19 & 0xFFFFF9FF | 0x400;
  v29 = MiMakeProtectionMask(v19);
  v51 = v29;
  if ( v29 == -1 )
    return 3221225541LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v56 = Process;
  if ( (Process[2].UserDirectoryTableBase & 0x100) != 0
    && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      v21 &= ~0x20000000u;
    }
    else if ( (v29 & 2) != 0 )
    {
      return MiArbitraryCodeBlocked(Process);
    }
  }
  if ( Process != v27 )
  {
    KiStackAttachProcess(v27, 0, (__int64)&v60);
    v43 = 1;
    v27 = v41;
    v28 = (void **)v46;
    v26 = v42;
  }
  v32 = *(_DWORD *)(v17 + 56);
  if ( (v32 & 0x400) != 0 )
  {
    if ( v48 )
    {
      v34 = -1073741575;
      goto LABEL_25;
    }
    v33 = MiMapViewOfPhysicalSection((_DWORD)v27, (_DWORD)v28, (_DWORD)v47, (_DWORD)a7, v29, v26, v21, (__int64)v40);
  }
  else
  {
    if ( (v32 & 0x20) != 0 )
    {
      v45 = *v28;
      Src = v45;
      Size = *a7;
      while ( 1 )
      {
        v36 = v54;
        while ( 1 )
        {
          v34 = MiMapViewOfImageSection(
                  v36,
                  (_DWORD)Process,
                  (_DWORD)v27,
                  (unsigned int)&v45,
                  (__int64)v47,
                  v13,
                  a1,
                  a8,
                  v29,
                  v26,
                  v21,
                  0);
          v52 = v34;
          if ( (v21 & 0x20000000) == 0 )
          {
            v37 = v45;
            goto LABEL_36;
          }
          v21 &= ~0x20000000u;
          LODWORD(v48) = v21;
          v39 = MiMapViewOfImageSection(
                  v36,
                  (_DWORD)Process,
                  (_DWORD)v41,
                  (unsigned int)&Src,
                  (__int64)v47,
                  (__int64)&Size,
                  a1,
                  a8,
                  v29,
                  v42,
                  v21,
                  0);
          v50 = v39;
          if ( v34 < 0 )
          {
            v37 = Src;
            *v49 = Size;
            v34 = v39;
            goto LABEL_36;
          }
          if ( v39 >= 0 )
            break;
          MiUnmapViewOfSection((__int64)v41, (unsigned __int64)v45, 0);
          v13 = (__int64)v49;
          LODWORD(v27) = (_DWORD)v41;
          v26 = v42;
        }
        v37 = v45;
        memmove(v45, Src, Size);
        if ( v50 >= 0 )
          break;
        MiUnmapViewOfSection((__int64)v41, (unsigned __int64)v37, 0);
        MiUnmapViewOfSection((__int64)v41, (unsigned __int64)Src, 0);
        v13 = (__int64)v49;
        LODWORD(v27) = (_DWORD)v41;
        v26 = v42;
      }
      MiUnmapViewOfSection((__int64)v41, (unsigned __int64)Src, 0);
LABEL_36:
      if ( v34 >= 0 )
        *v46 = v37;
      goto LABEL_25;
    }
    v33 = MiMapViewOfDataSection(
            v17,
            (__int64)v27,
            (unsigned __int64 *)v28,
            v47,
            (__int64 *)a7,
            a1,
            a8,
            v29,
            a5,
            v26,
            v21,
            a11,
            (__int64)v40,
            v48);
  }
  v34 = v33;
LABEL_25:
  if ( v43 )
    KiUnstackDetachProcess(&v60, 0LL);
  return (unsigned int)v34;
}
