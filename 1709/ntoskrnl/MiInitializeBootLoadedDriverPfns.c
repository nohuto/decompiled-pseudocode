/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x14084928C
 * Callers:
 *     MiInitializeDriverImages @ 0x14082EE90 (MiInitializeDriverImages.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rdi
  unsigned __int64 v3; // rbp
  __int64 *v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbp
  __int64 PteShadow; // r9
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v1; i = (__int64 *)*i )
  {
    v3 = i[6];
    v4 = (__int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
    {
      v5 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
      if ( (PVOID)v3 != PsNtosImageBase && (PVOID)v3 != PsHalImageBase )
      {
        _InterlockedExchangeAdd(&dword_140389400, v5);
        qword_1403893D8 -= (unsigned int)v5;
      }
      v6 = &v4[(unsigned int)v5];
      while ( v4 < v6 )
      {
        PteShadow = *v4;
        if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow();
        v11 = PteShadow;
        v8 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v11) - 0x58000000000LL;
        if ( v9 >= 0 )
        {
          v10 = BYTE2(MiFlags) & 1;
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)(v10 != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                               + 192);
          if ( v10 )
            MiMarkPfnVerified(v8, 0);
        }
        ++v4;
      }
    }
  }
  MiFlags |= 0x1000u;
}
