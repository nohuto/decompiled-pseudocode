/*
 * XREFs of PsGetThreadTeb @ 0x1400DD9C0
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14051639C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspWow64SetContextThread @ 0x140516788 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
