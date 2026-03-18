/*
 * XREFs of ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C011B1A4
 * Callers:
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C011CABC (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 */

void __fastcall CTouchProcessor::AssignPointerCaptureData(
        CTouchProcessor *this,
        struct CInputPointerNode *a2,
        struct CPointerMsgData *a3)
{
  int v5; // r8d
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _WORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rdx

  v5 = *((_DWORD *)a3 + 9);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 4) != 0 )
      goto LABEL_9;
    v6 = (_QWORD *)((char *)a2 + 304);
    v7 = 0LL;
    if ( (_QWORD *)*v6 != v6 )
      v7 = (_QWORD *)*v6;
    if ( (v5 & 2) != 0 || !v7 || (*((_DWORD *)v7 + 9) & 1) != 0 || (v8 = (_WORD *)v7[5]) == 0LL )
    {
LABEL_9:
      v8 = Win32AllocPoolZInit(0x1D8uLL, 1131443029LL);
      if ( !v8 )
        return;
      v8[10] = *((_WORD *)a3 + 8);
      *((_DWORD *)v8 + 6) = *((_DWORD *)a3 + 7);
      v9 = (_QWORD *)((char *)a2 + 288);
      v10 = *((_QWORD *)a2 + 36);
      if ( *(struct CInputPointerNode **)(v10 + 8) != (struct CInputPointerNode *)((char *)a2 + 288) )
        __fastfail(3u);
      *(_QWORD *)v8 = v10;
      *((_QWORD *)v8 + 1) = v9;
      *(_QWORD *)(v10 + 8) = v8;
      *v9 = v8;
    }
    *((_QWORD *)a3 + 5) = v8;
    ++*((_DWORD *)v8 + 4);
  }
}
