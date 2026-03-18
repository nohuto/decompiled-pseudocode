/*
 * XREFs of ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C011BBC8
 * Callers:
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0119AB0 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C011A2EC (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C01A9F00 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateGlobal(__int64 a1, __int64 a2)
{
  DXGGLOBAL *v2; // rax
  DXGGLOBAL *v3; // rcx
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax

  if ( DXGGLOBAL::m_pGlobal )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = -1073741823LL;
    return 3221225473LL;
  }
  v2 = (DXGGLOBAL *)operator new(0x660uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = DXGGLOBAL::DXGGLOBAL(v2);
  DXGGLOBAL::m_pGlobal = v2;
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdLowResource(v3);
    v5 = -1073741801;
    *(_QWORD *)(v6 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v6);
    return v5;
  }
  result = DXGGLOBAL::Initialize(v3);
  v5 = result;
  if ( (int)result < 0 )
  {
    DXGGLOBAL::DestroyGlobal();
    return v5;
  }
  return result;
}
