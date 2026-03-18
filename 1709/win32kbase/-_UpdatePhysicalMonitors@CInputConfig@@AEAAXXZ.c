/*
 * XREFs of ?_UpdatePhysicalMonitors@CInputConfig@@AEAAXXZ @ 0x1C012FDD4
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00610C8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0061224 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0017930 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CInputConfig::_UpdatePhysicalMonitors(__int64 **this, struct CInpPushLock *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 i; // r8
  __int64 v8; // r8
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]

  v2 = *this;
  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v9, a2);
  while ( v2 )
  {
    v3 = v2 + 1;
    if ( v2 == (__int64 *)-8LL )
      break;
    v4 = 0LL;
    if ( *((_DWORD *)v2 + 5) )
    {
      do
      {
        v5 = 0LL;
        v6 = v3[2] + 80 * v4;
        if ( (*(_DWORD *)(v6 + 16) & 2) != 0 )
        {
          for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(v8 + 56) )
          {
            if ( PtInRect((_DWORD *)v6, *(_QWORD *)(*(_QWORD *)(i + 40) + 28LL)) )
            {
              v5 = v8;
              break;
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
        *(_QWORD *)(v6 + 72) = v5;
      }
      while ( (_DWORD)v4 != *((_DWORD *)v3 + 3) );
    }
    v2 = (__int64 *)*v2;
  }
  if ( !v10 )
  {
    ExReleasePushLockSharedEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
}
