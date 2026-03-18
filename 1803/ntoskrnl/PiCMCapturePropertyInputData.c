/*
 * XREFs of PiCMCapturePropertyInputData @ 0x140509D80
 * Callers:
 *     PiCMGetObjectProperty @ 0x14050A040 (PiCMGetObjectProperty.c)
 *     PiCMSetObjectProperty @ 0x14064069C (PiCMSetObjectProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14006E290 (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405093A8 (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCapturePropertyInputData(unsigned __int64 a1, unsigned int a2, int a3, char *a4)
{
  char PreviousMode; // r13
  int UserModeCallersCopy; // edi
  unsigned __int64 v7; // r8
  _QWORD *v8; // r15
  void *v9; // rax
  unsigned int v10; // r8d
  void *v11; // rax
  unsigned __int64 v13; // r8
  unsigned int v14; // r8d
  int v15; // [rsp+34h] [rbp-44h]
  int v16; // [rsp+38h] [rbp-40h]

  v15 = 0;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_21;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a1 + a2;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x38 && *(_DWORD *)a1 == 56 )
    {
      *(_DWORD *)a4 = 72;
      *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
      *((_DWORD *)a4 + 2) = *(_DWORD *)(a1 + 8);
      *((_QWORD *)a4 + 2) = *(unsigned int *)(a1 + 12);
      *((_DWORD *)a4 + 6) = *(_DWORD *)(a1 + 16);
      *(_OWORD *)(a4 + 28) = *(_OWORD *)(a1 + 20);
      *((_DWORD *)a4 + 11) = *(_DWORD *)(a1 + 36);
      *((_DWORD *)a4 + 12) = *(_DWORD *)(a1 + 40);
      *((_QWORD *)a4 + 7) = *(unsigned int *)(a1 + 44);
      *((_DWORD *)a4 + 16) = *(_DWORD *)(a1 + 48);
      *((_DWORD *)a4 + 17) = *(_DWORD *)(a1 + 52);
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a1 + a2;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x48 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 16);
      *((_OWORD *)a4 + 2) = *(_OWORD *)(a1 + 32);
      *((_OWORD *)a4 + 3) = *(_OWORD *)(a1 + 48);
      *((_QWORD *)a4 + 8) = *(_QWORD *)(a1 + 64);
      if ( *(_DWORD *)a4 != 72 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_41;
  v8 = a4 + 16;
  v9 = (void *)*((_QWORD *)a4 + 2);
  *((_QWORD *)a4 + 2) = 0LL;
  if ( v9 )
  {
    v10 = *((_DWORD *)a4 + 6);
    if ( v10 < 2 )
    {
      if ( *((_DWORD *)a4 + 6) < 2u )
        goto LABEL_40;
    }
    else
    {
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 2, v9, v10, 2u, PreviousMode, 1);
      if ( UserModeCallersCopy < 0 )
      {
        *v8 = 0LL;
        *((_DWORD *)a4 + 6) = 0;
      }
      else
      {
        v15 = 1;
        *(_WORD *)(*v8 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 6) >> 1) - 2) = 0;
      }
    }
  }
  else if ( *((_DWORD *)a4 + 6) )
  {
    goto LABEL_40;
  }
  v11 = (void *)*((_QWORD *)a4 + 7);
  *((_QWORD *)a4 + 7) = 0LL;
  if ( !v11 )
  {
    if ( !*((_DWORD *)a4 + 16) )
      goto LABEL_21;
    goto LABEL_40;
  }
  v14 = *((_DWORD *)a4 + 16);
  if ( v14 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 7, v11, v14, 1u, PreviousMode, 1);
    if ( UserModeCallersCopy < 0 )
    {
      *((_QWORD *)a4 + 7) = 0LL;
      *((_DWORD *)a4 + 16) = 0;
    }
    else
    {
      v16 = 1;
    }
LABEL_21:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_41;
  }
LABEL_40:
  UserModeCallersCopy = -1073741811;
LABEL_41:
  if ( v15 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 2));
  if ( v16 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 7));
  memset(a4, 0, 0x48uLL);
  return (unsigned int)UserModeCallersCopy;
}
