/*
 * XREFs of PopEtEnergyContextSetState @ 0x1406D0FDC
 * Callers:
 *     PoSetProcessEnergyTrackingState @ 0x14045BDE8 (PoSetProcessEnergyTrackingState.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406D031C (PoEnergyContextUpdateComponentPower.c)
 * Callees:
 *     RtlStateDurationUpdate @ 0x140234F3C (RtlStateDurationUpdate.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406D0F54 (PopEtEnergyContextProcessStateUpdate.c)
 *     PopEtStringIntern @ 0x1406D33A8 (PopEtStringIntern.c)
 *     PopEtStringSet @ 0x1406D3460 (PopEtStringSet.c)
 *     RtlInternEntryDereference @ 0x1406EF188 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtEnergyContextSetState(_QWORD *a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 v4; // rbx
  char v7; // bp
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // edi
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2[3];
  v3 = a1[229];
  v4 = 0LL;
  v15 = 0LL;
  v7 = 0;
  if ( (v2 & 1) != 0 )
  {
    v8 = a2 + 4;
    v9 = -1LL;
    do
      ++v9;
    while ( *((_WORD *)v8 + v9) );
    if ( v9 )
    {
      v10 = PopEtStringIntern(v8, v9, &v15);
      v4 = v15;
      v11 = v10;
      if ( v10 < 0 )
        goto LABEL_13;
    }
    if ( *(_QWORD *)(v3 + 368) != v4 )
    {
      PopEtStringSet(v3 + 368, v4);
      v7 = 1;
    }
  }
  v12 = *(_DWORD *)(v3 + 376);
  v13 = a2[1] | (unsigned __int16)(v12 & ~(unsigned __int16)*a2);
  if ( (unsigned __int16)v12 != v13 )
  {
    RtlStateDurationUpdate(
      (unsigned __int64 *)(v3 + 120),
      (v13 & 4) != 0,
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v4 = v15;
    v7 = 1;
    *(_WORD *)(v3 + 376) = v13;
  }
  if ( v7 )
    PopEtEnergyContextProcessStateUpdate(a1);
  v11 = 0;
LABEL_13:
  if ( v4 )
    RtlInternEntryDereference(PopEtGlobals + 56);
  return v11;
}
