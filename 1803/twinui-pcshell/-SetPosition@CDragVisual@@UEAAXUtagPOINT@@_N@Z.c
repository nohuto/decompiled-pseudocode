/*
 * XREFs of ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1802F21D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x1802F2804 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802F3BD0 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1802F3EB8 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

void __fastcall CDragVisual::SetPosition(struct tagPOINT *this, struct tagPOINT a2, char a3)
{
  HWND *v5; // rdi
  __int64 y; // rdx
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rcx

  if ( *(_QWORD *)&this[39] != a2 )
  {
    v5 = (HWND *)&this[-3];
    y = (unsigned int)this[15].y;
    this[39] = a2;
    if ( (unsigned __int8)CDragVisual::_UpdateThumbnailRect(&this[-3], y) )
    {
      if ( BYTE2(this[31].x) || this[15].y == 6 && !LOBYTE(this[37].y) && !BYTE1(this[37].y) )
        v8 = 1LL;
      else
        v8 = 5LL;
      CDragVisual::_UpdateThumbnail(v5, v8, 1LL);
    }
    v9 = this[15].y == 6;
    BYTE2(this[31].x) = 0;
    if ( v9 && !LOBYTE(this[37].y) && !BYTE1(this[37].y) )
    {
      CDragVisual::_ClearVisualFeedback((CDragVisual *)v5);
      *((_BYTE *)v5 + 326) = 1;
    }
    if ( *((_BYTE *)v5 + 280) && SetWindowRgn(v5[19], 0LL, 1) )
      *((_BYTE *)v5 + 280) = 0;
    v10 = (__int64)this[9];
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&this[9] + 72LL))(*(_QWORD *)&this[9]);
    }
    if ( a3 && LOBYTE(this[31].x) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(v10, (__int64)&DragVisual_TargetChanged_Info);
  }
}
