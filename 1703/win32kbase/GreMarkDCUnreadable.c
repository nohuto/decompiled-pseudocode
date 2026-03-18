/*
 * XREFs of GreMarkDCUnreadable @ 0x1C006362C
 * Callers:
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     HmgShareLock @ 0x1C0032A40 (HmgShareLock.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreMarkDCUnreadable(unsigned int a1)
{
  __int64 v1; // rbx
  int v2; // edx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v9 = 0;
  v10 = 0;
  v1 = HmgShareLock(a1, 1);
  v8 = v1;
  GreAcquireHmgrSemaphore(v3, v2, v4);
  if ( v1 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 512) + 112LL) |= 0x10000000u;
    v6 = *(_QWORD *)(v1 + 48);
    *(_DWORD *)(v6 + 172) |= 0x10000000u;
    *(_DWORD *)(v6 + 180) |= 0x10000000u;
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v8);
    HmgDecrementShareReferenceCount(v8);
  }
  return GreReleaseHmgrSemaphore(v5);
}
