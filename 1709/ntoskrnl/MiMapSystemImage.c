/*
 * XREFs of MiMapSystemImage @ 0x1404F5F10
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiChargeSystemImageCommitment @ 0x1404F5E38 (MiChargeSystemImageCommitment.c)
 *     MiAddMappedPtes @ 0x1404F7940 (MiAddMappedPtes.c)
 *     MiDeleteSessionDriverProtos @ 0x1405ED4B4 (MiDeleteSessionDriverProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406EB248 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiMapSystemImage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  unsigned int v6; // esi
  char v7; // r8
  int v8; // ebp
  unsigned int v9; // edi
  __int64 result; // rax
  int PteAddress; // eax
  int v12; // r12d
  unsigned int SessionId; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  v5 = (_DWORD *)MiSectionControlArea(a1);
  v6 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
  if ( (v7 & 1) == 0 )
  {
    v8 = 1;
    v9 = -1;
    result = MiChargeSystemImageCommitment(v4);
    if ( (int)result < 0 )
      return result;
LABEL_3:
    PteAddress = MiGetPteAddress(a2);
    v12 = MiAddMappedPtes(PteAddress, v6, (_DWORD)v5, (unsigned int)&v16, v9);
    if ( v12 < 0 )
    {
      if ( v8 == 1 )
      {
        MiChargeSystemImageCommitment(a1);
      }
      else if ( (v5[14] & 0x4000000) != 0 )
      {
        MiDereferencePerSessionProtos(v5, v9);
      }
      if ( (unsigned int)MiGetSystemRegionType(a2) == 1 && a2 != *(_QWORD *)(*(_QWORD *)v5 + 32LL) )
        MiDeleteSessionDriverProtos(v5);
      return (unsigned int)v12;
    }
    else
    {
      if ( v8 == 1 )
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140388420 + 3, v6);
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
  MiGetPteAddress(((unsigned __int64)v6 << 12) + a2 - 1);
  v14 = MiGetPteAddress(a2);
  if ( (unsigned int)MiMakeZeroedPageTables(v14, v15, 1, 1) )
    goto LABEL_3;
  if ( (v5[14] & 0x4000000) != 0 )
    MiDereferencePerSessionProtos(v5, v9);
  return 3221225495LL;
}
