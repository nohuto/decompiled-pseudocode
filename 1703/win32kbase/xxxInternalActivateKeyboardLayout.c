/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C007A180
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x1C0078D20 (xxxActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0079674 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0079840 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0026B00 (ThreadUnlock1.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0078DC0 (xxxChangeForegroundKeyboardTable.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0079C48 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C007B0D8 (ApiSetEditionImmActivateLayout.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C013AF54 (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionSendIMENotification @ 0x1C013C4F0 (ApiSetEditionSendIMENotification.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(struct tagKL *a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  struct tagTHREADINFO *v6; // rdi
  struct tagKL **v7; // r9
  __int64 v8; // r15
  __int64 v9; // rbx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  bool v15; // zf
  int v16; // ecx
  __int64 i; // r14
  __int128 v18; // [rsp+50h] [rbp-68h] BYREF
  __int128 v19; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v20[4]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+20h]

  v5 = a2 & 0x100;
  v6 = gptiCurrent;
  v7 = (struct tagKL **)((char *)gptiCurrent + 392);
  v8 = *((_QWORD *)gptiCurrent + 49);
  v9 = 0LL;
  if ( v8 )
  {
    v21 = *(_QWORD *)(v8 + 40);
  }
  else
  {
    v8 = 0LL;
    v21 = 0LL;
  }
  if ( (a2 & 0x40000000) != 0 )
  {
    a2 = ((unsigned int)a2 >> 15) & 2;
    gdwKeyboardAttributes = a2;
  }
  if ( v5 || a1 != *v7 )
  {
    *((_WORD *)a1 + 37) = 0;
    v20[0] = *((_QWORD *)v6 + 46);
    *((_QWORD *)v6 + 46) = v20;
    v20[1] = v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    if ( (*((_DWORD *)v6 + 110) & 8) != 0 )
    {
      *(_QWORD *)&v18 = v7;
      *((_QWORD *)&v18 + 1) = a1;
      HMAssignmentLock((__int64)&v18);
      *(_WORD *)(*((_QWORD *)v6 + 54) + 152LL) = *((_WORD *)a1 + 36);
    }
    else
    {
      v11 = *(_DWORD *)gpsi;
      if ( v5 )
      {
        if ( (v11 & 4) != 0 )
        {
          v15 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(*((_QWORD *)v6 + 47) + 288LL), a2, a1) == 0;
        }
        else
        {
          v16 = 0;
          for ( i = *(_QWORD *)(*((_QWORD *)v6 + 47) + 288LL); i; i = *(_QWORD *)(i + 584) )
          {
            if ( *(struct tagKL **)(i + 392) != a1 && (*(_DWORD *)(i + 440) & 1) == 0 )
            {
              *(_QWORD *)&v18 = i + 392;
              *((_QWORD *)&v18 + 1) = a1;
              v19 = v18;
              HMAssignmentLock((__int64)&v19);
              *(_WORD *)(*(_QWORD *)(i + 432) + 152LL) = *((_WORD *)a1 + 36);
              *(_QWORD *)(*(_QWORD *)(i + 432) + 144LL) = *((_QWORD *)a1 + 5);
              v16 = 1;
            }
          }
          v15 = v16 == 0;
        }
        if ( v15 )
          goto LABEL_24;
      }
      else
      {
        if ( (v11 & 4) != 0 )
        {
          ApiSetEditionImmActivateLayout(v6, a1);
        }
        else
        {
          *(_QWORD *)&v18 = v7;
          *((_QWORD *)&v18 + 1) = a1;
          v19 = v18;
          HMAssignmentLock((__int64)&v19);
        }
        if ( (*((_DWORD *)v6 + 110) & 1) == 0 )
        {
          *(_WORD *)(*((_QWORD *)v6 + 54) + 152LL) = *((_WORD *)a1 + 36);
          *(_QWORD *)(*((_QWORD *)v6 + 54) + 144LL) = *((_QWORD *)a1 + 5);
        }
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 47) == *((_QWORD *)v6 + 47) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v8, a1);
      xxxWindowEvent(2147483649LL, 0LL, *((unsigned int *)a1 + 10));
      ApiSetEditionNotifyShellLanguageHook((__int64)v6, *((_QWORD *)a1 + 5), 1u);
    }
    v12 = *((_QWORD *)v6 + 48);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 80);
      if ( v13 )
        goto LABEL_40;
      v13 = *(_QWORD *)(v12 + 88);
      if ( !v13 )
        v13 = a3;
      if ( v13 )
LABEL_40:
        ApiSetEditionSendIMENotification((_DWORD)v6, v13, 81, *((_DWORD *)a1 + 17), *((_QWORD *)a1 + 5));
    }
    v14 = *((_QWORD *)v6 + 87);
    if ( v14
      && (*((_DWORD *)v6 + 110) & 8) == 0
      && ((*((_WORD *)a1 + 21) & 0xF000) == 0xE000 || (*(_DWORD *)gpsi & 4) != 0) )
    {
      LOBYTE(v9) = v5 != 0;
      ApiSetEditionSendIMENotification((_DWORD)v6, v14, 647, 31, v9);
    }
LABEL_24:
    ThreadUnlock1();
  }
  return v21;
}
