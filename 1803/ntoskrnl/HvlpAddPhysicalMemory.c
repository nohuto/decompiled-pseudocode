/*
 * XREFs of HvlpAddPhysicalMemory @ 0x1402CA3C0
 * Callers:
 *     KeConfigureDynamicMemory @ 0x14023FC14 (KeConfigureDynamicMemory.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlpAddPhysicalMemory(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _QWORD *v5; // r14
  _QWORD *i; // r15
  unsigned __int16 v7; // ax
  PHYSICAL_ADDRESS v9[3]; // [rsp+20h] [rbp-98h] BYREF
  PHYSICAL_ADDRESS v10[3]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v12; // [rsp+70h] [rbp-48h] BYREF

  v4 = 0;
  v5 = (_QWORD *)HvlpAcquireHypercallPage(v9, 1, (__int64)&v12, 16LL);
  for ( i = (_QWORD *)HvlpAcquireHypercallPage(v10, 2, (__int64)v11, 8LL); a2; a2 -= *i )
  {
    *v5 = a1;
    v5[1] = a2;
    v7 = HvcallCodeVa();
    if ( v7 == 11 )
    {
      v4 = HvlpDepositPages(0);
      if ( v4 < 0 )
      {
        v4 = -1073741670;
        break;
      }
    }
    else if ( v7 )
    {
      v4 = HvlpHvToNtStatus(v7);
      break;
    }
    a1 += *i;
  }
  HvlpReleaseHypercallPage((__int64)v9);
  HvlpReleaseHypercallPage((__int64)v10);
  return (unsigned int)v4;
}
