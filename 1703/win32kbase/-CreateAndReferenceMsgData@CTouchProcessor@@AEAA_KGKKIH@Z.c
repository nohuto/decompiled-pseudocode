/*
 * XREFs of ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C011CABC
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0128010 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C011B1A4 (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011E480 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125BB8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

_QWORD *__fastcall CTouchProcessor::CreateAndReferenceMsgData(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        int a4,
        CTouchProcessor *a5,
        char a6)
{
  int v10; // edi
  struct CInputPointerNode *NodeById; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rcx

  v10 = 0;
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( !NodeById )
    return 0LL;
  v13 = Win32AllocPoolZInit(0x38uLL, 1685091157LL);
  v14 = v13;
  if ( !v13 )
    return 0LL;
  *((_WORD *)v13 + 8) = a2;
  *((_DWORD *)v13 + 7) = a3;
  *((_DWORD *)v13 + 8) = a4;
  LOBYTE(v10) = ((unsigned int)a5 & 0x40004) == 0;
  *((_DWORD *)v13 + 9) = *((_DWORD *)v13 + 9) & 0xFFFFFFF0 | (4 * (a6 & 1)) | v10 & 0xFFFFFFF1 | (((unsigned __int16)a5 & 0x2000 | ((unsigned int)a5 >> 5) & 0x800) >> 10);
  CTouchProcessor::AssignPointerCaptureData(
    (CTouchProcessor *)(unsigned int)a5,
    NodeById,
    (struct CPointerMsgData *)v13);
  v15 = (_QWORD *)((char *)NodeById + 304);
  v16 = *((_QWORD *)NodeById + 38);
  if ( *(struct CInputPointerNode **)(v16 + 8) != (struct CInputPointerNode *)((char *)NodeById + 304) )
    __fastfail(3u);
  *v14 = v16;
  v14[1] = v15;
  *(_QWORD *)(v16 + 8) = v14;
  *v15 = v14;
  CTouchProcessor::ReferenceMsgData(this, v14, 1LL);
  return v14;
}
