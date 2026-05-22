/*
 * XREFs of ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18000AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x18000AD04 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::OnZeroReferenceCount(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r9
  _QWORD *v14; // rdx
  _QWORD *i; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rbx
  DWORD CurrentThreadId; // eax
  const char *v20; // r9
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF
  char v25; // [rsp+58h] [rbp+10h] BYREF

  v5 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v5 + 24);
  if ( !*(_QWORD *)(v6 + 40) )
    goto LABEL_6;
  v7 = *((_DWORD *)this + 6);
  if ( *(_DWORD *)(v6 + 140) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x28B,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      a4);
    goto LABEL_27;
  }
  Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
    (Microsoft::BamoImpl::ConditionalDropAndReacquireLock *)&v24,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(v5 + 24));
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)(v6 + 40) + 48LL))(
         *(_QWORD *)(v6 + 40),
         *(unsigned int *)(v6 + 28),
         v7,
         0LL,
         &v25);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_27:
    wil::details::in1diag3::FailFast_Hr(
      v9,
      (void *)0x298,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v8);
    goto LABEL_28;
  }
  v10 = v24;
  if ( v24 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v24 + 96));
    *(_DWORD *)(v10 + 136) = GetCurrentThreadId();
  }
LABEL_6:
  v11 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v11 )
  {
    do
    {
      v12 = (_QWORD *)v11[6];
      v13 = v11[5];
      v14 = 0LL;
      for ( i = *(_QWORD **)(v13 + 48); i; i = (_QWORD *)i[7] )
      {
        if ( i == v11 )
        {
          v16 = v11[7];
          if ( v14 )
            v14[7] = v16;
          else
            *(_QWORD *)(v13 + 48) = v16;
          v11[7] = 0LL;
          break;
        }
        v14 = i;
      }
      if ( !i )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xBD,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamopeer.inl",
          (const char *)v13);
        JUMPOUT(0x18000B0BELL);
      }
      v17 = *((_QWORD *)this + 4);
      *(_BYTE *)(v17 + 32) = 0;
      *(_QWORD *)(v17 + 24) = 0LL;
      (***((void (__fastcall ****)(_QWORD, _QWORD *))this + 4))(*((_QWORD *)this + 4), v14);
      *((_QWORD *)this + 4) = v12;
      v11 = v12;
    }
    while ( v12 );
  }
  v18 = 0LL;
  v24 = 0LL;
  if ( !*(_DWORD *)(v6 + 140) )
  {
    v18 = v6;
    v24 = v6;
    CurrentThreadId = GetCurrentThreadId();
    v21 = retaddr;
    if ( *(_DWORD *)(v6 + 136) == CurrentThreadId )
    {
      *(_DWORD *)(v6 + 136) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
      goto LABEL_21;
    }
LABEL_28:
    wil::details::in1diag3::_FailFast_Unexpected(
      v21,
      (void *)0x574,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v20);
    __debugbreak();
  }
LABEL_21:
  v22 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 48LL))(this);
  if ( v22 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
  if ( v18 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v18 + 96));
    *(_DWORD *)(v18 + 136) = GetCurrentThreadId();
  }
}
