/*
 * XREFs of MiSessionAddProcess @ 0x140584CFC
 * Callers:
 *     MiMarkSessionMasterProcess @ 0x140165C18 (MiMarkSessionMasterProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSessionAddProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1024) = a2;
  _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x10000u);
}
