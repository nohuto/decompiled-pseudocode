/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00636C4
 * Callers:
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063698 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0070698 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     HMAllocObject @ 0x1C0040370 (HMAllocObject.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

struct tagMONITOR *CreateMonitor(void)
{
  __int64 v0; // rax
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax

  v0 = HMAllocObject(0LL, 0LL, 0xCu, 0x220u);
  v1 = (_QWORD *)v0;
  if ( v0 )
  {
    *(_DWORD *)(*(_QWORD *)(v0 + 40) + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v0 + 40) + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v0 + 40) + 36LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v0 + 40) + 40LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v0 + 40) + 76LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v0 + 40) + 80LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v0 + 40) + 84LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v0 + 40) + 88LL) = 0;
    v2 = *(_QWORD *)(v0 + 40);
    v1[59] = 0LL;
    v1[60] = 0LL;
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v1[5] + 48LL) = 0;
    *(_DWORD *)(v1[5] + 52LL) = 0;
    *(_DWORD *)(v1[5] + 56LL) = 0;
    *(_DWORD *)(v1[5] + 92LL) = 0;
    *(_DWORD *)(v1[5] + 96LL) = 0;
    *(_DWORD *)(v1[5] + 100LL) = 0;
    *(_DWORD *)(v1[5] + 104LL) = 0;
    v3 = v1[5];
    v1[61] = 0LL;
    v1[62] = 0LL;
    *(_DWORD *)(v3 + 60) = 0;
    *(_DWORD *)(v1[5] + 64LL) = 0;
    *(_DWORD *)(v1[5] + 68LL) = 0;
    *(_DWORD *)(v1[5] + 72LL) = 0;
    *(_DWORD *)(v1[5] + 108LL) = 0;
    *(_DWORD *)(v1[5] + 112LL) = 0;
    *(_DWORD *)(v1[5] + 116LL) = 0;
    *(_DWORD *)(v1[5] + 120LL) = 0;
    v1[63] = 0LL;
    v1[64] = 0LL;
  }
  else
  {
    UserSetLastError(8LL);
  }
  return (struct tagMONITOR *)v1;
}
