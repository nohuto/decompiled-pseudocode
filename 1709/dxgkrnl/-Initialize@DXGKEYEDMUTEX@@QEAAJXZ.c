/*
 * XREFs of ?Initialize@DXGKEYEDMUTEX@@QEAAJXZ @ 0x1C01BF91C
 * Callers:
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01BF044 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0003164 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::Initialize(DXGKEYEDMUTEX *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE v12[8]; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  if ( (*((_DWORD *)this + 37) & 1) != 0 )
    return 0LL;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v2 = DXGGLOBAL::AllocHandle(*((_QWORD *)this + 2), (__int64)this, 9u);
  *((_DWORD *)this + 8) = v2;
  if ( v2 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v4, v3, v5, v6);
    v9[3] = this;
    v10 = *((unsigned int *)this + 8);
    v9[4] = v10;
    v9[5] = DXGPROCESS::GetCurrent(v10, v11);
    WdLogEvent5_WdEvent(v9);
    if ( v13 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    return 0LL;
  }
  v7 = WdLogNewEntry5_WdLowResource(v4);
  *(_QWORD *)(v7 + 24) = this;
  *(_QWORD *)(v7 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v7);
  if ( v13 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return 3221225495LL;
}
