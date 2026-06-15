/*
 * XREFs of ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140045368
 * Callers:
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140045064 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 * Callees:
 *     ??$out_param@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@0@AEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@Z @ 0x140003F70 (--$out_param@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000AC54 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B9C0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140031214 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140031258 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140034F50 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003F364 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFormatConverterPipe::Initialize(
        CPipeInstance **this,
        struct IUnknown *a2,
        const struct tWAVEFORMATEX *a3,
        const struct tWAVEFORMATEX **a4)
{
  int FormatConverterPipeInstance; // eax
  int v9; // ebx
  __int64 v10; // rdx
  CPipeInstance *v11; // rsi
  __int64 v12; // rax
  void *v13; // r14
  void **v14; // r15
  void *v15; // rcx
  void **v16; // rbx
  LPVOID v17; // rsi
  void *v18; // rcx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  CPipeInstance *v21[2]; // [rsp+28h] [rbp-28h] BYREF
  void **v22; // [rsp+38h] [rbp-18h] BYREF
  void *v23; // [rsp+40h] [rbp-10h]
  char v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v21[1] = (CPipeInstance *)-2LL;
  CFormatConverterPipe::Reset(this);
  v21[0] = 0LL;
  FormatConverterPipeInstance = CPipeInstance::CreateFormatConverterPipeInstance(a2, a4, v21);
  v9 = FormatConverterPipeInstance;
  if ( FormatConverterPipeInstance < 0 )
  {
    v10 = 239LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)FormatConverterPipeInstance);
    goto LABEL_23;
  }
  v11 = v21[0];
  FormatConverterPipeInstance = CPipeInstance::Initialize(v21[0]);
  v9 = FormatConverterPipeInstance;
  if ( FormatConverterPipeInstance < 0 )
  {
    v10 = 240LL;
    goto LABEL_7;
  }
  FormatConverterPipeInstance = CPipeInstance::ConnectAPOs(v11, 0LL);
  v9 = FormatConverterPipeInstance;
  if ( FormatConverterPipeInstance < 0 )
  {
    v10 = 241LL;
    goto LABEL_7;
  }
  pv = 0LL;
  v12 = wil::out_param<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
          (__int64)&v22,
          (__int64)&pv);
  v9 = CloneWaveFormat(a3, (struct tWAVEFORMATEX **)(v12 + 8));
  if ( v24 )
  {
    v13 = v23;
    v14 = v22;
    v15 = *v22;
    if ( v23 != *v22 )
    {
      if ( v15 )
        CoTaskMemFree(v15);
      *v14 = v13;
    }
  }
  if ( v9 >= 0 )
  {
    v21[0] = 0LL;
    *this = v11;
    v16 = (void **)(this + 1);
    if ( this + 1 != (CPipeInstance **)&pv )
    {
      v17 = pv;
      pv = 0LL;
      v18 = *v16;
      if ( v17 != *v16 )
      {
        if ( v18 )
          CoTaskMemFree(v18);
        *v16 = v17;
      }
    }
    this[2] = (CPipeInstance *)a4[3];
    *((_BYTE *)this + 24) = 0;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xF4,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9);
  }
  if ( pv )
    CoTaskMemFree(pv);
LABEL_23:
  ATL::CAutoPtr<CPipeInstance>::Free(v21);
  return (unsigned int)v9;
}
