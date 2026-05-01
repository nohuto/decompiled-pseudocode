/*
 * XREFs of ?GetExternalDragProgress@ElementDragData@@AEAAMXZ @ 0x1802A502C
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A4A8C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?IsExternalDrag@ElementDragData@@AEAA_NXZ @ 0x1802A50AC (-IsExternalDrag@ElementDragData@@AEAA_NXZ.c)
 *     ?PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A53A0 (-PointerUp@ElementDragData@@UEAAXW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall ElementDragData::GetExternalDragProgress(ElementDragData *this)
{
  __int64 v3; // rcx
  float v4; // xmm3_4
  float v5; // xmm2_4
  int v6; // r9d
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  if ( (*((_BYTE *)this + 176) & 2) == 0 )
    return 0.0;
  v3 = *(_QWORD *)((char *)this + 92);
  v4 = 0.0;
  v5 = 0.0;
  v6 = abs32(v3 - *((_DWORD *)this + 16));
  v7 = *((_DWORD *)this + 40);
  v8 = abs32(HIDWORD(v3) - *((_DWORD *)this + 17));
  if ( v7 > 0 )
    v5 = (float)v6 / (float)v7;
  v9 = *((_DWORD *)this + 41);
  if ( v9 > 0 )
    v4 = (float)v8 / (float)v9;
  return fmaxf(v5, v4);
}
