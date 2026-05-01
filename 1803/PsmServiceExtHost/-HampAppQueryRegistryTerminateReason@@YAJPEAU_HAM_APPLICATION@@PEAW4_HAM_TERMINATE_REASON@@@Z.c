/*
 * XREFs of ?HampAppQueryRegistryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180009AC0
 * Callers:
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x180009A50 (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEAU_RM_PSM_KEY@@PEAT_RM_SID@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180008540 (-HampUtilQueryRegistryTerminateReason@@YAJPEAU_RM_PSM_KEY@@PEAT_RM_SID@@PEAW4_HAM_TERMINATE_REAS.c)
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppQueryRegistryTerminateReason(struct _HAM_APPLICATION *a1, enum _HAM_TERMINATE_REASON *a2)
{
  unsigned int v4; // r9d
  int RegistryTerminateReason; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v7[3]; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *p_RegistryTerminateReason; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+6Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+80h] [rbp-28h] BYREF

  if ( (*((_DWORD *)a1 + 152) & 0x80000) != 0 )
  {
    *(_DWORD *)a2 = 0;
    return 0;
  }
  RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(
                              (struct _HAM_APPLICATION *)((char *)a1 + 96),
                              (union _RM_SID *)(*((_QWORD *)a1 + 11) + 228LL),
                              (enum _HAM_TERMINATE_REASON *)v7);
  v4 = RegistryTerminateReason;
  if ( RegistryTerminateReason >= 0 )
  {
    *(_DWORD *)a2 = v7[0];
    return 0;
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
  {
    v11 = 0;
    p_RegistryTerminateReason = &RegistryTerminateReason;
    v10 = 4;
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 48);
    TlgCreateSid(&v13, (const SID *)(*((_QWORD *)a1 + 11) + 228LL));
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008339E, 0LL, 0LL, 5u, &pData);
    return (unsigned int)RegistryTerminateReason;
  }
  return v4;
}
