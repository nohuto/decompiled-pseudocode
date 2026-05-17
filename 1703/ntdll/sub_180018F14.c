/*
 * XREFs of sub_180018F14 @ 0x180018F14
 * Callers:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     sub_180018DD8 @ 0x180018DD8 (sub_180018DD8.c)
 *     sub_1800193C0 @ 0x1800193C0 (sub_1800193C0.c)
 * Callees:
 *     sub_1800039E8 @ 0x1800039E8 (sub_1800039E8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwCancelTimer2 @ 0x1800A64F0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A8710 (ZwSetTimer2.c)
 *     sub_180105A78 @ 0x180105A78 (sub_180105A78.c)
 */

void __fastcall sub_180018F14(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v14 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  LOBYTE(a3) = a2;
  v15 = 0LL;
  if ( v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v7 = *(_QWORD *)(v5 + 32) - v6;
    v8 = (unsigned __int128)(v7 * (__int128)0x346DC5D63886594BLL) >> 64;
    v9 = v7 / 10000;
    if ( *(_QWORD *)a1 == v6 && *(_DWORD *)(a1 + 112) == (_DWORD)v9 )
      return;
    v10 = 10000LL * (unsigned int)v9;
    *(_QWORD *)a1 = v6;
    v15 = v10;
    *(_DWORD *)(a1 + 112) = v9;
    if ( !(_BYTE)a3 )
    {
      a4 = 2147353520LL;
      v8 = RtlpFreezeTimeBias;
      a3 = MEMORY[0x7FFE03B0];
      v10 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      if ( v10 <= v6 )
      {
        v10 -= v6;
        v6 = v10;
        v13 = v10;
LABEL_8:
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v8, a3, a4) )
        {
          v6 = v13;
          v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
        }
        else
        {
          v11 = 2147353478LL;
        }
        if ( *(_BYTE *)v11 )
          sub_1800039E8(a1, v6, v9);
        ZwSetTimer2(*(_QWORD *)(a1 + 24), &v13, 0LL, &v14);
        return;
      }
      v6 = 0LL;
    }
    v13 = v6;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(0LL, a2, a3, a4) )
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
      sub_180105A78(a1);
    ZwCancelTimer2(*(_QWORD *)(a1 + 24), 0LL);
  }
}
