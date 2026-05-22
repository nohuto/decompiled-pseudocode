/*
 * XREFs of ?RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z @ 0x18006E544
 * Callers:
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18006E10C (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::RegisterWaitHandler(
        RIMDeviceCollection *this,
        void *a2,
        int (*a3)(void *, unsigned int, void *),
        void *a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v7 = CoreUICreate(&v10);
  v8 = v10;
  if ( v7 >= 0 )
  {
    if ( v10 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, void *, int (*)(void *, unsigned int, void *), void *))(*(_QWORD *)v10 + 264LL))(
             v10,
             a2,
             a3,
             a4);
      v8 = v10;
    }
    else
    {
      v7 = -2147418113;
    }
  }
  if ( v8 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
