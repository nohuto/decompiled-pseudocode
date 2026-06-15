/*
 * XREFs of ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x1800C82B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180015514 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18001DC30 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::AddAuxiliaryInputStream(
        CSharedStreamGroupProxy *this,
        struct SYSTEM_AUDIO_STREAM *a2,
        const unsigned __int16 *a3)
{
  __int64 v5; // rdx
  unsigned __int64 v7; // r9
  int v8; // edi
  __int64 v9; // [rsp+20h] [rbp-38h]
  void **v10; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_QWORD *)this + 47) )
  {
    v5 = 1305LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *((_QWORD *)this + 53) )
  {
    v5 = 1306LL;
    goto LABEL_3;
  }
  v10 = (void **)((char *)this + 424);
  v7 = -1LL;
  v11 = 0LL;
  v12 = 1;
  do
    ++v7;
  while ( a3[v7] );
  v8 = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, a3, v7, v9, &v11);
  if ( v12 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      v10,
      v11);
  if ( v8 >= 0 )
  {
    *(_OWORD *)((char *)this + 328) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 344) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 360) = *((_OWORD *)a2 + 2);
    *(_OWORD *)((char *)this + 376) = *((_OWORD *)a2 + 3);
    *(_OWORD *)((char *)this + 392) = *((_OWORD *)a2 + 4);
    *(_OWORD *)((char *)this + 408) = *((_OWORD *)a2 + 5);
    CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
}
