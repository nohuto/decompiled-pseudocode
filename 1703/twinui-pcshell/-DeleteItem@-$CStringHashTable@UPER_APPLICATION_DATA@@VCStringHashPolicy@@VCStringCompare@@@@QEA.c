/*
 * XREFs of ?DeleteItem@?$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x1800164D0
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x180009300 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x180009E60 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStringHashTable<PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare>::DeleteItem(
        __int64 a1,
        const WCHAR **a2)
{
  const WCHAR *v2; // r15
  char v3; // bp
  __int64 i; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = *a2;
  v3 = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_DWORD *)(v6 + 48 * i) == 1 && CompareStringOrdinal(*(LPCWCH *)(v6 + 48 * i + 8), -1, v2, -1, 0) == 2 )
      {
        CoTaskMemFree(*(LPVOID *)(v6 + 48 * i + 8));
        v7 = *(_QWORD *)(a1 + 16);
        v3 = 1;
        if ( *(_DWORD *)(v7 + 48 * i) == 1 )
        {
          *(_DWORD *)(v7 + 48 * i) = 2;
          v8 = *(_QWORD *)(v7 + 48 * i + 16);
          if ( v8 )
          {
            *(_QWORD *)(v7 + 48 * i + 16) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
          ++*(_DWORD *)(a1 + 8);
          --*(_DWORD *)a1;
        }
      }
    }
  }
  return v3 == 0 ? 0x8002802B : 0;
}
