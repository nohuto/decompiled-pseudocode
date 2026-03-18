/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C01C0FB0
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

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _OWORD *v13; // rax
  __int64 v14; // rax
  DXGGLOBAL *Global; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // r14d
  _DWORD *v19; // r8
  DXGKEYEDMUTEX *v20; // r9
  int v21; // r8d
  _DWORD *v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30[2]; // [rsp+48h] [rbp-50h]
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v31[4]; // [rsp+58h] [rbp-40h]
  unsigned int v32; // [rsp+A8h] [rbp+10h] BYREF
  int v33; // [rsp+B0h] [rbp+18h]
  DXGKEYEDMUTEX *v34; // [rsp+B8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2066);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    v10 = qword_1C005F010;
    v11 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v10, &EventProfilerExit, v9, 2066);
    return 3221225485LL;
  }
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v30 = *v13;
  *(_OWORD *)&v31[0].0 = v13[1];
  if ( (v31[3].Value & 0xFFFFFFFE) != 0 )
  {
    v14 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v7);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    v11 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  v32 = 0;
  v34 = 0LL;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress);
  v18 = DXGGLOBAL::CreateKeyedMutex(Global, v30[0], &v34, &v32, *(char **)&v31[0].0, v31[2].Value, v31[3]);
  if ( v18 >= 0 )
  {
    v19 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = v32;
    v20 = v34;
    v21 = *((_DWORD *)v34 + 8);
    v33 = v21;
    v22 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = v21;
    DXGKEYEDMUTEX::ReleaseReference(v20);
  }
  if ( v18 < 0 )
  {
    v29 = v32;
    if ( v32 )
      DXGKEYEDMUTEX::DestroyHandle(v32, v16);
  }
  else
  {
    v23 = v32;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 200));
    v24 = ((unsigned int)v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)Current + 60) )
    {
      v25 = *((_QWORD *)Current + 28);
      v26 = ((unsigned int)v23 >> 25) & 0x60;
      if ( (((unsigned int)v23 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60)
        && (*(_DWORD *)(v25 + 16 * v24 + 8) & 0x1F) != 0 )
      {
        v27 = 2 * ((v23 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v25 + 8 * v27 + 8) & 0x2000) == 0 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v28 + 24) = 191LL;
          WdLogEvent5_WdAssertion(v28);
        }
        *(_DWORD *)(*((_QWORD *)Current + 28) + 8 * v27 + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 26) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 200, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v17, 2066);
  return (unsigned int)v18;
}
