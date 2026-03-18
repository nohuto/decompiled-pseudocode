/*
 * XREFs of HvpFinishPrimaryWrite @ 0x14057FE20
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x140498210 (HvWriteHivePrimaryFile.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLogEvent @ 0x1406EFE04 (CmpLogEvent.c)
 */

__int64 __fastcall HvpFinishPrimaryWrite(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  char v4; // si
  int v5; // edi
  unsigned __int8 v6; // r14
  __int64 result; // rax

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 160) & 0x100;
  v6 = a3;
  if ( (a2 == (v5 != 0) || ((*(_DWORD *)(a1 + 4280) & 8) != 0) != (_BYTE)a3) && !(_BYTE)a4 )
  {
    CmpLockRegistry();
    ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
    v4 = 1;
  }
  if ( a2 )
  {
    if ( v5 )
      *(_DWORD *)(a1 + 160) &= ~0x100u;
  }
  else if ( !v5 )
  {
    CmpLogEvent(&REG_EVENT_FLUSH_IO_FAIL);
    *(_DWORD *)(a1 + 160) |= 0x100u;
  }
  result = (*(_DWORD *)(a1 + 4280) >> 3) & 1;
  if ( (_DWORD)result != v6 )
  {
    result = *(_DWORD *)(a1 + 4280) ^ ((unsigned __int8)*(_DWORD *)(a1 + 4280) ^ (unsigned __int8)(8 * v6)) & 8u;
    *(_DWORD *)(a1 + 4280) = result;
  }
  if ( v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72), v6, a3, a4);
    KeAbPostRelease(a1 + 72);
    return CmpUnlockRegistry();
  }
  return result;
}
