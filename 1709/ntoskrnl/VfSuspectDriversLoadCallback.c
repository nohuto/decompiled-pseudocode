/*
 * XREFs of VfSuspectDriversLoadCallback @ 0x1407BD64C
 * Callers:
 *     VfDriverLoadImage @ 0x1407A2174 (VfDriverLoadImage.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     VfTargetDriversRemove @ 0x1400F8F58 (VfTargetDriversRemove.c)
 *     VfTargetDriversAdd @ 0x1400F9990 (VfTargetDriversAdd.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x1407A2530 (VfDriverLock.c)
 *     VfUtilPrintCheckinString @ 0x1407A6F0C (VfUtilPrintCheckinString.c)
 *     VfCheckImageCompliance @ 0x1407A7DD4 (VfCheckImageCompliance.c)
 *     VfNotifyVerifierExtensions @ 0x1407A8F68 (VfNotifyVerifierExtensions.c)
 *     VfThunkApplyMandatoryThunks @ 0x1407B6038 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1407B610C (VfThunkApplyThunks.c)
 *     VfTargetDriversEnableVerifier @ 0x1407B6A98 (VfTargetDriversEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x1407BD394 (VfSuspectDriversAllocateEntry.c)
 */

LONG __fastcall VfSuspectDriversLoadCallback(__int64 a1, __int64 Entry, int a3, unsigned int a4)
{
  int v8; // esi
  __int64 i; // r14
  __int64 j; // r14
  int v11; // ebp
  BOOLEAN v12; // al
  int v13; // eax
  __int64 *v14; // rax
  int v15; // eax
  LONG result; // eax

  v8 = 0;
  VfDriverLock();
  if ( (VfOptionFlags & 1) != 0 )
  {
    for ( i = VfExcludedDriversList; (__int64 *)i != &VfExcludedDriversList; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_57;
    }
  }
  if ( (MmVerifyDriverLevel & 0xFF8000) != 0 )
  {
    for ( j = VfXdvExcludedDriversList; (__int64 *)j != &VfXdvExcludedDriversList; j = *(_QWORD *)j )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_57;
    }
  }
  if ( RtlEqualUnicodeString(&VfTcpIpName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTcpIpDllBase = *(_QWORD *)(a1 + 48);
    VfTcpIpSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTdxDllBase = *(_QWORD *)(a1 + 48);
    VfTdxSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfMrxsmbDllBase = *(_QWORD *)(a1 + 48);
    VfMrxsmbSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTmName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfTmDllBase = *(_QWORD *)(a1 + 48);
    VfTmSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfWin32kDllBase = *(_QWORD *)(a1 + 48);
    VfWin32kSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfKsName, (PCUNICODE_STRING)(a1 + 88), 1u) == 1 )
  {
    VfKsDllBase = *(_QWORD *)(a1 + 48);
    VfKsSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  if ( a3 || (v8 = VfThunkApplyMandatoryThunks(a1, a4)) != 0 )
  {
    if ( Entry )
    {
LABEL_44:
      v11 = 1;
LABEL_45:
      if ( a4 )
      {
        if ( v11 )
          v15 = VfTargetDriversEnableVerifier(*(_QWORD *)(a1 + 48), Entry);
        else
          v15 = 1;
      }
      else
      {
        v15 = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), Entry);
      }
      if ( v11 || (v8 = 0, KernelVerifier) )
      {
        v8 = 0;
        if ( v15 )
        {
          v8 = VfThunkApplyThunks(a1, a4);
          if ( v8 )
          {
            if ( v11 )
            {
              VfUtilPrintCheckinString((unsigned __int16 *)(a1 + 88));
              VfCheckImageCompliance(a1);
              ++dword_14036A0F0;
              ++*(_DWORD *)(Entry + 16);
              VfNotifyVerifierExtensions(1, a1);
            }
          }
          else
          {
            VfTargetDriversRemove(a1);
          }
        }
      }
      goto LABEL_57;
    }
    Entry = VfSuspectDriversList;
    v11 = 0;
    while ( (__int64 *)Entry != &VfSuspectDriversList )
    {
      v12 = RtlEqualUnicodeString((PCUNICODE_STRING)(Entry + 24), (PCUNICODE_STRING)(a1 + 88), 1u);
      v11 = v12;
      if ( v12 )
        goto LABEL_45;
      Entry = *(_QWORD *)Entry;
    }
    if ( KernelVerifier )
    {
      if ( !a3 )
      {
        v13 = ViForceAllDriversSuspect;
        goto LABEL_41;
      }
    }
    else if ( ViVerifyAllDrivers != 1 )
    {
      if ( !VfRandomVerifiedDrivers
        || (++ViLoadedDriversCount, !_bittest((const signed __int32 *)qword_1407D5250, ViLoadedDriversCount)) )
      {
        v13 = 0;
LABEL_41:
        if ( !v13 )
        {
          Entry = 0LL;
          goto LABEL_45;
        }
        goto LABEL_37;
      }
      --VfRandomVerifiedDrivers;
    }
LABEL_37:
    Entry = (__int64)VfSuspectDriversAllocateEntry((const void **)(a1 + 88));
    if ( !Entry )
      goto LABEL_45;
    v14 = (__int64 *)qword_140362068;
    if ( *(__int64 **)qword_140362068 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)Entry = &VfSuspectDriversList;
    *(_QWORD *)(Entry + 8) = v14;
    *v14 = Entry;
    qword_140362068 = Entry;
    goto LABEL_44;
  }
LABEL_57:
  ViDriversLoadLockOwner = 0LL;
  result = KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v8 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return result;
}
