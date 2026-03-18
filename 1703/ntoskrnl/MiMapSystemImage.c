/*
 * XREFs of MiMapSystemImage @ 0x1404B12D8
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiAddMappedPtes @ 0x1404976A0 (MiAddMappedPtes.c)
 *     MiChargeSystemImageCommitment @ 0x1404B0FE4 (MiChargeSystemImageCommitment.c)
 *     MiDeleteSessionDriverProtos @ 0x140585040 (MiDeleteSessionDriverProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406BDE0C (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  __int64 v6; // rsi
  char v7; // r8
  int v8; // ebp
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 *PteAddress; // rax
  int v12; // r12d
  unsigned int SessionId; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  v5 = (_DWORD *)MiSectionControlArea(a1);
  v6 = *(unsigned int *)(*(_QWORD *)v5 + 8LL);
  if ( (v7 & 1) == 0 )
  {
    v8 = 1;
    v9 = -1;
    result = MiChargeSystemImageCommitment(v4);
    if ( (int)result < 0 )
      return result;
LABEL_3:
    PteAddress = (__int64 *)MiGetPteAddress(a2);
    v12 = MiAddMappedPtes(PteAddress, v6, (__int64)v5, &v16, v9);
    if ( v12 < 0 )
    {
      if ( v8 == 1 )
      {
        MiChargeSystemImageCommitment(a1);
      }
      else if ( (v5[14] & 0x4000000) != 0 )
      {
        MiDereferencePerSessionProtos(v5);
      }
      if ( (unsigned int)MiGetSystemRegionType(a2) == 1 && a2 != *(_QWORD *)(*(_QWORD *)v5 + 32LL) )
        MiDeleteSessionDriverProtos(v5);
      return (unsigned int)v12;
    }
    else
    {
      if ( v8 == 1 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_14036C0E0 + 3, v6);
      return 0LL;
    }
  }
  v8 = 0;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  v9 = SessionId;
  if ( (v5[14] & 0x4000000) != 0 )
  {
    result = MiCreatePerSessionProtos(v5, SessionId);
    if ( (int)result < 0 )
      return result;
  }
  MiGetPteAddress((v6 << 12) + a2 - 1);
  v14 = MiGetPteAddress(a2);
  if ( (unsigned int)MiMakeZeroedPageTables(v14, v15, 1, 1) )
    goto LABEL_3;
  if ( (v5[14] & 0x4000000) != 0 )
    MiDereferencePerSessionProtos(v5);
  return 3221225495LL;
}
