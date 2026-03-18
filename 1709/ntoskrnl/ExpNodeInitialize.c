/*
 * XREFs of ExpNodeInitialize @ 0x1405DDB64
 * Callers:
 *     ExpWorkerInitialization @ 0x14084F4D4 (ExpWorkerInitialization.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 (__fastcall *__fastcall ExpNodeInitialize(__int64 a1))()
{
  _QWORD *v1; // rbx
  __int64 (__fastcall *result)(); // rax

  v1 = (_QWORD *)(a1 + 320);
  memset((void *)(a1 + 320), 0, 0x40uLL);
  v1[3] = 0LL;
  result = ExpNodeHotAddProcessorWorker;
  *v1 = 0LL;
  v1[2] = ExpNodeHotAddProcessorWorker;
  return result;
}
