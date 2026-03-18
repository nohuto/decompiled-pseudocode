/*
 * XREFs of DestroyThreadsHotKeys @ 0x1C00D8850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DestroyThreadsHotKeys()
{
  __int64 result; // rax
  KDEVICE_QUEUE *p_DeviceQueue; // rsi
  __int64 v2; // r14
  KDEVICE_QUEUE *v3; // rbx
  KDEVICE_QUEUE *v4; // rdi

  result = gptiCurrent;
  p_DeviceQueue = &WPP_MAIN_CB.DeviceQueue;
  v2 = 128LL;
  do
  {
    v3 = p_DeviceQueue;
    while ( *(_QWORD *)&v3->Type )
    {
      v4 = *(KDEVICE_QUEUE **)&v3->Type;
      if ( **(_QWORD **)&v3->Type == gptiCurrent )
      {
        *(_QWORD *)&v3->Type = *(_QWORD *)&v4[1].Type;
        if ( v4->DeviceListHead.Blink != (struct _LIST_ENTRY *)1 )
          HMAssignmentUnlock(&v4->DeviceListHead.Blink);
        result = Win32FreePool(v4);
      }
      else
      {
        v3 = v4 + 1;
      }
    }
    p_DeviceQueue = (KDEVICE_QUEUE *)((char *)p_DeviceQueue + 8);
    --v2;
  }
  while ( v2 );
  return result;
}
