/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x1408AE398
 * Callers:
 *     MiInitializeDriverImages @ 0x1408AC7B8 (MiInitializeDriverImages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 */

void __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  ULONG_PTR v7; // rcx
  __int64 v8; // r9
  int v9; // r8d
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v1; i = (__int64 *)*i )
  {
    v3 = i[6];
    v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
    {
      v5 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
      if ( (PVOID)v3 != PsNtosImageBase && (PVOID)v3 != PsHalImageBase )
      {
        _InterlockedExchangeAdd(&dword_1403CC678, v5);
        qword_1403CC650 -= (unsigned int)v5;
      }
      v6 = v4 + 8LL * (unsigned int)v5;
      while ( v4 < v6 )
      {
        v10 = MI_READ_PTE_LOCK_FREE(v4);
        v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFLL)
           - 0x58000000000LL;
        if ( v8 >= 0 )
        {
          v9 = BYTE2(MiFlags) & 1;
          *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                               + 192);
          if ( v9 )
            MiMarkPfnVerified(v7, 0);
        }
        v4 += 8LL;
      }
    }
  }
  MiFlags |= 0x1000u;
}
