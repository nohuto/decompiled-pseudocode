/*
 * XREFs of ?DxgkGetVirtualFrameBufferAccessCount@@YAKXZ @ 0x1C016F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkGetVirtualFrameBufferAccessCount(__int64 a1)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v2; // rcx
  unsigned int *v3; // rcx
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGGLOBAL *)((char *)Global + 1144), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v3 = (unsigned int *)*((_QWORD *)DXGGLOBAL::GetGlobal(v2) + 142);
  if ( v3 )
    v4 = *v3;
  else
    v4 = 0;
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return v4;
}
