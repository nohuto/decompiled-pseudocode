/*
 * XREFs of ?NonDelegatingQueryInterface@PhoneCallAudio@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C85D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneCallAudio::NonDelegatingQueryInterface(PhoneCallAudio *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  char *v5; // r10
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e1fd1a76_d0e5_4694_a4a8_c63178a6c080.Data4;
  if ( !v4 )
  {
    v5 = (char *)this - 24;
    *a3 = (void *)(((unsigned __int64)this - 16) & -(__int64)(this != (PhoneCallAudio *)24));
LABEL_11:
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    return v3;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4;
  if ( !v6 )
  {
    v5 = (char *)this - 24;
    *a3 = (void *)(((unsigned __int64)this - 8) & -(__int64)(this != (PhoneCallAudio *)24));
    goto LABEL_11;
  }
  return CUnknown::NonDelegatingQueryInterface(this, a2, a3);
}
