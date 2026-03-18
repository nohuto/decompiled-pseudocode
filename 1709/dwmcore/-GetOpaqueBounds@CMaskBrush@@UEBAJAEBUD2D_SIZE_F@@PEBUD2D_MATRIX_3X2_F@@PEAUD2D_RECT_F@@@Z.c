/*
 * XREFs of ?GetOpaqueBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x180172010
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::GetOpaqueBounds(
        CMaskBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  signed int v8; // eax
  unsigned int v9; // ebx

  *a4 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CMaskBrush *))(*(_QWORD *)this + 192LL))(this) )
    return 0;
  if ( *((_QWORD *)this + 10) )
    return 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, const struct D2D_MATRIX_3X2_F *, struct D2D_RECT_F *))(**((_QWORD **)this + 11) + 264LL))(
         *((_QWORD *)this + 11),
         a2,
         a3,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x7Bu);
  return v9;
}
