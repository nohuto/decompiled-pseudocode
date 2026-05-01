/*
 * XREFs of ?Contains@CImmersiveAppArray@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18002DA60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray::Contains(CImmersiveAppArray *this, struct IImmersiveApplication *a2, int *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  if ( (*(int (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v10) >= 0 )
  {
    v6 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = 0LL;
        if ( (*(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *))(*(_QWORD *)this + 32LL))(
               this,
               v6,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v11) >= 0
          && (*(int (__fastcall **)(__int64, struct IImmersiveApplication *, int *))(*(_QWORD *)v11 + 104LL))(
               v11,
               a2,
               a3) >= 0
          && *a3 )
        {
          break;
        }
        v7 = v11;
        if ( v11 )
        {
          v11 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( ++v6 >= v10 )
          return 0LL;
      }
      v8 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  return 0LL;
}
