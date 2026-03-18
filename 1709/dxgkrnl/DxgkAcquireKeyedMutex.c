/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1C01C0860
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C01BEB6C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  _QWORD *v7; // r8
  ULONG64 v8; // rcx
  bool v9; // zf
  _OWORD *v11; // rax
  union _LARGE_INTEGER *v12; // r9
  __int64 *v13; // rdx
  __int64 v14; // rax
  size_t v15; // [rsp+30h] [rbp-38h]
  unsigned int v16[4]; // [rsp+40h] [rbp-28h]
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2054);
  if ( DXGPROCESS::GetCurrent(a1, a2) )
  {
    v11 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v16 = *v11;
    v17 = v11[1];
    v12 = 0LL;
    v13 = (__int64 *)v17;
    if ( (_QWORD)v17 )
    {
      if ( (unsigned __int64)v17 >= MmUserProbeAddress )
        v13 = (__int64 *)MmUserProbeAddress;
      v18 = *v13;
      v12 = (union _LARGE_INTEGER *)&v18;
    }
    LODWORD(v15) = 0;
    v6 = DXGKEYEDMUTEX::AcquireSync(
           v16[0],
           *(__int64 *)&v16[2],
           0,
           v12,
           (DXGKEYEDMUTEX *)((char *)&v17 + 8),
           0LL,
           v15,
           0LL);
    if ( v6 >= 0 )
    {
      v7 = (_QWORD *)(a1 + 24);
      v8 = MmUserProbeAddress;
      if ( a1 + 24 >= MmUserProbeAddress )
        v7 = (_QWORD *)MmUserProbeAddress;
      *v7 = *((_QWORD *)&v17 + 1);
    }
    if ( v6 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v14 + 24) = v16[0];
      *(_QWORD *)(v14 + 32) = v6;
      WdLogEvent5_WdError(v14);
    }
    v9 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v4);
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    v8 = qword_1C005F010;
    v9 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, (__int64)v7, 2054);
  return (unsigned int)v6;
}
