/*
 * XREFs of ?RmpSystemSetActivityHostQoS@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003E14
 * Callers:
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003CF8 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall RmpSystemSetActivityHostQoS(struct _RM_ACTIVITY_HOST *a1, unsigned int a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  NTSTATUS result; // eax
  _BYTE JobInformation[36]; // [rsp+40h] [rbp-68h] BYREF
  int v7; // [rsp+64h] [rbp-44h]
  __int64 v8; // [rsp+90h] [rbp-18h]

  v2 = a2;
  memset_0(JobInformation, 0, 0x60uLL);
  v4 = *((_DWORD *)a1 + 14) == 0;
  v7 = 1;
  v8 = v2;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL)
                                                                                        + 232LL))(
               (char *)a1 + 552,
               *((unsigned int *)a1 + 155),
               (char *)a1 + 88,
               *((unsigned int *)a1 + 156),
               *((_QWORD *)a1 + 3),
               JobInformation);
  else
    result = NtSetInformationJobObject(
               *((HANDLE *)a1 + 117),
               MaxJobObjectInfoClass|JobObjectBasicProcessIdList|0x10,
               JobInformation,
               0x60u);
  if ( result >= 0 )
    return 0;
  return result;
}
