/*
 * XREFs of _anonymous_namespace_::GetLogicalCursorPosition @ 0x1C00AA7C8
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C00596C0 (PhysicalToLogicalDPIPoint.c)
 */

__int64 __fastcall anonymous_namespace_::GetLogicalCursorPosition(__int64 a1)
{
  unsigned int v1; // r8d
  __int16 v2; // ax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 18;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v1 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 368LL);
  v2 = (v1 >> 8) & 0x1FF;
  if ( !v2 )
    return *((_QWORD *)gpsi + 618);
  if ( v2 == *((_WORD *)gpsi + 2480) )
    return *((_QWORD *)gpsi + 619);
  PhysicalToLogicalDPIPoint(&v4, (_QWORD *)gpsi + 618, v1, 0LL);
  return v4;
}
