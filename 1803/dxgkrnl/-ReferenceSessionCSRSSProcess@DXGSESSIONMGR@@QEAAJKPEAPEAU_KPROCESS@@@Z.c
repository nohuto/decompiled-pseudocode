/*
 * XREFs of ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1C01D0000
 * Callers:
 *     ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1C000D87C (-Attach@DxgkAttachToObjectSession@@QEAAJXZ.c)
 *     ?Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C000E730 (-Close@DxgkCompositionObject@@SAXPEAU_EPROCESS@@PEAX_K2@Z.c)
 *     ?Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z @ 0x1C000E7F0 (-Open@DxgkCompositionObject@@SAJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@Z.c)
 *     ?OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0013F40 (-OkToClose@DxgkCompositionObject@@SAEPEAU_EPROCESS@@PEAX1D@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONMGR::ReferenceSessionCSRSSProcess(
        DXGSESSIONMGR *this,
        unsigned int a2,
        struct _KPROCESS **a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdi
  void *v8; // rdi
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v6 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( (unsigned int)v3 < *((_DWORD *)this + 18)
    && (v7 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v3)) != 0
    && (v8 = *(void **)(v7 + 18592)) != 0LL )
  {
    ObfReferenceObject(v8);
    *a3 = (struct _KPROCESS *)v8;
  }
  else
  {
    v6 = -1073741275;
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v6;
}
