/*
 * XREFs of DestroyWindowsHotKeys @ 0x1C005D200
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DestroyWindowsHotKeys(__int64 a1)
{
  KDEVICE_QUEUE *p_DeviceQueue; // rsi
  __int64 v3; // r14
  KDEVICE_QUEUE *v4; // rbx
  KDEVICE_QUEUE *v5; // rdi
  __int64 result; // rax

  p_DeviceQueue = &WPP_MAIN_CB.DeviceQueue;
  v3 = 128LL;
  do
  {
    v4 = p_DeviceQueue;
    while ( *(_QWORD *)&v4->Type )
    {
      v5 = *(KDEVICE_QUEUE **)&v4->Type;
      if ( *(_QWORD *)(*(_QWORD *)&v4->Type + 16LL) == a1 )
      {
        *(_QWORD *)&v4->Type = *(_QWORD *)&v5[1].Type;
        HMAssignmentUnlock(&v5->DeviceListHead.Blink);
        result = Win32FreePool(v5);
      }
      else
      {
        v4 = v5 + 1;
      }
    }
    p_DeviceQueue = (KDEVICE_QUEUE *)((char *)p_DeviceQueue + 8);
    --v3;
  }
  while ( v3 );
  return result;
}
