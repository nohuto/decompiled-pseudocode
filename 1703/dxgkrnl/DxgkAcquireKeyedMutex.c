/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1C01A6B10
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C01A507C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ebx
  _QWORD *v8; // r8
  ULONG64 v9; // rcx
  bool v10; // zf
  _OWORD *v12; // rax
  union _LARGE_INTEGER *v13; // r9
  __int64 *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  size_t v17; // [rsp+30h] [rbp-38h]
  unsigned int v18[4]; // [rsp+40h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-18h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2054);
  if ( DXGPROCESS::GetCurrent(a1) )
  {
    v12 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v18 = *v12;
    v19 = v12[1];
    v13 = 0LL;
    v14 = (__int64 *)v19;
    if ( (_QWORD)v19 )
    {
      if ( (unsigned __int64)v19 >= MmUserProbeAddress )
        v14 = (__int64 *)MmUserProbeAddress;
      v20 = *v14;
      v13 = (union _LARGE_INTEGER *)&v20;
    }
    LODWORD(v17) = 0;
    v7 = DXGKEYEDMUTEX::AcquireSync(
           v18[0],
           *(__int64 *)&v18[2],
           0LL,
           v13,
           (DXGKEYEDMUTEX *)((char *)&v19 + 8),
           0LL,
           v17,
           0LL);
    if ( v7 >= 0 )
    {
      v8 = (_QWORD *)(a1 + 24);
      v9 = MmUserProbeAddress;
      if ( a1 + 24 >= MmUserProbeAddress )
        v8 = (_QWORD *)MmUserProbeAddress;
      *v8 = *((_QWORD *)&v19 + 1);
    }
    if ( v7 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v9, v15);
      *(_QWORD *)(v16 + 24) = v18[0];
      *(_QWORD *)(v16 + 32) = v7;
      WdLogEvent5_WdError(v16);
    }
    v10 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5, v4);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v9 = qword_1C006E790;
    v10 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, (__int64)v8, 2054);
  return (unsigned int)v7;
}
