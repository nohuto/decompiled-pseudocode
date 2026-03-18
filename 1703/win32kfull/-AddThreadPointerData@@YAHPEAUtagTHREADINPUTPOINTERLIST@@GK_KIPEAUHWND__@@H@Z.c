/*
 * XREFs of ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01C51E0
 * Callers:
 *     PrepareSentPointerMessageForClient @ 0x1C01BB47C (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BBAB8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0007AAC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?AllocAndLinkThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01C53B4 (-AllocAndLinkThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C740C (-ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01EA270 (-SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z.c)
 */

__int64 __fastcall AddThreadPointerData(
        struct _LIST_ENTRY *a1,
        __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        struct _LIST_ENTRY *a6,
        int a7)
{
  struct _LIST_ENTRY *v10; // r9
  int v11; // ecx
  struct _LIST_ENTRY *ThreadPointerData; // rax
  struct tagTHREADINPUTPOINTERLIST *v13; // rcx
  unsigned int v14; // edi
  struct tagTHREADPOINTERDATA *v15; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  int Flink; // ecx
  bool v19; // zf
  unsigned int v20; // r8d

  v10 = a1;
  if ( (*(_DWORD *)(a4 + 36) & 2) != 0 )
    PointerList::SetDelegateAction(a4, 2LL);
  if ( a5 - 578 <= 0xF )
  {
    v11 = 32785;
    if ( _bittest(&v11, a5 - 578) )
      PointerList::SetDelegateAction(a4, 1LL);
  }
  ThreadPointerData = FindThreadPointerData(v10, a2);
  v14 = 0;
  v15 = (struct tagTHREADPOINTERDATA *)ThreadPointerData;
  if ( ThreadPointerData )
  {
    Blink = ThreadPointerData[1].Blink;
    if ( Blink == (struct _LIST_ENTRY *)a4 )
    {
      Flink = (int)ThreadPointerData[3].Flink;
      if ( (Flink & 1) == 0 )
      {
        if ( a7 )
          LODWORD(ThreadPointerData[3].Flink) = Flink | 1;
      }
      LODWORD(ThreadPointerData[3].Flink) &= 0xFFFFFFF5;
      ThreadPointerData[2].Blink = a6;
      LODWORD(ThreadPointerData[2].Flink) = a5;
      return 1LL;
    }
    UnreferenceMsgData(Blink, 4LL, ThreadPointerData);
    *((_QWORD *)v15 + 3) = 0LL;
  }
  else
  {
    v15 = AllocAndLinkThreadPointerData(v13);
  }
  v19 = v15 == 0LL;
  if ( v15 )
  {
    v20 = a7 & 1 | *((_DWORD *)v15 + 12) & 0xFFFFFFF4;
    *((_WORD *)v15 + 8) = a2;
    *((_DWORD *)v15 + 12) = v20;
    *((_DWORD *)v15 + 5) = a3;
    *((_QWORD *)v15 + 3) = a4;
    *((_DWORD *)v15 + 8) = a5;
    *((_QWORD *)v15 + 5) = a6;
    ReferenceMsgData(a4, 4LL, v15);
    v19 = v15 == 0LL;
  }
  LOBYTE(v14) = !v19;
  return v14;
}
