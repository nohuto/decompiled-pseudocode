/*
 * XREFs of ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C01C0A04
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01C0140 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00169F4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  if ( (*((_DWORD *)this + 37) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v2 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9u);
  *((_DWORD *)this + 8) = v2;
  if ( v2 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdEvent(v4, v3);
    v7[3] = this;
    v8 = *((unsigned int *)this + 8);
    v7[4] = v8;
    v7[5] = DXGPROCESS::GetCurrent(v8, v9);
    WdLogEvent5_WdEvent(v7);
    if ( v11 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
    return 0LL;
  }
  v5 = WdLogNewEntry5_WdLowResource(v4);
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v5);
  if ( v11 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return 3221225495LL;
}
