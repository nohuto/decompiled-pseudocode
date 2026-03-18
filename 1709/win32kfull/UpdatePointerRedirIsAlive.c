/*
 * XREFs of UpdatePointerRedirIsAlive @ 0x1C0060760
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     IsPointerInputRedirected @ 0x1C01CE4A0 (IsPointerInputRedirected.c)
 *     _RegisterPointerInputTarget @ 0x1C01CEA64 (_RegisterPointerInputTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdatePointerRedirIsAlive(__int64 a1)
{
  __int64 *v2; // rdi
  unsigned int i; // ebx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 208);
  for ( i = 0; i < 2; ++i )
  {
    result = *v2;
    if ( *v2 && (*(char *)(result + 60) < 0 || *(char *)(result + 59) < 0) )
      result = HMAssignmentUnlock(a1 + 8 * (i + 26LL));
    ++v2;
  }
  return result;
}
