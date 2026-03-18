/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0137D18
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00A66B0 (xxxRealInternalGetMessage.c)
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01169C0 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00C50F0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0137DC8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01BF070 (DelegateReleasePointerMessage.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v4; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax

  v4 = *(_QWORD *)a3;
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3);
    if ( a2 == 1 )
    {
      v10 = *((_DWORD *)a3 + 25);
      if ( (v10 & 0x20) != 0 )
      {
        v11 = *((_QWORD *)a3 + 2);
        LOBYTE(v7) = 1;
        *((_DWORD *)a3 + 25) = v10 & 0xFFFFFF9F | 0x40;
        v12 = HMValidateHandleNoSecure(v11, v7, v8, v9);
        if ( v12 )
        {
          v13 = *((_DWORD *)a3 + 25);
          if ( (v13 & 0x400) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v13 & 0xFFFFFBFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v12 + 16), a3);
          goto LABEL_8;
        }
LABEL_12:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 6)) || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3, v15, v16);
          DelQEntry((_QWORD *)(*((_QWORD *)a1 + 51) + 24LL), (__int64)a3);
        }
        v17 = *((_QWORD *)a1 + 51);
        if ( *(struct tagQMSG **)(v17 + 80) == a3 )
          *(_QWORD *)(v17 + 80) = 0LL;
      }
    }
    else
    {
      if ( a2 == 2 )
        goto LABEL_12;
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_8:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  return (struct tagQMSG *)v4;
}
