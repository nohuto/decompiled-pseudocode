/*
 * XREFs of ?NonDelegatingQueryInterface@PhoneTopology3@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneTopology3::NonDelegatingQueryInterface(PhoneTopology3 *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  char *v5; // rcx

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e5835393_9428_4f86_a59b_44effc19857f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e5835393_9428_4f86_a59b_44effc19857f.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e5835393_9428_4f86_a59b_44effc19857f.Data4;
  if ( !v4 )
  {
    v5 = (char *)this - 8;
    *a3 = v5;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    return v3;
  }
  return CUnknown::NonDelegatingQueryInterface(this, a2, a3);
}
