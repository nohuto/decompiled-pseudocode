/*
 * XREFs of MiSessionAddProcess @ 0x14059F5EC
 * Callers:
 *     MiMarkSessionMasterProcess @ 0x140137BAC (MiMarkSessionMasterProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSessionAddProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1024) = a2;
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x10000u);
}
