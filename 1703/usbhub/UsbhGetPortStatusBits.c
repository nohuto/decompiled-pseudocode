/*
 * XREFs of UsbhGetPortStatusBits @ 0x1C004342C
 * Callers:
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040230 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPortResumeTimeout @ 0x1C0043A7C (UsbhPortResumeTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhGetPortStatusBits(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  __int16 v4; // r10
  bool v5; // r9
  unsigned __int8 v6; // cl
  char v7; // dl
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // cl
  __int64 result; // rax

  v4 = *a3;
  v5 = a4 != 0;
  v6 = v5 | 0x10;
  v7 = *a3;
  if ( (v7 & 1) == 0 )
    v6 = v5;
  v8 = v6;
  v9 = v6 | 2;
  if ( (v7 & 4) == 0 )
    v9 = v8;
  v10 = v9;
  v11 = v9 | 4;
  if ( (v4 & 8) == 0 )
    v11 = v10;
  result = v11 | 8u;
  if ( (v4 & 2) == 0 )
    return v11;
  return result;
}
