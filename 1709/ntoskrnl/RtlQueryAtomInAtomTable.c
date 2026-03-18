/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1404D4E00
 * Callers:
 *     NtQueryInformationAtom @ 0x14057D5D0 (NtQueryInformationAtom.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x1400A6468 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x140163C60 (_snwprintf_s.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlpLockAtomTable @ 0x1404D2D94 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404D4CAC (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __stdcall RtlQueryAtomInAtomTable(
        PRTL_ATOM_TABLE AtomTable,
        RTL_ATOM Atom,
        PULONG RefCount,
        PULONG PinCount,
        PWSTR AtomName,
        PULONG NameLength)
{
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned int v12; // edi
  ULONG v13; // eax
  unsigned int v14; // esi
  ULONG v15; // eax
  NTSTATUS v17; // [rsp+30h] [rbp-88h]
  wchar_t DstBuf[16]; // [rsp+50h] [rbp-68h] BYREF

  if ( !RtlpLockAtomTable(AtomTable) )
    return -1073741811;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
    {
      v17 = 0;
      if ( RefCount )
        *RefCount = 1;
      if ( PinCount )
        *PinCount = 1;
      if ( AtomName )
      {
        v14 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", Atom);
        v15 = *NameLength;
        if ( v14 >= *NameLength )
        {
          if ( v15 < 2 )
            v14 = 0;
          else
            v14 = v15 - 2;
        }
        if ( v14 )
        {
          memmove(AtomName, DstBuf, v14);
          AtomName[(unsigned __int64)v14 >> 1] = 0;
          *NameLength = v14;
        }
        else
        {
          v17 = -1073741789;
        }
      }
    }
    else
    {
      v17 = -1073741811;
    }
  }
  else
  {
    v17 = -1073741816;
    v10 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTable, Atom & 0x3FFF);
    v11 = v10;
    if ( v10 && *(_WORD *)(v10 + 10) == Atom && RtlpLookupLowBox((__int64)AtomTable, v10, 0) )
    {
      v17 = 0;
      if ( RefCount )
        *RefCount = *(unsigned __int16 *)(v11 + 36);
      if ( PinCount )
        *PinCount = *(unsigned __int16 *)(v11 + 38);
      if ( AtomName )
      {
        v12 = 2 * *(unsigned __int8 *)(v11 + 40);
        v13 = *NameLength;
        if ( v12 >= *NameLength )
        {
          if ( v13 < 2 )
          {
            *NameLength = v12;
            v12 = 0;
          }
          else
          {
            v12 = v13 - 2;
          }
        }
        if ( v12 )
        {
          memmove(AtomName, (const void *)(v11 + 42), v12);
          AtomName[(unsigned __int64)v12 >> 1] = 0;
          *NameLength = v12;
        }
        else
        {
          v17 = -1073741789;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
  KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
  KeLeaveCriticalRegion();
  return v17;
}
