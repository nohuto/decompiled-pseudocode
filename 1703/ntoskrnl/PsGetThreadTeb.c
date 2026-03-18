/*
 * XREFs of PsGetThreadTeb @ 0x140007C30
 * Callers:
 *     PspWow64SetContextThread @ 0x1404254C4 (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140425B50 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
