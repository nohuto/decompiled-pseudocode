/*
 * XREFs of ?GetCount@CHybridPropertyStore@@UEAAJPEAK@Z @ 0x1800C0390
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHybridPropertyStore::GetCount(CHybridPropertyStore *this, unsigned int *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 32, (__int64)&lpCriticalSection);
  *a2 = 0;
  v4 = *((_QWORD *)this + 2);
  v11 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 24LL))(v4, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 68LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_7;
  }
  v8 = *((_QWORD *)this + 3);
  v12 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 71LL;
    goto LABEL_5;
  }
  *a2 = v12 + v11;
  v6 = 0;
LABEL_7:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
