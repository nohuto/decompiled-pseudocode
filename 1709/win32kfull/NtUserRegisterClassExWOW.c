/*
 * XREFs of NtUserRegisterClassExWOW @ 0x1C0074FD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     _RegisterClassEx @ 0x1C0075704 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C0075794 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1C0108AB4 (RegisterIconTitleClass.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserRegisterClassExWOW(
        __int128 *a1,
        ULONG64 a2,
        ULONG64 a3,
        ULONG64 a4,
        unsigned __int16 a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 v16; // bx
  _WORD *v17; // rax
  int v18; // ebx
  wchar_t *v19; // r13
  int v20; // r15d
  ULONG64 v21; // r9
  ULONG64 v22; // rdx
  ULONG64 v23; // r12
  ULONG64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 *ThreadWin32Thread; // rax
  ULONG64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KTHREAD *v36; // rdi
  __int64 v37; // rbx
  __int64 *v38; // rax
  ULONG64 v39; // rcx
  __int16 Atom; // r8
  __int64 v41; // rdx
  _WORD *v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  int v46; // [rsp+30h] [rbp-1C8h]
  int v47; // [rsp+34h] [rbp-1C4h]
  int v48; // [rsp+38h] [rbp-1C0h]
  int v49; // [rsp+40h] [rbp-1B8h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-1B8h]
  int v51; // [rsp+48h] [rbp-1B0h]
  __int64 v52; // [rsp+60h] [rbp-198h]
  wchar_t *Str1; // [rsp+70h] [rbp-188h]
  void *Src; // [rsp+78h] [rbp-180h]
  _QWORD v55[3]; // [rsp+A0h] [rbp-158h] BYREF
  _QWORD v56[3]; // [rsp+B8h] [rbp-140h] BYREF
  __int128 v57; // [rsp+D0h] [rbp-128h] BYREF
  __int128 v58; // [rsp+E0h] [rbp-118h]
  __int128 v59; // [rsp+F0h] [rbp-108h]
  __int128 v60; // [rsp+100h] [rbp-F8h]
  __int128 v61; // [rsp+110h] [rbp-E8h]
  __int64 v62; // [rsp+120h] [rbp-D8h]
  __int64 v63; // [rsp+128h] [rbp-D0h]
  struct _KTHREAD *v64; // [rsp+130h] [rbp-C8h]
  struct _KTHREAD *v65; // [rsp+138h] [rbp-C0h]
  __int64 v66; // [rsp+140h] [rbp-B8h]
  int v67; // [rsp+150h] [rbp-A8h]
  ULONG64 v68; // [rsp+158h] [rbp-A0h]
  __int128 v69; // [rsp+160h] [rbp-98h]
  ULONG64 v70; // [rsp+170h] [rbp-88h]
  __int128 v71; // [rsp+178h] [rbp-80h] BYREF
  ULONG64 v72; // [rsp+188h] [rbp-70h]
  __int128 v73; // [rsp+190h] [rbp-68h]
  __int128 v74; // [rsp+1A0h] [rbp-58h]
  __int128 v75; // [rsp+1B0h] [rbp-48h]
  __int128 v76; // [rsp+1C0h] [rbp-38h]
  __int128 v77; // [rsp+1D0h] [rbp-28h]

  v48 = 0;
  v47 = 0;
  EnterCrit(0LL, 1LL);
  if ( (a6 & 0xFFFFFF3D) != 0 )
  {
    UserSetLastError(1004LL, v11);
LABEL_3:
    v16 = 0;
    goto LABEL_91;
  }
  v14 = a5;
  if ( !a5 )
  {
LABEL_12:
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) & 0x10000000) == 0
      && !(unsigned int)RegisterIconTitleClass(v12, a5, gptiCurrent, v13) )
    {
      goto LABEL_3;
    }
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v18 = *(_DWORD *)a2;
    v49 = *(_DWORD *)a2;
    v19 = *(wchar_t **)(a2 + 8);
    Str1 = v19;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v20 = *(_DWORD *)a3;
    v51 = *(_DWORD *)a3;
    v21 = *(_QWORD *)(a3 + 8);
    Src = (void *)v21;
    v52 = v21;
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v69 = *(_OWORD *)a4;
    v70 = *(_QWORD *)(a4 + 16);
    v71 = v69;
    v72 = v70;
    v22 = v70;
    if ( v70 >= MmUserProbeAddress )
      v22 = MmUserProbeAddress;
    v46 = *(_DWORD *)v22;
    v67 = *(_DWORD *)v22;
    v23 = *(_QWORD *)(v22 + 8);
    v68 = v23;
    if ( a1 + 5 < a1 || (unsigned __int64)(a1 + 5) > MmUserProbeAddress )
      a1 = (__int128 *)MmUserProbeAddress;
    v73 = *a1;
    v74 = a1[1];
    v75 = a1[2];
    v76 = a1[3];
    v77 = a1[4];
    v57 = v73;
    v58 = v74;
    v59 = v75;
    v60 = v76;
    v61 = v77;
    if ( ((unsigned __int64)v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( ((unsigned __int8)v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = (ULONG64)v19 + (unsigned __int16)v18 + 2;
      if ( v24 >= MmUserProbeAddress
        || (unsigned __int16)v18 > HIWORD(v49)
        || (v18 & 1) != 0
        || v24 <= (unsigned __int64)v19 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    if ( ((unsigned __int64)v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v18 + 2) < (unsigned __int16)v18 )
        ExRaiseStatus(-1073741675);
      Str1 = (wchar_t *)Win32AllocPoolWithQuota((unsigned __int16)(v18 + 2), 2020897621LL);
      if ( !Str1 )
        ExRaiseStatus(-1073741801);
      v48 = 1;
      CurrentThread = KeGetCurrentThread();
      v64 = CurrentThread;
      v29 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27, v28) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v29 = *ThreadWin32Thread;
      }
      v56[0] = *(_QWORD *)(v29 + 16);
      *(_QWORD *)(v29 + 16) = v56;
      v56[1] = Str1;
      v56[2] = Win32FreePool;
      memmove(Str1, v19, (unsigned __int16)v18);
      Str1[(unsigned __int64)(unsigned __int16)v18 >> 1] = 0;
      v21 = (ULONG64)Src;
    }
    if ( (v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v21 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v31 = v21 + (unsigned __int16)v20 + 2LL;
      if ( v31 >= MmUserProbeAddress || (unsigned __int16)v20 > HIWORD(v51) || (v20 & 1) != 0 || v31 <= v21 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( (v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (unsigned __int16)(v20 + 2) < (unsigned __int16)v20 )
        ExRaiseStatus(-1073741675);
      v52 = Win32AllocPoolWithQuota((unsigned __int16)(v20 + 2), 2020897621LL);
      if ( !v52 )
        ExRaiseStatus(-1073741801);
      v47 = 1;
      v36 = KeGetCurrentThread();
      v65 = v36;
      v37 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v33, v32, v34, v35) )
      {
        v38 = (__int64 *)PsGetThreadWin32Thread(v36);
        if ( v38 )
          v37 = *v38;
      }
      v55[0] = *(_QWORD *)(v37 + 16);
      *(_QWORD *)(v37 + 16) = v55;
      v55[1] = v52;
      v55[2] = Win32FreePool;
      memmove((void *)v52, Src, (unsigned __int16)v20);
      *(_WORD *)(v52 + 2 * ((unsigned __int64)(unsigned __int16)v20 >> 1)) = 0;
    }
    if ( (v23 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v23 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v39 = v23 + (unsigned __int16)v46 + 2LL;
      if ( v39 >= MmUserProbeAddress || (unsigned __int16)v46 > HIWORD(v46) || (v46 & 1) != 0 || v39 <= v23 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( a7 )
      v66 = *a7;
    *(_QWORD *)&v61 = Str1;
    v62 = v52;
    *((_QWORD *)&v60 + 1) = v23;
    if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) & 0x2000) != 0
      || (unsigned int)RegisterDefaultClass(Str1) )
    {
      if ( (v52 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        Atom = UserFindAtom(v52);
      else
        Atom = v52;
      v63 = 0LL;
      if ( Atom )
      {
        v41 = 0LL;
        v42 = &unk_1C02D89E6;
        while ( Atom != *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)(v42 - 3) >> 3) & 0x1F) + 852) || !*v42 )
        {
          v41 = (unsigned int)(v41 + 1);
          v42 += 24;
          if ( (unsigned int)v41 >= 8 )
            goto LABEL_86;
        }
        a6 |= (unsigned __int16)*v42;
        if ( (a6 & 0x200) != 0 && SDWORD1(v58) < *((_DWORD *)&gDefaultServerClasses + 12 * (unsigned int)v41 + 6) )
        {
          UserSetLastError(5LL, v41);
          v16 = 0;
          UserSetLastError(0LL, v43);
          goto LABEL_87;
        }
        v44 = *((_DWORD *)&gDefaultServerClasses + 12 * (unsigned int)v41 + 6);
        if ( SDWORD1(v58) >= v44 )
        {
          LODWORD(v63) = *((_DWORD *)&gDefaultServerClasses + 12 * (unsigned int)v41 + 6);
          DWORD1(v58) -= v44;
        }
      }
LABEL_86:
      v16 = RegisterClassEx(&v57, &v71, a5, a6);
      goto LABEL_87;
    }
LABEL_11:
    v16 = 0;
LABEL_87:
    if ( v47 )
      PopAndFreeAlwaysW32ThreadLock(v55);
    if ( v48 )
      PopAndFreeAlwaysW32ThreadLock(v56);
    goto LABEL_91;
  }
  v15 = 666LL;
  if ( (unsigned __int16)(a5 - 666) > 0x1Eu )
    goto LABEL_11;
  LODWORD(v12) = 0;
  v17 = &unk_1C02D89E4;
  while ( *v17 != a5 )
  {
    v12 = (unsigned int)(v12 + 1);
    v17 += 24;
    if ( (unsigned int)v12 >= 8 )
      goto LABEL_12;
  }
  v16 = 0;
  UserSetLastError(87LL, a5);
LABEL_91:
  UserSessionSwitchLeaveCrit(v15, v14);
  return v16;
}
