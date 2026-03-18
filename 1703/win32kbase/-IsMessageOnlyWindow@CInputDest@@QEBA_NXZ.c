/*
 * XREFs of ?IsMessageOnlyWindow@CInputDest@@QEBA_NXZ @ 0x1C01183D0
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01225D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputDest::IsMessageOnlyWindow(CInputDest *this)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 23) == 2 )
    v2 = *((_QWORD *)this + 10);
  else
    v2 = 0LL;
  if ( v2 )
    return (unsigned int)IsMessageOnlyWindow() != 0;
  return v1;
}
