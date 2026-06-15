/*
 * XREFs of ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x1800313D8
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18002FC00 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x1800315A8 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistentId(struct IMMDevice *a1, unsigned __int16 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  const unsigned __int16 *v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v15);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 807LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_12;
  }
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v15 + 40LL))(
         v15,
         &PKEY_AudioEndpoint_PersistentId,
         &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 812LL;
    goto LABEL_10;
  }
  if ( (_WORD)v11 == 31 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( v12[v8] );
    v3 = _AllocStringWorker<CTCoAllocPolicy>(v7, v6, v12, v8, v10, a2);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = 816LL;
      goto LABEL_10;
    }
  }
  v4 = 0;
LABEL_12:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v4;
}
