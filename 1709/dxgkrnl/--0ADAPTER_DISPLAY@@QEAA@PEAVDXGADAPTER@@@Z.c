/*
 * XREFs of ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0105F5C
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116864 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0007C70 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 */

ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::ADAPTER_DISPLAY(ADAPTER_DISPLAY *this, struct DXGADAPTER *a2)
{
  __int64 v2; // r9
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // r9
  __int64 v11; // r9
  int v12; // r11d
  ADAPTER_DISPLAY *v13; // r9

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 24, 5, 14);
  *(_QWORD *)(v2 + 72) = v2 + 64;
  *(_QWORD *)(v2 + 64) = v2 + 64;
  *(_DWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_DWORD *)(v2 + 120) = -1;
  *(_DWORD *)(v2 + 124) = -1;
  *(_QWORD *)(v2 + 128) = 3LL;
  DXGFASTMUTEX::DXGFASTMUTEX(v2 + 136, -1, v3 - 13);
  *(_QWORD *)(v4 + 176) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX(v4 + 200, 16, 7);
  *(_QWORD *)(v5 + 240) = 0LL;
  *(_QWORD *)(v5 + 248) = v6;
  *(_DWORD *)(v5 + 256) = 0;
  *(_QWORD *)(v5 + 264) = 0LL;
  *(_DWORD *)(v5 + 272) = 0;
  *(_BYTE *)(v5 + 276) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX(v5 + 280, 75, 32);
  DXGFASTMUTEX::DXGFASTMUTEX(v7 + 336, v9, v8);
  *(_BYTE *)(v10 + 376) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX(v10 + 400, 76, 9);
  DXGFASTMUTEX::DXGFASTMUTEX(v11 + 440, v12, 14);
  *((_QWORD *)v13 + 61) = (char *)v13 + 480;
  *((_QWORD *)v13 + 60) = (char *)v13 + 480;
  *((_QWORD *)v13 + 24) = (char *)v13 + 184;
  *((_QWORD *)v13 + 23) = (char *)v13 + 184;
  return v13;
}
