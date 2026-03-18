/*
 * XREFs of ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C01DDAC8
 * Callers:
 *     ?AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@I_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C01DB1A0 (-AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@I_KPEBU_D3D.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004589C (-Initialize@-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetMultisamplingMethodSet(
        DMMVIDPNSOURCE *this,
        __int64 a2,
        const struct _D3DDDI_MULTISAMPLINGMETHOD *a3,
        __int64 a4)
{
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax

  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize((__int64)this + 128, 8 * a2, a3, a4);
  v11 = v8;
  if ( v8 >= 0 )
    return 0LL;
  v12 = WdLogNewEntry5_WdError(v10, v9);
  *(_QWORD *)(v12 + 24) = v11;
  WdLogEvent5_WdError(v12);
  return (unsigned int)v11;
}
