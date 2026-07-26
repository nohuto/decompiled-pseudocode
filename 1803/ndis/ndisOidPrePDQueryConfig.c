/*
 * XREFs of ndisOidPrePDQueryConfig @ 0x1C00786B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qqqqq @ 0x1C0042240 (WPP_SF_qqqqq.c)
 *     WPP_SF_qdd @ 0x1C0077D98 (WPP_SF_qdd_ea_1C0077D98.c)
 *     WPP_SF_qqqqDd @ 0x1C007831C (WPP_SF_qqqqDd.c)
 */

unsigned __int8 __fastcall ndisOidPrePDQueryConfig(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 v6; // r14
  KIRQL v7; // r12
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    WPP_SF_qqqqq(
      0x43u,
      &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids,
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v3);
    v5 = *(_QWORD *)a1;
  }
  if ( v5 )
  {
    v6 = *(_QWORD *)(v1 + 5528);
    if ( !*(_DWORD *)(v3 + 4) )
    {
      if ( (*(_DWORD *)(v3 + 88) & 0x4000) == 0 && (*(_BYTE *)(v3 + 1) < 2u || *(_WORD *)(v3 + 2) < 0xF8u)
        || (*(_DWORD *)(v3 + 244) & 1) == 0
        || *(_DWORD *)(v3 + 236)
        || *(_DWORD *)(v3 + 240) != -1 )
      {
        *(_DWORD *)(a1 + 40) = -1073741811;
        goto LABEL_21;
      }
      if ( v6 )
      {
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v1 + 1856) = 4002939;
        v8 = *(_DWORD *)(v6 + 32);
        if ( v8 )
        {
          if ( *(_DWORD *)(v3 + 48) >= v8 )
          {
            memmove(*(void **)(v3 + 40), *(const void **)(v6 + 24), *(unsigned int *)(v6 + 32));
            *(_DWORD *)(v3 + 52) = *(_DWORD *)(v6 + 32);
            if ( (unsigned __int8)byte_1C0099624 >= 4u )
            {
              v10 = *(_QWORD *)(v6 + 24);
              LODWORD(v12) = *(_DWORD *)(v10 + 16);
              WPP_SF_qdd(0x44u, v9, v1, *(unsigned __int8 *)(v10 + 8), v12);
            }
            *(_QWORD *)(v1 + 520) = 0LL;
            *(_DWORD *)(v1 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v7);
            *(_DWORD *)(a1 + 40) = 0;
          }
          else
          {
            *(_QWORD *)(v1 + 520) = 0LL;
            *(_DWORD *)(v1 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v7);
            *(_DWORD *)(v3 + 56) = *(_DWORD *)(v6 + 32);
            *(_DWORD *)(a1 + 40) = -1073676266;
          }
          goto LABEL_21;
        }
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v7);
      }
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_21:
    v4 = 1;
  }
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
  {
    v14 = *(_DWORD *)(a1 + 40);
    LODWORD(v13) = v4;
    WPP_SF_qqqqDd(
      0x45u,
      *(_QWORD *)(a1 + 8),
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v13,
      v14);
  }
  return v4;
}
