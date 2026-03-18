/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C00C3454
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C020AD74 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxClientCopyImage @ 0x1C00C36B4 (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 a1)
{
  int v2; // esi
  int v3; // r8d
  __int64 *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v2 = *(_DWORD *)(gpsi + 2080LL);
  else
    v2 = *(_DWORD *)(gpsi + 2468LL);
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    v3 = *(_DWORD *)(gpsi + 2076LL);
  else
    v3 = *(_DWORD *)(gpsi + 2464LL);
  v4 = *(__int64 **)(a1 + 120);
  v5 = (*((_WORD *)v4 + 37) != 3) + 1;
  if ( v4 )
    v6 = *v4;
  else
    LODWORD(v6) = 0;
  v8[0] = a1 + 160;
  v8[1] = xxxClientCopyImage(v6, v5, v3, v2, 0x4000);
  result = HMAssignmentLock(v8);
  if ( *(_QWORD *)(a1 + 160) )
    *(_WORD *)(a1 + 34) |= 0x20u;
  return result;
}
