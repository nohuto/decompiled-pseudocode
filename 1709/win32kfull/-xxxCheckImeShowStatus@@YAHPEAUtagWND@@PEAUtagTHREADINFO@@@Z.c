/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00E2044
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00E2010 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01C14E4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagTHREADINFO *v2; // r14
  unsigned int v4; // edi
  struct tagBWL *v6; // rax
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  struct tagBWL *v9; // r12
  unsigned __int64 *i; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  bool v17; // zf
  ULONG64 *v18; // rsi
  char v19; // r14
  ULONG64 v20; // rsi
  ULONG64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp+18h]
  ULONG64 v26; // [rsp+B0h] [rbp+18h]

  v2 = a2;
  v4 = 0;
  if ( *((char *)a1 + 60) < 0 )
    return 0LL;
  v6 = BuildHwndList(*(_QWORD *)(*((_QWORD *)a1 + 13) + 112LL), (struct tagWND *)2, 0LL);
  v9 = v6;
  if ( !v6 )
    return v4;
  for ( i = (unsigned __int64 *)((char *)v6 + 32); ; ++i )
  {
    v11 = *i;
    if ( *i == 1 )
      break;
    v12 = 0LL;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
      PsGetThreadWin32Thread(CurrentThread);
    v14 = (unsigned __int16)v11;
    v8 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v11 < *(_QWORD *)(gpsi + 8LL) )
    {
      v15 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v11 * LODWORD(gSharedInfo[2]);
      v8 = 3 * ((__int64)((unsigned int)(unsigned __int16)v11 * LODWORD(gSharedInfo[2])) >> 5);
      v26 = v8;
      v7 = gpKernelHandleTable;
      v16 = v11 >> 16;
      if ( (_WORD)v16 != *(_WORD *)(v15 + 26) && (_WORD)v16 != 0xFFFF )
      {
        if ( (_WORD)v16 || !PsGetCurrentProcessWow64Process(v8) )
        {
LABEL_17:
          v2 = a2;
          goto LABEL_18;
        }
        v8 = v26;
        v7 = gpKernelHandleTable;
      }
      if ( (*(_BYTE *)(v15 + 25) & 1) != 0 )
        goto LABEL_17;
      v17 = *(_BYTE *)(v15 + 24) == 1;
      v2 = a2;
      if ( v17 )
        v12 = *(_QWORD *)(v7 + 8 * v8);
    }
LABEL_18:
    if ( v12 && a1 != (struct tagWND *)v12 )
    {
      v7 = *(_QWORD *)(v12 + 168);
      v8 = gpsi;
      if ( *(_WORD *)(v7 + 8) == *(_WORD *)(gpsi + 882LL) )
        v18 = *(_DWORD *)(v12 + 252) ? *(ULONG64 **)(v12 + 392) : *(ULONG64 **)(v12 + 384);
      else
        v18 = 0LL;
      if ( v18 && *(char *)(v12 + 60) >= 0 && (!v2 || v2 == *(struct tagTHREADINFO **)(v12 + 16)) )
      {
        v19 = 0;
        v8 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 400LL);
        if ( v8 != *(_QWORD *)(gptiCurrent + 400LL) )
        {
          KeAttachProcess(*(PRKPROCESS *)v8);
          v19 = 1;
        }
        v20 = *v18;
        if ( v20 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( v19 )
            KeDetachProcess();
        }
        else
        {
          v8 = MmUserProbeAddress;
          v21 = v20;
          if ( v20 >= MmUserProbeAddress )
            v21 = MmUserProbeAddress;
          if ( (*(_DWORD *)(v21 + 44) & 1) != 0 )
          {
            LOBYTE(v7) = 1;
            v22 = HMValidateHandleNoSecure(*(_QWORD *)(v20 + 16), v7, v14, v13);
            if ( v22 )
              *(_DWORD *)(v20 + 44) &= ~1u;
          }
          else
          {
            v22 = 0LL;
          }
          if ( v19 )
            KeDetachProcess();
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 16);
            if ( v23 )
            {
              if ( (*(_DWORD *)(v23 + 464) & 1) == 0 )
                PostMessage(v22, 642LL, 1uLL, 0LL);
            }
          }
        }
      }
    }
    v2 = a2;
  }
  FreeHwndList(v9);
  return 1;
}
