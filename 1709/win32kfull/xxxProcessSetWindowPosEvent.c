/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C00CC280
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     InternalBeginDeferWindowPos @ 0x1C0066D34 (InternalBeginDeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  __int64 v2; // rdx
  void **v3; // rdi
  __int64 v4; // r8

  v3 = (void **)InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v3 )
  {
    memmove(v3[5], *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    *((_DWORD *)v3 + 7) = *(_DWORD *)(a1 + 28);
    xxxEndDeferWindowPosEx((struct tagSMWP *)v3, 0);
  }
  return Win32FreePool(a1, v2, v4);
}
