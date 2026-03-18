/*
 * XREFs of KsepRegistryOpenKey @ 0x1405463CC
 * Callers:
 *     KsepDbQueryRegistryDeviceData @ 0x1404F5170 (KsepDbQueryRegistryDeviceData.c)
 *     KsepRegistryQueryDriverShims @ 0x1405461C0 (KsepRegistryQueryDriverShims.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1406DAE38 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepMatchInitBiosInfo @ 0x14083F264 (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x14083F4A4 (KsepEngineReadFlags.c)
 * Callees:
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     RtlAssert @ 0x1402538E0 (RtlAssert.c)
 *     KsepStringConcatenate @ 0x140546278 (KsepStringConcatenate.c)
 *     KsepStringDuplicate @ 0x1405464B4 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x140546878 (KsepStringFree.c)
 */

__int64 __fastcall KsepRegistryOpenKey(_WORD *a1, _WORD *a2, HANDLE *a3)
{
  int v6; // eax
  NTSTATUS v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF

  v11 = 0;
  v12 = 0LL;
  if ( !a1 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 262566;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("EnginePath != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A6u, 0LL);
  }
  if ( !a3 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v10 + 1] = -1073740768;
    KsepHistoryErrors[2 * v10] = 262567;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Handle != NULL", "minkernel\\ntos\\kshim\\kseregistry.c", 0x1A7u, 0LL);
  }
  if ( a2 )
    v6 = KsepStringConcatenate((__int64)&v11, a1, a2, 1);
  else
    v6 = KsepStringDuplicate(&v11, a1);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v7 >= 0 )
    {
      *a3 = KeyHandle;
      _InterlockedIncrement(&dword_14036A258);
    }
  }
  KsepStringFree(&v11);
  return (unsigned int)v7;
}
