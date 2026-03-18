/*
 * XREFs of ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C0105B6C
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C0096A60 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

void __fastcall UMPDOBJ::vPushToCurrentThread(struct UMPDOBJ *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)((char *)a1 + 40);
  v2 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 40;
  v3 = *(_QWORD *)v2;
  if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 )
    __fastfail(3u);
  *v1 = v3;
  v1[1] = v2;
  *(_QWORD *)(v3 + 8) = v1;
  *(_QWORD *)v2 = v1;
}
