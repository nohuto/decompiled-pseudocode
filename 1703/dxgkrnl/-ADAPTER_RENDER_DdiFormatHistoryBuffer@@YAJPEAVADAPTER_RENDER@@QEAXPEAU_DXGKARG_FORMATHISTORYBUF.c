/*
 * XREFs of ?ADAPTER_RENDER_DdiFormatHistoryBuffer@@YAJPEAVADAPTER_RENDER@@QEAXPEAU_DXGKARG_FORMATHISTORYBUFFER@@@Z @ 0x1C0034300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ADAPTER_RENDER_DdiFormatHistoryBuffer(
        struct ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_FORMATHISTORYBUFFER *a3,
        __int64 a4)
{
  return ADAPTER_RENDER::DdiFormatHistoryBuffer(this, a2, a3, a4);
}
