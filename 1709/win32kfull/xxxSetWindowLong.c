/*
 * XREFs of xxxSetWindowLong @ 0x1C00EF5D8
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetWindowLong @ 0x1C00EF520 (NtUserSetWindowLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C00A1854 (safe_cast_wf_to_PDIALOG.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C014449C (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     ?AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z @ 0x1C01444B8 (-AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  HANDLE ThreadProcessId; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  struct tagPROCESSINFO *v16; // r15
  _DWORD *v17; // rax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // ecx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // ecx
  _DWORD *v25; // r9
  unsigned int *v26; // rax
  __int64 v27; // rcx
  _BYTE v28[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+24h] [rbp-44h]

  v6 = a3;
  v7 = (int)a2;
  v9 = 0;
  v28[0] = 0;
  v10 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v10 + 464) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 464LL) & 0xC) == 0
    || (ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v10), ThreadProcessId == (HANDLE)gpidLogon)
    && (ThreadProcessId = PsGetThreadProcessId((PETHREAD)*gptiCurrent), ThreadProcessId != (HANDLE)gpidLogon)
    || !gbEnforceUIPI
    && (CurrentProcess = PsGetCurrentProcess(ThreadProcessId, a2), !(unsigned int)IsProcessDwm(CurrentProcess))
    && ((v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL),
         a2 = *(_QWORD *)(gptiCurrent + 400LL),
         *(_DWORD *)(a2 + 740) != *(_DWORD *)(v13 + 740))
     || *(_DWORD *)(a2 + 744) != *(_DWORD *)(v13 + 744)) )
  {
    UserSetLastError(5LL, a2);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v28);
    return 0LL;
  }
  if ( (int)v7 >= 0 )
  {
    v15 = *((unsigned int *)a1 + 63);
    if ( v7 + 4 > v15 )
    {
      v16 = *(struct tagPROCESSINFO **)(*((_QWORD *)a1 + 2) + 400LL);
      if ( v16 != (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v15)
        && (*((_DWORD *)a1 + 76) & 0x800) == 0
        && !CProcessAttachDetach::AttachToProcess((CProcessAttachDetach *)v28, v16) )
      {
        goto LABEL_45;
      }
    }
  }
  if ( (*((_WORD *)a1 + 41) & 0x3FFF) == 0 )
    goto LABEL_31;
  v17 = (_DWORD *)safe_cast_wf_to_PDIALOG((__int64)a1);
  a2 = (__int64)v17;
  if ( !v17 )
  {
    if ( (int)v7 < 0 )
    {
LABEL_32:
      if ( (unsigned int)(v7 + 21) <= 9 )
      {
        v21 = 547;
        if ( _bittest(&v21, v7 + 21) )
        {
          v9 = xxxSetWindowData(a1, (unsigned int)v7, v6, a4);
          goto LABEL_50;
        }
      }
LABEL_30:
      v20 = 1413LL;
      goto LABEL_46;
    }
    if ( (int)v7 < *(unsigned __int16 *)(gpsi + 2LL * ((v18 & 0xFFFF3FFF) - 666) + 328) - 400 )
    {
      if ( v19 != 679 )
        goto LABEL_30;
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 != 8 )
          goto LABEL_30;
        v29 = **((_DWORD **)a1 + 48);
        if ( v29 )
        {
          if ( *((char *)a1 + 59) >= 0 )
            goto LABEL_30;
        }
      }
LABEL_35:
      v22 = *((unsigned int *)a1 + 63);
      if ( (unsigned __int64)(unsigned int)v7 + 4 > (unsigned int)(v22 + *((_DWORD *)a1 + 62)) )
        goto LABEL_30;
      if ( !a5 )
        goto LABEL_47;
      v23 = *((_QWORD *)a1 + 21);
      if ( (*(_WORD *)(v23 + 34) & 0x100) == 0 )
        goto LABEL_47;
      v24 = 0;
      v25 = &gDefaultServerClasses;
      while ( *(_WORD *)(v23 + 8) != *(_WORD *)(gpsi + 2LL * ((*v25 >> 3) & 0x1F) + 852) )
      {
        ++v24;
        v25 += 12;
        if ( v24 >= 8 )
          goto LABEL_47;
      }
      if ( (int)v7 >= *((_DWORD *)&gDefaultServerClasses + 12 * v24 + 6)
        || (a2 = *v25 & 0xF8, (*(_BYTE *)v25 & 0xF8) == 0xB0)
        && (unsigned __int64)((int)v7 + 4LL) <= 0xFFFFFFFFFFFFFEA0uLL )
      {
LABEL_47:
        if ( (int)v7 + 4LL <= v22 )
        {
          v27 = *((_QWORD *)a1 + 49);
          v9 = *(_DWORD *)((int)v7 + v27);
          *(_DWORD *)((int)v7 + v27) = v6;
        }
        else
        {
          v26 = (unsigned int *)(*((_QWORD *)a1 + 48) + (int)v7 - (int)v22);
          v9 = *v26;
          v29 = *v26;
          *v26 = v6;
        }
        goto LABEL_50;
      }
LABEL_45:
      v20 = 5LL;
      goto LABEL_46;
    }
LABEL_31:
    if ( (int)v7 < 0 )
      goto LABEL_32;
    goto LABEL_35;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 16 )
    {
      if ( (unsigned int)v7 <= 0x1D )
      {
        v20 = 1415LL;
LABEL_46:
        UserSetLastError(v20, a2);
        goto LABEL_50;
      }
      goto LABEL_31;
    }
    v9 = v17[4];
    *((_QWORD *)v17 + 2) = (int)v6;
  }
  else
  {
    v9 = *v17;
    *(_QWORD *)v17 = (int)v6;
  }
LABEL_50:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v28);
  return v9;
}
