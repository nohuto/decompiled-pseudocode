/*
 * XREFs of ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01B3CF4
 * Callers:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C01B1718 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01B2680 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C01AC8E4 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C01AEB7C (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::ReleaseSessionReference(
        OUTPUTDUPL_MGR **this,
        struct DXGSESSIONDATA *a2,
        __int64 a3,
        __int64 a4)
{
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v4; // r8
  __int64 v6; // rax
  struct DXGFASTMUTEX **v7; // rdi
  __int64 *AdapterLuid; // rax
  __int64 v9; // rdx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  char v12; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdError(this, 0LL);
    *(_QWORD *)(v6 + 24) = 2479LL;
LABEL_5:
    WdLogEvent5_WdError(v6);
    return;
  }
  v7 = (struct DXGFASTMUTEX **)*((_QWORD *)a2 + 1);
  if ( !v7 )
  {
    v6 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v6 + 24) = 2486LL;
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 81) )
  {
    if ( !*((_DWORD *)this + 82) )
    {
      AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(this[37], (__int64)&v12);
      v4 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)v10;
      v9 = *AdapterLuid;
      v11 = *((_DWORD *)this + 4);
      v10[0] = this[4];
      v10[1] = v9;
    }
  }
  OUTPUTDUPL_SESSION_MGR::Release(v7, this[3], v4, a4);
}
