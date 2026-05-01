/*
 * XREFs of ?HampHostQueryProcessDebuggedCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180010780
 * Callers:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 * Callees:
 *     ?HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z @ 0x180010894 (-HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueryProcessDebuggedCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, _DWORD *a4)
{
  unsigned int IsDebuggerAttached; // eax
  unsigned int v8; // [rsp+30h] [rbp-19h] BYREF
  int v9; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  unsigned int *v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  int *v17; // [rsp+80h] [rbp+37h]
  __int64 v18; // [rsp+88h] [rbp+3Fh]

  IsDebuggerAttached = HampSystemQueryProcessIsDebuggerAttached(a2);
  if ( IsDebuggerAttached )
    *a4 = 1;
  if ( _volatile_metadata > 5u )
  {
    v8 = IsDebuggerAttached;
    v16 = 4LL;
    v15 = &v8;
    v17 = &v9;
    v9 = a3;
    v18 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180082638 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v12 = &unk_180082643;
    v14 = 1;
    UserData.Reserved = 2;
    v13 = 54;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0LL;
}
