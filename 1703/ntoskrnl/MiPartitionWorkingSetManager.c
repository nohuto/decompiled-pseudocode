/*
 * XREFs of MiPartitionWorkingSetManager @ 0x1402139F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall MiPartitionWorkingSetManager(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // eax
  int v4; // edx
  PVOID Object[3]; // [rsp+40h] [rbp-28h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 17);
  Object[0] = (PVOID)(a1 + 136);
  Object[1] = &stru_14036CF90;
  Object[2] = (PVOID)(*(_QWORD *)(a1 + 5544) + 104LL);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( !result )
      return result;
    v3 = result - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = 1;
        goto LABEL_7;
      }
    }
    else
    {
      v4 = 0;
LABEL_7:
      MiWorkingSetManager(a1, v4);
    }
  }
}
