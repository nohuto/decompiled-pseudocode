/*
 * XREFs of ?Create@CSharedMatrixTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015E470
 * Callers:
 *     CreateSharedMatrixTransformMarshaler @ 0x1C015E710 (CreateSharedMatrixTransformMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?InitializeFromSharedResource@CSharedMatrixTransformMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C015E594 (-InitializeFromSharedResource@CSharedMatrixTransformMarshaler@DirectComposition@@QEAAJPEBVCShare.c)
 */

__int64 __fastcall DirectComposition::CSharedMatrixTransformMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedMatrixTransformMarshaler **a2)
{
  DirectComposition::CSharedMatrixTransformMarshaler *v4; // rax
  DirectComposition::CSharedMatrixTransformMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CSharedMatrixTransformMarshaler *)Win32AllocPoolWithQuotaZInit(0x58uLL, 0x766D4344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x58uLL);
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &DirectComposition::CSharedMatrixTransformMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CSharedMatrixTransformMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CSharedMatrixTransformMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
