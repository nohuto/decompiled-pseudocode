/*
 * XREFs of ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01C6554
 * Callers:
 *     ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x1C01BAD0C (-GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BBAB8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C019917C (-FindFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01E9FD4 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 */

__int64 __fastcall GetPointerMessageInfo(
        __int64 a1,
        unsigned __int64 a2,
        HWND *a3,
        int *a4,
        int *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  struct _LIST_ENTRY *FrameById; // rax
  int *v11; // rcx
  __int64 v12; // rdx
  int v13; // r8d
  int *v15; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *v16; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  PointerList::GetPointerCapture((PointerList *)a1, a2, (int)&v15, &v16, v15);
  FrameById = FindFrameById(*(_DWORD *)(a1 + 28));
  if ( !FrameById )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)&FrameById[2].Flink + 1);
  v11 = v15;
  v12 = (__int64)FrameById[5].Blink + 216 * *(unsigned int *)(a1 + 32);
  if ( v15 )
  {
    v13 = (int)v16;
    *a3 = *(HWND *)v15;
  }
  else
  {
    *a3 = *(HWND *)(v12 + 80);
    v13 = *(_DWORD *)(v12 + 32);
  }
  if ( a4 )
    *a4 = v11 != 0LL;
  if ( a5 )
    *a5 = v13;
  if ( a6 )
    *a6 = *(_DWORD *)(v12 + 56);
  if ( a7 )
    *a7 = *(_DWORD *)(v12 + 68);
  UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)FrameById);
  return 1LL;
}
