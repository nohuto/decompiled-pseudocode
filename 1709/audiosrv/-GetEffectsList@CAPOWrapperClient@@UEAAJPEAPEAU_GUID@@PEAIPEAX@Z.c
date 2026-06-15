/*
 * XREFs of ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18001EFF0
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x18000BBF0 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall CAPOWrapperClient::GetEffectsList(
        CAPOWrapperClient *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  void *v8; // rbx
  HANDLE CurrentProcess; // rax
  int result; // eax
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  int v13; // [rsp+40h] [rbp-49h] BYREF
  int v14; // [rsp+44h] [rbp-45h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  int *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  int *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]

  v13 = 0;
  TargetHandle = 0LL;
  if ( !*((_QWORD *)this + 4) || !g_ADGProcess )
    return -2147024809;
  if ( a4
    && (v8 = *(void **)&g_ADGProcess[2].LockCount,
        CurrentProcess = GetCurrentProcess(),
        !DuplicateHandle(CurrentProcess, a4, v8, &TargetHandle, 0, 0, 2u)) )
  {
    result = GetLastError();
    if ( result > 0 )
      result = (unsigned __int16)result | 0x80070000;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *))(**((_QWORD **)this + 4) + 48LL))(
               *((_QWORD *)this + 4),
               a2,
               a3);
  }
  v13 = result;
  if ( result < 0 && (unsigned int)dword_18014A3F0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAPOWrapperClient::GetEffectsList");
    v20 = 0;
    v23 = 0;
    v18 = &v14;
    v21 = &v13;
    v14 = 226;
    v19 = 4;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v11, v12, 5u, &pData);
    return v13;
  }
  return result;
}
