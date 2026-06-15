/*
 * XREFs of ?NonDelegatingQueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E76F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioDeviceMgr::NonDelegatingQueryInterface(AudioDeviceMgr *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  void **v4; // r10
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rax

  v3 = 0;
  v4 = a3;
  v5 = (unsigned __int64)this;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4bc078b5_341c_4181_9db2_069bb92ffcdf.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4bc078b5_341c_4181_9db2_069bb92ffcdf.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4bc078b5_341c_4181_9db2_069bb92ffcdf.Data4;
  if ( !v6 )
  {
    v7 = (_QWORD *)((char *)this - 16);
    *a3 = v7;
LABEL_11:
    (*(void (__fastcall **)(_QWORD *, _QWORD, void **, unsigned __int64))(*v7 + 8LL))(v7, *v7, a3, v5);
    return v3;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data4;
  if ( !v8 )
  {
    v7 = (_QWORD *)((char *)this - 16);
    v5 -= 8LL;
    a3 = (void **)(v5 & -(__int64)(v7 != 0LL));
    *v4 = a3;
    goto LABEL_11;
  }
  return CUnknown::NonDelegatingQueryInterface(this, a2, a3);
}
