/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1C002B990
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     HmgIsObjectOwnedByW32Pid @ 0x1C002BAA4 (HmgIsObjectOwnedByW32Pid.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C003B1BC (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(struct OBJECT **this, unsigned int a2)
{
  struct OBJECT *v4; // rax
  __int64 result; // rax

  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[18], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[19], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[20], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[12], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[191], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[198], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[28], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[197], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[29], a2) )
    return 1LL;
  v4 = DC::prgnRao((DC *)this);
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v4, a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[64], a2) )
    return 1LL;
  result = HmgIsObjectOwnedByW32Pid(this[316], a2);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
