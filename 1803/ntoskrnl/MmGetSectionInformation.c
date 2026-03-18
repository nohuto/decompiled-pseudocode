/*
 * XREFs of MmGetSectionInformation @ 0x1404F91C0
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     AlpcpMapLegacyPortView @ 0x1405563C4 (AlpcpMapLegacyPortView.c)
 *     NtQuerySection @ 0x14057121C (NtQuerySection.c)
 *     PspLocateSystemDll @ 0x14063B288 (PspLocateSystemDll.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x14003E604 (MiGetControlAreaLoadConfig.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 */

__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2)
{
  int v4; // esi
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  __int128 *v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int64 v14; // rdx
  __int64 v15; // rdx
  _BYTE *ControlAreaLoadConfig; // rax
  int v17; // edx
  __int64 v18; // r8
  bool v19; // zf
  int v20; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  __int16 v26; // cx
  int v27; // eax
  __int128 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+70h] [rbp-18h]

  v4 = *(_DWORD *)(a1 + 56);
  v8 = MiSectionControlArea(a1);
  if ( !a2 )
  {
    v22 = ((v4 & 0x1000) << 14) | 0x8000000;
    if ( (v4 & 0x2000) == 0 )
      v22 = (v4 & 0x1000) << 14;
    if ( (v4 & 0x20) != 0 )
      v22 = 0x1000000;
    v23 = v22 | 0x200000;
    if ( (v4 & 0x40) == 0 )
      v23 = v22;
    v24 = v23 | 0x800000;
    if ( (v4 & 0x80u) == 0 )
      v24 = v23;
    v25 = v24 | 0x80000;
    if ( v4 >= 0 )
      v25 = v24;
    v26 = *(_WORD *)(*(_QWORD *)v8 + 12LL);
    v27 = v25 | 0x10000000;
    if ( v26 >= 0 )
      v27 = v25;
    v6 = v27 | 0x40000000;
    if ( (v26 & 0x4000) == 0 )
      v6 = v27;
    if ( (*(_DWORD *)(v8 + 56) & 0x20020) == 0x20020 )
      v6 |= 0x20000000u;
  }
  if ( !a2 )
  {
    *(_QWORD *)v5 = *(_QWORD *)(a1 + 24) << 12;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(v5 + 8) = v6;
    return (unsigned int)v7;
  }
  if ( a2 != 1 && a2 != 4 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 32LL);
      if ( v14 )
        v15 = *(_QWORD *)(v14 + 40);
      else
        v15 = v7;
      if ( a2 == 2 )
      {
        if ( (*(_DWORD *)(v8 + 56) & 0x10000000) != 0 )
          v15 += qword_1403CB648 - *(_QWORD *)(*(_QWORD *)v8 + 32LL);
        *(_QWORD *)v5 = v15;
      }
      else
      {
        *(_QWORD *)v5 = *(_QWORD *)(*(_QWORD *)v8 + 32LL) - v15;
      }
      return (unsigned int)v7;
    }
LABEL_25:
    LODWORD(v7) = -1073741751;
    return (unsigned int)v7;
  }
  if ( (v4 & 0x20) == 0 )
    goto LABEL_25;
  v9 = *(__int128 **)(*(_QWORD *)v8 + 56LL);
  v10 = *v9;
  v28 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  if ( (*(_DWORD *)(v8 + 56) & 0x10000000) != 0 )
  {
    *(_QWORD *)&v28 = qword_1403CB648 | (unsigned __int16)v28;
    v10 = v28;
  }
  if ( a2 == 4 )
  {
    ControlAreaLoadConfig = (_BYTE *)MiGetControlAreaLoadConfig(v8);
    LODWORD(v29) = v7;
    if ( ControlAreaLoadConfig )
    {
      v19 = (*ControlAreaLoadConfig & 0x10) == 0;
      v20 = v7;
      if ( !v19 )
        v20 = v17;
      LODWORD(v29) = v20;
    }
    *(_OWORD *)v18 = v10;
    *(_OWORD *)(v18 + 16) = v11;
    *(_OWORD *)(v18 + 32) = v12;
    *(_OWORD *)(v18 + 48) = v13;
    *(_QWORD *)(v18 + 64) = v29;
  }
  else
  {
    *(_OWORD *)v5 = v10;
    *(_OWORD *)(v5 + 16) = v11;
    *(_OWORD *)(v5 + 32) = v12;
    *(_OWORD *)(v5 + 48) = v13;
  }
  return (unsigned int)v7;
}
