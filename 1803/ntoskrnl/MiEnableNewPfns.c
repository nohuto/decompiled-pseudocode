/*
 * XREFs of MiEnableNewPfns @ 0x140252650
 * Callers:
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiInsertLargePageInNodeList @ 0x140136628 (MiInsertLargePageInNodeList.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiEnableNewPfns(ULONG_PTR a1, ULONG_PTR a2, __int16 a3)
{
  int v3; // r12d
  ULONG_PTR v4; // r15
  ULONG_PTR v5; // rdi
  int v6; // ebp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  BOOL v9; // r13d
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // [rsp+30h] [rbp-58h]
  unsigned __int8 v16; // [rsp+90h] [rbp+8h]
  int v18; // [rsp+A0h] [rbp+18h]
  __int16 v19; // [rsp+A8h] [rbp+20h]

  v3 = a3 & 0x100;
  v4 = a2;
  v18 = v3;
  v5 = a1;
  v6 = v3 != 0 ? 1025 : 2;
  v19 = v6;
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = a2 - a1;
  v15 = a2 - a1;
  if ( a1 < a2 )
  {
    v9 = v3 == 0;
    do
    {
      v10 = (KeFeatureBits & 0x2000000000LL) == 0;
      do
      {
        v11 = MiLargePageSizes[v10];
        if ( ((v11 - 1) & v5) == 0 && v4 - v5 >= v11 )
          break;
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 <= 1 );
      if ( (unsigned int)v10 > 1 )
      {
        v14 = (unsigned __int8)MiLockPageInline(v7);
        MiInsertPageInFreeOrZeroedList(v5, v6);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v14);
        v7 += 48LL;
        v11 = 1LL;
      }
      else
      {
        v12 = v7 + 48 * v11 - 48;
        v13 = MiLargePageContainingFrames[v10] & 0xFFFFFFFFFLL;
        do
        {
          v16 = MiLockPageInline(v12);
          *(_QWORD *)(v12 + 40) = v13 | *(_QWORD *)(v12 + 40) & 0xFFFFFFF000000000uLL;
          *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 1;
          *(_QWORD *)(v12 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v12 + 16), -(__int64)(v3 != 0) & 0xFFFFFFFDLL);
          if ( v12 == v7 )
            MiInsertLargePageInNodeList(v5, v11, v9);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v16);
          v12 -= 48LL;
        }
        while ( v12 >= v7 );
        v7 += 48 * v11;
        LOWORD(v6) = v19;
        v4 = a2;
        v3 = v18;
      }
      v5 += v11;
    }
    while ( v5 < v4 );
    v8 = v15;
  }
  MiReturnResidentAvailable(v8);
}
