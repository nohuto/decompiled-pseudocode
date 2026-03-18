/*
 * XREFs of KeFlushSingleCurrentTb @ 0x14014F598
 * Callers:
 *     MiDbgReleaseAddress @ 0x140260DAC (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140260E34 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140261178 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x140261220 (MiDbgWriteCheck.c)
 *     MmReadProcessPageTables @ 0x14026153C (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x140475598 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14003B2C8 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x140159D7C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14015A520 (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1402451D4 (KiPrepareFlushCurrentAffinity.c)
 *     VmFlushTb @ 0x1402AB308 (VmFlushTb.c)
 *     ExFlushTb @ 0x1402BB738 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, unsigned int a2)
{
  bool IsSecureProcessFlush; // al
  bool v6; // r14
  char v7; // di
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  int v10; // r8d
  int v11; // r9d
  unsigned __int8 CurrentIrql; // bl
  _BYTE v13[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+60h] [rbp-A0h]
  _BYTE v18[176]; // [rsp+70h] [rbp-90h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  _R15D = 0;
  v6 = IsSecureProcessFlush;
  v7 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureProcessFlush && !v7
    || (KiPrepareFlushParameters(a2, &v16, v13),
        KiPrepareFlushCurrentAffinity(v18),
        LOBYTE(v10) = v13[0],
        LOBYTE(v11) = v6,
        v15 = a1 & 0xFFFFFFFFFFFFF000uLL,
        result = HvlFlushRangeListTb(v16, (unsigned int)v18, v10, v11, v7, 1, (__int64)&v15),
        !(_BYTE)result) )
  {
    result = (unsigned int)(1 << a2);
    if ( (result & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        result = (__int64)KeGetCurrentThread();
        if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) )
        {
          *(_QWORD *)&v17 = 1LL;
          *((_QWORD *)&v17 + 1) = a1;
          __asm { invpcid r15d, [rsp+150h+var_F0] }
        }
      }
    }
    __invlpg((void *)a1);
  }
  v9 = a1 & 0xFFFFFFFFFFFFF000uLL | 1;
  if ( VmTbFlushEnabled )
  {
    v14 = v9;
    result = VmFlushTb(1LL, &v14, a2);
  }
  if ( ExTbFlushActive )
  {
    v14 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(1LL, &v14, a2);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
