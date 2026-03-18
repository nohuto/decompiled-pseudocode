/*
 * XREFs of ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C019D420
 * Callers:
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C019BFF4 (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C019DB90 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C019ECB4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  DXGGLOBAL *v5; // rax
  DXGGLOBAL *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx

  if ( DXGGLOBAL::m_pGlobal )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = -1073741823LL;
    return 3221225473LL;
  }
  v5 = (DXGGLOBAL *)operator new[](0x750uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v5 )
    v5 = DXGGLOBAL::DXGGLOBAL(v5);
  DXGGLOBAL::m_pGlobal = v5;
  if ( v5 )
  {
    result = DXGGLOBAL::Initialize(v6);
    v8 = result;
    if ( (int)result >= 0 )
      return result;
    DXGGLOBAL::DestroyGlobal();
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v6);
    v8 = -1073741801;
    *(_QWORD *)(v7 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v7);
  }
  return v8;
}
