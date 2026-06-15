/*
 * XREFs of ?NonDelegatingQueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800563C0
 * Callers:
 *     ?QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180055EC0 (-QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@AudioDeviceMgr@@UEAAKXZ @ 0x180056630 (-AddRef@AudioDeviceMgr@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?NonDelegatingQueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FAAF0 (-NonDelegatingQueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AudioDeviceMgr::NonDelegatingQueryInterface(AudioDeviceMgr *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  AudioDeviceMgr *v6; // rcx
  void *v7; // rax
  unsigned int (__fastcall *v8)(AudioDeviceMgr *__hidden); // rax
  __int64 v10; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_495a7fca_552f_402a_8e78_78bf3ea87971.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_495a7fca_552f_402a_8e78_78bf3ea87971.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_495a7fca_552f_402a_8e78_78bf3ea87971.Data4;
  if ( !v5 )
  {
    v6 = (AudioDeviceMgr *)((char *)this - 16);
    v7 = v6;
    goto LABEL_6;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data4;
  if ( !v10 )
  {
    v6 = (AudioDeviceMgr *)((char *)this - 16);
    v7 = (void *)(((unsigned __int64)this - 8) & -(__int64)(v6 != 0LL));
LABEL_6:
    *a3 = v7;
    v8 = *(unsigned int (__fastcall **)(AudioDeviceMgr *__hidden))(*(_QWORD *)v6 + 8LL);
    if ( v8 == AudioDeviceMgr::AddRef )
      AudioDeviceMgr::AddRef(v6);
    else
      ((void (__fastcall *)(AudioDeviceMgr *, unsigned int (__fastcall *)(AudioDeviceMgr *__hidden), void **, AudioDeviceMgr *))v8)(
        v6,
        AudioDeviceMgr::AddRef,
        a3,
        this);
    return v3;
  }
  return CUnknown::NonDelegatingQueryInterface(this, a2, a3);
}
