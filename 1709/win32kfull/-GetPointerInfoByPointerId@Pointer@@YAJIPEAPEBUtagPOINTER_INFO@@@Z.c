/*
 * XREFs of ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C020BAF8
 * Callers:
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C021E0EC (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C021EA7C (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02201B4 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01CB58C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C020BB58 (-GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall Pointer::GetPointerInfoByPointerId(
        Pointer *this,
        _QWORD *a2,
        const struct tagPOINTER_INFO **a3,
        __int64 a4)
{
  __int16 v4; // bx
  struct _LIST_ENTRY *ThreadWin32Thread; // rax
  struct _LIST_ENTRY *ThreadPointerData; // rax
  const struct tagPOINTER_INFO **v8; // r8
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = (__int16)this;
  ThreadWin32Thread = (struct _LIST_ENTRY *)W32GetThreadWin32Thread(
                                              (__int64)KeGetCurrentThread(),
                                              (__int64)a2,
                                              (__int64)a3,
                                              a4);
  ThreadPointerData = GetThreadPointerData(ThreadWin32Thread + 66, v4, &v10, 0LL);
  if ( ThreadPointerData )
    return Pointer::GetPointerInfoByPointerMsgId((Pointer *)ThreadPointerData, (unsigned __int64)a2, v8);
  else
    return 3221225485LL;
}
