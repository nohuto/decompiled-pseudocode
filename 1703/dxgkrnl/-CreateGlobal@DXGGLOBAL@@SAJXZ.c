/*
 * XREFs of ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C011D064
 * Callers:
 *     DriverEntry @ 0x1C01EB008 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0110864 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C0110EA8 (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C01952D8 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *v4; // rax
  DXGGLOBAL *v5; // rcx
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax

  if ( DXGGLOBAL::m_pGlobal )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = -1073741823LL;
    return 3221225473LL;
  }
  v4 = (DXGGLOBAL *)operator new(0x5E0uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v4 )
    v4 = DXGGLOBAL::DXGGLOBAL(v4);
  DXGGLOBAL::m_pGlobal = v4;
  if ( !v4 )
  {
    v8 = WdLogNewEntry5_WdLowResource(v5);
    v7 = -1073741801;
    *(_QWORD *)(v8 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v8);
    return v7;
  }
  result = DXGGLOBAL::Initialize(v5);
  v7 = result;
  if ( (int)result < 0 )
  {
    DXGGLOBAL::DestroyGlobal();
    return v7;
  }
  return result;
}
