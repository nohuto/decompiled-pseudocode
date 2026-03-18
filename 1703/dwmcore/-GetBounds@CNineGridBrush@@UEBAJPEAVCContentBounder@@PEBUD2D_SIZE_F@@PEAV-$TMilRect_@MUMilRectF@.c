/*
 * XREFs of ?GetBounds@CNineGridBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BFD10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::GetBounds(_QWORD **a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v8; // edi
  int v9; // eax

  v8 = 0;
  if ( ((unsigned __int8 (__fastcall *)(_QWORD **))(*a1)[22])(a1) )
  {
    a4[3] = 0;
    a4[2] = 0;
    a4[1] = 0;
    *a4 = 0;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _DWORD *))(*a1[10] + 152LL))(a1[10], a2, a3, a4);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x59u);
  }
  return v8;
}
