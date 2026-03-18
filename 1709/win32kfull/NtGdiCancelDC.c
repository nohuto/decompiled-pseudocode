/*
 * XREFs of NtGdiCancelDC @ 0x1C02899D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C124 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall NtGdiCancelDC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  BOOL v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  GreAcquireHmgrSemaphore();
  v10 = 0;
  LOBYTE(v2) = 1;
  v11 = 0;
  v3 = HmgShareLockCheck(a1, v2);
  v9 = v3;
  v6 = v3 != 0;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 512);
    if ( v7 )
      *(_DWORD *)(v7 + 112) |= 0x40000000u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v9);
  }
  GreReleaseHmgrSemaphore(v5, v4);
  return v6;
}
