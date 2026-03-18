/*
 * XREFs of PopEtInit @ 0x140826858
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObCreateObjectType @ 0x14059EB50 (ObCreateObjectType.c)
 *     PopEtAllocate @ 0x1406D0D14 (PopEtAllocate.c)
 *     PopEtInitializeBuiltinAppId @ 0x1406D2A88 (PopEtInitializeBuiltinAppId.c)
 *     RtlInternTableInitialize @ 0x1406EF2E8 (RtlInternTableInitialize.c)
 */

__int64 PopEtInit()
{
  unsigned int v0; // ebx
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  int v6; // eax
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v8[16]; // [rsp+38h] [rbp-29h] BYREF

  v0 = 0;
  if ( !PopEnergyEstimationDisabled )
  {
    v2 = PopEtAllocate(0x188uLL);
    PopEtGlobals = (__int64)v2;
    v3 = v2;
    if ( v2 )
    {
      memset(v2, 0, 0x188uLL);
      v3[3] = 0LL;
      v3[2] = 0LL;
      v3[1] = v3;
      *v3 = v3;
      v3[6] = 0LL;
      v3[5] = 0LL;
      v3[11] = PopEtInternerAllocate;
      v3[12] = PopEtInternerFree;
      v3[13] = PopEtInternerLock;
      v3[14] = PopEtInternerUnlock;
      v3[15] = PopEtInternerEntryInitialize;
      RtlInternTableInitialize(v3 + 7, (__int64)(v3 + 11));
      PopEtInitializeBuiltinAppId((__int64)(v3 + 26), (__int64)L"Default");
      PopEtInitializeBuiltinAppId((__int64)(v3 + 36), (__int64)L"Overflow");
      PopEtInitializeBuiltinAppId((__int64)(v3 + 16), (__int64)L"System");
      v5 = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[12];
      if ( v5 )
        *(_QWORD *)(v5 + 360) = v4;
      RtlInitUnicodeString(&DestinationString, L"EnergyTracker");
      memset(v8, 0, 0x78uLL);
      BYTE2(v8[0]) |= 4u;
      v8[8] = PopEtEnergyTrackerClose;
      LOWORD(v8[0]) = 120;
      v8[9] = PopEtEnergyTrackerDelete;
      HIDWORD(v8[4]) = 1;
      LODWORD(v8[5]) = 552;
      LODWORD(v8[1]) = 402;
      HIDWORD(v8[3]) = 2031617;
      v6 = ObCreateObjectType(&DestinationString, (__int64)v8, 0LL, (__int64)(v3 + 4));
      if ( v6 >= 0 )
        return 0;
      return (unsigned int)v6;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v0;
}
