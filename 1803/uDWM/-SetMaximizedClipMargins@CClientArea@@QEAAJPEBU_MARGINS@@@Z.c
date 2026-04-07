/*
 * XREFs of ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x180010BAC
 * Callers:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800199A8 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::SetMaximizedClipMargins(CClientArea *this, const struct _MARGINS *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0uLL;
  if ( a2 )
    v5 = (__int128)*a2;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 632LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
         &v5);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xC0u);
  return v3;
}
