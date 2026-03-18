/*
 * XREFs of EditionUpdateInputTransformFromHitTest @ 0x1C00027F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EditionUpdateInputTransformFromHitTest(
        __int64 a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagINPUT_TRANSFORM *a5,
        unsigned __int64 *a6)
{
  UpdateInputTransformFromHitTest(*(struct tagWND **)(a1 + 80), a2, a3, a4, a5, a6);
}
