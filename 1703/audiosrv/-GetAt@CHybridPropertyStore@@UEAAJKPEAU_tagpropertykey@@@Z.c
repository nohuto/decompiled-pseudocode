/*
 * XREFs of ?GetAt@CHybridPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x1800C02E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHybridPropertyStore::GetAt(CHybridPropertyStore *this, unsigned int a2, struct _tagpropertykey *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)&lpCriticalSection);
  v6 = *((_QWORD *)this + 2);
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 24LL))(v6, &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( a2 >= v12 )
    {
      v9 = *((_QWORD *)this + 3);
      a2 -= v12;
    }
    else
    {
      v9 = *((_QWORD *)this + 2);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _tagpropertykey *))(*(_QWORD *)v9 + 32LL))(v9, a2, a3);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x53,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}
