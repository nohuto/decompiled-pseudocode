/*
 * XREFs of ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18007EC14
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x18007EB20 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ??$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ @ 0x18000C810 (--$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18000D318 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18000D388 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x18007DE48 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18007E104 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x180083A70 (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
struct IInputTarget **__fastcall DWMInputRouter::GetTargetFromInputSite(
        DWMInputRouter *this,
        struct IInputTarget **a2,
        __int64 *a3,
        char a4,
        __int64 a5,
        _DWORD *a6,
        _QWORD *a7)
{
  LegacyInputSinkData *Attached; // rax
  LegacyInputSinkData *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *CompositionInputQueue; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct IInputTarget *v23; // rcx
  const struct _LUID *Luid; // rcx
  __int64 v25; // rcx
  __int64 **v26; // rax
  struct IInputTarget *v27; // rdx
  __int64 v28; // rcx
  LegacyInputSinkData *v29; // rcx
  __int64 v31; // [rsp+58h] [rbp-91h] BYREF
  __int64 v32; // [rsp+60h] [rbp-89h] BYREF
  LegacyInputSinkData *v33; // [rsp+68h] [rbp-81h] BYREF
  int v34; // [rsp+70h] [rbp-79h]
  DWORD dwProcessId; // [rsp+74h] [rbp-75h] BYREF
  __int64 *v36; // [rsp+78h] [rbp-71h] BYREF
  __int128 v37; // [rsp+88h] [rbp-61h] BYREF
  __int128 v38; // [rsp+98h] [rbp-51h]
  __int64 v39; // [rsp+A8h] [rbp-41h]
  __int64 v40; // [rsp+B8h] [rbp-31h]
  struct IInputTarget **v41; // [rsp+C0h] [rbp-29h]
  _BYTE v42[40]; // [rsp+C8h] [rbp-21h] BYREF

  v40 = -2LL;
  v41 = a2;
  *a2 = 0LL;
  v34 = 1;
  Attached = (LegacyInputSinkData *)InputSite::GetAttachedObject<LegacyInputSinkData>(*a3);
  v12 = Attached;
  v33 = Attached;
  if ( !Attached )
    goto LABEL_42;
  if ( *a7 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a7 + 40LL))(*a7, *(_QWORD *)Attached) )
    {
      v13 = (__int64)*a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      (**(void (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*a7)(
        *a7,
        &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
        a2);
      goto LABEL_34;
    }
    v12 = v33;
  }
  if ( (a4 & 0x28) != 0 )
  {
    v14 = 3LL;
  }
  else if ( (a4 & 0x10) != 0 )
  {
    v14 = 4LL;
  }
  else if ( (a4 & 2) != 0 )
  {
    v14 = 1LL;
  }
  else
  {
    v14 = 0LL;
    if ( (a4 & 4) != 0 )
      v14 = 2LL;
  }
  CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue(v12, v14);
  if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 3) <= 1 )
  {
    v22 = *a3;
    v32 = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v37 = *((_OWORD *)CompositionInputQueue + 1);
    v38 = *((_OWORD *)CompositionInputQueue + 2);
    v39 = CompositionInputQueue[6];
    v23 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    DWMInputRouter::CreateAndRegisterTarget((__int64)this, (__int64)&v37, &v32, (__int64 *)a2);
  }
  else if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 && *(_DWORD *)CompositionInputQueue == 2 )
  {
    GetWindowThreadProcessId(*(HWND *)(a5 + 104), &dwProcessId);
    v16 = (__int64)*a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    DWMInputRouter::CreateAndRegisterTarget(this, dwProcessId, 0, 0, 0, *(_QWORD *)(a5 + 104), 0, 0, a2);
    v31 = 0LL;
    if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2)(*a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v31) >= 0 )
    {
      v36 = &v32;
      v17 = v31;
      v18 = *a3;
      v32 = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v19 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 72LL))(v17, v42);
      v37 = *(_OWORD *)v19;
      v38 = *(_OWORD *)(v19 + 16);
      v39 = *(_QWORD *)(v19 + 32);
      v20 = (__int64)*a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      DWMInputRouter::CreateAndRegisterTarget((__int64)this, (__int64)&v37, &v32, (__int64 *)a2);
    }
    v21 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
LABEL_34:
  if ( *a2 )
  {
    if ( *(_BYTE *)(a5 + 112) )
    {
      Luid = LegacyInputSinkData::GetLuid(v33);
      if ( Luid->HighPart == a6[1] && Luid->LowPart == *a6 )
      {
        v31 = 0LL;
        if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*a2)(
               *a2,
               &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
               &v31) >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 80LL))(v31, *(unsigned int *)(a5 + 116));
        v25 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
LABEL_42:
    if ( *a2 )
      return a2;
  }
  v26 = (__int64 **)InputSiteTarget::Create(&v33, a3);
  v27 = 0LL;
  if ( &v36 != v26 )
  {
    v27 = (struct IInputTarget *)*v26;
    *v26 = 0LL;
  }
  v28 = (__int64)*a2;
  *a2 = v27;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v29 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(LegacyInputSinkData *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return a2;
}
