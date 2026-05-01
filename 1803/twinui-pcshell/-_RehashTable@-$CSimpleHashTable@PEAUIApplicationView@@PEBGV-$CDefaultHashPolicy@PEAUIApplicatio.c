/*
 * XREFs of ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180299534
 * Callers:
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBV?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@PEAV345@@Z @ 0x180299264 (-_AddUpdateItem@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x1802E5600 (-_AddUpdateItem@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicat.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18000CBA4 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x18029969C (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$.c)
 */

__int64 __fastcall CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
        __int64 a1,
        unsigned int a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // kr00_8
  int v6; // edi
  void *v7; // r12
  __int64 i; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  void *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v5 = a2;
  v4 = a2 * (unsigned __int128)0x18uLL;
  if ( is_mul_ok(v5, 0x18uLL) )
  {
    v6 = CTLocalAllocPolicy::Alloc((void *)a1, *((__int64 *)&v4 + 1), v4, &v12);
    if ( v6 >= 0 )
    {
      v7 = v12;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(a1 + 16);
        if ( *(_DWORD *)(v9 + 24 * i) == 1 )
        {
          v10 = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                  v7,
                  a2,
                  v9 + 8 + 24 * i);
          *(_OWORD *)v10 = *(_OWORD *)(v9 + 24 * i);
          *(_QWORD *)(v10 + 16) = *(_QWORD *)(v9 + 24 * i + 16);
        }
      }
      LocalFree(*(HLOCAL *)(a1 + 16));
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v7;
      *(_DWORD *)(a1 + 4) = a2;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return (unsigned int)v6;
}
