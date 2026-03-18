/*
 * XREFs of rimCreateDev @ 0x1C000D5A0
 * Callers:
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 * Callees:
 *     RawInputManagerDeviceObjectCreateKernelHandle @ 0x1C000D65C (RawInputManagerDeviceObjectCreateKernelHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C000D72C (RawInputManagerDeviceObjectCreate.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_QWORD *__fastcall rimCreateDev(int a1, int a2, int a3, int a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // r8
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdi
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  if ( (int)RawInputManagerDeviceObjectCreate(a1, a2, a3, a4, &Handle) >= 0 )
  {
    LOBYTE(v5) = 1;
    if ( (int)RawInputManagerDeviceObjectResolveHandle(Handle, 3LL, v5, &v12) < 0 )
    {
      ObCloseHandle(Handle, 1);
    }
    else
    {
      v9 = v12;
      if ( (int)RawInputManagerDeviceObjectCreateKernelHandle(v12, v6, v7, v8, &v13) >= 0 )
      {
        if ( v9 )
          v4 = (_QWORD *)(v9 + 64);
        memset(v4, 0, 0x608uLL);
        v4[4] = v9;
        v4[2] = Handle;
        v4[3] = v13;
        v4[16] = v4 + 15;
        v4[15] = v4 + 15;
        v4[18] = v4 + 17;
        v4[17] = v4 + 17;
      }
    }
  }
  return v4;
}
