/*
 * XREFs of ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18000EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DB64 (-CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe(
        const struct _GUID *this,
        struct IImmersiveApplicationArray **a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8
  void *v7; // rcx
  void *v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  int v12; // [rsp+78h] [rbp+38h]
  void *v13; // [rsp+80h] [rbp+40h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v5 = CImmersiveAppArray_CreateInstance(this, &v13);
  v12 = v5;
  v7 = v13;
  if ( v5 >= 0 )
  {
    v8 = v13;
    if ( v13 )
    {
      (*(void (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v4, v6);
      v7 = v13;
    }
    v9 = *(_QWORD *)this[24].Data4;
    v10 = 0LL;
    if ( v9 )
    {
      do
      {
        v5 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v8 + 64LL))(
               v8,
               *(_QWORD *)(*(_QWORD *)&this[24].Data1 + 8 * v10));
        v12 = v5;
        if ( v5 < 0 )
          break;
        ++v10;
      }
      while ( v10 < v9 );
      v7 = v13;
    }
    if ( v8 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = v13;
      v5 = v12;
    }
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v7)(
             v7,
             &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
             a2);
      v7 = v13;
    }
  }
  if ( v7 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
