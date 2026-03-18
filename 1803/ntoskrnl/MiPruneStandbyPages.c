/*
 * XREFs of MiPruneStandbyPages @ 0x140266010
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x140266380 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiNodeFreeZeroPages @ 0x1400D4DF8 (MiNodeFreeZeroPages.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14014FC20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 */

unsigned __int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int v8; // r12d
  int v9; // r15d
  int i; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r14
  unsigned int v16; // edx
  int v17; // r8d
  __int64 Page; // rax
  ULONG_PTR v19; // rsi
  __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  ULONG_PTR v26; // rsi
  __int64 v27; // rdi
  int v28; // r14d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  int v36; // [rsp+20h] [rbp-68h]
  int v37; // [rsp+24h] [rbp-64h]
  __int64 v38; // [rsp+28h] [rbp-60h]
  volatile signed __int32 *v39; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 v40; // [rsp+38h] [rbp-50h]
  unsigned __int16 v41; // [rsp+3Ah] [rbp-4Eh]
  unsigned int v42; // [rsp+90h] [rbp+8h]
  unsigned __int64 v45; // [rsp+A8h] [rbp+20h]

  v45 = a4;
  v4 = 0LL;
  v5 = a2;
  v6 = a3;
  v8 = 1;
  v9 = 2;
  v37 = *(_DWORD *)(1984LL * a2 + *(_QWORD *)(a1 + 16) + 1888) & 1;
  for ( i = (unsigned __int16)KeNumberNodes; v8 < (unsigned __int16)KeNumberNodes; ++v8 )
  {
    v11 = *((unsigned __int16 *)qword_1403CB6A0 + v8 + v5 * i);
    v12 = *(_QWORD *)(a1 + 16) + 1984 * v11;
    if ( *(_QWORD *)(v12 + 1808) || !(_DWORD)InitializationPhase )
    {
      v13 = (unsigned int)MmNumberOfChannels;
      if ( MmNumberOfChannels )
      {
        v14 = v13 * MiNodeFreeZeroPages(v12, v6, 4096);
        if ( v14 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, v11 + 1, (__int64)&v39);
          v15 = v14 - 0x10000;
          if ( v15 )
          {
            v16 = v40;
            v17 = v41;
            v42 = v40;
            v36 = v41;
            while ( 1 )
            {
              Page = MiGetPage(a1, v17 | _InterlockedExchangeAdd(v39, 1u) & v16, 0x40u);
              v38 = Page;
              if ( Page == -1 )
              {
                a4 = v45;
              }
              else
              {
                v19 = MiSwapNumaStandbyPage(Page, a2, v6, 16LL);
                v20 = 48 * v19 - 0x58000000000LL;
                v21 = (unsigned __int8)MiLockPageInline(v20);
                *(_QWORD *)(v20 + 24) |= 0x4000000000000000uLL;
                MiInsertPageInFreeOrZeroedList(v19, 2);
                _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v21);
                if ( v19 == v38 )
                  return v4;
                a4 = v45;
                if ( ++v4 == v45 )
                  return v4;
                v6 = a3;
              }
              v16 = v42;
              v17 = v36;
              if ( !--v15 )
                goto LABEL_16;
            }
          }
        }
        a4 = v45;
      }
LABEL_16:
      v5 = a2;
    }
    i = (unsigned __int16)KeNumberNodes;
  }
  if ( v4 < a4 )
  {
    do
    {
      v22 = MiRemoveLowestPriorityStandbyPage(a1, 8u, 0);
      v26 = v22;
      if ( v22 == -1 )
        break;
      v27 = 48 * v22 - 0x58000000000LL;
      ++v4;
      v28 = 0;
      v9 = MiGetPteTimeStamp(*(_QWORD *)(v27 + 16), v23, v24, v25) == 4294967293 ? v9 | 0x400 : v9 & 0xFFFFFBFF;
      v29 = *(_QWORD *)(v27 + 40);
      v30 = v29 >> 36;
      v31 = v29 >> 58;
      v32 = v30 & 3;
      if ( (unsigned __int16)v31 != v5 || (_DWORD)v32 != a3 && v37 )
      {
        if ( (unsigned __int64)MiNodeFreeZeroPages(*(_QWORD *)(a1 + 16) + 1984LL * (unsigned __int16)v31, v32, 4096) >= 0x200 )
        {
          v33 = MiSwapNumaStandbyPage(v26, v5, a3, 48LL);
          if ( v33 == v26 )
          {
            v28 = 1;
          }
          else
          {
            v26 = v33;
            v27 = 48 * v33 - 0x58000000000LL;
            v9 &= ~0x400u;
          }
        }
        else
        {
          --v4;
        }
      }
      v34 = (unsigned __int8)MiLockPageInline(v27);
      *(_QWORD *)(v27 + 24) |= 0x4000000000000000uLL;
      MiInsertPageInFreeOrZeroedList(v26, v9);
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v34);
      if ( v28 == 1 )
        break;
      v5 = a2;
    }
    while ( v4 < v45 );
  }
  return v4;
}
