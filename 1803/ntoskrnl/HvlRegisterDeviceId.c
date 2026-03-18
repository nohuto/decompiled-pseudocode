/*
 * XREFs of HvlRegisterDeviceId @ 0x14022A2B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlRegisterDeviceId(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // rax
  _BYTE *v10; // rdx
  unsigned __int16 v11; // ax
  unsigned int v12; // ebx
  PHYSICAL_ADDRESS v13[3]; // [rsp+20h] [rbp-48h] BYREF

  v2 = -1LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
      return 3221225659LL;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) );
    v5 = (v6 + 8) & 0xFFFFFFF8;
  }
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL || (unsigned __int64)v5 + 40 > 0x1000 )
    return 3221225485LL;
  v8 = (_QWORD *)HvlpAcquireHypercallPage(v13, 1, 0LL, 0LL);
  memset(v8, 0, v5 + 40LL);
  v9 = v8[1];
  *v8 = -1LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v8[1] = v9 & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
    *((_WORD *)v8 + 4) = *(_WORD *)(a1 + 12);
    *((_WORD *)v8 + 5) = *(_WORD *)(a1 + 8);
  }
  else
  {
    v8[1] = v9 | 0xC000000000000000uLL;
    v10 = *(_BYTE **)(a1 + 8);
    do
      ++v2;
    while ( v10[v2] );
    memmove(v8 + 5, v10, v2 + 1);
  }
  *((_DWORD *)v8 + 4) |= 1u;
  v8[3] = a2;
  while ( 1 )
  {
    v11 = HvcallCodeVa();
    if ( v11 != 11 )
      break;
    if ( (int)HvlpDepositPages(0) < 0 )
    {
      v12 = -1073741670;
      goto LABEL_20;
    }
  }
  v12 = HvlpHvToNtStatus(v11);
LABEL_20:
  HvlpReleaseHypercallPage((__int64)v13);
  return v12;
}
