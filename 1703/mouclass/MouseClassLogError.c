/*
 * XREFs of MouseClassLogError @ 0x1C00045CC
 * Callers:
 *     MouseClassClose @ 0x1C0001160 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C0001280 (MouseClassCreate.c)
 *     MouseClassPoRequestComplete @ 0x1C0001BF0 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C0004AF0 (MouseClassWWPowerUpComplete.c)
 *     MouseClassFindMorePorts @ 0x1C000C180 (MouseClassFindMorePorts.c)
 *     MouseAddDeviceEx @ 0x1C000C480 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000C990 (MouCreateClassObject.c)
 *     DriverEntry @ 0x1C000F4D0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MouseClassLogError(void *a1, int a2, int a3, int a4, unsigned int a5, _DWORD *a6, char a7)
{
  _WORD *ErrorLogEntry; // r10
  _DWORD *v11; // rcx
  __int64 v12; // r8

  ErrorLogEntry = IoAllocateErrorLogEntry(a1, 4 * ((unsigned __int8)a5 + 12));
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[1] = 4 * a5;
    *(_BYTE *)ErrorLogEntry = a7;
    *((_DWORD *)ErrorLogEntry + 3) = a2;
    *((_QWORD *)ErrorLogEntry + 3) = 0LL;
    *((_BYTE *)ErrorLogEntry + 1) = 0;
    *((_DWORD *)ErrorLogEntry + 4) = a3;
    *((_DWORD *)ErrorLogEntry + 5) = a4;
    if ( a5 )
    {
      v11 = a6;
      v12 = a5;
      do
      {
        *(_DWORD *)((char *)v11 + (char *)ErrorLogEntry - (char *)a6 + 40) = *v11;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
