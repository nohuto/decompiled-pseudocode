/*
 * XREFs of ?CopyState@CDisplay@@IEAAXPEBV1@@Z @ 0x1800B7FCC
 * Callers:
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18007EF9C (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::CopyState(CDisplay *this, const struct CDisplay *a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  int v6; // eax
  __int64 v7; // rcx
  void (__fastcall ***v8)(_QWORD); // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi

  v2 = *((_BYTE *)this + 297) == 0;
  v4 = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 6) = v4;
  if ( !v2 )
  {
    *((_DWORD *)this + 26) -= *((_DWORD *)this + 24);
    *((_DWORD *)this + 27) -= *((_DWORD *)this + 25);
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 25) = 0;
    *((_BYTE *)this + 297) = 1;
    *((_OWORD *)this + 7) = v4;
  }
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 72);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_BYTE *)this + 295) = *((_BYTE *)a2 + 295);
  *((_BYTE *)this + 294) = *((_BYTE *)a2 + 294);
  v6 = *((_DWORD *)a2 + 59);
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 59) = v6;
  *((_BYTE *)this + 296) = 1;
  v7 = *((_QWORD *)this + 3);
  v8 = (void (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  *((_QWORD *)this + 3) = v8;
  if ( v8 )
    (**v8)(v8);
  v9 = *((_QWORD *)this + 4);
  v10 = *((_QWORD *)a2 + 4);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_QWORD *)this + 4) = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = *((_QWORD *)this + 5);
  v12 = *((_QWORD *)a2 + 5);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_QWORD *)this + 5) = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
}
