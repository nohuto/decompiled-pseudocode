/*
 * XREFs of MiGetPageFileSectionForReservation @ 0x140150C40
 * Callers:
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiReferencePfBackedSection @ 0x140083410 (MiReferencePfBackedSection.c)
 *     MiReleasePageFileSectionInfo @ 0x140150C04 (MiReleasePageFileSectionInfo.c)
 */

__int64 __fastcall MiGetPageFileSectionForReservation(unsigned __int64 a1, __int64 a2, int a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v6 = MiReferencePfBackedSection(a1);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)a2 = *v6;
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)(a2 + 16) = a1 & 0xFFFFFFFFFFFFF000uLL;
    v9 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    *(_QWORD *)(a2 + 24) = v9;
    v10 = v7[1];
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) < v10 )
      v8 = v7[1];
    *(_QWORD *)(a2 + 16) = v8;
    v11 = v10 + 8LL * (unsigned int)(*((_DWORD *)v7 + 11) - 1);
    if ( v9 > v11 )
      v9 = v11;
    *(_QWORD *)(a2 + 24) = v9;
    if ( !a3 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      return 1LL;
    }
    v12 = MiLockProtoPoolPage(a1, (unsigned __int8 *)(a2 + 32));
    *(_QWORD *)(a2 + 8) = v12;
    if ( v12 )
      return 1LL;
    MiReleasePageFileSectionInfo(a2, v13, v14, v15);
  }
  return 0LL;
}
