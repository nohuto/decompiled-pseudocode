/*
 * XREFs of ?IsTitleBarDrawnByApp@CFrameApplicationPresentation@@UEBA_NXZ @ 0x18006AE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CFrameApplicationPresentation::IsTitleBarDrawnByApp(CFrameApplicationPresentation *this)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 16);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 128LL))(v1, &v4);
    v2 = v4;
  }
  return v2 != 0;
}
