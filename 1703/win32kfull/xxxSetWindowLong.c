/*
 * XREFs of xxxSetWindowLong @ 0x1C00DD088
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetWindowLong @ 0x1C00DCFD0 (NtUserSetWindowLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C004D90C (safe_cast_wf_to_PDIALOG.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C013E2EC (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     ?AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z @ 0x1C013E308 (-AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  HANDLE ThreadProcessId; // rcx
  __int64 CurrentProcess; // rax
  __int64 v14; // rcx
  unsigned __int64 v16; // rcx
  struct tagPROCESSINFO *v17; // r15
  _DWORD *v18; // rax
  int v19; // r8d
  unsigned int v20; // r9d
  int v21; // r10d
  __int64 v22; // rcx
  int v23; // ecx
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  unsigned int v26; // ecx
  _DWORD *v27; // r9
  unsigned int *v28; // rax
  __int64 v29; // rcx
  _BYTE v30[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+24h] [rbp-44h]

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v30[0] = 0;
  v10 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v10 + 440) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) == 0
    || (ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v10), ThreadProcessId == (HANDLE)gpidLogon)
    && (ThreadProcessId = PsGetThreadProcessId((PETHREAD)*gptiCurrent), ThreadProcessId != (HANDLE)gpidLogon)
    || !gbEnforceUIPI
    && (CurrentProcess = PsGetCurrentProcess(ThreadProcessId), !(unsigned int)IsProcessDwm(CurrentProcess))
    && ((v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL),
         v11 = *(_QWORD *)(gptiCurrent + 376LL),
         *(_DWORD *)(v11 + 732) != *(_DWORD *)(v14 + 732))
     || *(_DWORD *)(v11 + 736) != *(_DWORD *)(v14 + 736)) )
  {
    UserSetLastError(5LL);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v30);
    return 0LL;
  }
  if ( (int)v7 >= 0 )
  {
    v16 = *((unsigned int *)a1 + 63);
    if ( v7 + 4 > v16 )
    {
      v17 = *(struct tagPROCESSINFO **)(*((_QWORD *)a1 + 2) + 376LL);
      if ( v17 != (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v16, v11)
        && (*((_DWORD *)a1 + 76) & 0x800) == 0
        && !CProcessAttachDetach::AttachToProcess((CProcessAttachDetach *)v30, v17) )
      {
        goto LABEL_47;
      }
    }
  }
  if ( (*((_WORD *)a1 + 41) & 0x3FFF) == 0 )
    goto LABEL_33;
  v18 = (_DWORD *)safe_cast_wf_to_PDIALOG((__int64)a1);
  if ( !v18 )
  {
    if ( (int)v7 < 0 )
    {
LABEL_34:
      if ( (unsigned int)(v7 + 21) <= 9 )
      {
        v23 = 547;
        if ( _bittest(&v23, v7 + 21) )
        {
          v9 = xxxSetWindowData(a1, (unsigned int)v7, v6, a4);
          goto LABEL_52;
        }
      }
LABEL_32:
      v22 = 1413LL;
      goto LABEL_48;
    }
    if ( (int)v7 < *(unsigned __int16 *)(gpsi + 2LL * ((v21 & v20) - 666) + 328) - 400 )
    {
      if ( v19 != 679 )
        goto LABEL_32;
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 8 )
          goto LABEL_32;
        v31 = **((_DWORD **)a1 + 48);
        if ( v31 )
        {
          if ( *((char *)a1 + 59) >= 0 )
            goto LABEL_32;
        }
      }
LABEL_37:
      v24 = *((unsigned int *)a1 + 63);
      if ( (unsigned __int64)(unsigned int)v7 + 4 > (unsigned int)(v24 + *((_DWORD *)a1 + 62)) )
        goto LABEL_32;
      if ( !a5 )
        goto LABEL_49;
      v25 = *((_QWORD *)a1 + 21);
      if ( (*(_WORD *)(v25 + 34) & 0x100) == 0 )
        goto LABEL_49;
      v26 = 0;
      v27 = &gDefaultServerClasses;
      while ( *(_WORD *)(v25 + 8) != *(_WORD *)(gpsi + 2LL * ((*v27 >> 3) & 0x1F) + 852) )
      {
        ++v26;
        v27 += 12;
        if ( v26 >= 8 )
          goto LABEL_49;
      }
      if ( (int)v7 >= *((_DWORD *)&gDefaultServerClasses + 12 * v26 + 6)
        || (*v27 & 0xF8) == 0xB0 && (unsigned __int64)((int)v7 + 4LL) <= 0xFFFFFFFFFFFFFEA0uLL )
      {
LABEL_49:
        if ( (int)v7 + 4LL <= v24 )
        {
          v29 = *((_QWORD *)a1 + 49);
          v9 = *(_DWORD *)((int)v7 + v29);
          *(_DWORD *)((int)v7 + v29) = v6;
        }
        else
        {
          v28 = (unsigned int *)(*((_QWORD *)a1 + 48) + (int)v7 - (int)v24);
          v9 = *v28;
          v31 = *v28;
          *v28 = v6;
        }
        goto LABEL_52;
      }
LABEL_47:
      v22 = 5LL;
      goto LABEL_48;
    }
LABEL_33:
    if ( (int)v7 < 0 )
      goto LABEL_34;
    goto LABEL_37;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 16 )
    {
      if ( !*((_DWORD *)a1 + 63) && *((int *)a1 + 62) >= 30 )
      {
        v9 = v18[4];
        *((_QWORD *)v18 + 2) = (int)v6;
      }
      goto LABEL_52;
    }
    if ( (unsigned int)v7 <= 0x1D )
    {
      v22 = 1415LL;
LABEL_48:
      UserSetLastError(v22);
      goto LABEL_52;
    }
    goto LABEL_33;
  }
  v9 = *v18;
  *(_QWORD *)v18 = (int)v6;
LABEL_52:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v30);
  return v9;
}
