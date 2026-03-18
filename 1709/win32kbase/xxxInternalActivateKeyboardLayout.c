/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C00725C0
 * Callers:
 *     xxxActivateKeyboardLayout @ 0x1C00710E0 (xxxActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0071AA8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0071C80 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0017670 (HMAssignmentLock.c)
 *     ThreadUnlock1 @ 0x1C0047950 (ThreadUnlock1.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0071180 (xxxChangeForegroundKeyboardTable.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0072088 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C0073480 (ApiSetEditionImmActivateLayout.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C013A218 (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionSendIMENotification @ 0x1C013B7A8 (ApiSetEditionSendIMENotification.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  int v5; // r12d
  struct tagTHREADINFO *v6; // rdi
  _QWORD *v7; // r9
  __int64 v8; // r15
  __int64 v9; // rbx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  bool v15; // zf
  __int64 i; // r14
  __int128 v17; // [rsp+30h] [rbp-C8h]
  __int128 v18; // [rsp+40h] [rbp-B8h]
  __int128 v19; // [rsp+50h] [rbp-A8h]
  __int128 v20; // [rsp+80h] [rbp-78h] BYREF
  __int128 v21; // [rsp+90h] [rbp-68h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v23[4]; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+118h] [rbp+20h]

  v3 = a3;
  v5 = a2 & 0x100;
  v6 = gptiCurrent;
  v7 = (_QWORD *)((char *)gptiCurrent + 416);
  v8 = *((_QWORD *)gptiCurrent + 52);
  v9 = 0LL;
  if ( v8 )
  {
    v24 = *(_QWORD *)(v8 + 40);
  }
  else
  {
    v8 = 0LL;
    v24 = 0LL;
  }
  if ( (a2 & 0x40000000) != 0 )
  {
    a2 = ((unsigned int)a2 >> 15) & 2;
    gdwKeyboardAttributes = a2;
  }
  if ( v5 || a1 != *v7 )
  {
    *(_WORD *)(a1 + 74) = 0;
    v23[0] = *((_QWORD *)v6 + 49);
    *((_QWORD *)v6 + 49) = v23;
    v23[1] = v8;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( (*((_DWORD *)v6 + 116) & 8) != 0 )
    {
      *(_QWORD *)&v17 = v7;
      *((_QWORD *)&v17 + 1) = a1;
      v20 = v17;
      HMAssignmentLock((__int64 **)&v20);
      v12 = *(unsigned __int16 *)(a1 + 72);
      *(_WORD *)(*((_QWORD *)v6 + 57) + 152LL) = v12;
    }
    else
    {
      v11 = *(_DWORD *)gpsi;
      if ( v5 )
      {
        if ( (v11 & 4) != 0 )
        {
          v15 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(*((_QWORD *)v6 + 50) + 296LL), a2, a1) == 0;
        }
        else
        {
          v12 = 0LL;
          for ( i = *(_QWORD *)(*((_QWORD *)v6 + 50) + 296LL); i; i = *(_QWORD *)(i + 640) )
          {
            a2 = i + 416;
            if ( *(_QWORD *)(i + 416) != a1 && (*(_DWORD *)(i + 464) & 1) == 0 )
            {
              *(_QWORD *)&v18 = i + 416;
              *((_QWORD *)&v18 + 1) = a1;
              v21 = v18;
              HMAssignmentLock((__int64 **)&v21);
              *(_WORD *)(*(_QWORD *)(i + 456) + 152LL) = *(_WORD *)(a1 + 72);
              *(_QWORD *)(*(_QWORD *)(i + 456) + 144LL) = *(_QWORD *)(a1 + 40);
              v12 = 1LL;
            }
          }
          v15 = (_DWORD)v12 == 0;
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
          *(_QWORD *)&v19 = v7;
          *((_QWORD *)&v19 + 1) = a1;
          v22 = v19;
          HMAssignmentLock((__int64 **)&v22);
        }
        if ( (*((_DWORD *)v6 + 116) & 1) == 0 )
        {
          *(_WORD *)(*((_QWORD *)v6 + 57) + 152LL) = *(_WORD *)(a1 + 72);
          v12 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(*((_QWORD *)v6 + 57) + 144LL) = v12;
        }
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 50) == *((_QWORD *)v6 + 50) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v8, (struct tagKL *)a1);
      xxxWindowEvent(2147483649LL, 0LL, *(unsigned int *)(a1 + 40), 0LL, 0);
      ApiSetEditionNotifyShellLanguageHook((__int64)v6, *(_QWORD *)(a1 + 40), 1u);
    }
    v13 = *((_QWORD *)v6 + 51);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 112);
      if ( v14 )
        goto LABEL_40;
      v14 = *(_QWORD *)(v13 + 120);
      if ( !v14 )
        v14 = v3;
      if ( v14 )
LABEL_40:
        ApiSetEditionSendIMENotification((_DWORD)v6, v14, 81, *(_DWORD *)(a1 + 68), *(_QWORD *)(a1 + 40));
    }
    a2 = *((_QWORD *)v6 + 94);
    if ( a2 )
    {
      if ( (*((_DWORD *)v6 + 116) & 8) == 0 )
      {
        v12 = 57344LL;
        if ( (*(_WORD *)(a1 + 42) & 0xF000) == 0xE000 || (a3 = *(unsigned int *)gpsi, (a3 & 4) != 0) )
        {
          LOBYTE(v9) = v5 != 0;
          ApiSetEditionSendIMENotification((_DWORD)v6, a2, 647, 31, v9);
        }
      }
    }
LABEL_24:
    ThreadUnlock1(v12, a2, a3, (__int64)v7);
  }
  return v24;
}
