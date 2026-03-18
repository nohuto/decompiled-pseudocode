/*
 * XREFs of ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C00114B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C004A1B4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CCompositionFrame::Retire(CCompositionFrame *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  char *v2; // rdi
  char *i; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v2 = (char *)this + 144;
  *((_DWORD *)this + 22) = 2;
  for ( i = (char *)*((_QWORD *)this + 18); i != v2; i = *(char **)i )
    (*(void (__fastcall **)(_QWORD *, const struct DXGI_FRAME_STATISTICS *))(*((_QWORD *)i - 1) + 48LL))(
      (_QWORD *)i - 1,
      a2);
  v6 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 22);
    v8 = v6 + 2;
    v9 = (_QWORD *)v6[3];
    if ( (_QWORD *)*v9 != v6 + 2 || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9) )
      __fastfail(3u);
    while ( 1 )
    {
      v6[3] = v10;
      *v10 = v8;
      if ( v9 == v8 )
        break;
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      v9 = (_QWORD *)v6[3];
      if ( (_QWORD *)*v9 == v8 )
      {
        v10 = (_QWORD *)v9[1];
        if ( (_QWORD *)*v10 == v9 )
          continue;
      }
      __fastfail(3u);
    }
    *((_DWORD *)v6 + 8) = 0;
    *((_DWORD *)v6 + 521) = 0;
    v6[262] = (char *)v6 + 36;
    v6[261] = v8;
    *((_DWORD *)v6 + 526) = 2048;
    *((_BYTE *)v6 + 2108) = 0;
    if ( *(_DWORD *)(v7 + 176) > 3u )
    {
      CLegacyTokenBuffer::`scalar deleting destructor'(v6, (unsigned int)a2);
    }
    else
    {
      ExAcquirePushLockExclusiveEx(v7 + 88, 0LL);
      *(_QWORD *)(v7 + 96) = KeGetCurrentThread();
      v11 = (_QWORD *)(v7 + 160);
      v12 = *(_QWORD *)(v7 + 160);
      if ( *(_QWORD *)(v12 + 8) != v7 + 160 )
        __fastfail(3u);
      *v6 = v12;
      v6[1] = v11;
      *(_QWORD *)(v12 + 8) = v6;
      *v11 = v6;
      ++*(_DWORD *)(v7 + 176);
      *(_QWORD *)(v7 + 96) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 88, 0LL);
    }
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_BYTE *)this + 112) = 0;
}
