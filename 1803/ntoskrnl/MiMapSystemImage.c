/*
 * XREFs of MiMapSystemImage @ 0x1405FB30C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiAddMappedPtes @ 0x1404BC450 (MiAddMappedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x1405EE6C0 (MiDeleteSessionDriverProtos.c)
 *     MiChargeSystemImageCommitment @ 0x1405F8AB4 (MiChargeSystemImageCommitment.c)
 *     MiCreatePerSessionProtos @ 0x140754AFC (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
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
  int v12; // r15d
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
        MiDeleteSessionDriverProtos((__int64)v5);
      return (unsigned int)v12;
    }
    else
    {
      if ( v8 == 1 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_1403CB5A0 + 3, v6);
      return 0LL;
    }
  }
  v8 = 0;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v9 = SessionId;
  if ( (v5[14] & 0x4000000) != 0 )
  {
    result = MiCreatePerSessionProtos(v5, SessionId);
    if ( (int)result < 0 )
      return result;
  }
  MiGetPteAddress((v6 << 12) + a2 - 1);
  v14 = MiGetPteAddress(a2);
  if ( (unsigned int)MiMakeZeroedPageTables(v14, v15, 1u, 1) )
    goto LABEL_3;
  if ( (v5[14] & 0x4000000) != 0 )
    MiDereferencePerSessionProtos(v5);
  return 3221225495LL;
}
