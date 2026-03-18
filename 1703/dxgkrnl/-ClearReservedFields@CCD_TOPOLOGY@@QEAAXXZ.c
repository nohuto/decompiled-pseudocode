/*
 * XREFs of ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EC524
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00EFC44 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFD48 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C016CC44 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
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

  for ( i = 0; i < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); *(_QWORD *)(v5 + v6 + 272) = v7 )
  {
    memset(v8, 0, 0x28uLL);
    v3 = i++;
    v4 = v8[1];
    v5 = 264 * v3;
    v6 = *((_QWORD *)this + 8);
    *(_OWORD *)(v5 + v6 + 240) = v8[0];
    v7 = *(_QWORD *)&v8[2];
    *(_OWORD *)(v5 + v6 + 256) = v4;
  }
  *((_DWORD *)this + 22) = 0;
}
