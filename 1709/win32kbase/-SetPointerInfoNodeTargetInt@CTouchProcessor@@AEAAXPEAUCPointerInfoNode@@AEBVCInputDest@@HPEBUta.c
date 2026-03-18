/*
 * XREFs of ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0127004
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0126EF4 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C01282C8 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C011716C (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeTargetInt(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        const struct CInputDest *a3,
        int a4,
        const struct tagPOINT *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  HWND WindowHandle; // rax
  __int64 v12; // r10
  bool v13; // zf
  int v14; // ecx
  int v15; // edx
  int v16; // eax

  *((_DWORD *)a2 + 1) &= ~0x100u;
  WindowHandle = CInputDest::GetWindowHandle(a3);
  v13 = *((_DWORD *)a2 + 125) == 0;
  *((_QWORD *)a2 + 34) = WindowHandle;
  if ( !v13 )
    CInputDest::operator=((__int64)a2 + 408, v12);
  *(_DWORD *)a2 |= 0x100u;
  *((_DWORD *)a2 + 56) = a4;
  if ( a9 )
    *(_DWORD *)a2 |= 0x200u;
  if ( !a8 )
    *(_DWORD *)a2 &= ~0x200u;
  if ( a7 )
    *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFFF3FF | 0x400;
  if ( a5 )
    *(struct tagPOINT *)((char *)a2 + 228) = *a5;
  v14 = *(_DWORD *)a2;
  if ( a8 )
  {
    v15 = 0x40000;
    if ( (v14 & 0x40000) != 0 )
      return;
    v16 = a6 << 18;
  }
  else
  {
    v15 = 0x20000;
    if ( (v14 & 0x20000) != 0 )
      return;
    v16 = a6 << 17;
  }
  *(_DWORD *)a2 = v14 ^ v15 & (v14 ^ v16);
}
