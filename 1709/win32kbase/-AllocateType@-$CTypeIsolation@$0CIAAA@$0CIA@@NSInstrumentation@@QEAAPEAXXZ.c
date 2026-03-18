/*
 * XREFs of ?AllocateType@?$CTypeIsolation@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0042614
 * Callers:
 *     IsolatedSurfaceLookasideListAllocateEx @ 0x1C00AA0E0 (IsolatedSurfaceLookasideListAllocateEx.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00427B8 (-Allocate@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0090910 (-Create@-$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA@XZ @ 0x1C0090964 (--1-$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA@XZ.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<163840,640>::AllocateType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  _QWORD *i; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = NSInstrumentation::CSectionBitmapAllocator<163840,640>::Allocate(i[4]);
    if ( v5 )
    {
      ExReleasePushLockSharedEx(v1, 0LL);
      KeLeaveCriticalRegion();
      return v5;
    }
  }
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  v6 = NSInstrumentation::CSectionEntry<163840,640>::Create();
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<163840,640>::Allocate(*(_QWORD *)(v6 + 32));
    if ( v3 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v10 = *(_QWORD **)(a1 + 8);
      if ( *v10 != a1 )
        __fastfail(3u);
      v7[1] = v10;
      *v7 = a1;
      *v10 = v7;
      *(_DWORD *)(a1 + 24) += 240;
      *(_QWORD *)(a1 + 8) = v7;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<163840,640>::~CSectionEntry<163840,640>(v7);
      ExFreePoolWithTag(v7, 0);
    }
  }
  return v3;
}
