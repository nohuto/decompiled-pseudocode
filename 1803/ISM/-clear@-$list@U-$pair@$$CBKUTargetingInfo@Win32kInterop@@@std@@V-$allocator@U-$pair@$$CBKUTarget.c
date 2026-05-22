/*
 * XREFs of ?clear@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXXZ @ 0x18001631C
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18000F6D4 (--1-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare@KU-$hash@K@std@@U-$e.c)
 *     ??1?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA@XZ @ 0x1800158F0 (--1-$list@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CBKUTargetingI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::clear(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = v2[8];
      if ( v4 )
      {
        v2[8] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v5 = v2[4];
      if ( v5 )
      {
        v2[4] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v6 = v2[3];
      if ( v6 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
