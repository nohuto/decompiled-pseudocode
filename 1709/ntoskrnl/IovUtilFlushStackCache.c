/*
 * XREFs of IovUtilFlushStackCache @ 0x1407B4A44
 * Callers:
 *     IovAttachDeviceToDeviceStack @ 0x1407A48BC (IovAttachDeviceToDeviceStack.c)
 *     VfIoDetachDevice @ 0x1407B43B8 (VfIoDetachDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IovUtilFlushStackCache(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  do
  {
    v1 = a1;
    a1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL);
  }
  while ( a1 );
  do
  {
    result = *(_QWORD *)(v1 + 312);
    *(_DWORD *)(result + 32) &= 0x3FFFFFFFu;
    v1 = *(_QWORD *)(v1 + 24);
  }
  while ( v1 );
  return result;
}
