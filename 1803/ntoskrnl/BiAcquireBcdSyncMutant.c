/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x1406091E0
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1405EE29C (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1405EF220 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140606F5C (BcdCloseStore.c)
 *     BcdOpenStore @ 0x1406077C0 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140607C5C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140608500 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1407939B4 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x1407E17D0 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1407E1868 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1407E18C4 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1401A7540 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenMutant @ 0x1401A9860 (ZwOpenMutant.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  HANDLE v1; // rcx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  HANDLE MutantHandle; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+18h] BYREF

  if ( a1 )
    return 0;
  v1 = BcdMutantHandle;
  if ( !BcdMutantHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenMutant(&MutantHandle, 0x100000u, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL) )
        ZwClose(MutantHandle);
    }
    v1 = BcdMutantHandle;
  }
  if ( v1 == (HANDLE)-1LL )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(v1, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
