/*
 * XREFs of ?ndisIsSystemBooting@@YAEXZ @ 0x1C00C695C
 * Callers:
 *     ndisInitialBindCompleted @ 0x1C0020E18 (ndisInitialBindCompleted.c)
 * Callees:
 *     <none>
 */

bool ndisIsSystemBooting(void)
{
  return !ndisBootFinishedTime.QuadPart || MEMORY[0xFFFFF78000000014] - ndisBootFinishedTime.QuadPart < 600000000;
}
