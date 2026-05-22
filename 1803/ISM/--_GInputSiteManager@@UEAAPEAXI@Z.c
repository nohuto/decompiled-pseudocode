/*
 * XREFs of ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x18000BA00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000C274 (--1-$vector@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSiteE.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

InputSiteManager *__fastcall InputSiteManager::`scalar deleting destructor'(InputSiteManager *this, char a2)
{
  const char *v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  volatile signed __int32 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::~vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>((char *)this + 80);
  v5 = *((_QWORD *)this + 7);
  if ( !v5 )
    goto LABEL_9;
  v6 = (__int64)(*((_QWORD *)this + 9) - v5) >> 3;
  if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_12;
  if ( 8 * v6 >= 0x1000 )
  {
    if ( (v5 & 0x1F) == 0 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      if ( v7 < v5 )
      {
        v5 = v5 - v7 - 8;
        if ( v5 <= 0x1F )
        {
          v5 = v7;
          goto LABEL_8;
        }
      }
    }
LABEL_12:
    v9 = _o__invalid_parameter_noinfo_noreturn(v5, 0x1FFFFFFFFFFFFFFFLL);
    goto LABEL_13;
  }
LABEL_8:
  operator delete((void *)v5);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
LABEL_9:
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( !v8 )
    goto LABEL_15;
  v9 = _InterlockedDecrement(v8 + 2);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v4);
    JUMPOUT(0x18000BAEFLL);
  }
LABEL_13:
  if ( !v9 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_15:
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
