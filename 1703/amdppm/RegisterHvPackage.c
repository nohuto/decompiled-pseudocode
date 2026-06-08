/*
 * XREFs of RegisterHvPackage @ 0x1C002B270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 */

__int64 __fastcall RegisterHvPackage(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  int v4; // r15d
  __int64 v5; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *v7; // r14
  PVOID v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v2 = HvlQueryProcessorTopology(*(unsigned int *)(a1 + 72), 0LL, &v15, 0LL);
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00113E8,
      0LL);
    v3 = qword_1C0011418;
    v4 = v15;
    if ( (__int64 *)qword_1C0011418 == &qword_1C0011418 )
      goto LABEL_6;
    do
    {
      v5 = v3;
      if ( *(_DWORD *)(v3 + 32) == v15 )
        break;
      v3 = *(_QWORD *)v3;
      v5 = 0LL;
    }
    while ( (__int64 *)v3 != &qword_1C0011418 );
    if ( !v5 )
    {
LABEL_6:
      v5 = 0LL;
      v14 = 0;
      if ( (int)HvlQueryStartedProcessors(&v14, 0LL) >= 0 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v14, 0x72637250u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          if ( (int)HvlQueryStartedProcessors(&v14, PoolWithTag) >= 0 )
          {
            v8 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x72637250u);
            v5 = (__int64)v8;
            if ( v8 )
            {
              memset(v8, 0, 0x30uLL);
              *(_DWORD *)(v5 + 32) = v4;
              v9 = 0LL;
              *(_QWORD *)(v5 + 24) = v5 + 16;
              for ( *(_QWORD *)(v5 + 16) = v5 + 16; (unsigned int)v9 < v14; v9 = (unsigned int)(v9 + 1) )
              {
                if ( (int)HvlQueryProcessorTopology(v7[v9], 0LL, &v16, 0LL) >= 0 && v4 == v16 )
                  ++*(_DWORD *)(v5 + 36);
              }
            }
          }
          ExFreePoolWithTag(v7, 0x72637250u);
        }
      }
      if ( !v5 )
        goto LABEL_23;
      v10 = (__int64 *)qword_1C0011420;
      if ( *(__int64 **)qword_1C0011420 != &qword_1C0011418 )
        __fastfail(3u);
      *(_QWORD *)v5 = &qword_1C0011418;
      *(_QWORD *)(v5 + 8) = v10;
      *v10 = v5;
      qword_1C0011420 = v5;
    }
    *(_QWORD *)(a1 + 1048) = v5;
    ++*(_DWORD *)(v5 + 40);
    v11 = (_QWORD *)(a1 + 1056);
    v12 = *(_QWORD **)(v5 + 24);
    if ( *v12 != v5 + 16 )
      __fastfail(3u);
    *v11 = v5 + 16;
    *(_QWORD *)(a1 + 1064) = v12;
    *v12 = v11;
    *(_QWORD *)(v5 + 24) = v11;
    v2 = *(_DWORD *)(v5 + 36) != *(_DWORD *)(v5 + 40) ? 0x103 : 0;
LABEL_23:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00113E8);
  }
  return (unsigned int)v2;
}
