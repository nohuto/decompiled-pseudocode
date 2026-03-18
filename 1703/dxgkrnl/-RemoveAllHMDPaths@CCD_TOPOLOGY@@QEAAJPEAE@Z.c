/*
 * XREFs of ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C00EBA90
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00EE258 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveAllHMDPaths(__int64 this, unsigned __int8 *a2)
{
  __int64 v2; // r8
  unsigned __int8 *v3; // r11
  __int64 v4; // r9
  unsigned int v5; // ebx
  CCD_TOPOLOGY *v6; // rdi
  __int64 v7; // r10
  unsigned __int16 v8; // ax
  __int64 v10; // rax
  _OWORD *v11; // r10
  __int128 v12; // xmm0
  __int64 v13; // rax

  v2 = 0LL;
  v3 = a2;
  v4 = 0LL;
  v5 = 0;
  v6 = (CCD_TOPOLOGY *)this;
  while ( 1 )
  {
    v7 = *((_QWORD *)v6 + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( (unsigned int)v4 >= v8 )
      break;
    a2 = (unsigned __int8 *)(264LL * (unsigned int)v4 + v7 + 48);
    this = 0x1000000000LL;
    if ( (*(_QWORD *)a2 & 0x1000000000LL) != 0 )
    {
      *v3 = 1;
    }
    else
    {
      if ( (_DWORD)v4 != v5 )
      {
        this = 264LL * v5;
        v10 = 2LL;
        v11 = (_OWORD *)(this + v7 + 48);
        do
        {
          v12 = *(_OWORD *)a2;
          a2 += 128;
          *v11 = v12;
          v11 += 8;
          *(v11 - 7) = *((_OWORD *)a2 - 7);
          *(v11 - 6) = *((_OWORD *)a2 - 6);
          *(v11 - 5) = *((_OWORD *)a2 - 5);
          *(v11 - 4) = *((_OWORD *)a2 - 4);
          *(v11 - 3) = *((_OWORD *)a2 - 3);
          *(v11 - 2) = *((_OWORD *)a2 - 2);
          *(v11 - 1) = *((_OWORD *)a2 - 1);
          --v10;
        }
        while ( v10 );
        *(_QWORD *)v11 = *(_QWORD *)a2;
      }
      ++v5;
    }
    v4 = (unsigned int)(v4 + 1);
  }
  if ( *v3 )
  {
    if ( v7 )
      v2 = *(unsigned __int16 *)(v7 + 22);
    if ( v5 > (unsigned __int16)v2 )
    {
      v13 = WdLogNewEntry5_WdAssertion(this, a2, v2, v4);
      WdLogEvent5_WdAssertion(v13);
    }
    *(_WORD *)(*((_QWORD *)v6 + 8) + 20LL) = v5;
    CCD_TOPOLOGY::ClearModalitySetId(v6);
  }
  return 0LL;
}
