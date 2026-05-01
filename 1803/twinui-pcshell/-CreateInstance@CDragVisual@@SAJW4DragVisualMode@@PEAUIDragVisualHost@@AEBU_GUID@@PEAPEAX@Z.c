/*
 * XREFs of ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F0B28
 * Callers:
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1802DB60C (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z @ 0x1802F0508 (--0CDragVisual@@QEAA@PEAUIDragVisualHost@@@Z.c)
 *     ?_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z @ 0x1802F2BE0 (-_Initialize@CDragVisual@@AEAAJW4DragVisualMode@@@Z.c)
 */

__int64 __fastcall CDragVisual::CreateInstance(unsigned int a1, struct IDragVisualHost *a2, __int64 a3, _QWORD *a4)
{
  CDragVisual *v7; // rbx
  CDragVisual *v8; // rax
  CDragVisual *v9; // rsi
  signed int v10; // edi

  *a4 = 0LL;
  v7 = 0LL;
  v8 = (CDragVisual *)operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
  {
    v7 = CDragVisual::CDragVisual(v8, a2);
    v9 = v7;
  }
  v10 = v9 == 0LL ? 0x8007000E : 0;
  if ( v9 )
  {
    v10 = CDragVisual::_Initialize(v7, a1);
    if ( v10 >= 0 )
      v10 = (**(__int64 (__fastcall ***)(CDragVisual *, GUID *, _QWORD *))v7)(
              v7,
              &GUID_fddf6c78_7133_462a_9ca9_020619164eb1,
              a4);
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v10;
}
