/*
 * XREFs of FindQMsg @ 0x1C00A86D0
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00A8320 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C0125030 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     FreeDdeXact @ 0x1C01F18C0 (FreeDdeXact.c)
 */

__int64 __fastcall FindQMsg(
        struct tagTHREADINFO *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  _QWORD *v8; // r14
  struct tagMLIST *v9; // r13
  struct tagTHREADINFO *v10; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int v14; // r8d
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  struct tagTHREADINFO *v23; // [rsp+60h] [rbp+8h]
  unsigned int v24; // [rsp+78h] [rbp+20h]

  v24 = a4;
  v23 = a1;
  v6 = *(_QWORD *)a2;
  v7 = 0LL;
  v8 = a3;
  v9 = (struct tagMLIST *)a2;
  v10 = a1;
  if ( *(_QWORD *)a2 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v6 + 16);
      v12 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
        PsGetThreadWin32Thread(CurrentThread);
      v14 = (unsigned __int16)v11;
      a1 = (struct tagTHREADINFO *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v11 < *(_QWORD *)(gpsi + 8LL) )
      {
        v15 = v11 >> 16;
        v16 = gSharedInfo[1] + (unsigned int)(v14 * LODWORD(gSharedInfo[2]));
        a2 = 3 * ((__int64)(unsigned int)(v14 * LODWORD(gSharedInfo[2])) >> 5);
        a1 = (struct tagTHREADINFO *)gpKernelHandleTable;
        v17 = (__int64 *)(gpKernelHandleTable + 24 * ((__int64)(unsigned int)(v14 * LODWORD(gSharedInfo[2])) >> 5));
        if ( ((_WORD)v15 == *(_WORD *)(v16 + 26)
           || (_WORD)v15 == 0xFFFF
           || !(_WORD)v15 && PsGetCurrentProcessWow64Process(gpKernelHandleTable))
          && (*(_BYTE *)(v16 + 25) & 1) == 0
          && *(_BYTE *)(v16 + 24) == 1 )
        {
          v12 = *v17;
          if ( *v17 )
            goto LABEL_19;
        }
        v10 = v23;
      }
      if ( *(_QWORD *)(v6 + 16) )
      {
        if ( *(_DWORD *)(v6 + 24) == 786 )
          CheckRemoveHotkeyBit(v10, v9);
        v18 = *((_QWORD *)v10 + 51);
        if ( *(_QWORD *)(v18 + 72) == v6 && *(struct tagTHREADINFO **)(v18 + 64) == v10 )
        {
          EtwTraceInputQueueUnLocked();
          *(_QWORD *)(*((_QWORD *)v10 + 51) + 64LL) = 0LL;
        }
        goto LABEL_28;
      }
LABEL_19:
      a3 = (_QWORD *)a6;
      if ( a6 )
      {
        v19 = v8 ? *v8 : 0LL;
        if ( v19 == *(_QWORD *)(v6 + 16) && *(_DWORD *)(v6 + 24) == -2147482652 )
        {
          v20 = HMValidateHandleNoRip(*(_QWORD *)(v6 + 40), 11);
          if ( v20 && (*(_DWORD *)(v20 + 64) & 0x200) != 0 )
          {
            FreeDdeXact(v20);
LABEL_28:
            DelQEntry(v9, v6);
            v6 = *(_QWORD *)v9;
            goto LABEL_56;
          }
          a3 = (_QWORD *)a6;
        }
      }
      if ( v8 && v8 != (_QWORD *)v12 && (v8 != (_QWORD *)1 || v12) )
      {
        if ( v12 )
        {
          while ( (*(_BYTE *)(v12 + 71) & 0xC0) == 0x40 )
          {
            v12 = *(_QWORD *)(v12 + 104);
            if ( v8 == (_QWORD *)v12 )
            {
              v21 = 1;
              goto LABEL_39;
            }
            if ( !v12 )
              break;
          }
        }
        v21 = 0;
LABEL_39:
        if ( !v21 )
          goto LABEL_55;
      }
      a1 = (struct tagTHREADINFO *)*(unsigned int *)(v6 + 24);
      if ( (unsigned int)((_DWORD)a1 + 2147482655) <= 7 )
        LODWORD(a1) = (unsigned int)a1 & 0x7FFFFFFF;
      a2 = a5;
      if ( !v24 )
      {
        if ( a5 == -1 )
          goto LABEL_52;
LABEL_51:
        if ( (unsigned int)a1 <= a5 )
          goto LABEL_52;
        goto LABEL_55;
      }
      if ( v24 <= a5 )
      {
        if ( (unsigned int)a1 < v24 )
          goto LABEL_55;
        goto LABEL_51;
      }
      if ( (unsigned int)a1 < a5 || (unsigned int)a1 > v24 )
      {
LABEL_52:
        if ( !(_DWORD)a3 )
          return v6;
        if ( !v7 )
          v7 = v6;
      }
LABEL_55:
      v6 = *(_QWORD *)v6;
LABEL_56:
      if ( !v6 )
        return v7;
      v10 = v23;
    }
  }
  return v7;
}
