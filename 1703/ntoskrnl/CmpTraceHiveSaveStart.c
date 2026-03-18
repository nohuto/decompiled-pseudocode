/*
 * XREFs of CmpTraceHiveSaveStart @ 0x140661590
 * Callers:
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 */

void __fastcall CmpTraceHiveSaveStart(__int64 a1)
{
  PVOID v2; // rbx
  ULONG v3; // ecx
  __int16 v4; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-30h] BYREF
  __int16 *v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]

  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v4 = 0;
    P = 0LL;
    CmpConstructNameWithStatus(a1, &P);
    v2 = P;
    if ( P )
    {
      v3 = *(unsigned __int16 *)P;
      UserData.Ptr = *((_QWORD *)P + 1);
      UserData.Size = v3;
      v8 = &v4;
      UserData.Reserved = 0;
      v9 = 2LL;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 2u, &UserData);
      CmpFreeTransientPoolWithTag(v2, 0x624E4D43u);
    }
  }
}
