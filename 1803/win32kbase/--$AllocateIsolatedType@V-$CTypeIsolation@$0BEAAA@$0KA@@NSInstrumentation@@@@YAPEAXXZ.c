/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0066C64
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C00358C8 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C005FAF8 (-Allocate@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00B0BEC (-Create@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D7AE8 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<81920,160>>()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r14
  _QWORD *i; // rsi
  __int64 v4; // rbp
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rax

  v0 = *((_QWORD *)gpUserTypeIsolation + 3);
  if ( !v0 )
    return 0LL;
  v1 = *(_QWORD *)(v0 + 16);
  v2 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  for ( i = *(_QWORD **)v0; i != (_QWORD *)v0; i = (_QWORD *)*i )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(i[4]);
    if ( v4 )
    {
      ExReleasePushLockSharedEx(v1, 0LL);
      KeLeaveCriticalRegion();
      return v4;
    }
  }
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  v6 = NSInstrumentation::CSectionEntry<81920,160>::Create();
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    v2 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Allocate(*(_QWORD *)(v6 + 32));
    if ( v2 )
    {
      v8 = *(_QWORD *)(v0 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8, 0LL);
      v9 = *(_QWORD **)(v0 + 8);
      if ( *v9 != v0 )
        __fastfail(3u);
      *v7 = v0;
      v7[1] = v9;
      *v9 = v7;
      *(_DWORD *)(v0 + 24) += 500;
      *(_QWORD *)(v0 + 8) = v7;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v7);
      ExFreePoolWithTag(v7, 0);
    }
  }
  return v2;
}
