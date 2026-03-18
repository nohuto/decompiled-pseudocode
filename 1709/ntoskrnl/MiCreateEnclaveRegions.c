/*
 * XREFs of MiCreateEnclaveRegions @ 0x140850F58
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiUpdateLargePageBitMap @ 0x1400C4FE4 (MiUpdateLargePageBitMap.c)
 *     MiInitializeMdlPfn @ 0x1400CAAD8 (MiInitializeMdlPfn.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateEnclaveRegions(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 *v2; // r12
  __int64 DemandZeroPte; // rbx
  __int64 *i; // rdi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rdx
  __int64 result; // rax
  bool v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rsi
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  unsigned __int8 v15; // r13
  __int64 *v16; // [rsp+60h] [rbp+8h]

  v1 = 0LL;
  v2 = (__int64 *)(a1 + 32);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v16 = v2;
  for ( i = (__int64 *)*v2; i != v2; i = (__int64 *)*i )
  {
    if ( ((*((_DWORD *)i + 4) - 33) & 0xFFFFFFFD) != 0 )
      continue;
    v5 = i[3];
    v6 = i[4];
    if ( v1 )
    {
      v7 = *(_QWORD *)(v1 + 32);
      if ( v5 == v7 + *(_QWORD *)(v1 + 24) )
      {
        *(_QWORD *)(v1 + 32) = v7 + v6;
        goto LABEL_16;
      }
    }
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52456D4Du);
    v1 = result;
    if ( !result )
      return result;
    *(_QWORD *)(result + 24) = v5;
    v9 = 0;
    *(_QWORD *)(result + 32) = v6;
    v10 = (_QWORD *)qword_1403885E8;
    if ( !qword_1403885E8 )
      goto LABEL_15;
    while ( v5 >= v10[3] )
    {
      v11 = (_QWORD *)v10[1];
      if ( !v11 )
      {
        v9 = 1;
        goto LABEL_15;
      }
LABEL_13:
      v10 = v11;
    }
    v11 = (_QWORD *)*v10;
    if ( *v10 )
      goto LABEL_13;
    v9 = 0;
LABEL_15:
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1403885E8, (unsigned __int64)v10, v9, v1);
LABEL_16:
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v5, v6, 0, 0);
    v12 = 48 * v5 - 0x58000000000LL;
    if ( v6 )
    {
      do
      {
        v13 = MiLockPageInline(v12);
        v14 = *(_QWORD *)(v12 + 40);
        v15 = v13;
        *(_WORD *)(v12 + 32) = 0;
        *(_QWORD *)(v12 + 24) &= 0x8000000000000000uLL;
        *(_QWORD *)(v12 + 16) = DemandZeroPte;
        *(_QWORD *)(v12 + 40) = v14 & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
        if ( *((_DWORD *)i + 4) == 33 )
          MiInsertPageInFreeOrZeroedList(v5, 256);
        else
          MiInitializeMdlPfn(v12, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
        v12 += 48LL;
        ++v5;
        --v6;
      }
      while ( v6 );
      v2 = v16;
    }
    qword_1403893E0 -= i[4];
  }
  return 1LL;
}
