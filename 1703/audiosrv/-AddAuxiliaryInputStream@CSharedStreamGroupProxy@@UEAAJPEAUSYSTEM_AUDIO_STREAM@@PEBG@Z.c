/*
 * XREFs of ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x1800A51E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18002BD7C (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180039790 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800826D0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::AddAuxiliaryInputStream(
        CSharedStreamGroupProxy *this,
        struct SYSTEM_AUDIO_STREAM *a2,
        const unsigned __int16 *a3)
{
  __int64 v5; // rdx
  void **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const unsigned __int16 *v10; // r8
  size_t v11; // r9
  int v12; // edi
  __int64 v13; // [rsp+20h] [rbp-38h]
  void **v14[2]; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_QWORD *)this + 43) )
  {
    v5 = 1231LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *((_QWORD *)this + 49) )
  {
    v5 = 1232LL;
    goto LABEL_3;
  }
  v7 = (void **)(wil::out_param<std::unique_ptr<SaDeviceParams>>((__int64)v14, (__int64)this + 392) + 8);
  v11 = -1LL;
  do
    ++v11;
  while ( v10[v11] );
  v12 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, v10, v11, v13, v7);
  if ( v15 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      v14[0],
      v14[1]);
  if ( v12 >= 0 )
  {
    *(_OWORD *)((char *)this + 296) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 312) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 328) = *((_OWORD *)a2 + 2);
    *(_OWORD *)((char *)this + 344) = *((_OWORD *)a2 + 3);
    *(_OWORD *)((char *)this + 360) = *((_OWORD *)a2 + 4);
    *(_OWORD *)((char *)this + 376) = *((_OWORD *)a2 + 5);
    CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
}
