/*
 * XREFs of ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800983E4
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x1800988A4 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplaySet::GetDisplay(__int64 a1, __int64 a2, _QWORD *a3)
{
  signed int DisplayIndexFromDisplayId; // eax
  unsigned int v6; // ebx
  void (__fastcall ***v7)(_QWORD); // rcx
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  DisplayIndexFromDisplayId = CDisplaySet::GetDisplayIndexFromDisplayId(a1, a2, &v9);
  v6 = DisplayIndexFromDisplayId;
  if ( DisplayIndexFromDisplayId < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DisplayIndexFromDisplayId, 0x18Au);
  }
  else
  {
    v7 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 48) + 8LL * v9);
    *a3 = v7;
    (**v7)(v7);
  }
  return v6;
}
