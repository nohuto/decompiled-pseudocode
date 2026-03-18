/*
 * XREFs of NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0049620
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C000DDD0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C004954C (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z @ 0x1C004FA90 (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAPEAVCFlipTokenOperation@@@Z.c)
 */

__int64 __fastcall NtTokenManagerCreateFlipObjectReturnTokenHandle(void *a1, unsigned __int64 *a2, HANDLE *a3)
{
  int v6; // edi
  unsigned __int64 v7; // r15
  ULONG64 v8; // rcx
  __int64 v9; // r9
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  struct CFlipTokenOperation *v12; // [rsp+58h] [rbp-70h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-68h]
  int v14; // [rsp+68h] [rbp-60h] BYREF
  __int64 v15; // [rsp+70h] [rbp-58h]
  __int64 v16; // [rsp+78h] [rbp-50h]
  int v17; // [rsp+80h] [rbp-48h]
  __int64 v18; // [rsp+88h] [rbp-40h]
  __int64 v19; // [rsp+90h] [rbp-38h]

  v6 = 0;
  Handle = 0LL;
  v7 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  KeEnterCriticalRegion();
  if ( a3 && a2 )
  {
    v8 = (ULONG64)(a2 + 1);
    if ( a2 + 1 < a2 || v8 > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v13 = *a2;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    DXGGLOBAL::GetGlobal(v8);
    v6 = _guard_dispatch_icall_fptr();
    if ( v6 >= 0 )
    {
      v6 = FlipManagerCreateConsumerTokenOperation(a1, v7, &v12);
      if ( v6 >= 0 )
      {
        v14 = 48;
        v15 = 0LL;
        v17 = 0;
        v16 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        v6 = DxgkCompositionObject::Create(
               0LL,
               (__int64)&v14,
               3u,
               v9,
               5,
               104,
               (__int64 (__fastcall *)(PVOID, __int64, char *))FlipManagerTokenObject::ObjectInit,
               (__int64)&v12,
               &Handle);
        if ( v6 >= 0 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a3 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegion();
  FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v12);
  return (unsigned int)v6;
}
