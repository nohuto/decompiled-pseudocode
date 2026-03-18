/*
 * XREFs of RIMAbConfigureDeviceArbitration @ 0x1C0104D88
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0110E4C (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C0007B64 (RIMAbIsDeviceArbitrationSupported.c)
 *     RIMIsRunningOnDesktop @ 0x1C0008234 (RIMIsRunningOnDesktop.c)
 */

__int64 RIMAbConfigureDeviceArbitration()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  result = RIMAbIsDeviceArbitrationSupported();
  v1 = 0;
  if ( (_DWORD)result )
  {
    if ( (int)IsGetPenArbitrationTypeSupported() >= 0 )
    {
      result = GetPenArbitrationType();
      v1 = result;
      goto LABEL_4;
    }
    result = RIMIsRunningOnDesktop();
    if ( !(_DWORD)result )
    {
LABEL_4:
      if ( v1 >= 4 )
        return result;
      goto LABEL_5;
    }
    v1 = 3;
  }
LABEL_5:
  gDeviceArbitrationType = v1;
  return result;
}
