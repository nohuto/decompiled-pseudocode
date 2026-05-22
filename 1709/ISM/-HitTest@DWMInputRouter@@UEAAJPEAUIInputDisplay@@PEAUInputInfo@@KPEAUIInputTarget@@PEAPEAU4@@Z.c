/*
 * XREFs of ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18001A450
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800A8EB0 (-HitTest@MPCInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800A8F3C (-HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPE.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800093C8 (-GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z.c)
 *     ?FindHitTestHandlerForDisplayBinding@DWMInputRouter@@IEAAJPEAUIDisplayBinding@@PEAV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x18001B930 (-FindHitTestHandlerForDisplayBinding@DWMInputRouter@@IEAAJPEAUIDisplayBinding@@PEAV-$function@$$.c)
 *     ??$MakeAndInitialize@VHitTestRequest@@UIHitTestRequest@@PEAUIDisplayBinding@@AEAPEAUIInputTarget@@PEAU4@AEAUInputInfo@@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIHitTestRequest@@@WRL@Microsoft@@@012@$$QEAPEAUIDisplayBinding@@AEAPEAUIInputTarget@@$$QEAPEAU5@AEAUInputInfo@@AEAK@Z @ 0x18001F1D0 (--$MakeAndInitialize@VHitTestRequest@@UIHitTestRequest@@PEAUIDisplayBinding@@AEAPEAUIInputTarget.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMInputRouter::HitTest(
        DWMInputRouter *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        unsigned int a4,
        struct IInputTarget *a5,
        struct IInputTarget **a6)
{
  int PointerAtIndex; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  struct Pointer *v14; // rcx
  int HitTestHandlerForDisplayBinding; // eax
  __int64 v16; // rcx
  _BYTE *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rsi
  __int64 *v23; // rbx
  struct IInputTarget **v24; // r15
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  struct Pointer *v29; // [rsp+30h] [rbp-89h] BYREF
  int v30[2]; // [rsp+38h] [rbp-81h] BYREF
  struct Pointer *v31; // [rsp+40h] [rbp-79h] BYREF
  __int64 v32; // [rsp+48h] [rbp-71h] BYREF
  int v33[2]; // [rsp+50h] [rbp-69h] BYREF
  int v34[2]; // [rsp+58h] [rbp-61h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v36; // [rsp+70h] [rbp-49h]
  __int64 v37; // [rsp+78h] [rbp-41h]
  _BYTE v38[56]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE *v39; // [rsp+B8h] [rbp-1h]

  v37 = -2LL;
  LODWORD(v32) = a4;
  *(_QWORD *)v34 = a5;
  if ( a6 && a2 )
  {
    PointerAtIndex = GetPointerAtIndex(a3, a4, &v31);
    v11 = PointerAtIndex;
    if ( PointerAtIndex < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 1363, PointerAtIndex);
      return v11;
    }
    v29 = 0LL;
    v12 = (**(__int64 (__fastcall ***)(struct IInputDisplay *, GUID *, struct Pointer **))a2)(
            a2,
            &GUID_f1798ff6_a596_4193_b735_afad9d3d8348,
            &v29);
    v11 = v12;
    if ( v12 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 1366, v12);
LABEL_9:
      v14 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(struct Pointer *))(*(_QWORD *)v14 + 16LL))(v14);
      }
      return v11;
    }
    v39 = 0LL;
    HitTestHandlerForDisplayBinding = DWMInputRouter::FindHitTestHandlerForDisplayBinding(this, v29, v38);
    v11 = HitTestHandlerForDisplayBinding;
    if ( HitTestHandlerForDisplayBinding < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v16, &MinInput_Warning_CheckResult, 0, 1371, HitTestHandlerForDisplayBinding);
LABEL_14:
      if ( v39 )
      {
        v17 = v38;
        LOBYTE(v17) = v39 != v38;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v39 + 32LL))(v39, v17);
        v39 = 0LL;
      }
      goto LABEL_9;
    }
    *(_QWORD *)v30 = 0LL;
    *(_QWORD *)v33 = *((_QWORD *)this + 30);
    v31 = v29;
    v18 = Microsoft::WRL::Details::MakeAndInitialize<HitTestRequest,IHitTestRequest,IDisplayBinding *,IInputTarget * &,IInputTarget *,InputInfo &,unsigned long &>(
            (int)v30,
            (int)&v31,
            (int)v34,
            (int)v33,
            a3,
            (__int64)&v32);
    v11 = v18;
    if ( v18 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 1380, v18);
      goto LABEL_19;
    }
    *(_OWORD *)Block = 0LL;
    v36 = 0LL;
    v31 = (struct Pointer *)Block;
    *(_QWORD *)v34 = this;
    *(_QWORD *)v33 = *(_QWORD *)v30;
    if ( !v39 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    v21 = (*(__int64 (__fastcall **)(_BYTE *, int *, int *, struct Pointer **))(*(_QWORD *)v39 + 16LL))(
            v39,
            v33,
            v34,
            &v31);
    v22 = (__int64 *)Block[1];
    v23 = (__int64 *)Block[0];
    if ( v21 >= 0 && ((char *)Block[1] - (char *)Block[0]) >> 3 )
    {
      v24 = (struct IInputTarget **)Block[0];
      if ( *(_QWORD *)Block[0] )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)Block[0] + 8LL))(*(_QWORD *)Block[0]);
        v22 = (__int64 *)Block[1];
        v23 = (__int64 *)Block[0];
      }
      *a6 = *v24;
    }
    else
    {
      *a6 = 0LL;
    }
    if ( !v23 )
      goto LABEL_19;
    if ( v23 != v22 )
    {
      do
      {
        v25 = *v23;
        if ( *v23 )
        {
          *v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
        ++v23;
      }
      while ( v23 != v22 );
      v23 = (__int64 *)Block[0];
    }
    v26 = (v36 - (__int64)v23) >> 3;
    if ( v26 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v26 < 0x1000 )
      {
LABEL_41:
        operator delete(v23);
        *(_OWORD *)Block = 0LL;
        v36 = 0LL;
LABEL_19:
        v20 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 )
        {
          *(_QWORD *)v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        goto LABEL_14;
      }
      if ( ((unsigned __int8)v23 & 0x1F) == 0 )
      {
        v27 = *(v23 - 1);
        if ( v27 < (unsigned __int64)v23 && (unsigned __int64)v23 - v27 - 8 <= 0x1F )
        {
          v23 = (__int64 *)*(v23 - 1);
          goto LABEL_41;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL);
  }
  v11 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 1358, 87);
  return v11;
}
