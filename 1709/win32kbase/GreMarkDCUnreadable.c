/*
 * XREFs of GreMarkDCUnreadable @ 0x1C0092B88
 * Callers:
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C (-vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z.c)
 */

__int64 __fastcall GreMarkDCUnreadable(HDC a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  XDCOBJ::vAltLock((XDCOBJ *)&v9, a1, 0);
  GreAcquireHmgrSemaphore(v2, v1, v3);
  v6 = v9;
  if ( v9 )
  {
    *(_DWORD *)(*(_QWORD *)(v9 + 512) + 112LL) |= 0x10000000u;
    v7 = *(_QWORD *)(v6 + 48);
    *(_DWORD *)(v7 + 172) |= 0x10000000u;
    *(_DWORD *)(v7 + 180) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v9);
  }
  return GreReleaseHmgrSemaphore(v6, v4, v5);
}
