/*
 * XREFs of ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C010122C
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01010E4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::UnreserveDmaBuffersForBlts(DXGCONTEXT *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  __int64 i; // rdi
  __int64 v9; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v7 + 24) = 6225LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_QWORD *)this + 39) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 80); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * i);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 432LL)
                                                            + 8LL)
                                                + 496LL))(
          v9,
          0LL);
        *(_QWORD *)(*((_QWORD *)this + 39) + 8 * i) = 0LL;
      }
    }
    *((_QWORD *)this + 39) = 0LL;
    *((_DWORD *)this + 80) = 0;
  }
  return 0LL;
}
