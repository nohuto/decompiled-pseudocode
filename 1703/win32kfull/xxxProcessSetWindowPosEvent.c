/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C0108150
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     InternalBeginDeferWindowPos @ 0x1C006323C (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  void **v2; // rdi

  v2 = (void **)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v2 )
  {
    memmove(v2[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    *((_DWORD *)v2 + 7) = *(_DWORD *)(a1 + 28);
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0);
  }
  return Win32FreePool(a1);
}
