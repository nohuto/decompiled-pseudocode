/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DAC14
 * Callers:
 *     xxxCheckImeShowStatusInThread @ 0x1C00DABE0 (xxxCheckImeShowStatusInThread.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01BDA04 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagTHREADINFO *v2; // r14
  unsigned int v4; // edi
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // r12
  unsigned __int64 *i; // r15
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r14
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rsi
  bool v16; // zf
  unsigned __int64 *v17; // rsi
  char v19; // r14
  PRKPROCESS *v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  _QWORD *v26; // [rsp+A0h] [rbp+18h]

  v2 = a2;
  v4 = 0;
  if ( *((char *)a1 + 60) < 0 )
    return 0LL;
  v5 = BuildHwndList(*(_QWORD *)(*((_QWORD *)a1 + 13) + 112LL), 2, 0LL);
  v6 = v5;
  if ( !v5 )
    return v4;
  for ( i = (unsigned __int64 *)((char *)v5 + 32); ; ++i )
  {
    v8 = *i;
    if ( *i == 1 )
      break;
    v9 = 0LL;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    v12 = (unsigned __int16)v8;
    if ( (unsigned __int64)(unsigned __int16)v8 >= *(_QWORD *)(gpsi + 8LL) )
      goto LABEL_10;
    v13 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v8 * LODWORD(gSharedInfo[2]);
    v14 = (_QWORD *)(gpKernelHandleTable
                   + 16 * ((__int64)((unsigned int)(unsigned __int16)v8 * LODWORD(gSharedInfo[2])) >> 5));
    v26 = v14;
    v15 = v8 >> 16;
    if ( (_WORD)v15 != *(_WORD *)(v13 + 26) && (_WORD)v15 != 0xFFFF )
    {
      if ( (_WORD)v15 || !PsGetCurrentProcessWow64Process(v14, v10, v12, v11) )
      {
LABEL_30:
        v2 = a2;
        goto LABEL_10;
      }
      v14 = v26;
    }
    if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
      goto LABEL_30;
    v16 = *(_BYTE *)(v13 + 24) == 1;
    v2 = a2;
    if ( v16 )
      v9 = *v14;
LABEL_10:
    if ( v9 && a1 != (struct tagWND *)v9 )
    {
      if ( *(_WORD *)(*(_QWORD *)(v9 + 168) + 8LL) == *(_WORD *)(gpsi + 882LL) )
        v17 = *(_DWORD *)(v9 + 252) ? *(unsigned __int64 **)(v9 + 392) : *(unsigned __int64 **)(v9 + 384);
      else
        v17 = 0LL;
      if ( v17 && *(char *)(v9 + 60) >= 0 && (!v2 || v2 == *(struct tagTHREADINFO **)(v9 + 16)) )
      {
        v19 = 0;
        v20 = *(PRKPROCESS **)(*(_QWORD *)(v9 + 16) + 376LL);
        if ( v20 != *(PRKPROCESS **)(gptiCurrent + 376LL) )
        {
          KeAttachProcess(*v20);
          v19 = 1;
        }
        v21 = *v17;
        if ( v21 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( v19 )
            KeDetachProcess();
        }
        else
        {
          v22 = v21;
          if ( v21 >= W32UserProbeAddress )
            v22 = W32UserProbeAddress;
          if ( (*(_DWORD *)(v22 + 44) & 1) != 0 )
          {
            v23 = HMValidateHandleNoSecure(*(_QWORD *)(v21 + 16), 1);
            if ( v23 )
              *(_DWORD *)(v21 + 44) &= ~1u;
          }
          else
          {
            v23 = 0LL;
          }
          if ( v19 )
            KeDetachProcess();
          if ( v23 )
          {
            v24 = *(_QWORD *)(v23 + 16);
            if ( v24 )
            {
              if ( (*(_DWORD *)(v24 + 440) & 1) == 0 )
                PostMessage(v23, 642LL, 1LL, 0LL);
            }
          }
        }
      }
    }
    v2 = a2;
  }
  FreeHwndList(v6);
  return 1;
}
