/*
 * XREFs of sub_1800FD780 @ 0x1800FD780
 * Callers:
 *     RtlQueryHeapInformation @ 0x18005FC60 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800FD868 @ 0x1800FD868 (sub_1800FD868.c)
 *     sub_18010CEA0 @ 0x18010CEA0 (sub_18010CEA0.c)
 */

__int64 __fastcall sub_1800FD780(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v6; // ebx

  v3 = 0;
  if ( a2 != 32 || *(_DWORD *)a1 != 1 )
  {
    v6 = -1073741811;
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a1 + 8) == -1LL )
  {
    v3 = 1;
    RtlAcquireSRWLockShared(&stru_18015D2E0);
    if ( (dword_18015D2E8 & 1) == 0 || (dword_18015D2E8 & 2) == 0 )
    {
      v6 = -1073741811;
      goto LABEL_15;
    }
    v6 = sub_18010CEA0(&qword_18015D2F0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
    if ( v6 < 0 )
      goto LABEL_15;
    v6 = sub_180060204((__int64 (__fastcall *)(_QWORD, _QWORD))sub_1800FD510, a1, 0);
    if ( v6 < 0 )
      goto LABEL_15;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 16))(0LL, 0LL, *(_QWORD *)(a1 + 24));
    if ( v6 < 0 )
      goto LABEL_15;
    v6 = 0;
    if ( a3 )
      goto LABEL_15;
LABEL_14:
    if ( !v3 )
      return (unsigned int)v6;
LABEL_15:
    RtlReleaseSRWLockShared(&stru_18015D2E0);
    return (unsigned int)v6;
  }
  return (unsigned int)sub_1800FD868();
}
