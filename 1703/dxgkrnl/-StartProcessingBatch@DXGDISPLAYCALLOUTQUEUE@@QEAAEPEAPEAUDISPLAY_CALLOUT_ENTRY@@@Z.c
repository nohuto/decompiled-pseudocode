/*
 * XREFs of ?StartProcessingBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAEPEAPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C0197028
 * Callers:
 *     DxgkProcessDisplayCalloutBatch @ 0x1C01AB7E0 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

bool __fastcall DXGDISPLAYCALLOUTQUEUE::StartProcessingBatch(
        DXGDISPLAYCALLOUTQUEUE *this,
        struct DISPLAY_CALLOUT_ENTRY **a2,
        __int64 a3,
        __int64 a4)
{
  struct DISPLAY_CALLOUT_ENTRY **v6; // r8
  __int64 v7; // r9
  struct DISPLAY_CALLOUT_ENTRY *v8; // rax
  struct DISPLAY_CALLOUT_ENTRY **v9; // rcx
  bool v10; // zf
  bool v11; // bl
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( *((_QWORD *)this + 7)
    || (v6 = (struct DISPLAY_CALLOUT_ENTRY **)((char *)this + 40), *v6 == (struct DISPLAY_CALLOUT_ENTRY *)v6) )
  {
    *a2 = 0LL;
    v11 = 0;
  }
  else
  {
    *((_QWORD *)this + 7) = KeGetCurrentThread();
    v8 = *v6;
    v9 = *(struct DISPLAY_CALLOUT_ENTRY ***)*v6;
    if ( *((struct DISPLAY_CALLOUT_ENTRY ***)*v6 + 1) != v6 || v9[1] != v8 )
      __fastfail(3u);
    *v6 = (struct DISPLAY_CALLOUT_ENTRY *)v9;
    v9[1] = (struct DISPLAY_CALLOUT_ENTRY *)v6;
    v10 = *v6 == (struct DISPLAY_CALLOUT_ENTRY *)v6;
    *a2 = v8;
    v11 = !v10;
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, 0LL, (__int64)v6, v7);
  return v11;
}
