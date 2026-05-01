/*
 * XREFs of ?GetApplication@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x18002BDF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray::GetApplication(
        CImmersiveAppArray *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplication **a3)
{
  unsigned int v6; // ebx
  struct IImmersiveApplication *v7; // rcx
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  struct IImmersiveApplication *v11; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( (*(int (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v9) >= 0 )
  {
    v6 = 0;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = 0LL;
        if ( (*(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, struct IImmersiveApplication **))(*(_QWORD *)this + 32LL))(
               this,
               v6,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v11) >= 0
          && (*(int (__fastcall **)(struct IImmersiveApplication *, const unsigned __int16 *, int *))(*(_QWORD *)v11 + 88LL))(
               v11,
               a2,
               &v10) >= 0
          && v10 )
        {
          break;
        }
        v7 = v11;
        if ( v11 )
        {
          v11 = 0LL;
          (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( ++v6 >= v9 )
          return *a3 == 0LL ? 0x8002802B : 0;
      }
      *a3 = v11;
    }
  }
  return *a3 == 0LL ? 0x8002802B : 0;
}
