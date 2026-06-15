/*
 * XREFs of ?RuntimeClassInitialize@CHybridPropertyStore@@QEAAJPEAUIMMDevice@@@Z @ 0x1800C05AC
 * Callers:
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@@Z @ 0x1800C0118 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@@Details@WRL@Micr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHybridPropertyStore::RuntimeClassInitialize(void **this, struct IMMDevice *a2)
{
  HRESULT v4; // ebx
  __int64 v5; // rdx
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = PSCreateMemoryPropertyStore(&GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, this + 3);
  if ( v4 < 0 )
  {
    v5 = 53LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = this[2];
  if ( v7 )
  {
    this[2] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, void **))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, this + 2);
  if ( v4 < 0 )
  {
    v5 = 56LL;
    goto LABEL_3;
  }
  return 0LL;
}
