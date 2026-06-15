/*
 * XREFs of _lambda_1b72e5d594e55fed068379ebbc44b0d0_::operator() @ 0x1800CF554
 * Callers:
 *     wil::details::lambda_call__lambda_257b64a16ccf78513dcb8abf17d7ffc7___::_lambda_call__lambda_257b64a16ccf78513dcb8abf17d7ffc7___ @ 0x1800CF44C (wil--details--lambda_call__lambda_257b64a16ccf78513dcb8abf17d7ffc7___--_lambda_call__lambda_257b.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800D2C80 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_17a3b50ddb9ed56a4922f3c004f0f02a___ @ 0x1800CEF00 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800CEF00.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1b72e5d594e55fed068379ebbc44b0d0_::operator()(int **a1)
{
  int *v2; // r9
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // ebx
  __int64 v8; // [rsp+48h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp-20h]
  __int128 v10; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+30h] BYREF

  v12 = 0LL;
  v8 = 0LL;
  v2 = *a1;
  v9 = **a1;
  v3 = *(_QWORD *)a1[4];
  v10 = *(_OWORD *)(v3 + 48);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, _DWORD, int, __int64 *))(**((_QWORD **)a1[1] + 6)
                                                                                             + 56LL))(
         *((_QWORD *)a1[1] + 6),
         *(_QWORD *)a1[2],
         *(unsigned int *)(*(_QWORD *)a1[3] + 148LL),
         &v10,
         *(_DWORD *)(v3 + 8),
         *v2,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, _QWORD, _QWORD, __int64, _DWORD, __int64 *, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 32LL))(
           g_DeviceGraphManager,
           *(_QWORD *)a1[3],
           *(_QWORD *)a1[4],
           2LL,
           0,
           &v8,
           &v12);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x26u,
        (__int64)&WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
        v6);
    }
    if ( v6 >= 0 )
    {
      v13 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_17a3b50ddb9ed56a4922f3c004f0f02a___(
        &v14,
        *(_QWORD **)a1[5],
        *((_QWORD **)a1[5] + 1),
        &v13);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA83,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v8 )
    (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 40LL))(g_AudioResourceManager);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v5;
}
