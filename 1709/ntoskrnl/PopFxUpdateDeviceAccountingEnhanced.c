/*
 * XREFs of PopFxUpdateDeviceAccountingEnhanced @ 0x14023F86C
 * Callers:
 *     PopPepDeviceDState @ 0x140123504 (PopPepDeviceDState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PopFxUpdateDeviceAccountingEnhanced(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  KIRQL v6; // bp
  unsigned int v7; // ecx
  unsigned __int64 v8; // rcx
  __int64 result; // rax

  v3 = a1 + 576;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 576));
  if ( *(int *)(v3 + 16) <= 0 )
  {
    v7 = *(_DWORD *)(v3 + 12);
    if ( v7 != 5 )
    {
      if ( a3 )
      {
        if ( a2 >= v7 )
        {
          if ( *(_BYTE *)(v3 + 8) )
          {
            v8 = *(_QWORD *)(v3 + 24);
            if ( MEMORY[0xFFFFF78000000008] >= v8 )
              *(_QWORD *)(v3 + 40) += MEMORY[0xFFFFF78000000008] - v8;
          }
          *(_BYTE *)(v3 + 8) = 0;
        }
      }
      else if ( a2 == 1 && !*(_BYTE *)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v3 + 8) = 1;
      }
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v3);
  result = v6;
  __writecr8(v6);
  return result;
}
