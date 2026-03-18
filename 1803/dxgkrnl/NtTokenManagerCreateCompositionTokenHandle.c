/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C000D900
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C000DDD0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        char *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned __int64 v7; // r13
  int v8; // edi
  void *v9; // rsi
  size_t v10; // r14
  SIZE_T v11; // rax
  int v13; // [rsp+98h] [rbp-60h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-58h]
  __int64 v15; // [rsp+A8h] [rbp-50h]
  int v16; // [rsp+B0h] [rbp-48h]
  __int64 v17; // [rsp+B8h] [rbp-40h]
  __int64 v18; // [rsp+C0h] [rbp-38h]
  __int64 v19; // [rsp+C8h] [rbp-30h]

  v7 = a2;
  v8 = 0;
  v9 = 0LL;
  KeEnterCriticalRegion();
  if ( !a1 || !(_DWORD)v7 || !a3 || !a4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v19 = (v7 * (unsigned __int128)0x18uLL) >> 64;
    v10 = 24 * v7;
    if ( is_mul_ok(v7, 0x18uLL) )
    {
      v8 = 0;
    }
    else
    {
      v10 = -1LL;
      v8 = -1073741675;
    }
    if ( v8 >= 0 )
    {
      v11 = 24 * v7;
      if ( !is_mul_ok(v7, 0x18uLL) )
        v11 = -1LL;
      v9 = operator new[](v11, 0x62634D54u, PagedPool);
      if ( !v9 )
        v8 = -1073741801;
      if ( v8 >= 0 )
      {
        if ( &a1[v10] < a1 || (unsigned __int64)&a1[v10] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, a1, v10);
        v8 = 0;
      }
    }
    if ( v8 >= 0 )
    {
      DXGGLOBAL::GetGlobal();
      v8 = _guard_dispatch_icall_fptr();
      if ( v8 >= 0 )
      {
        v13 = 48;
        v14 = 0LL;
        v16 = 0;
        v15 = 0LL;
        v17 = 0LL;
        v18 = 0LL;
        v8 = DxgkCompositionObject::Create(0LL, &v13, 3LL);
        if ( v8 >= 0 )
        {
          if ( a5 )
          {
            if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            *a5 = -1LL;
          }
          else
          {
            v8 = -1073741811;
          }
        }
      }
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
