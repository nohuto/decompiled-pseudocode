/*
 * XREFs of ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01CAB78
 * Callers:
 *     PrepareSentPointerMessageForClient @ 0x1C01BF194 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BF7C0 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D004 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?AllocAndLinkThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01CAD48 (-AllocAndLinkThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC058 (-ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC234 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall AddThreadPointerData(
        struct _LIST_ENTRY *a1,
        __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        HWND a6,
        int a7)
{
  unsigned int v7; // edi
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  struct _LIST_ENTRY *ThreadPointerData; // rax
  struct tagTHREADINPUTPOINTERLIST *v15; // rcx
  struct tagTHREADPOINTERDATA *v16; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  int Flink; // eax
  __int64 result; // rax
  bool v20; // zf
  unsigned int v21; // r8d

  v7 = 0;
  if ( (*(_DWORD *)(a4 + 36) & 2) != 0 )
  {
    v11 = *(_QWORD *)(a4 + 40);
    if ( v11 )
      *(_DWORD *)(v11 + 80) |= 2u;
  }
  if ( a5 - 578 <= 0xF )
  {
    v12 = 32785;
    if ( _bittest(&v12, a5 - 578) )
    {
      v13 = *(_QWORD *)(a4 + 40);
      if ( v13 )
        *(_DWORD *)(v13 + 80) |= 1u;
    }
  }
  ThreadPointerData = FindThreadPointerData(a1, a2);
  v16 = (struct tagTHREADPOINTERDATA *)ThreadPointerData;
  if ( ThreadPointerData )
  {
    Blink = ThreadPointerData[1].Blink;
    if ( Blink == (struct _LIST_ENTRY *)a4 )
    {
      Flink = (int)ThreadPointerData[3].Flink;
      if ( (Flink & 1) == 0 )
      {
        if ( a7 )
          *((_DWORD *)v16 + 12) = Flink | 1;
      }
      *((_DWORD *)v16 + 12) &= 0xFFFFFFF5;
      *((_QWORD *)v16 + 5) = a6;
      result = 1LL;
      *((_DWORD *)v16 + 8) = a5;
      return result;
    }
    UnreferenceMsgData(Blink, 4LL, ThreadPointerData);
    *((_QWORD *)v16 + 3) = 0LL;
  }
  else
  {
    v16 = AllocAndLinkThreadPointerData(v15);
  }
  v20 = v16 == 0LL;
  if ( v16 )
  {
    v21 = a7 & 1 | *((_DWORD *)v16 + 12) & 0xFFFFFFF4;
    *((_WORD *)v16 + 8) = a2;
    *((_DWORD *)v16 + 12) = v21;
    *((_DWORD *)v16 + 5) = a3;
    *((_QWORD *)v16 + 3) = a4;
    *((_DWORD *)v16 + 8) = a5;
    *((_QWORD *)v16 + 5) = a6;
    ReferenceMsgData(a4, 4LL, v16);
    v20 = v16 == 0LL;
  }
  LOBYTE(v7) = !v20;
  return v7;
}
