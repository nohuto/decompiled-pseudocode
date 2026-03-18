/*
 * XREFs of DxgkOpenKeyedMutex @ 0x1C01C1390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01BF438 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01BFC64 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 *v9; // rax
  DXGGLOBAL *v10; // rcx
  ULONG64 v11; // rdx
  _DWORD *v12; // r8
  int v13; // r15d
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF
  struct DXGKEYEDMUTEX *v22; // [rsp+70h] [rbp+18h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2052);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v9 = (__int64 *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (__int64 *)MmUserProbeAddress;
    v23 = *v9;
    v22 = 0LL;
    v21 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress);
    v13 = DXGGLOBAL::OpenKeyedMutex(v10, v23, &v22, &v21, 0LL, 0);
    if ( v13 >= 0 )
    {
      v12 = (_DWORD *)(a1 + 4);
      v11 = MmUserProbeAddress;
      if ( a1 + 4 >= MmUserProbeAddress )
        v12 = (_DWORD *)MmUserProbeAddress;
      *v12 = v21;
    }
    if ( v13 < 0 )
    {
      v20 = v21;
      if ( v21 )
        DXGKEYEDMUTEX::DestroyHandle(v21, v11);
    }
    else
    {
      v14 = v21;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 200));
      v15 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v15 < *((_DWORD *)Current + 60) )
      {
        v16 = *((_QWORD *)Current + 28);
        v17 = ((unsigned int)v14 >> 25) & 0x60;
        if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
          && (*(_DWORD *)(v16 + 16 * v15 + 8) & 0x1F) != 0 )
        {
          v18 = 2 * ((v14 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v16 + 8 * v18 + 8) & 0x2000) == 0 )
          {
            v19 = WdLogNewEntry5_WdAssertion(v17);
            *(_QWORD *)(v19 + 24) = 191LL;
            WdLogEvent5_WdAssertion(v19);
          }
          *(_DWORD *)(*((_QWORD *)Current + 28) + 8 * v18 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 26) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 200, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, (__int64)v12, 2052);
    return (unsigned int)v13;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v7, 2052);
    return 3221225485LL;
  }
}
