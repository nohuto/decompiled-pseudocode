/*
 * XREFs of ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C01A5D30
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01A5554 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 * Callees:
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C000711C (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this)
{
  __int64 v2; // r9
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v15[8]; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  if ( (*((_DWORD *)this + 37) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v3 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9LL, v2);
  *((_DWORD *)this + 8) = v3;
  if ( v3 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v4);
    v10[3] = this;
    v11 = *((unsigned int *)this + 8);
    v10[4] = v11;
    v10[5] = DXGPROCESS::GetCurrent(v11);
    WdLogEvent5_WdEvent(v10);
    if ( v16 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v12, v13, v14);
    return 0LL;
  }
  v5 = WdLogNewEntry5_WdLowResource(v4);
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v5);
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v6, v7, v8);
  return 3221225495LL;
}
