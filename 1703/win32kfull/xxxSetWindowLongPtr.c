/*
 * XREFs of xxxSetWindowLongPtr @ 0x1C004E638
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C004E580 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C010FB1C (xxxCsDdeInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C004D90C (safe_cast_wf_to_PDIALOG.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C013E2EC (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     ?AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z @ 0x1C013E308 (-AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  HANDLE v13; // rax
  __int64 CurrentProcess; // rax
  __int64 v15; // rcx
  unsigned __int64 v17; // rcx
  struct tagPROCESSINFO *v18; // r15
  __int64 *v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  unsigned int v27; // ecx
  _DWORD *v28; // r9
  __int64 *v29; // rax
  __int64 v30; // rcx
  char v31[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+28h] [rbp-50h]

  v6 = a2;
  v8 = 0LL;
  v31[0] = 0;
  v9 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v9 + 440) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) == 0
    || (ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v9), v12 = gpidLogon, ThreadProcessId == (HANDLE)gpidLogon)
    && (v13 = PsGetThreadProcessId((PETHREAD)*gptiCurrent), v12 = gpidLogon, v13 != (HANDLE)gpidLogon)
    || !gbEnforceUIPI
    && (CurrentProcess = PsGetCurrentProcess(v12), !(unsigned int)IsProcessDwm(CurrentProcess))
    && ((v15 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL),
         v11 = *(_QWORD *)(gptiCurrent + 376LL),
         *(_DWORD *)(v11 + 732) != *(_DWORD *)(v15 + 732))
     || *(_DWORD *)(v11 + 736) != *(_DWORD *)(v15 + 736)) )
  {
    UserSetLastError(5LL);
    CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v31);
    return 0LL;
  }
  if ( (int)v6 >= 0 )
  {
    v17 = *((unsigned int *)a1 + 63);
    if ( v6 + 8 > v17 )
    {
      v18 = *(struct tagPROCESSINFO **)(*((_QWORD *)a1 + 2) + 376LL);
      if ( v18 != (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v17, v11)
        && (*((_DWORD *)a1 + 76) & 0x800) == 0
        && !CProcessAttachDetach::AttachToProcess((CProcessAttachDetach *)v31, v18) )
      {
LABEL_54:
        v23 = 5LL;
        goto LABEL_55;
      }
    }
  }
  if ( (*((_WORD *)a1 + 41) & 0x3FFF) == 0 )
    goto LABEL_42;
  v19 = (__int64 *)safe_cast_wf_to_PDIALOG((__int64)a1);
  if ( !v19 )
  {
    if ( (int)v6 < 0 )
    {
LABEL_43:
      v8 = xxxSetWindowData(a1);
      goto LABEL_59;
    }
    if ( (int)v6 >= *(unsigned __int16 *)(gpsi + 2LL * ((v22 & v20) - 666) + 328) - 400 )
      goto LABEL_42;
    if ( v21 < 0x2A1 )
      goto LABEL_41;
    if ( v21 > 0x2A6 )
    {
      if ( v21 == 679 )
      {
        if ( (_DWORD)v6 != 8 )
          goto LABEL_41;
        v24 = **((_QWORD **)a1 + 48);
        v32 = v24;
        goto LABEL_34;
      }
      if ( v21 - 680 > 2 )
        goto LABEL_41;
    }
    if ( (_DWORD)v6 )
      goto LABEL_41;
    if ( *((_DWORD *)a1 + 63) )
    {
      v24 = **((_QWORD **)a1 + 49);
    }
    else
    {
      v24 = **((_QWORD **)a1 + 48);
      v32 = v24;
    }
LABEL_34:
    if ( v24 && *((char *)a1 + 59) >= 0 )
      goto LABEL_41;
    goto LABEL_44;
  }
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 16 )
    {
      if ( !*((_DWORD *)a1 + 63) && *((int *)a1 + 62) >= 30 )
      {
        v8 = v19[2];
        v19[2] = a3;
      }
      goto LABEL_59;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v23 = 1415LL;
LABEL_55:
      UserSetLastError(v23);
      goto LABEL_59;
    }
LABEL_42:
    if ( (int)v6 < 0 )
      goto LABEL_43;
LABEL_44:
    v25 = *((unsigned int *)a1 + 63);
    if ( (unsigned __int64)(unsigned int)v6 + 8 <= (unsigned int)(v25 + *((_DWORD *)a1 + 62)) )
    {
      if ( !a5 )
        goto LABEL_56;
      v26 = *((_QWORD *)a1 + 21);
      if ( (*(_WORD *)(v26 + 34) & 0x100) == 0 )
        goto LABEL_56;
      v27 = 0;
      v28 = &gDefaultServerClasses;
      while ( *(_WORD *)(v26 + 8) != *(_WORD *)(gpsi + 2LL * ((*v28 >> 3) & 0x1F) + 852) )
      {
        ++v27;
        v28 += 12;
        if ( v27 >= 8 )
          goto LABEL_56;
      }
      if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * v27 + 6)
        || (*v28 & 0xF8) == 0xB0 && (unsigned __int64)((int)v6 + 8LL) <= 0xFFFFFFFFFFFFFEA0uLL )
      {
LABEL_56:
        if ( (int)v6 + 8LL <= v25 )
        {
          v30 = *((_QWORD *)a1 + 49);
          v8 = *(_QWORD *)((int)v6 + v30);
          *(_QWORD *)((int)v6 + v30) = a3;
        }
        else
        {
          v29 = (__int64 *)(*((_QWORD *)a1 + 48) + (int)v6 - (int)v25);
          v8 = *v29;
          v32 = *v29;
          *v29 = a3;
        }
        goto LABEL_59;
      }
      goto LABEL_54;
    }
LABEL_41:
    v23 = 1413LL;
    goto LABEL_55;
  }
  v8 = *v19;
  *v19 = a3;
LABEL_59:
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)v31);
  return v8;
}
