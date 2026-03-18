/*
 * XREFs of KdpInsertBreakpoint @ 0x14078C910
 * Callers:
 *     KdpAddBreakpoint @ 0x14078C6A0 (KdpAddBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x14078C974 (KdpLowRestoreBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x14078CB8C (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpWriteInstructionBuffer @ 0x1401FC6E0 (KdpWriteInstructionBuffer.c)
 *     KdpCopyCodeStream @ 0x14078C374 (KdpCopyCodeStream.c)
 */

__int64 __fastcall KdpInsertBreakpoint(__int64 a1, _BYTE *a2)
{
  int v2; // ebx
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // r11
  int v6; // eax

  v2 = 0;
  KdpWriteInstructionBuffer(a2, *(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 36));
  v6 = KdpCopyCodeStream(
         (PVOID)(v4 & ~(unsigned __int64)*(unsigned __int8 *)(v3 + 37)),
         v5,
         *(unsigned __int8 *)(v3 + 36),
         5);
  if ( v6 < 0 )
    return 0LL;
  if ( v6 == 259 )
    v2 = 2;
  return v2 | 1u;
}
