/*
 * XREFs of NtGdiGetAppliedDeviceGammaRamp @ 0x1C00FB0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C003CB30 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003CB80 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042BE8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     ?GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00FAC30 (-GetAppliedGammaRampTable@PDEVOBJ@@QEAAPEAXXZ.c)
 */

__int64 __fastcall NtGdiGetAppliedDeviceGammaRamp(struct HOBJ__ *a1, ULONG64 a2)
{
  ULONG64 v2; // rbx
  unsigned int v4; // r14d
  ULONG v5; // ecx
  char *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edx
  _WORD *v11; // rcx
  __int64 v12; // rsi
  _OWORD *AppliedGammaRampTable; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  DYNAMICMODECHANGESHARELOCK *v16; // rcx
  _BYTE *v17; // rdx
  _OWORD *v18; // rax
  __int64 v19; // [rsp+28h] [rbp-30h] BYREF
  int v20; // [rsp+30h] [rbp-28h]
  int v21; // [rsp+34h] [rbp-24h]
  char v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF
  PERESOURCE v24; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0;
  if ( !a2 )
  {
    v5 = 87;
LABEL_3:
    EngSetLastError(v5);
    return 0LL;
  }
  v7 = (char *)PALLOCMEM2(0x600uLL, 1886221383LL, 0);
  if ( !v7 )
  {
    v5 = 14;
    goto LABEL_3;
  }
  v20 = 0;
  v21 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v19, a1);
  v8 = v19;
  if ( v19 )
  {
    if ( *(_DWORD *)(v19 + 32) )
    {
      EngSetLastError(0x57u);
      v12 = 12LL;
    }
    else
    {
      v4 = 1;
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v22);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v24, (struct XDCOBJ *)&v19);
      v9 = *(_QWORD *)(v8 + 48);
      v23 = v9;
      if ( *(_QWORD *)(v9 + 1712) || *(_QWORD *)(v9 + 1704) )
      {
        AppliedGammaRampTable = PDEVOBJ::GetAppliedGammaRampTable((PDEVOBJ *)&v23);
        v14 = v7;
        v12 = 12LL;
        v15 = 12LL;
        do
        {
          *v14 = *AppliedGammaRampTable;
          v14[1] = AppliedGammaRampTable[1];
          v14[2] = AppliedGammaRampTable[2];
          v14[3] = AppliedGammaRampTable[3];
          v14[4] = AppliedGammaRampTable[4];
          v14[5] = AppliedGammaRampTable[5];
          v14[6] = AppliedGammaRampTable[6];
          v14 += 8;
          *(v14 - 1) = AppliedGammaRampTable[7];
          AppliedGammaRampTable += 8;
          --v15;
        }
        while ( v15 );
      }
      else
      {
        v10 = 0;
        v11 = v7 + 512;
        do
        {
          v11[256] = (_WORD)v10 << 8;
          *v11 = (_WORD)v10 << 8;
          *(v11 - 256) = (_WORD)v10++ << 8;
          ++v11;
        }
        while ( v10 < 0x100 );
        v12 = 12LL;
      }
      NEEDGRELOCK::vUnlock(&v24);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v16);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v19);
  }
  else
  {
    EngSetLastError(0x57u);
    v12 = 12LL;
  }
  if ( v4 )
  {
    if ( (v2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (_BYTE *)v2;
    if ( v2 >= MmUserProbeAddress )
      v17 = (_BYTE *)MmUserProbeAddress;
    *v17 = *v17;
    v17[1535] = v17[1535];
    v18 = v7;
    do
    {
      *(_OWORD *)v2 = *v18;
      *(_OWORD *)(v2 + 16) = v18[1];
      *(_OWORD *)(v2 + 32) = v18[2];
      *(_OWORD *)(v2 + 48) = v18[3];
      *(_OWORD *)(v2 + 64) = v18[4];
      *(_OWORD *)(v2 + 80) = v18[5];
      *(_OWORD *)(v2 + 96) = v18[6];
      v2 += 128LL;
      *(_OWORD *)(v2 - 16) = v18[7];
      v18 += 8;
      --v12;
    }
    while ( v12 );
  }
  Win32FreePool((__int64)v7);
  return v4;
}
