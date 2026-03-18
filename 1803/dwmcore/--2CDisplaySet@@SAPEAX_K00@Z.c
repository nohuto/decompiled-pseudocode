/*
 * XREFs of ??2CDisplaySet@@SAPEAX_K00@Z @ 0x1800C8418
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18001EB98 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

LPVOID __fastcall CDisplaySet::operator new(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  int v4; // r9d
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  SIZE_T v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = 0LL;
  v4 = -2147024362;
  v5 = 72 * a2;
  if ( !is_mul_ok(a2, 0x48uLL) )
  {
    v11 = 47;
    goto LABEL_18;
  }
  v6 = a3 << 6;
  if ( !is_mul_ok(a3, 0x40uLL) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x30u);
    return (LPVOID)v3;
  }
  v7 = -1LL;
  v8 = -1LL;
  if ( v5 + 544 >= v5 )
    v8 = v5 + 544;
  v9 = v5 + 544 < v5 ? 0x80070216 : 0;
  if ( v5 + 544 < v5 )
  {
    v11 = 49;
    goto LABEL_15;
  }
  if ( v6 + v8 >= v6 )
    v7 = v6 + v8;
  v9 = v6 + v8 < v6 ? 0x80070216 : 0;
  if ( v6 + v8 < v6 )
  {
    v11 = 50;
LABEL_15:
    v4 = v9;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v11);
    return (LPVOID)v3;
  }
  if ( !v7 )
    v7 = 1LL;
  return HeapAlloc(WPF::g_processHeap, 0, v7);
}
