/*
 * XREFs of ?AllocateHwBrush@CHwBrushPoolManager@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801A2740
 * Callers:
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18004AC38 (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ @ 0x1800C97B4 (-ConsolidateUnusedLists@CHwBrushPoolManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@CHwBrushPoolManager@@AEAAXPEAVCHwCacheablePoolBrush@@@Z @ 0x1801A2864 (-Remove@CHwBrushPoolManager@@AEAAXPEAVCHwCacheablePoolBrush@@@Z.c)
 */

__int64 __fastcall CHwBrushPoolManager::AllocateHwBrush(
        CHwBrushPoolManager *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **const a4)
{
  int v8; // ebx
  __int64 v9; // rsi
  int v10; // eax
  int v11; // eax

  CHwBrushPoolManager::ConsolidateUnusedLists((union _SLIST_HEADER *)this);
  v8 = -2147467259;
  do
  {
    v9 = *((_QWORD *)this + 7);
    if ( !v9 )
      break;
    CHwBrushPoolManager::Remove(this, *((struct CHwCacheablePoolBrush **)this + 7));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, struct CMILBrush *, const struct CHwBrushContext *))(*(_QWORD *)v9 + 40LL))(
              v9,
              a2,
              a3);
      v8 = v10;
      if ( v10 >= 0 )
        goto LABEL_7;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1BBu);
    }
    if ( v8 < 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v9 + 8) + 16LL))(v9 + 8, 1LL);
      continue;
    }
LABEL_7:
    *a4 = (struct CHwBrush *)(v9 + 32);
    (**(void (__fastcall ***)(__int64))(v9 + 32))(v9 + 32);
  }
  while ( v8 < 0 );
  if ( v8 >= 0
    || (v11 = (*(__int64 (__fastcall **)(CHwBrushPoolManager *, struct CMILBrush *, const struct CHwBrushContext *, struct CHwBrush **const))(*(_QWORD *)this + 24LL))(
                this,
                a2,
                a3,
                a4),
        v8 = v11,
        v11 >= 0) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 18);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1D8u);
  }
  return (unsigned int)v8;
}
