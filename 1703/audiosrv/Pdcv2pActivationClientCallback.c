/*
 * XREFs of Pdcv2pActivationClientCallback @ 0x1800D1910
 * Callers:
 *     <none>
 * Callees:
 *     PdcReleaseRwLockExclusive2 @ 0x180028014 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180028268 (PdcAcquireRwLockExclusive2.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK @ 0x1800D202C (Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK.c)
 */

__int64 __fastcall Pdcv2pActivationClientCallback(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // edi
  _DWORD *v5; // rsi
  __int64 *v6; // r14
  DWORD CurrentThreadId; // eax
  __int64 v9; // rbx
  char v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v10 = 0;
  v5 = a1;
  if ( a1 )
  {
    if ( *a1 == 843138128 )
    {
      if ( *(_DWORD *)(a2 + 40) == 12 )
      {
        PdcAcquireRwLockExclusive2((__int64)(a1 + 2), &v10);
        if ( *((_BYTE *)v5 + 64) )
        {
          v6 = (__int64 *)*((_QWORD *)v5 + 9);
          v2 = *(_DWORD *)(a2 + 56);
          while ( v6 != (__int64 *)(v5 + 18) )
          {
            if ( v6[74] == *(_QWORD *)(a2 + 48) )
            {
              if ( (int)v2 >= 101 )
              {
                ++*((_DWORD *)v6 + 17);
                *((_BYTE *)v6 + 60) = 1;
              }
              Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK(v6, v5, v2, 0LL);
              CurrentThreadId = GetCurrentThreadId();
              v9 = *((_QWORD *)v5 + 4);
              v5[22] = CurrentThreadId;
              *(_DWORD *)(v9 + 156) = GetCurrentThreadId();
              (*((void (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))v5 + 6))(v6, v2, *((_QWORD *)v5 + 7), v6[4]);
              *(_DWORD *)(*((_QWORD *)v5 + 4) + 156LL) = 0;
              v5[22] = 0;
              goto LABEL_14;
            }
            v6 = (__int64 *)*v6;
          }
        }
        v3 = -1073741431;
      }
      else
      {
        v3 = -1073740030;
      }
    }
    else
    {
      v3 = -1073741585;
      v5 = 0LL;
    }
  }
  else
  {
    v3 = -1073741585;
  }
  Pdcv2EventWrite_ACTIVATION_CLIENT_CALLBACK(0LL, v5, v2, v3);
LABEL_14:
  if ( v10 )
    PdcReleaseRwLockExclusive2((__int64)(v5 + 2), &v10);
  return v3;
}
