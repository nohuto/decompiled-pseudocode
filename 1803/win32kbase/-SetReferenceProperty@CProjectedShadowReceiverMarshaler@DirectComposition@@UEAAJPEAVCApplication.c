/*
 * XREFs of ?SetReferenceProperty@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01515E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowReceiverMarshaler::SetReferenceProperty(
        DirectComposition::CProjectedShadowReceiverMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  int v10; // ebp
  __int64 v11; // rax
  struct DirectComposition::CResourceMarshaler **v12; // r14

  v5 = 0;
  *a5 = 0;
  if ( a3 )
  {
    if ( a3 != 3 )
      return 3221225485LL;
    v10 = 1024;
    v11 = 72LL;
  }
  else
  {
    v10 = 128;
    v11 = 56LL;
  }
  v12 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v11);
  if ( (DirectComposition::CProjectedShadowReceiverMarshaler *)((char *)this + v11)
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 120LL))(a4)) )
  {
    if ( *v12 != a4 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *v12);
      *v12 = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= v10;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
