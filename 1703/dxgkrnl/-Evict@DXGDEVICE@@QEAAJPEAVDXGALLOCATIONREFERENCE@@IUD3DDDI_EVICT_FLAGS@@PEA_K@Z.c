/*
 * XREFs of ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C00BFF20
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C009DF70 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000529C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::Evict(
        DXGDEVICE *this,
        struct DXGALLOCATIONREFERENCE *a2,
        __int64 a3,
        struct D3DDDI_EVICT_FLAGS a4,
        unsigned __int64 *a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r9
  __int64 v10; // r10
  struct DXGALLOCATIONREFERENCE *v11; // rbp
  int v12; // esi
  __int64 v14; // rax
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v11 = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8 * v10);
    v12 = v9 & 1 | 2;
    if ( (v9 & 2) != 0 )
      v12 = v9 & 1;
    for ( ; a2 != v11; a2 = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8) )
    {
      v15[0] = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      if ( v15[0] )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *, __int64, int, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 432LL) + 8LL)
                                                                                           + 776LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 440LL),
          *((_QWORD *)this + 74),
          v15,
          1LL,
          v12,
          a5);
    }
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3221225659LL;
  }
}
