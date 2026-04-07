/*
 * XREFs of ?Scale2D@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800A5240
 * Callers:
 *     <none>
 * Callees:
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180010A44 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Scale2D(struct tagPOINT *this, const struct TA_TRANSFORM_2D *a2)
{
  int v2; // ebx
  int v3; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  struct tagPOINT v12; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  if ( this[2].x - this[1].x >= 0 )
    v3 = this[2].x - this[1].x;
  v6 = RoundToNearestInt((float)v3 * *((float *)a2 + 5));
  if ( this[2].y - this[1].y >= 0 )
    v2 = this[2].y - this[1].y;
  v7 = RoundToNearestInt((float)v2 * *((float *)a2 + 6));
  v10 = v6;
  v8 = this[2].x - v6;
  v11 = v7;
  v12.x = this[8].y + (this[1].x + v8) / 2;
  v12.y = this[9].x + (this[1].y + this[2].y - v7) / 2;
  (*(void (__fastcall **)(struct tagPOINT *, int *))(*(_QWORD *)&this[-35] + 80LL))(this - 35, &v10);
  CVisual::SetOffset(this - 35, &v12);
  (*(void (__fastcall **)(struct tagPOINT *, __int64))(*(_QWORD *)&this[-35] + 24LL))(this - 35, 4096LL);
  return 0LL;
}
