/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C0034FD0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _RegisterClassEx @ 0x1C00356AC (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C0036E20 (RegisterDefaultClass.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     RegisterIconTitleClass @ 0x1C00FCD80 (RegisterIconTitleClass.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        __int128 *a1,
        int *a2,
        int *a3,
        unsigned __int64 a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // bx
  unsigned int v15; // ecx
  _WORD *v16; // rax
  int v17; // ebx
  wchar_t *v18; // r13
  int v19; // r15d
  unsigned __int64 v20; // r9
  int *v21; // rdx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 *v28; // rax
  unsigned __int64 v29; // rcx
  __int16 Atom; // r8
  unsigned int v31; // edx
  _WORD *v32; // rcx
  int v33; // eax
  int v35; // [rsp+30h] [rbp-1B8h]
  int v36; // [rsp+34h] [rbp-1B4h]
  int v37; // [rsp+38h] [rbp-1B0h]
  int v38; // [rsp+3Ch] [rbp-1ACh]
  int v39; // [rsp+40h] [rbp-1A8h]
  __int64 v40; // [rsp+58h] [rbp-190h]
  wchar_t *Str1; // [rsp+68h] [rbp-180h]
  void *Src; // [rsp+70h] [rbp-178h]
  _QWORD v43[3]; // [rsp+90h] [rbp-158h] BYREF
  _QWORD v44[3]; // [rsp+A8h] [rbp-140h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-128h] BYREF
  __int128 v46; // [rsp+D0h] [rbp-118h]
  __int128 v47; // [rsp+E0h] [rbp-108h]
  __int128 v48; // [rsp+F0h] [rbp-F8h]
  __int128 v49; // [rsp+100h] [rbp-E8h]
  __int64 v50; // [rsp+110h] [rbp-D8h]
  __int64 v51; // [rsp+118h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+120h] [rbp-C8h]
  struct _KTHREAD *v53; // [rsp+128h] [rbp-C0h]
  int v54; // [rsp+138h] [rbp-B0h]
  unsigned __int64 v55; // [rsp+140h] [rbp-A8h]
  __int128 v56; // [rsp+148h] [rbp-A0h]
  int *v57; // [rsp+158h] [rbp-90h]
  __int128 v58; // [rsp+160h] [rbp-88h] BYREF
  int *v59; // [rsp+170h] [rbp-78h]
  __int128 v60; // [rsp+178h] [rbp-70h]
  __int128 v61; // [rsp+188h] [rbp-60h]
  __int128 v62; // [rsp+198h] [rbp-50h]
  __int128 v63; // [rsp+1A8h] [rbp-40h]
  __int128 v64; // [rsp+1B8h] [rbp-30h]

  v37 = 0;
  v36 = 0;
  EnterCrit(0LL, 1LL);
  v11 = gptiCurrent;
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_3:
    v14 = 0;
    goto LABEL_87;
  }
  v12 = a5;
  if ( !a5 )
  {
LABEL_12:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass() )
    {
      goto LABEL_3;
    }
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (int *)W32UserProbeAddress;
    v17 = *a2;
    v38 = *a2;
    v18 = (wchar_t *)*((_QWORD *)a2 + 1);
    Str1 = v18;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    v19 = *a3;
    v39 = *a3;
    v20 = *((_QWORD *)a3 + 1);
    Src = (void *)v20;
    v40 = v20;
    if ( a4 + 24 < a4 || a4 + 24 > W32UserProbeAddress )
      a4 = W32UserProbeAddress;
    v56 = *(_OWORD *)a4;
    v57 = *(int **)(a4 + 16);
    v58 = v56;
    v59 = v57;
    v21 = v57;
    if ( (unsigned __int64)v57 >= W32UserProbeAddress )
      v21 = (int *)W32UserProbeAddress;
    v35 = *v21;
    v54 = *v21;
    v22 = *((_QWORD *)v21 + 1);
    v55 = v22;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > W32UserProbeAddress )
      a1 = (__int128 *)W32UserProbeAddress;
    v60 = *a1;
    v61 = a1[1];
    v62 = a1[2];
    v63 = a1[3];
    v64 = a1[4];
    v45 = v60;
    v46 = v61;
    v47 = v62;
    v48 = v63;
    v49 = v64;
    if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( ((unsigned __int8)v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = (unsigned __int64)v18 + (unsigned __int16)v17 + 2;
      if ( v23 >= W32UserProbeAddress
        || (unsigned __int16)v17 > HIWORD(v38)
        || (v17 & 1) != 0
        || v23 <= (unsigned __int64)v18 )
      {
        *W32UserProbeAddress = 0;
      }
    }
    if ( ((unsigned __int64)v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v17 + 2) < (unsigned __int16)v17 )
        ExRaiseStatus(-1073741675);
      Str1 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)(v17 + 2), 2020897621LL);
      if ( !Str1 )
        ExRaiseStatus(-1073741801);
      v37 = 1;
      CurrentThread = KeGetCurrentThread();
      v24 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v24 = *ThreadWin32Thread;
      v44[0] = *(_QWORD *)(v24 + 16);
      *(_QWORD *)(v24 + 16) = v44;
      v44[1] = Str1;
      v44[2] = Win32FreePool;
      memmove(Str1, v18, (unsigned __int16)v17);
      Str1[(unsigned __int64)(unsigned __int16)v17 >> 1] = 0;
      v20 = (unsigned __int64)Src;
    }
    if ( (v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v20 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v26 = v20 + (unsigned __int16)v19 + 2LL;
      if ( v26 >= W32UserProbeAddress || (unsigned __int16)v19 > HIWORD(v39) || (v19 & 1) != 0 || v26 <= v20 )
        *W32UserProbeAddress = 0;
    }
    if ( (v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v19 + 2) < (unsigned __int16)v19 )
        ExRaiseStatus(-1073741675);
      v40 = Win32AllocPoolWithQuota((unsigned __int16)(v19 + 2), 2020897621LL);
      if ( !v40 )
        ExRaiseStatus(-1073741801);
      v36 = 1;
      v53 = KeGetCurrentThread();
      v27 = 0LL;
      v28 = (__int64 *)PsGetThreadWin32Thread(v53);
      if ( v28 )
        v27 = *v28;
      v43[0] = *(_QWORD *)(v27 + 16);
      *(_QWORD *)(v27 + 16) = v43;
      v43[1] = v40;
      v43[2] = Win32FreePool;
      memmove((void *)v40, Src, (unsigned __int16)v19);
      *(_WORD *)(v40 + 2 * ((unsigned __int64)(unsigned __int16)v19 >> 1)) = 0;
    }
    if ( (v22 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v22 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v29 = v22 + (unsigned __int16)v35 + 2LL;
      if ( v29 >= W32UserProbeAddress || (unsigned __int16)v35 > HIWORD(v35) || (v35 & 1) != 0 || v29 <= v22 )
        *W32UserProbeAddress = 0;
    }
    *(_QWORD *)&v49 = Str1;
    v50 = v40;
    *((_QWORD *)&v48 + 1) = v22;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) & 0x2000) != 0
      || (unsigned int)RegisterDefaultClass(Str1) )
    {
      if ( (v40 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Atom = UserFindAtom(v40);
      else
        Atom = v40;
      v51 = 0LL;
      if ( Atom )
      {
        v31 = 0;
        v32 = &unk_1C02DEA06;
        while ( Atom != *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v32 - 3) >> 3) & 0x1F) + 852) || !*v32 )
        {
          ++v31;
          v32 += 24;
          if ( v31 >= 8 )
            goto LABEL_82;
        }
        a6 |= (unsigned __int16)*v32;
        if ( (a6 & 0x200) != 0 && SDWORD1(v46) < *((_DWORD *)&gDefaultServerClasses + 12 * v31 + 6) )
        {
          UserSetLastError(5LL);
          v14 = 0;
          UserSetLastError(0LL);
          goto LABEL_83;
        }
        v33 = *((_DWORD *)&gDefaultServerClasses + 12 * v31 + 6);
        if ( SDWORD1(v46) >= v33 )
        {
          LODWORD(v51) = *((_DWORD *)&gDefaultServerClasses + 12 * v31 + 6);
          DWORD1(v46) -= v33;
        }
      }
LABEL_82:
      v14 = RegisterClassEx(&v45, &v58, a5, a6);
      goto LABEL_83;
    }
LABEL_11:
    v14 = 0;
LABEL_83:
    if ( v36 )
      PopAndFreeAlwaysW32ThreadLock(v43);
    if ( v37 )
      PopAndFreeAlwaysW32ThreadLock(v44);
    goto LABEL_87;
  }
  v13 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_11;
  v15 = 0;
  v16 = &unk_1C02DEA04;
  while ( *v16 != a5 )
  {
    ++v15;
    v16 += 24;
    if ( v15 >= 8 )
      goto LABEL_12;
  }
  v14 = 0;
  UserSetLastError(87LL);
LABEL_87:
  UserSessionSwitchLeaveCrit(v13, v12, v11, v10);
  return v14;
}
