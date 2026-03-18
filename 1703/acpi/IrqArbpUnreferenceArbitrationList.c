/*
 * XREFs of IrqArbpUnreferenceArbitrationList @ 0x1C008FB74
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C0088800 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0016F74 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0017654 (WPP_RECORDER_SF_q.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C0026D98 (ProcessorDeleteDeviceIdtAssignment.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0086860 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0086A70 (IrqArbGsivFromIrq.c)
 *     IcGetPossibleInput @ 0x1C0089220 (IcGetPossibleInput.c)
 *     IcRemovePossibleReference @ 0x1C0094268 (IcRemovePossibleReference.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00A5590 (LinkNodeGetPossibleGsiv.c)
 */

__int64 __fastcall IrqArbpUnreferenceArbitrationList(__int64 a1, __int64 ***a2)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  PRTL_RANGE i; // rcx
  int v7; // edx
  _DWORD *UserData; // rsi
  __int64 **j; // rdi
  int v11; // eax
  PRTL_RANGE v12; // rax
  unsigned int k; // r14d
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // r15d
  int v17; // edx
  __int64 v18; // rdx
  unsigned int v19; // ebx
  int v20; // [rsp+20h] [rbp-60h]
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-2Ch]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-20h] BYREF
  PRTL_RANGE Range; // [rsp+B0h] [rbp+30h] BYREF

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 40), &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    WPP_RECORDER_SF_DDq(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5, v20, i->Start, i->End, (char)i->Owner);
    UserData = Range->UserData;
    UserData[1] &= ~8u;
    for ( j = *a2; a2 != (__int64 ***)j; j = (__int64 **)*j )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        20,
        20,
        (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
        (char)j[4]);
      if ( Range->Owner == j[4] )
      {
        v11 = UserData[1];
        if ( (v11 & 8) == 0 )
        {
          UserData[1] = v11 | 8;
          v12 = Range;
          for ( k = Range->Start; k <= LODWORD(v12->End); ++k )
          {
            v14 = IrqArbGsivFromIrq(k);
            v16 = v14;
            if ( v14 < 0xFFF00000 && (int)IcGetPossibleInput(v14, v15, 0LL) >= 0 )
            {
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v17,
                20,
                21,
                (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
                v16);
              LOBYTE(v18) = Range->Attributes & 1;
              IcRemovePossibleReference(v16, v18);
            }
            if ( (int)ProcessorGetDeviceIdtAssignment(j[4], v16, 1, &v21) >= 0 )
            {
              v19 = v22;
              LOBYTE(v7) = 4;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v7,
                20,
                22,
                (__int64)&WPP_7e722731483c3b8ec3839991a228af4a_Traceguids,
                v22);
              ProcessorDeleteDeviceIdtAssignment(j[4], v16, v19, 1);
            }
            v12 = Range;
          }
          if ( UserData[2] == 2 )
          {
            LinkNodeGetPossibleGsiv(*((_QWORD *)UserData + 2), 0LL);
            --*(_DWORD *)(*((_QWORD *)UserData + 2) + 28LL);
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
