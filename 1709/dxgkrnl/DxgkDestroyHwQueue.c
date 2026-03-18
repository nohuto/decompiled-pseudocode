/*
 * XREFs of DxgkDestroyHwQueue @ 0x1C01AD4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x1C0015860 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  struct DXGPROCESS *Current; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned int v7; // r14d
  unsigned int v8; // r9d
  int v9; // esi
  DXGHWQUEUE *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  _BYTE v16[48]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+68h] [rbp+10h]

  v3 = (unsigned int *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2154);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v17 = *v3;
  Current = DXGPROCESS::GetCurrent(MmUserProbeAddress, a2);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v16, Current);
  v6 = (v17 >> 6) & 0xFFFFFF;
  v7 = *((_DWORD *)Current + 60);
  if ( (unsigned int)v6 < v7
    && (v5 = *((_QWORD *)Current + 28),
        v8 = *(_DWORD *)(v5 + 16LL * (unsigned int)v6 + 8),
        v9 = (v8 >> 5) & 3,
        v17 >> 30 == v9)
    && (v8 & 0x2000) == 0
    && (v8 & 0x1F) != 0
    && (*(_BYTE *)(v5 + 16LL * (unsigned int)v6 + 8) & 0x1F) == 0xF
    && (v10 = *(DXGHWQUEUE **)(v5 + 16LL * (unsigned int)v6)) != 0LL )
  {
    if ( (unsigned int)v6 < v7 && v17 >> 30 == v9 )
      *(_DWORD *)(v5 + 16LL * ((v17 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    DXGHWQUEUE::ReleaseReference(v10);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, 2154);
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v6, v17, v5);
    *(_QWORD *)(v14 + 24) = v17;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v15, 2154);
    return 3221225485LL;
  }
}
