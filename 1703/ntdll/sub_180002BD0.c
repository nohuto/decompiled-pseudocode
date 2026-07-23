/*
 * XREFs of sub_180002BD0 @ 0x180002BD0
 * Callers:
 *     sub_18005D768 @ 0x18005D768 (sub_18005D768.c)
 * Callees:
 *     sub_180002D84 @ 0x180002D84 (sub_180002D84.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_180109A28 @ 0x180109A28 (sub_180109A28.c)
 *     sub_180109C20 @ 0x180109C20 (sub_180109C20.c)
 *     sub_18010BD24 @ 0x18010BD24 (sub_18010BD24.c)
 *     sub_18010BD78 @ 0x18010BD78 (sub_18010BD78.c)
 *     sub_18010C2FC @ 0x18010C2FC (sub_18010C2FC.c)
 *     sub_18010DD48 @ 0x18010DD48 (sub_18010DD48.c)
 */

__int64 __fastcall sub_180002BD0(__int64 a1, unsigned int a2, unsigned int a3, int a4, char a5)
{
  int v5; // r10d
  unsigned int v6; // r9d
  __int64 v7; // r15
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rsi
  wchar_t Src[264]; // [rsp+50h] [rbp-248h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 0LL;
  if ( !a1 || !v5 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0LL;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( a2 >= *(_DWORD *)(*(_QWORD *)(v10 + 24) + 68LL)
    || (a5 & 2) == 0 && *(_DWORD *)(32LL * a2 + *(_QWORD *)(v10 + 32) + 24) )
  {
    return 0LL;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2) && (a5 & 0x10) == 0 )
  {
    v14 = (*(_DWORD *)(a1 + 4) >> 2) & 1;
    if ( *(char *)a1 >= 0 )
    {
      v15 = sub_180109A28(v10, a2);
      v16 = v15;
      if ( !v15 )
        return 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) = sub_18010C2FC(v15);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) )
      {
        v17 = *(_QWORD *)(a1 + 32);
        if ( v17 )
        {
          if ( !(unsigned int)sub_18010DD48(
                                v17,
                                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
                                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 12LL),
                                v7,
                                Src) )
            return 0LL;
          v18 = sub_18010BD78(v16);
          if ( !v18 )
            return 0LL;
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) = sub_18010C2FC(v16);
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) )
            *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) = sub_180109C20(Src, v14);
          sub_18010BD24(v18);
        }
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2) = sub_180002D84(a2);
    }
    v5 = a4;
    v6 = a3;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) )
    return 0LL;
  _mm_lfence();
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7);
  v12 = *(_QWORD *)(v11 + 32);
  if ( *(_QWORD *)v12 != 0x47455343534552LL )
  {
    DbgPrintEx(0xFFFFFFFF, 0, "*** RESCACHE: Segment %u magic field is corrupt!!! ***\n", v7);
    DbgPrintEx(0xFFFFFFFF, 0, "*** --------> Follow-up: avgarcia;erik;muidev ***\n");
    return 0LL;
  }
  if ( v6 + v5 >= *(_DWORD *)(v12 + 28) )
    return 0LL;
  if ( v12 && v6 < *(_DWORD *)(v12 + 28) )
    return *(_QWORD *)(v11 + 40) + v6;
  RtlSetLastWin32Error(87);
  return v9;
}
