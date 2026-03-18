/*
 * XREFs of ?HitTest@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180024C20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::HitTest(
        CMaskBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  int v9; // eax
  int v10; // eax

  v4 = 0;
  *a4 = 0;
  if ( a2->width != 0.0
    && a2->height != 0.0
    && !(*(unsigned __int8 (__fastcall **)(CMaskBrush *))(*(_QWORD *)this + 192LL))(this) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(**((_QWORD **)this + 11) + 176LL))(
           *((_QWORD *)this + 11),
           a2,
           a3,
           a4);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB9u);
    }
    else if ( *((_QWORD *)this + 10) )
    {
      if ( *a4 )
      {
        *a4 = 0;
        v10 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(**((_QWORD **)this + 10) + 176LL))(
                *((_QWORD *)this + 10),
                a2,
                a3,
                a4);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xBFu);
      }
    }
  }
  return v4;
}
