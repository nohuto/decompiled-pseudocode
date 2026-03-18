/*
 * XREFs of ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C000B41C
 * Callers:
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C000B460 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C001C020 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C001C090 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C004A100 (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAdapterCollection::InternalDiscard(CAdapterCollection *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v1 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v1 != v1 )
  {
    v3 = *((_QWORD *)this + 4);
    if ( *(_QWORD **)v3 != v1 || (v4 = *(_QWORD **)(v3 + 8), *v4 != v3) )
      __fastfail(3u);
    while ( 1 )
    {
      v1[1] = v4;
      *v4 = v1;
      if ( (_QWORD *)v3 == v1 )
        break;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)((v3 - 8) & -(__int64)(v3 != 0)) + 8LL))(
        (v3 - 8) & -(__int64)(v3 != 0),
        -v3);
      v3 = v1[1];
      if ( *(_QWORD **)v3 == v1 )
      {
        v4 = *(_QWORD **)(v3 + 8);
        if ( *v4 == v3 )
          continue;
      }
      __fastfail(3u);
    }
    *((_DWORD *)this + 1) = 0;
    ++*((_DWORD *)this + 2);
  }
}
