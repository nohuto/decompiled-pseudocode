/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006DF8C
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0058D90 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006DF60 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 * Callees:
 *     HMAllocObject @ 0x1C0035000 (HMAllocObject.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 */

struct tagMONITOR *CreateMonitor(void)
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx

  v0 = (_QWORD *)HMAllocObject(0LL, 0LL, 0xCu, 0x260u);
  v1 = v0;
  if ( v0 )
  {
    *(_DWORD *)(v0[5] + 28LL) = 0;
    *(_DWORD *)(v0[5] + 32LL) = 0;
    *(_DWORD *)(v0[5] + 36LL) = 0;
    *(_DWORD *)(v0[5] + 40LL) = 0;
    *(_DWORD *)(v0[5] + 44LL) = 0;
    *(_DWORD *)(v0[5] + 48LL) = 0;
    *(_DWORD *)(v0[5] + 52LL) = 0;
    *(_DWORD *)(v0[5] + 56LL) = 0;
    v0[73] = 0LL;
    v0[74] = 0LL;
  }
  else
  {
    UserSetLastError(8);
  }
  return (struct tagMONITOR *)v1;
}
