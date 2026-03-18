/*
 * XREFs of MmGetSectionInformation @ 0x1404ECBAC
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x140436098 (AlpcpMapLegacyPortView.c)
 *     NtQuerySection @ 0x1404458F0 (NtQuerySection.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     PspLocateSystemDll @ 0x1405B8A80 (PspLocateSystemDll.c)
 *     DbgkpSendErrorMessage @ 0x140681320 (DbgkpSendErrorMessage.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x140025C34 (MiGetControlAreaLoadConfig.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiRelocateAmount @ 0x140423A60 (MiRelocateAmount.c)
 */

__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v6; // rdi
  int v7; // r8d
  __int16 v8; // r9
  unsigned int v9; // r11d
  __int128 *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  _DWORD *ControlAreaLoadConfig; // rax
  unsigned int v16; // edx
  bool v17; // cf
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // r10d
  int v22; // ecx
  int v23; // edx
  unsigned __int16 v24; // r8
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  __int128 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+70h] [rbp-18h]

  v6 = (_DWORD *)MiSectionControlArea(a1);
  if ( !a2 )
  {
    v22 = ((v8 & 0x20) << 19) | 0x200000;
    if ( (v8 & 0x40) == 0 )
      v22 = (v8 & 0x20) << 19;
    v23 = v22 | 0x800000;
    if ( (v8 & 0x80u) == 0 )
      v23 = v22;
    v24 = *(_WORD *)(*(_QWORD *)v6 + 12LL);
    v25 = v23 | 0x10000000;
    if ( v24 < 0x8000u )
      v25 = v23;
    v26 = v25 | 0x40000000;
    if ( (v24 & 0x4000) == 0 )
      v26 = v25;
    v27 = v26 | 0x4000000;
    if ( (v8 & 0x1000) == 0 )
      v27 = v26;
    v7 = v27 | 0x8000000;
    if ( (v8 & 0x2000) == 0 )
      v7 = v27;
    if ( (v6[14] & 0x20020) == 0x20020 )
      v7 |= 0x20000000u;
  }
  if ( !a2 )
  {
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 24) << 12;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a3 + 8) = v7;
    return v9;
  }
  if ( a2 != 1 && a2 != 4 )
  {
    if ( (v8 & 0x20) != 0 )
    {
      v19 = MiRelocateAmount((__int64)v6, 0);
      if ( a2 == 2 )
      {
        if ( (v20 & v6[14]) != 0 )
          v19 += qword_14036C180 - *(_QWORD *)(*(_QWORD *)v6 + 32LL);
        *(_QWORD *)a3 = v19;
      }
      else
      {
        *(_QWORD *)a3 = *(_QWORD *)(*(_QWORD *)v6 + 32LL) - v19;
      }
      return v9;
    }
    return (unsigned int)-1073741751;
  }
  if ( (v8 & 0x20) == 0 )
    return (unsigned int)-1073741751;
  v10 = *(__int128 **)(*(_QWORD *)v6 + 56LL);
  v11 = *v10;
  v28 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  if ( (v6[14] & 0x10000000) != 0 )
  {
    *(_QWORD *)&v28 = qword_14036C180 | (unsigned __int16)v28;
    v11 = v28;
  }
  if ( a2 == 4 )
  {
    ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig((__int64)v6);
    LODWORD(v29) = v9;
    if ( ControlAreaLoadConfig )
    {
      v17 = (*ControlAreaLoadConfig & 0x100) != 0;
      v18 = v9;
      if ( v17 )
        v18 = v16;
      LODWORD(v29) = v18;
    }
    *(_OWORD *)a3 = v11;
    *(_OWORD *)(a3 + 16) = v12;
    *(_OWORD *)(a3 + 32) = v13;
    *(_OWORD *)(a3 + 48) = v14;
    *(_QWORD *)(a3 + 64) = v29;
  }
  else
  {
    *(_OWORD *)a3 = v11;
    *(_OWORD *)(a3 + 16) = v12;
    *(_OWORD *)(a3 + 32) = v13;
    *(_OWORD *)(a3 + 48) = v14;
  }
  return v9;
}
