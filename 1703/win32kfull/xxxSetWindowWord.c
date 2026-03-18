/*
 * XREFs of xxxSetWindowWord @ 0x1C01376A4
 * Callers:
 *     NtUserSetWindowWord @ 0x1C0137600 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     FCallerOk @ 0x1C0137A04 (FCallerOk.c)
 *     ??1CProcessAttachDetach@@QEAA@XZ @ 0x1C013E2EC (--1CProcessAttachDetach@@QEAA@XZ.c)
 *     ?AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z @ 0x1C013E308 (-AttachToProcess@CProcessAttachDetach@@QEAA_NPEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall xxxSetWindowWord(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  struct tagPROCESSINFO *v9; // rsi
  unsigned __int64 v11; // rcx
  struct tagPROCESSINFO *v12; // rsi
  bool v13; // sf
  __int64 v14; // rdx
  _DWORD *v15; // rdx
  _DWORD *v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // ecx
  _DWORD *v20; // r9
  __int64 v21; // rdx
  unsigned __int16 *v22; // rax
  __int64 v23; // rcx
  char v24; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  v24 = 0;
  if ( !(unsigned int)FCallerOk() )
    goto LABEL_2;
  if ( (*(_BYTE *)(a1 + 58) & 1) == 0 )
    goto LABEL_13;
  if ( (int)v4 < 0 || (unsigned int)v4 > 0x16 && (int)v4 < 30 )
    goto LABEL_51;
  if ( (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x2A4 )
  {
LABEL_13:
    if ( (_DWORD)v4 == -21 )
    {
      LOWORD(v4) = *(_WORD *)(a1 + 272);
      *(_QWORD *)(a1 + 272) = a3 | (*(unsigned __int16 *)(a1 + 274) << 16);
      goto LABEL_15;
    }
    if ( (_DWORD)v4 == -16 )
    {
      LOWORD(v4) = *(_WORD *)(a1 + 68);
      *(_DWORD *)(a1 + 68) = a3 | (*(unsigned __int16 *)(a1 + 70) << 16);
      goto LABEL_15;
    }
    if ( (int)v4 >= 0 )
    {
      v11 = *(unsigned int *)(a1 + 252);
      if ( v4 + 2 > v11 )
      {
        v12 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a1 + 16) + 376LL);
        if ( v12 != (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v11, v6)
          && (*(_DWORD *)(a1 + 304) & 0x800) == 0
          && !CProcessAttachDetach::AttachToProcess((CProcessAttachDetach *)&v24, v12) )
        {
          goto LABEL_2;
        }
      }
    }
    if ( (*(_WORD *)(a1 + 82) & 0x3FFF) != 0 )
    {
      if ( (int)v4 < 0 )
        goto LABEL_51;
      if ( (int)v4 < *(unsigned __int16 *)(gpsi + 2LL * ((*(_WORD *)(a1 + 82) & 0x3FFFu) - 666) + 328) - 400 )
      {
        if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x2A1 )
        {
          if ( !(_DWORD)v4 )
          {
            v14 = **(_QWORD **)(a1 + 384);
            if ( !v14 || v14 == -1 )
            {
              CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v24);
              return 0LL;
            }
            v15 = (_DWORD *)(v14 + 8);
            v16 = v15;
            if ( (unsigned __int64)v15 >= W32UserProbeAddress )
              v16 = (_DWORD *)W32UserProbeAddress;
            LODWORD(v4) = *v16;
            *v15 = a3;
            goto LABEL_15;
          }
LABEL_51:
          v7 = 1413LL;
          goto LABEL_52;
        }
        if ( (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x2A7 )
          goto LABEL_51;
        v13 = (int)v4 < 0;
        if ( (_DWORD)v4 )
          goto LABEL_51;
LABEL_38:
        if ( !v13 )
        {
          v17 = *(unsigned int *)(a1 + 252);
          if ( (unsigned __int64)(unsigned int)v4 + 2 <= (unsigned int)(v17 + *(_DWORD *)(a1 + 248)) )
          {
            v18 = *(_QWORD *)(a1 + 168);
            if ( (*(_WORD *)(v18 + 34) & 0x100) != 0 )
            {
              v19 = 0;
              v20 = &gDefaultServerClasses;
              while ( *(_WORD *)(v18 + 8) != *(_WORD *)(gpsi + 2LL * ((*v20 >> 3) & 0x1F) + 852) )
              {
                ++v19;
                v20 += 12;
                if ( v19 >= 8 )
                  goto LABEL_48;
              }
              if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 12 * v19 + 6)
                && ((*v20 & 0xF8) != 0xB0 || (unsigned __int64)(v4 + 2) > 0xFFFFFFFFFFFFFEA0uLL) )
              {
                goto LABEL_2;
              }
            }
LABEL_48:
            v21 = v4;
            if ( v4 + 2 <= v17 )
            {
              v23 = *(_QWORD *)(a1 + 392);
              LOWORD(v4) = *(_WORD *)(v4 + v23);
              *(_WORD *)(v21 + v23) = a3;
            }
            else
            {
              v22 = (unsigned __int16 *)(*(_QWORD *)(a1 + 384) + (int)v4 - (int)v17);
              LOWORD(v4) = *v22;
              *v22 = a3;
            }
LABEL_15:
            CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v24);
            return (unsigned __int16)v4;
          }
        }
        goto LABEL_51;
      }
    }
LABEL_37:
    v13 = (int)v4 < 0;
    goto LABEL_38;
  }
  v8 = *(unsigned int *)(a1 + 252);
  if ( v4 + 2 <= v8 )
    goto LABEL_37;
  v9 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a1 + 16) + 376LL);
  if ( v9 == (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v8, v6)
    || (*(_DWORD *)(a1 + 304) & 0x800) != 0
    || CProcessAttachDetach::AttachToProcess((CProcessAttachDetach *)&v24, v9) )
  {
    goto LABEL_37;
  }
LABEL_2:
  v7 = 5LL;
LABEL_52:
  UserSetLastError(v7);
  CProcessAttachDetach::~CProcessAttachDetach((CProcessAttachDetach *)&v24);
  return 0LL;
}
