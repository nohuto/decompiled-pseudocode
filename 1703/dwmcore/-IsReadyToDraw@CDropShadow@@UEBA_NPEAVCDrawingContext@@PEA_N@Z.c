/*
 * XREFs of ?IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180171E00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::IsReadyToDraw(CDropShadow *this, struct CDrawingContext *a2, bool *a3)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  *a3 = 0;
  v4 = *((_QWORD *)this + 17);
  if ( !v4 || (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *))(*(_QWORD *)v4 + 224LL))(v4, a2) )
    return 1;
  return v3;
}
