/*
 * XREFs of FindQMsg @ 0x1C0052B70
 * Callers:
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00527D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C011995C (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     FreeDdeXact @ 0x1C01E58A0 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(
        struct tagTHREADINFO *a1,
        __int64 **a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 *v6; // r15
  __int64 *result; // rax
  struct tagMLIST *v10; // rbx
  struct tagTHREADINFO *v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 *v19; // r14
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // [rsp+20h] [rbp-48h]

  v6 = *a2;
  result = 0LL;
  v25 = 0LL;
  v10 = (struct tagMLIST *)a2;
  v11 = a1;
  if ( *a2 )
  {
    while ( 1 )
    {
      v12 = 0LL;
      v13 = v6[2];
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v16 = (unsigned __int16)v13;
      if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(gpsi + 8LL) )
      {
        v17 = v13 >> 16;
        v18 = gSharedInfo[1] + (unsigned int)(v16 * LODWORD(gSharedInfo[2]));
        v19 = (__int64 *)(gpKernelHandleTable + 16 * ((__int64)(unsigned int)(v16 * LODWORD(gSharedInfo[2])) >> 5));
        if ( ((_WORD)v17 == *(_WORD *)(v18 + 26)
           || (_WORD)v17 == 0xFFFF
           || !(_WORD)v17 && PsGetCurrentProcessWow64Process(gpsi, v14, v16, v15))
          && (*(_BYTE *)(v18 + 25) & 1) == 0
          && *(_BYTE *)(v18 + 24) == 1 )
        {
          v12 = *v19;
          if ( *v19 )
            goto LABEL_7;
        }
        v10 = (struct tagMLIST *)a2;
        v11 = a1;
      }
      if ( v6[2] )
      {
        if ( *((_DWORD *)v6 + 6) == 786 )
          CheckRemoveHotkeyBit(v11, v10);
        v22 = *((_QWORD *)v11 + 48);
        if ( *(__int64 **)(v22 + 40) == v6 && *(struct tagTHREADINFO **)(v22 + 32) == v11 )
        {
          EtwTraceInputQueueUnLocked();
          *(_QWORD *)(*((_QWORD *)v11 + 48) + 32LL) = 0LL;
        }
        DelQEntry(v10, v6, 1LL);
        goto LABEL_41;
      }
LABEL_7:
      if ( a6 )
      {
        v23 = a3 ? *a3 : 0LL;
        if ( v23 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
        {
          LOBYTE(v14) = 11;
          v24 = HMValidateHandleNoRip(v6[5], v14);
          if ( v24 && (*(_DWORD *)(v24 + 64) & 0x200) != 0 )
          {
            FreeDdeXact(v24);
            v10 = (struct tagMLIST *)a2;
            DelQEntry(a2, v6, 1LL);
            v11 = a1;
LABEL_41:
            v6 = *(__int64 **)v10;
            goto LABEL_16;
          }
        }
      }
      if ( a3 && a3 != (_QWORD *)v12 && (a3 != (_QWORD *)1 || v12) )
      {
        if ( v12 )
        {
          while ( (*(_BYTE *)(v12 + 71) & 0xC0) == 0x40 )
          {
            v12 = *(_QWORD *)(v12 + 104);
            if ( a3 == (_QWORD *)v12 )
            {
              v21 = 1;
              goto LABEL_27;
            }
            if ( !v12 )
              break;
          }
        }
        v21 = 0;
LABEL_27:
        if ( !v21 )
          goto LABEL_15;
      }
      v20 = *((_DWORD *)v6 + 6);
      if ( v20 + 2147482655 <= 7 )
        v20 &= ~0x80000000;
      if ( !a4 )
      {
        if ( a5 == -1 )
          goto LABEL_19;
LABEL_14:
        if ( v20 <= a5 )
          goto LABEL_19;
        goto LABEL_15;
      }
      if ( a4 <= a5 )
      {
        if ( v20 < a4 )
          goto LABEL_15;
        goto LABEL_14;
      }
      if ( v20 < a5 || v20 > a4 )
      {
LABEL_19:
        if ( !a6 )
          return v6;
        if ( !v25 )
          v25 = v6;
      }
LABEL_15:
      v6 = (__int64 *)*v6;
      v10 = (struct tagMLIST *)a2;
      v11 = a1;
LABEL_16:
      if ( !v6 )
        return v25;
    }
  }
  return result;
}
