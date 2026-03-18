/*
 * XREFs of ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DC7BC
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00DB780 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00E0B7C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C0170368 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C01F9810 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

void __fastcall CCD_TOPOLOGY::ClearReservedFields(CCD_TOPOLOGY *this)
{
  unsigned int i; // edi
  __int64 v3; // rax
  __int128 v4; // xmm1
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // xmm0_8
  _OWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF

  for ( i = 0; i < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); *(_QWORD *)(v5 + v6 + 304) = v7 )
  {
    memset(v8, 0, 0x28uLL);
    v3 = i++;
    v4 = v8[1];
    v5 = 264 * v3;
    v6 = *((_QWORD *)this + 8);
    *(_OWORD *)(v5 + v6 + 272) = v8[0];
    v7 = *(_QWORD *)&v8[2];
    *(_OWORD *)(v5 + v6 + 288) = v4;
  }
  *((_DWORD *)this + 22) = 0;
}
