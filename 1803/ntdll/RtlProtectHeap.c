/*
 * XREFs of RtlProtectHeap @ 0x18002A2B0
 * Callers:
 *     sub_1800677B0 @ 0x1800677B0 (sub_1800677B0.c)
 *     RtlInstallFunctionTableCallback @ 0x18006A010 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x18006A2B0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006A480 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x18006A9D0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006AD20 (RtlAddGrowableFunctionTable.c)
 *     sub_180071028 @ 0x180071028 (sub_180071028.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     RtlSetProtectedPolicy @ 0x18007F700 (RtlSetProtectedPolicy.c)
 *     sub_180080E08 @ 0x180080E08 (sub_180080E08.c)
 *     RtlGrowFunctionTable @ 0x1800DB090 (RtlGrowFunctionTable.c)
 * Callees:
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18002A38C @ 0x18002A38C (sub_18002A38C.c)
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_180104908 @ 0x180104908 (sub_180104908.c)
 */

void __fastcall RtlProtectHeap(_DWORD *a1, char a2)
{
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax

  if ( a1[4] == -571548178 || (a1[29] & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection((__int64)&unk_18015AAC0);
    if ( a1[4] == -571548178 )
      v4 = sub_180011A6C((__int64)a1, (a1[5] & 0x40000000) != 0 ? 64 : 4);
    else
      v4 = sub_18002AE30(a1, 1LL);
    v5 = v4;
    if ( a2 )
    {
      sub_18002A46C(a1, 1LL, 2LL, 1LL);
      v6 = 2;
      if ( v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( a1[4] == -571548178 )
      v7 = sub_180104908(a1, v5);
    else
      v7 = sub_18002A38C(a1, v5);
    if ( v7 >= 0 && !a2 )
      sub_18002A46C(a1, 2LL, 1LL, 1LL);
    RtlLeaveCriticalSection((__int64)&unk_18015AAC0);
  }
}
