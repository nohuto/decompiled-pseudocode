/*
 * XREFs of BiCreateObject @ 0x1407E1B88
 * Callers:
 *     BcdCreateObject @ 0x1407E17D0 (BcdCreateObject.c)
 *     BiBindEfiEntryToBcdObject @ 0x1407E32B0 (BiBindEfiEntryToBcdObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x14052FD70 (ExUuidCreate.c)
 *     BiCreateKey @ 0x140608544 (BiCreateKey.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x140609804 (BiIsObjectAliased.c)
 *     BiIsValidObject @ 0x1407E1EB0 (BiIsValidObject.c)
 *     BiSetObjectDescription @ 0x1407E1F40 (BiSetObjectDescription.c)
 */

NTSTATUS __fastcall BiCreateObject(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r9
  void *v8; // rsi
  void *v9; // rdi
  unsigned int v10; // r10d
  __int64 v11; // r11
  _QWORD *v12; // r11
  int v13; // ebx
  GUID *p_Uuid; // r11
  NTSTATUS result; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  bool v19; // [rsp+30h] [rbp-50h] BYREF
  void *v20; // [rsp+38h] [rbp-48h] BYREF
  void *v21; // [rsp+40h] [rbp-40h] BYREF
  void *v22; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING GuidString; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+60h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-18h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  *a5 = 0LL;
  v6 = a3[1];
  GuidString.Buffer = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  BiLogMessage(2LL, L"Creating object. Version: %d. Type: 0x%08x", *a3, v6);
  if ( !(unsigned __int8)BiIsValidObject(a3, v11, v10) )
    return -1073741637;
  if ( v12 )
  {
    if ( BiIsObjectAliased(v12, &v24) )
      return -1073741773;
  }
  else
  {
    BiLogMessage(2LL, L"Generating object GUID.");
    result = ExUuidCreate(&Uuid);
    if ( result < 0 )
      return result;
    p_Uuid = &Uuid;
  }
  v13 = RtlStringFromGUIDEx(p_Uuid, &GuidString, 1u);
  if ( v13 >= 0 )
  {
    BiLogMessage(2LL, L"Object GUID: %s", GuidString.Buffer);
    v17 = BiOpenKey(a1, L"Objects", v16 + 2, &v21);
    v8 = v21;
    v13 = v17;
    if ( v17 >= 0 )
    {
      v18 = BiCreateKey((__int64)v21, GuidString.Buffer, 0xF003Fu, 0, &v20, &v19);
      v9 = v20;
      v13 = v18;
      if ( v18 >= 0 )
      {
        v13 = BiSetObjectDescription(v20, a3);
        if ( v13 >= 0 )
        {
          v13 = BiCreateKey((__int64)v9, L"Elements", 0x20019u, 0, &v22, &v19);
          if ( v13 >= 0 )
          {
            *a5 = v9;
            v13 = 0;
          }
          if ( v22 )
            BiCloseKey(v22);
        }
      }
    }
  }
  if ( GuidString.Buffer )
    RtlFreeAnsiString(&GuidString);
  if ( v13 < 0 && v9 )
    BiCloseKey(v9);
  if ( v8 )
    BiCloseKey(v8);
  return v13;
}
