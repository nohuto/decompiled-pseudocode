/*
 * XREFs of _lambda_aa8acc1eed1698d6ba192654be930d00_::operator() @ 0x18008CF5C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8419e1d4daeb6d858b37499f9436d3c5___::Run @ 0x18008CEF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8419e1d4daeb6d858b37499f9436d3c5___--Run.c)
 * Callees:
 *     ?SetApplicationId@CApplicationFrameWrapper@@UEAAJPEBGH@Z @ 0x180016E60 (-SetApplicationId@CApplicationFrameWrapper@@UEAAJPEBGH@Z.c)
 *     ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18003BE40 (-PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x180043820 (-GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_aa8acc1eed1698d6ba192654be930d00_::operator()(__int64 a1)
{
  CApplicationManager *v2; // rcx
  __int64 (__fastcall *v3)(CApplicationManager *, struct _GUID *, struct _GUID *, void **); // rax
  const unsigned __int16 *v4; // rdx
  __int64 (__fastcall *v5)(CApplicationManager *, const unsigned __int16 *, unsigned __int64 *); // rax
  int AssociatedGlomCount; // eax
  CApplicationManager *v7; // rcx
  unsigned int v8; // ecx
  const unsigned __int16 *v9; // rdx
  __int64 (__fastcall *v10)(CApplicationFrameWrapper *, const unsigned __int16 *); // rax
  __int64 v11; // r8
  CApplicationFrameWrapper *v12; // rcx
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CApplicationManager *v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  if ( !*(_BYTE *)(a1 + 16) )
    goto LABEL_13;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = 0LL;
  v2 = *(CApplicationManager **)(a1 + 8);
  v3 = *(__int64 (__fastcall **)(CApplicationManager *, struct _GUID *, struct _GUID *, void **))(*(_QWORD *)v2 + 24LL);
  if ( v3 == CApplicationManager::PrivateQueryService )
    CApplicationManager::PrivateQueryService(
      v2,
      (struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
      &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
      (void **)&v16);
  else
    v3(
      v2,
      (struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
      &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
      (void **)&v16);
  v4 = *(const unsigned __int16 **)(*(_QWORD *)a1 + 544LL);
  v5 = *(__int64 (__fastcall **)(CApplicationManager *, const unsigned __int16 *, unsigned __int64 *))(*(_QWORD *)v16 + 184LL);
  if ( v5 == CApplicationManager::GetAssociatedGlomCount )
    AssociatedGlomCount = CApplicationManager::GetAssociatedGlomCount(v16, v4, &v17);
  else
    AssociatedGlomCount = v5(v16, v4, &v17);
  if ( AssociatedGlomCount < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20D,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)AssociatedGlomCount,
      v14);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = 1;
  if ( v17 != 1 )
LABEL_13:
    v8 = 0;
  v9 = *(const unsigned __int16 **)(*(_QWORD *)a1 + 544LL);
  v10 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, const unsigned __int16 *))(**(_QWORD **)(*(_QWORD *)a1 + 120LL)
                                                                                       + 72LL);
  v11 = v8;
  v12 = *(CApplicationFrameWrapper **)(*(_QWORD *)a1 + 120LL);
  if ( v10 == CApplicationFrameWrapper::SetApplicationId )
    return CApplicationFrameWrapper::SetApplicationId(v12, v9);
  else
    return ((__int64 (__fastcall *)(CApplicationFrameWrapper *, const unsigned __int16 *, __int64))v10)(v12, v9, v11);
}
