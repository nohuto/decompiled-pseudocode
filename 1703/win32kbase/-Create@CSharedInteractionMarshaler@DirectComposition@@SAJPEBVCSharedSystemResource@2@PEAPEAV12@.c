/*
 * XREFs of ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C000BEE0
 * Callers:
 *     CreateSharedInteractionMarshaler @ 0x1C000BD60 (CreateSharedInteractionMarshaler.c)
 * Callees:
 *     ?InitializeFromSharedResource@CSharedInteractionMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C000BE8C (-InitializeFromSharedResource@CSharedInteractionMarshaler@DirectComposition@@QEAAJPEBVCSharedSys.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C000ED38 (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedInteractionMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedInteractionMarshaler **a2)
{
  DirectComposition::CInteractionMarshaler *v4; // rax
  DirectComposition::CSharedInteractionMarshaler *v5; // rbx
  NTSTATUS v6; // edi

  v4 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0x108uLL);
  v5 = v4;
  if ( v4 )
  {
    DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v4);
    *(_QWORD *)v5 = &DirectComposition::CSharedInteractionMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedInteractionMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CSharedInteractionMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v5;
  return (unsigned int)v6;
}
