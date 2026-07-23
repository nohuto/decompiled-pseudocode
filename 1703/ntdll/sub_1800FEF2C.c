/*
 * XREFs of sub_1800FEF2C @ 0x1800FEF2C
 * Callers:
 *     RtlQueryHeapInformation @ 0x180005740 (RtlQueryHeapInformation.c)
 * Callees:
 *     sub_1800059EC @ 0x1800059EC (sub_1800059EC.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800FF018 @ 0x1800FF018 (sub_1800FF018.c)
 *     sub_18010A0AC @ 0x18010A0AC (sub_18010A0AC.c)
 */

__int64 __fastcall sub_1800FEF2C(__int64 a1, __int64 a2, __int64 a3)
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
    RtlAcquireSRWLockShared(&stru_18015C2A0);
    if ( (dword_18015C2A8 & 1) == 0 || (dword_18015C2A8 & 2) == 0 )
    {
      v6 = -1073741811;
      goto LABEL_15;
    }
    v6 = sub_18010A0AC(&dword_18015C2B0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
    if ( v6 < 0 )
      goto LABEL_15;
    v6 = sub_1800059EC((__int64)sub_1800FECE0, a1, 2);
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
    RtlReleaseSRWLockShared(&stru_18015C2A0);
    return (unsigned int)v6;
  }
  return (unsigned int)sub_1800FF018();
}
