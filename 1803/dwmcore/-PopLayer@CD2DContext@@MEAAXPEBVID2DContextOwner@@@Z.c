/*
 * XREFs of ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x1800967C0
 * Callers:
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024E70 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180095C2C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x180096D24 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::PopLayer(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]

  CD2DContext::FlushDrawList(this);
  v3 = *((_DWORD *)this + 86);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v3 - 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 176LL) + 328LL))(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 176LL));
  if ( *(_BYTE *)(v4 + 56) )
  {
    v5 = *(_DWORD *)(v4 + 76);
    if ( *(_BYTE *)(v4 + 48) )
    {
      v6 = *(_QWORD *)(v4 + 16);
      v11 = 0;
      v12 = 0;
      v7 = *(_QWORD *)(v6 + 176);
      v10 = _xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 240LL))(v7, &v10);
      v8 = *(_QWORD *)(v6 + 184);
      *(_BYTE *)(v6 + 466) = 0;
      v9 = *(_OWORD *)(v4 + 60);
      *(_DWORD *)(v6 + 408) = v5;
      *(_OWORD *)(v6 + 392) = v9;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 80LL))(v8, v4 + 60, v5);
    }
    *(_BYTE *)(v4 + 56) = 1;
  }
  else
  {
    CD2DContext::D2DRemoveClip(*(CD2DContext **)(v4 + 16));
  }
  --*(_DWORD *)(v4 + 52);
}
