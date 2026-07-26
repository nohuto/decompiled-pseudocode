/*
 * XREFs of ndisQueryWakeUpPatternList @ 0x1C004B3F8
 * Callers:
 *     ndisOidPrePMWOLPatternList @ 0x1C00E1870 (ndisOidPrePMWOLPatternList.c)
 *     ndisOidPreWakeUpPatternList @ 0x1C00E1BA0 (ndisOidPreWakeUpPatternList.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C0043FB4 (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisQueryWakeUpPatternList(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 v6; // r14
  KSPIN_LOCK *v7; // r13
  KIRQL v8; // al
  __int64 *v9; // r15
  __int64 *i; // r10
  __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r12d
  int v15; // r14d
  char *v16; // r13
  __int64 v17; // rcx
  unsigned int v18; // edi
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]
  int v22; // [rsp+90h] [rbp+18h]

  v3 = 0;
  v22 = 0;
  v5 = a2;
  v6 = a1;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqq(0x2Eu, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a2, a1, a3);
  if ( !v5 )
    v5 = *(_QWORD *)(v6 + 16);
  v7 = (KSPIN_LOCK *)(v5 + 96);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  NewIrql = v8;
  *(_DWORD *)(v5 + 1856) = 2755364;
  if ( v6 )
    v9 = *(__int64 **)(v6 + 496);
  else
    v9 = *(__int64 **)(v5 + 960);
  for ( i = v9; i; v3 += v13 )
  {
    v11 = *((unsigned int *)i + 14);
    v12 = *((_DWORD *)i + 15) + *((_DWORD *)i + 16);
    i = (__int64 *)*i;
    v13 = v11 + 24;
    if ( v11 + 24 <= (unsigned __int64)v12 )
      v13 = v12;
  }
  v14 = 0;
  if ( *(_DWORD *)(a3 + 48) >= v3 )
  {
    if ( v9 )
    {
      v15 = 0;
      v16 = *(char **)(a3 + 40);
      do
      {
        v17 = *((unsigned int *)v9 + 14);
        v18 = v17 + 24;
        if ( v17 + 24 <= (unsigned __int64)(unsigned int)(*((_DWORD *)v9 + 15) + *((_DWORD *)v9 + 16)) )
          v18 = *((_DWORD *)v9 + 15) + *((_DWORD *)v9 + 16);
        memmove(v16, v9 + 6, v18);
        v9 = (__int64 *)*v9;
        v16 += v18;
        v15 += v18;
      }
      while ( v9 );
      v22 = v15;
      v7 = (KSPIN_LOCK *)(v5 + 96);
      v6 = a1;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 56) = v3;
    v14 = -1073676268;
  }
  *(_DWORD *)(a3 + 52) = v22;
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1856) = 0;
  KeReleaseSpinLock(v7, NewIrql);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqqL(0x2Fu, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, v5, v6, a3, v14);
  return v14;
}
