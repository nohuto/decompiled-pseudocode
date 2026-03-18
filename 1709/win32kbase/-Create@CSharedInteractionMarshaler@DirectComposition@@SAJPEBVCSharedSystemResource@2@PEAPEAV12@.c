/*
 * XREFs of ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C008AE08
 * Callers:
 *     CreateSharedInteractionMarshaler @ 0x1C008ADD0 (CreateSharedInteractionMarshaler.c)
 * Callees:
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0021A24 (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?InitializeFromSharedResource@CSharedInteractionMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C008AF7C (-InitializeFromSharedResource@CSharedInteractionMarshaler@DirectComposition@@QEAAJPEBVCSharedSys.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedInteractionMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedInteractionMarshaler **a2)
{
  DirectComposition::CInteractionMarshaler *v4; // rax
  DirectComposition::CSharedInteractionMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0x128uLL, 0x69734344u);
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
