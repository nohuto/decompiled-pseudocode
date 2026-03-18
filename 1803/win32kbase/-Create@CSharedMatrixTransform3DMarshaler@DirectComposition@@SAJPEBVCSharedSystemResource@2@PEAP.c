/*
 * XREFs of ?Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015E3CC
 * Callers:
 *     CreateSharedMatrixTransform3DMarshaler @ 0x1C015E6D0 (CreateSharedMatrixTransform3DMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?InitializeFromSharedResource@CSharedMatrixTransform3DMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C015E53C (-InitializeFromSharedResource@CSharedMatrixTransform3DMarshaler@DirectComposition@@QEAAJPEBVCSha.c)
 */

__int64 __fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedMatrixTransform3DMarshaler **a2)
{
  DirectComposition::CSharedMatrixTransform3DMarshaler *v4; // rax
  DirectComposition::CSharedMatrixTransform3DMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CSharedMatrixTransform3DMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL, 0x346D4344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x70uLL);
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &DirectComposition::CSharedMatrixTransform3DMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedMatrixTransform3DMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CSharedMatrixTransform3DMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
