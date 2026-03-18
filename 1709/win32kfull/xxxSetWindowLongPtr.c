/*
 * XREFs of xxxSetWindowLongPtr @ 0x1C00A3D38
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00A3C80 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C01189A4 (xxxCsDdeInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C00A1854 (safe_cast_wf_to_PDIALOG.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C014449C (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     ?AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z @ 0x1C01444B8 (-AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rcx
  HANDLE v12; // rax
  __int64 CurrentProcess; // rax
  __int64 v14; // rcx
  unsigned __int64 v16; // rcx
  struct tagPROCESSINFO *v17; // r15
  __int64 v18; // rdx
  __int64 *v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  unsigned int v25; // ecx
  _DWORD *v26; // r9
  __int64 *v27; // rax
  __int64 v28; // rcx
  char v29[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]

  v6 = (int)a2;
  v8 = 0LL;
  v29[0] = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 464) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 464LL) & 0xC) == 0
    || (ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9), v11 = gpidLogon, ThreadProcessId == (HANDLE)gpidLogon)
    && (v12 = PsGetThreadProcessId((PETHREAD)*gptiCurrent), v11 = gpidLogon, v12 != (HANDLE)gpidLogon)
    || !gbEnforceUIPI
    && (CurrentProcess = PsGetCurrentProcess(v11, a2), !(unsigned int)IsProcessDwm(CurrentProcess))
    && ((v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL),
         a2 = *(_QWORD *)(gptiCurrent + 400LL),
         *(_DWORD *)(a2 + 740) != *(_DWORD *)(v14 + 740))
     || *(_DWORD *)(a2 + 744) != *(_DWORD *)(v14 + 744)) )
  {
    UserSetLastError(5LL, a2);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v29);
    return 0LL;
  }
  if ( (int)v6 >= 0 )
  {
    v16 = *((unsigned int *)a1 + 63);
    if ( v6 + 8 > v16 )
    {
      v17 = *(struct tagPROCESSINFO **)(*((_QWORD *)a1 + 2) + 400LL);
      if ( v17 != (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v16)
        && (*((_DWORD *)a1 + 76) & 0x800) == 0
        && !CProcessAttachDetach::AttachToProcess((CProcessAttachDetach *)v29, v17) )
      {
LABEL_52:
        v21 = 5LL;
        goto LABEL_53;
      }
    }
  }
  v18 = *((unsigned __int16 *)a1 + 41);
  if ( (*((_WORD *)a1 + 41) & 0x3FFF) == 0 )
    goto LABEL_40;
  v19 = (__int64 *)safe_cast_wf_to_PDIALOG((__int64)a1);
  if ( !v19 )
  {
    if ( (int)v6 < 0 )
    {
LABEL_41:
      v8 = xxxSetWindowData(a1);
      goto LABEL_57;
    }
    v18 = ((unsigned int)v18 & 0xFFFF3FFF) - 666;
    if ( (int)v6 >= *(unsigned __int16 *)(gpsi + 2 * v18 + 328) - 400 )
      goto LABEL_40;
    if ( v20 < 0x2A1 )
      goto LABEL_39;
    if ( v20 > 0x2A6 )
    {
      if ( v20 == 679 )
      {
        if ( (_DWORD)v6 != 8 )
          goto LABEL_39;
        v22 = **((_QWORD **)a1 + 48);
        v30 = v22;
        goto LABEL_32;
      }
      if ( v20 - 680 > 2 )
        goto LABEL_39;
    }
    if ( (_DWORD)v6 )
      goto LABEL_39;
    if ( *((_DWORD *)a1 + 63) )
    {
      v22 = **((_QWORD **)a1 + 49);
    }
    else
    {
      v22 = **((_QWORD **)a1 + 48);
      v30 = v22;
    }
LABEL_32:
    if ( v22 && *((char *)a1 + 59) >= 0 )
      goto LABEL_39;
    goto LABEL_42;
  }
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 16 )
    {
      if ( (unsigned int)v6 <= 0x1D )
      {
        v21 = 1415LL;
LABEL_53:
        UserSetLastError(v21, v18);
        goto LABEL_57;
      }
LABEL_40:
      if ( (int)v6 < 0 )
        goto LABEL_41;
LABEL_42:
      v23 = *((unsigned int *)a1 + 63);
      if ( (unsigned __int64)(unsigned int)v6 + 8 <= (unsigned int)(v23 + *((_DWORD *)a1 + 62)) )
      {
        if ( !a5 )
          goto LABEL_54;
        v24 = *((_QWORD *)a1 + 21);
        if ( (*(_WORD *)(v24 + 34) & 0x100) == 0 )
          goto LABEL_54;
        v25 = 0;
        v26 = &gDefaultServerClasses;
        while ( *(_WORD *)(v24 + 8) != *(_WORD *)(gpsi + 2LL * ((*v26 >> 3) & 0x1F) + 852) )
        {
          ++v25;
          v26 += 12;
          if ( v25 >= 8 )
            goto LABEL_54;
        }
        if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * v25 + 6)
          || (v18 = *v26 & 0xF8, (*(_BYTE *)v26 & 0xF8) == 0xB0)
          && (unsigned __int64)((int)v6 + 8LL) <= 0xFFFFFFFFFFFFFEA0uLL )
        {
LABEL_54:
          if ( (int)v6 + 8LL <= v23 )
          {
            v28 = *((_QWORD *)a1 + 49);
            v8 = *(_QWORD *)((int)v6 + v28);
            *(_QWORD *)((int)v6 + v28) = a3;
          }
          else
          {
            v27 = (__int64 *)(*((_QWORD *)a1 + 48) + (int)v6 - (int)v23);
            v8 = *v27;
            v30 = *v27;
            *v27 = a3;
          }
          goto LABEL_57;
        }
        goto LABEL_52;
      }
LABEL_39:
      v21 = 1413LL;
      goto LABEL_53;
    }
    v8 = v19[2];
    v19[2] = a3;
  }
  else
  {
    v8 = *v19;
    *v19 = a3;
  }
LABEL_57:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v29);
  return v8;
}
