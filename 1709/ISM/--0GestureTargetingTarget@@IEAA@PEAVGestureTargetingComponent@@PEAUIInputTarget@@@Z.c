/*
 * XREFs of ??0GestureTargetingTarget@@IEAA@PEAVGestureTargetingComponent@@PEAUIInputTarget@@@Z @ 0x1800149F8
 * Callers:
 *     ?Create@GestureTargetingTarget@@SAJPEAVGestureTargetingComponent@@PEAUIInputTarget@@PEAPEAV1@@Z @ 0x180014C74 (-Create@GestureTargetingTarget@@SAJPEAVGestureTargetingComponent@@PEAUIInputTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
GestureTargetingTarget *__fastcall GestureTargetingTarget::GestureTargetingTarget(
        GestureTargetingTarget *this,
        struct GestureTargetingComponent *a2,
        struct IInputTarget *a3)
{
  void *v6; // rax
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &GestureTargetingTarget::`vftable'{for `IGestureTargetingTarget'};
  *((_QWORD *)this + 1) = &GestureTargetingTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  v6 = operator new[](0x6F40uLL);
  *((_QWORD *)this + 5) = v6;
  memset(v6, 0, 0x6F40uLL);
  *((_DWORD *)this + 12) = 10;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  v7 = operator new[](0xB30uLL);
  *((_QWORD *)this + 8) = v7;
  memset(v7, 0, 0xB30uLL);
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 11) = operator new[](0x50uLL);
  v8 = 0LL;
  v9 = 10LL;
  do
  {
    *(_DWORD *)(v8 + *((_QWORD *)this + 11)) = *((_DWORD *)this + 26);
    v8 += 8LL;
    --v9;
  }
  while ( v9 );
  *((_DWORD *)this + 24) = 10;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 3) = a2;
  if ( *((struct IInputTarget **)this + 4) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IInputTarget *, __int64))(*(_QWORD *)a3 + 8LL))(a3, v8);
    v10 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a3;
    if ( v10 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v8);
  }
  return this;
}
