/*
 * XREFs of ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00EC5B4
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00EFC44 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFD48 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

_QWORD *__fastcall CCD_TOPOLOGY::SetUsedReservedFields(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int i; // esi
  _QWORD *result; // rax
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  _OWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF

  for ( i = 0; i < *(unsigned __int16 *)(*(_QWORD *)(a1 + 64) + 20LL); *(_DWORD *)(v10 + *(_QWORD *)(a1 + 64) + 240) = a3 )
  {
    memset(v13, 0, 0x28uLL);
    v8 = i++;
    v9 = v13[1];
    v10 = 264 * v8;
    v11 = *(_QWORD *)(a1 + 64);
    *(_OWORD *)(v10 + v11 + 240) = v13[0];
    v12 = *(_QWORD *)&v13[2];
    *(_OWORD *)(v10 + v11 + 256) = v9;
    *(_QWORD *)(v10 + v11 + 272) = v12;
  }
  result = a2;
  *(_DWORD *)(a1 + 88) = a3;
  *a2 = a1;
  return result;
}
