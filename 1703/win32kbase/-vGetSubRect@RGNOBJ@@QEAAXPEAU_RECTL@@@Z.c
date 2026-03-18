/*
 * XREFs of ?vGetSubRect@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003D910
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vGetSubRect(RGNOBJ *this, struct _RECTL *a2)
{
  struct _RECTL v2; // xmm0

  if ( *(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u )
    v2 = (struct _RECTL)rclEmpty;
  else
    v2 = *(struct _RECTL *)(*(_QWORD *)this + 88LL);
  *a2 = v2;
}
