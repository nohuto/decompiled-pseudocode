/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x1405AFFF8
 * Callers:
 *     BcdOpenStore @ 0x1405AE300 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x1405AE6E4 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x1405AE960 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x14072FA34 (SepSecureBootCorrectBcd.c)
 *     BcdFlushStore @ 0x140778A44 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140778AAC (BcdForciblyUnloadStore.c)
 *     BcdCreateObject @ 0x140778B64 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140778BFC (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x140778C58 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x14017D940 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenMutant @ 0x14017FC20 (ZwOpenMutant.c)
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
