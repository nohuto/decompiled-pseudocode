/*
 * XREFs of MiUpdateWorkingSetAgeDistribution @ 0x1400141A0
 * Callers:
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 * Callees:
 *     MiVolunteerForTrimFirst @ 0x1400C4778 (MiVolunteerForTrimFirst.c)
 */

__int64 __fastcall MiUpdateWorkingSetAgeDistribution(__int64 a1, unsigned __int64 a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v6 = (a2 >> 18) & 0x3FFFFFF8;
    v7 = *(_QWORD *)(v6 - 0x904C0000000LL);
    v8 = v6 - 0x904C0000000LL;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 8 * ((v8 >> 3) & 0x1FF));
        v16 = v7 | 0x20;
        if ( (v15 & 0x20) == 0 )
          v16 = *(_QWORD *)(v6 - 0x904C0000000LL);
        v7 = v16;
        if ( (v15 & 0x42) != 0 )
          v7 = v16 | 0x42;
      }
    }
    v20 = v7;
    if ( (unsigned __int64)&v20 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v20 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      v17 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 8 * (((unsigned __int64)&v20 >> 3) & 0x1FF));
        v19 = v7 | 0x20;
        if ( (v18 & 0x20) == 0 )
          v19 = v7;
        v7 = v19;
        if ( (v18 & 0x42) != 0 )
          v7 = v19 | 0x42;
      }
    }
    v9 = (unsigned __int64 *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v10 = *v9;
    v11 = *v9 >> 4;
    if ( (v11 & 0x3FF) != 0 )
    {
      v12 = (v10 >> 14) & 7;
      if ( a3 == v12 )
      {
        *v9 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(16 * (v11 + a4))) & 0x3FF0;
      }
      else if ( a3 > v12 )
      {
        *v9 = v10 & 0xFFFFFFFFFFFE000FuLL | (16 * (a4 & 0x3FF | ((unsigned __int64)(a3 & 7) << 10)));
      }
    }
  }
  result = a3;
  *(_QWORD *)(a1 + 8LL * a3 + 40) += a4;
  if ( a3 == 7 )
    return MiVolunteerForTrimFirst(a1, a4);
  return result;
}
