/*
 * XREFs of ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C0010174
 * Callers:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C000EA8C (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C0010BB0 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBufferRealization::Initialize(CBufferRealization *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edx
  struct _OBJECT_TYPE *v5; // rax
  NTSTATUS v6; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = CRegion::Create((struct CRegion **)this + 8);
  v4 = v2;
  if ( v2 >= 0 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v5 = (struct _OBJECT_TYPE *)((__int64 (__fastcall *)(__int64, _QWORD))qword_1C018BC10)(v3, (unsigned int)v2);
      v6 = ObReferenceObjectByHandle(*((HANDLE *)this + 4), 0xF0000u, v5, 1, &Object, 0LL);
      *((_QWORD *)this + 4) = 0LL;
      v4 = v6;
      *((_QWORD *)this + 7) = Object;
    }
  }
  return v4;
}
