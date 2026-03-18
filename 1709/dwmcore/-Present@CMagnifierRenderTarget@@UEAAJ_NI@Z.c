/*
 * XREFs of ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1801382C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x180138AF0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::Present(CMagnifierRenderTarget *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 572) )
  {
    v2 = 0LL;
    v3 = *(_QWORD *)(*((_QWORD *)this - 6) + 72LL);
    if ( !*(_DWORD *)(v3 + 80) )
      goto LABEL_8;
    while ( 1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8 * v2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 272LL))(v4) )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(v3 + 80) )
        goto LABEL_8;
    }
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 8 * v2);
    if ( !v5 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5) )
LABEL_8:
      CMagnifierRenderTarget::Slice((CMagnifierRenderTarget *)((char *)this - 64));
  }
  return 0LL;
}
