/*
 * XREFs of ?GetOpaqueBounds@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x180162280
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::GetOpaqueBounds(
        CNineGridBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  int v8; // eax
  unsigned int v9; // ebx

  *a4 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CNineGridBrush *))(*(_QWORD *)this + 176LL))(this) )
    return 0;
  if ( *((_BYTE *)this + 120) )
    return 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, const struct D2D_MATRIX_3X2_F *, struct D2D_RECT_F *))(**((_QWORD **)this + 10) + 248LL))(
         *((_QWORD *)this + 10),
         a2,
         a3,
         a4);
  v9 = v8;
  if ( v8 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7Cu);
  return v9;
}
