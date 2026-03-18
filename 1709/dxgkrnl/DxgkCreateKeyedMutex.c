/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C01C0CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0028764 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01BF044 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01BF438 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  _OWORD *v9; // rax
  DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r15d
  _DWORD *v14; // r8
  DXGKEYEDMUTEX *v15; // r9
  int v16; // r8d
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25[2]; // [rsp+48h] [rbp-40h]
  unsigned int v26; // [rsp+98h] [rbp+10h] BYREF
  int v27; // [rsp+A0h] [rbp+18h]
  DXGKEYEDMUTEX *v28; // [rsp+A8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2051);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v25 = *v9;
    v26 = 0;
    v28 = 0LL;
    Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    v13 = DXGGLOBAL::CreateKeyedMutex(Global, v25[0], &v28, &v26, 0LL, 0, 0);
    if ( v13 >= 0 )
    {
      v14 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = v26;
      v15 = v28;
      v16 = *((_DWORD *)v28 + 8);
      v27 = v16;
      v17 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = v16;
      DXGKEYEDMUTEX::ReleaseReference(v15);
    }
    if ( v13 < 0 )
    {
      v24 = v26;
      if ( v26 )
        DXGKEYEDMUTEX::DestroyHandle(v26, v11);
    }
    else
    {
      v18 = v26;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 200));
      v19 = ((unsigned int)v18 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v19 < *((_DWORD *)Current + 60) )
      {
        v20 = *((_QWORD *)Current + 28);
        v21 = ((unsigned int)v18 >> 25) & 0x60;
        if ( (((unsigned int)v18 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
          && (*(_DWORD *)(v20 + 16 * v19 + 8) & 0x1F) != 0 )
        {
          v22 = 2 * ((v18 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v20 + 8 * v22 + 8) & 0x2000) == 0 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v21);
            *(_QWORD *)(v23 + 24) = 191LL;
            WdLogEvent5_WdAssertion(v23);
          }
          *(_DWORD *)(*((_QWORD *)Current + 28) + 8 * v22 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 26) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 200, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v24, &EventProfilerExit, v12, 2051);
    return (unsigned int)v13;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v7, 2051);
    return 3221225485LL;
  }
}
