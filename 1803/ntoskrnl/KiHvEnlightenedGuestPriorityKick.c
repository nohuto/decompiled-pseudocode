/*
 * XREFs of KiHvEnlightenedGuestPriorityKick @ 0x1400EE044
 * Callers:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KiInsertTimer2 @ 0x1400BBA54 (KiInsertTimer2.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 * Callees:
 *     KiSetVpThreadSystemWork @ 0x140248FE0 (KiSetVpThreadSystemWork.c)
 */

__int64 __fastcall KiHvEnlightenedGuestPriorityKick(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r11
  __int64 v7; // rdx
  char v8; // r9
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx

  result = (unsigned int)KiVelocityFlags;
  v5 = a2;
  if ( (KiVelocityFlags & 2) != 0 && *(_QWORD *)(a2 + 25016) && *(_QWORD *)(a1 + 25016) && a1 != a2 && a3 >= 8 )
  {
    LOBYTE(a2) = 1;
    result = KiSetVpThreadSystemWork(a1, a2);
    v7 = *(_QWORD *)(v5 + 25016);
    v8 = result;
    if ( *(_BYTE *)(v7 + 26) && *(_DWORD *)(v7 + 4) < a3 )
    {
      v9 = HvlpVirtualProcessorsIdentityMapped == 0;
      v10 = *(_QWORD *)(v6 + 25016);
      *(_DWORD *)(v10 + 16) = 2;
      v11 = *(unsigned int *)(v5 + 36);
      if ( v9 )
        LODWORD(v11) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v11 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v11] << 6);
      *(_DWORD *)(v10 + 12) = v11;
      result = (unsigned int)v11;
      __writemsr(0x400000C2u, (unsigned int)v11);
    }
    if ( v8 )
      return KiSetVpThreadSystemWork(v6, 0LL);
  }
  return result;
}
