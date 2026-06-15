/*
 * XREFs of ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@IPEBU_tagpropertykey@@@Z @ 0x1800BA23C
 * Callers:
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x1800B9BC8 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBU_tagpropertykey@@@?$vector@U_tagpropertykey@@V?$allocator@U_tagpropertykey@@@std@@@std@@QEAAXAEBU_tagpropertykey@@@Z @ 0x1800B9CA0 (--$emplace_back@AEBU_tagpropertykey@@@-$vector@U_tagpropertykey@@V-$allocator@U_tagpropertykey@@.c)
 */

__int64 __fastcall CHybridPropertyStore::RuntimeClassInitialize(
        CHybridPropertyStore *this,
        struct IMMDevice *a2,
        unsigned int a3,
        const struct _tagpropertykey *a4)
{
  HRESULT v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = PSCreateMemoryPropertyStore(&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, (void **)this + 3);
  v9 = 0LL;
  if ( v8 < 0 )
  {
    v10 = 63LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 2);
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, char *))a2->lpVtbl->OpenPropertyStore)(
         a2,
         0LL,
         (char *)this + 16);
  if ( v8 < 0 )
  {
    v10 = 66LL;
    goto LABEL_3;
  }
  try
  {
    while ( (unsigned int)v9 < a3 )
    {
      std::vector<_tagpropertykey>::emplace_back<_tagpropertykey const &>((__int64)this + 32, (__int64)&a4[v9]);
      v9 = (unsigned int)(v9 + 1);
    }
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return 0LL;
}
