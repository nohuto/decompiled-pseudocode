/*
 * XREFs of ExpScanGeneralLookasideList @ 0x1400A50F0
 * Callers:
 *     KeBalanceSetManager @ 0x1401777E0 (KeBalanceSetManager.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ExpScanGeneralLookasideList(__int64 **a1, KSPIN_LOCK *a2)
{
  KIRQL v4; // al
  __int64 *v5; // r8
  KIRQL i; // si
  int v7; // edx
  unsigned int v8; // ecx
  unsigned __int16 v9; // r9
  int v10; // r10d
  __int16 v11; // ax
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // edx

  v4 = KeAcquireSpinLockRaiseToDpc(a2);
  v5 = *a1;
  for ( i = v4; v5 != (__int64 *)a1; v5 = (__int64 *)*v5 )
  {
    v7 = *((_DWORD *)v5 - 10) - *((_DWORD *)v5 + 5);
    *((_DWORD *)v5 + 5) = *((_DWORD *)v5 - 10);
    v8 = *((_DWORD *)v5 - 11) - *((_DWORD *)v5 + 4);
    v9 = *((_WORD *)v5 - 23);
    *((_DWORD *)v5 + 4) = *((_DWORD *)v5 - 11);
    if ( v9 != 0xFFFF )
    {
      v10 = *((unsigned __int16 *)v5 - 24);
      if ( v8 >= 0x4B )
      {
        v13 = 1000 * v7 / v8;
        if ( v13 >= 5 )
        {
          v14 = v13 * (v9 - v10) / 0x7D0 + 5;
          if ( v14 > 0x1E )
            v14 = 30;
          v11 = v10 + v14;
          if ( (int)(v10 + v14) > v9 )
            v11 = v9;
        }
        else
        {
          v11 = v10 - 1;
          if ( v10 - 1 < 4 )
            v11 = 4;
        }
      }
      else
      {
        v11 = v10 - 10;
        if ( v10 - 10 < 4 )
          v11 = 4;
      }
      *((_WORD *)v5 - 24) = v11;
    }
  }
  KxReleaseSpinLock(a2);
  result = i;
  __writecr8(i);
  return result;
}
