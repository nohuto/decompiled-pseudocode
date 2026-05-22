/*
 * XREFs of ?UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z @ 0x18002D03C
 * Callers:
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18002A330 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUI.c)
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18002A6A0 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorIn.c)
 *     ?Initialize@EdgeGestureTarget@@IEAAJ_KPEAX@Z @ 0x18002CBFC (-Initialize@EdgeGestureTarget@@IEAAJ_KPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0DWMInputTarget@@IEAA@_KPEAX@Z @ 0x180020FE4 (--0DWMInputTarget@@IEAA@_KPEAX@Z.c)
 *     ?Initialize@DWMInputTarget@@IEAAJXZ @ 0x18002128C (-Initialize@DWMInputTarget@@IEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgeGestureTarget::UpdateInputTarget(EdgeGestureTarget *this, __int64 a2, void *a3)
{
  unsigned int v6; // edi
  char v7; // bl
  int (__fastcall ***v8)(_QWORD, GUID *, DWMInputTarget **); // rcx
  DWMInputTarget *v9; // rcx
  DWMInputTarget *v10; // rcx
  DWMInputTarget *v11; // rbx
  DWMInputTarget *v12; // rax
  DWMInputTarget *v13; // rdi
  __int64 v14; // rcx
  int v15; // esi
  int v16; // eax
  void (__fastcall *v17)(DWMInputTarget *); // rax
  __int64 v18; // rcx
  DWMInputTarget *v20; // [rsp+68h] [rbp+10h] BYREF
  DWMInputTarget *v21; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v7 = 0;
  if ( !a2 )
  {
    v6 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 138, 87);
    return v6;
  }
  v8 = (int (__fastcall ***)(_QWORD, GUID *, DWMInputTarget **))*((_QWORD *)this + 9);
  if ( v8 )
  {
    v20 = 0LL;
    if ( (**v8)(v8, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v20) >= 0 )
    {
      v9 = v20;
      if ( !v20 )
      {
        v6 = -2147418113;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 151, 255);
          v9 = v20;
        }
        if ( v9 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
        }
        return v6;
      }
      v7 = (*(__int64 (__fastcall **)(DWMInputTarget *, __int64, void *))(*(_QWORD *)v20 + 24LL))(v20, a2, a3);
      if ( v7 && a3 )
        CloseHandle(a3);
    }
    v10 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v7 )
      return v6;
  }
  v11 = 0LL;
  v20 = 0LL;
  v12 = (DWMInputTarget *)malloc(0xD8uLL);
  v13 = v12;
  if ( v12 )
    memset(v12, 0, 0xD8uLL);
  v21 = v13;
  if ( v13 )
    v13 = DWMInputTarget::DWMInputTarget(v13, a2, a3);
  if ( v13 )
  {
    v16 = DWMInputTarget::Initialize(v13);
    v15 = v16;
    if ( v16 >= 0 )
    {
      v11 = v13;
      v20 = v13;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 3, 223, v16);
    }
    if ( v15 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 6) + 24LL))((__int64)v13 + 48, 1LL);
  }
  else
  {
    CloseHandle(a3);
    v6 = -2147024882;
    v15 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 3, 220, 14);
      goto LABEL_31;
    }
  }
  v6 = v15;
  if ( v15 < 0 )
  {
LABEL_31:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 185, v15);
    if ( v11 )
    {
      v17 = *(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)v11 + 16LL);
LABEL_42:
      v17(v11);
      return v6;
    }
    return v6;
  }
  if ( *((DWMInputTarget **)this + 9) != v11 )
  {
    if ( v11 )
      (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)v11 + 8LL))(v11);
    v18 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v11;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v11 )
  {
    v17 = *(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)v11 + 16LL);
    goto LABEL_42;
  }
  return v6;
}
