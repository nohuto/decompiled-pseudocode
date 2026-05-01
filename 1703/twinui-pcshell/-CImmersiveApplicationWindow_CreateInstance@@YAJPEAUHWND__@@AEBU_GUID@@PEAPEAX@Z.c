/*
 * XREFs of ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180065A58
 * Callers:
 *     ?GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@@Z @ 0x180051BE0 (-GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180053950 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bb90e6a151c33247b74534399ffbb84___ @ 0x18005B360 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_5bb90e6a151c33247b74534399ffbb84___.c)
 * Callees:
 *     ??$Make@VCImmersiveApplicationWindow@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveApplicationWindow@@@12@AEAPEAUHWND__@@@Z @ 0x180065B8C (--$Make@VCImmersiveApplicationWindow@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImm.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApplicationWindow_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  const struct _GUID *v4; // rbx
  unsigned int v5; // edi
  HWND v7; // [rsp+30h] [rbp+8h] BYREF
  const struct _GUID *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<CImmersiveApplicationWindow,HWND__ * &>(&v8, &v7);
  v4 = v8;
  v5 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
    v5 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v8->Data1)(
           v8,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           a3);
  if ( v4 )
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v4->Data1 + 16LL))(v4);
  return v5;
}
