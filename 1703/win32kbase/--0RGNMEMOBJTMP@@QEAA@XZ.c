/*
 * XREFs of ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00D5210
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C00EFAD0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C003BFE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C0A4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 */

RGNMEMOBJTMP *__fastcall RGNMEMOBJTMP::RGNMEMOBJTMP(RGNMEMOBJTMP *this)
{
  *((_DWORD *)this + 2) = 0;
  RGNMEMOBJ::vInitialize(this, 0xD8u);
  RGNMEMOBJ::vPushThreadGuardedObject(this);
  return this;
}
