/*
 * XREFs of DxgkWaitForVerticalBlankEvent @ 0x1C00DA560
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00DA620 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  unsigned int v4; // ebx
  __int64 v5; // r8

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2026);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v4 = DxgkWaitForVerticalBlankEventInternal(*(_QWORD *)v3, HIDWORD(*(_QWORD *)v3), *(_DWORD *)(v3 + 8), 0, 0LL);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C006E790, &EventProfilerExit, v5, 2026);
  return v4;
}
