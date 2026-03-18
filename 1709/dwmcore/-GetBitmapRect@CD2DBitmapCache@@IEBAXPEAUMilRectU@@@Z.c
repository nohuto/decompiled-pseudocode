/*
 * XREFs of ?GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z @ 0x18011B23C
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18008A438 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::GetBitmapRect(CD2DBitmapCache *this, struct MilRectU *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 4);
  v5 = 0;
  v6 = 0;
  (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v2 + 32LL))(v2, &v5, &v6);
  v4 = v5;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = v4;
  *((_DWORD *)a2 + 3) = v6;
}
