/*
 * XREFs of NtTokenManagerCreateFlipObjectTokenHandle @ 0x1C0049820
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C000DDD0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C004954C (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOperation@@@Z @ 0x1C004FB2C (-FlipManagerCreateProducerTokenOperation@@YAJPEAX_K_NIPEAUFlipPropertyItem@@PEAPEAVCFlipTokenOpe.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectTokenHandle(
        void *a1,
        unsigned __int64 *a2,
        int a3,
        unsigned int a4,
        struct FlipPropertyItem *a5,
        HANDLE *a6)
{
  unsigned __int64 v9; // r15
  ULONG64 v10; // rcx
  int v11; // edi
  __int64 v12; // r9
  HANDLE Handle; // [rsp+58h] [rbp-70h] BYREF
  struct CFlipTokenOperation *v15; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-60h]
  int v17; // [rsp+70h] [rbp-58h] BYREF
  __int64 v18; // [rsp+78h] [rbp-50h]
  __int64 v19; // [rsp+80h] [rbp-48h]
  int v20; // [rsp+88h] [rbp-40h]
  __int64 v21; // [rsp+90h] [rbp-38h]
  __int64 v22; // [rsp+98h] [rbp-30h]

  Handle = 0LL;
  v15 = 0LL;
  v9 = 0LL;
  v16 = 0LL;
  KeEnterCriticalRegion();
  if ( a6 )
  {
    if ( a2 )
    {
      v10 = (ULONG64)(a2 + 1);
      if ( a2 + 1 < a2 || v10 > MmUserProbeAddress )
        a2 = (unsigned __int64 *)MmUserProbeAddress;
      v9 = *a2;
      v16 = *a2;
    }
    DXGGLOBAL::GetGlobal(v10);
    v11 = _guard_dispatch_icall_fptr();
    if ( v11 >= 0 )
    {
      v11 = FlipManagerCreateProducerTokenOperation(a1, v9, a3 != 0, a4, a5, &v15);
      if ( v11 >= 0 )
      {
        v17 = 48;
        v18 = 0LL;
        v20 = 0;
        v19 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v11 = DxgkCompositionObject::Create(
                0LL,
                (__int64)&v17,
                3u,
                v12,
                5,
                104,
                (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
                (__int64)&v15,
                &Handle);
        if ( v11 >= 0 )
        {
          if ( a6 + 1 < a6 || (unsigned __int64)(a6 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a6 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  else
  {
    v11 = -1073741811;
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v15);
  return (unsigned int)v11;
}
