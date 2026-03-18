/*
 * XREFs of MiMoveLargeZeroToFree @ 0x140233294
 * Callers:
 *     MiPurgeLargeZeroNodePages @ 0x140233458 (MiPurgeLargeZeroNodePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMoveLargeZeroToFree(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // rbp
  __int64 v8; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  volatile signed __int32 **v15; // r8
  __int64 v16; // r9
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 **v18; // r14
  volatile signed __int32 **v19; // rdx
  volatile signed __int32 **v20; // rax
  volatile signed __int32 **v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx

  v6 = a3;
  v8 = a4;
  v10 = MiLargePageSizes[a3];
  if ( a3 == 2 )
  {
    v11 = 16 * (a6 + 8LL * a4);
    v12 = v11 + a5 + 59LL;
    v13 = v11 + a5 + 123LL;
  }
  else
  {
    v14 = a4 + 2LL * a3;
    v12 = a6 + 27LL + 8 * v14;
    v13 = a6 + 31LL + 8 * v14;
  }
  v15 = (volatile signed __int32 **)(a2 + 16 * v12);
  v16 = a2 + 16 * v13;
  v17 = *v15;
  if ( *v15 == (volatile signed __int32 *)v15 )
    return 1LL;
  while ( 1 )
  {
    v18 = *(volatile signed __int32 ***)v17;
    if ( _interlockedbittestandset64(v17 + 6, 0x3FuLL) )
      break;
    *((_BYTE *)v17 + 34) = *((_BYTE *)v17 + 34) & 0xF8 | 1;
    _InterlockedAnd64((volatile signed __int64 *)v17 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    v19 = *(volatile signed __int32 ***)v17;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v17 + 8LL) != v17
      || (v20 = (volatile signed __int32 **)*((_QWORD *)v17 + 1), *v20 != v17) )
    {
      __fastfail(3u);
    }
    *v20 = (volatile signed __int32 *)v19;
    v19[1] = (volatile signed __int32 *)v20;
    v21 = *(volatile signed __int32 ***)(v16 + 8);
    if ( *v21 != (volatile signed __int32 *)v16 )
      __fastfail(3u);
    *((_QWORD *)v17 + 1) = v21;
    *(_QWORD *)v17 = v16;
    *v21 = v17;
    v22 = 2 * v6;
    *(_QWORD *)(v16 + 8) = v17;
    ++*(_QWORD *)(a2 + 8 * v22 + 8);
    --*(_QWORD *)(a2 + 8 * v22);
    if ( (unsigned int)v6 > 1 )
    {
      v23 = 16 * (a6 + 8 * v8)
          + (((unsigned __int64)(unsigned int)dword_140388540 >> 4) & (unsigned int)((unsigned __int64)((__int64)(v17 + 0x16000000000LL) / 48) >> 4));
      ++*(_QWORD *)(a2 + 8 * v23 + 5552);
      --*(_QWORD *)(a2 + 8 * v23 + 5040);
    }
    v24 = a6 + 8 * (v8 + 2 * v6);
    ++*(_QWORD *)(a2 + 8 * v24 + 80);
    --*(_QWORD *)(a2 + 8 * v24 + 48);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2112), -(__int64)v10);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2176), v10);
    v17 = (volatile signed __int32 *)v18;
    if ( v18 == v15 )
      return 1LL;
  }
  return 0LL;
}
