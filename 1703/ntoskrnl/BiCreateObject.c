/*
 * XREFs of BiCreateObject @ 0x140734C70
 * Callers:
 *     BcdCreateObject @ 0x1407348DC (BcdCreateObject.c)
 *     BiBindEfiEntryToBcdObject @ 0x1407363F8 (BiBindEfiEntryToBcdObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     ExUuidCreate @ 0x14054C980 (ExUuidCreate.c)
 *     BiCreateKey @ 0x14058AF50 (BiCreateKey.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x14058C420 (BiIsObjectAliased.c)
 *     BiIsValidObject @ 0x140734FA8 (BiIsValidObject.c)
 *     BiSetObjectDescription @ 0x140735038 (BiSetObjectDescription.c)
 */

NTSTATUS __fastcall BiCreateObject(__int64 a1, UUID *p_Uuid, unsigned int *a3, unsigned int a4, _QWORD *a5)
{
  __int64 v8; // r9
  __int64 v10; // r8
  HANDLE v11; // rsi
  HANDLE v12; // rdi
  int v13; // ebx
  NTSTATUS result; // eax
  NTSTATUS v15; // eax
  wchar_t *Buffer; // r14
  int v17; // eax
  int v18; // eax
  bool v19; // [rsp+30h] [rbp-50h] BYREF
  HANDLE v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-38h] BYREF
  int v23; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-28h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-18h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  *a5 = 0LL;
  v8 = a3[1];
  v10 = *a3;
  v11 = 0LL;
  GuidString.Buffer = 0LL;
  v12 = 0LL;
  BiLogMessage(2u, L"Creating object. Version: %d. Type: 0x%08x", v10, v8);
  if ( !(unsigned __int8)BiIsValidObject(a3, p_Uuid, a4) )
    return -1073741637;
  if ( p_Uuid )
  {
    if ( BiIsObjectAliased(p_Uuid, &v23) )
      return -1073741773;
  }
  else
  {
    BiLogMessage(2u, L"Generating object GUID.");
    result = ExUuidCreate(&Uuid);
    if ( result < 0 )
      return result;
    p_Uuid = &Uuid;
  }
  v15 = RtlStringFromGUIDEx(p_Uuid, &GuidString, 1u);
  Buffer = GuidString.Buffer;
  v13 = v15;
  if ( v15 >= 0 )
  {
    BiLogMessage(2u, L"Object GUID: %s", GuidString.Buffer);
    v17 = BiOpenKey(a1, L"Objects", 4u, (HANDLE *)&v21);
    v11 = (HANDLE)v21;
    v13 = v17;
    if ( v17 >= 0 )
    {
      v18 = BiCreateKey(v21, Buffer, 0xF003Fu, 0, &v20, &v19);
      v12 = v20;
      v13 = v18;
      if ( v18 >= 0 )
      {
        v13 = BiSetObjectDescription(v20, a3);
        if ( v13 >= 0 )
        {
          v13 = BiCreateKey((__int64)v12, L"Elements", 0x20019u, 0, &Handle, &v19);
          if ( v13 >= 0 )
          {
            *a5 = v12;
            v13 = 0;
          }
          if ( Handle )
            BiCloseKey(Handle);
        }
      }
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&GuidString);
  if ( v13 < 0 && v12 )
    BiCloseKey(v12);
  if ( v11 )
    BiCloseKey(v11);
  return v13;
}
