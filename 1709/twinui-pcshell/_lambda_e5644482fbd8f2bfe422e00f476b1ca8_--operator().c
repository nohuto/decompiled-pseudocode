/*
 * XREFs of _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180036994
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x1800366B0 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     CClassicWindowManager::ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___ @ 0x180039E20 (CClassicWindowManager--ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___.c)
 * Callees:
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001ADC0 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(__int64 *a1, _QWORD *a2)
{
  char v3; // r14
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  char v8; // di
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+40h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h]

  v3 = 0;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a2 + 80LL))(
         *a2,
         &v13) < 0 )
  {
    v5 = v14;
LABEL_10:
    v8 = 0;
    v4 = v13;
    goto LABEL_11;
  }
  v4 = v13;
  v5 = v13;
  v14 = v13;
  if ( v13 )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[1])(v13);
    v4 = v13;
  }
  v3 = 1;
  v6 = (_QWORD *)*a1;
  v7 = 0LL;
  if ( *(_QWORD *)(*a1 + 8) )
  {
    while ( !(unsigned int)SHIsSameObject(*(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*v6 + 8 * v7), v5) )
    {
      if ( (unsigned __int64)++v7 >= v6[1] )
      {
        v4 = v13;
        goto LABEL_8;
      }
    }
    goto LABEL_10;
  }
LABEL_8:
  v8 = 1;
LABEL_11:
  if ( (v3 & 1) != 0 && v5 )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v5)[2])(v5);
    v4 = v13;
  }
  if ( v8 )
  {
    v9 = (_QWORD *)*a1;
    v10 = *(_QWORD *)(*a1 + 8);
    if ( v10 != *(_QWORD *)(*a1 + 24)
      || CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
           *a1,
           v10 + 1) >= 0 )
    {
      v11 = (_QWORD *)(*v9 + 8 * v9[1]++);
      if ( v11 )
      {
        *v11 = v13;
        v4 = v13;
        if ( !v13 )
          goto LABEL_21;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[1])(v13);
      }
    }
    v4 = v13;
  }
LABEL_21:
  if ( v4 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v4)[2])(v4);
  }
  return 1;
}
