/*
 * XREFs of ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00031DC
 * Callers:
 *     CreateHostVisualMarshaler @ 0x1C0003190 (CreateHostVisualMarshaler.c)
 * Callees:
 *     ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00033CC (-InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemReso.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CHostVisualMarshaler **a2)
{
  DirectComposition::CHostVisualMarshaler *v4; // rax
  DirectComposition::CHostVisualMarshaler *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CHostVisualMarshaler *)Win32AllocPoolWithQuotaZInit(0xF8uLL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0xF8uLL);
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &DirectComposition::CHostVisualMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CHostVisualMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CHostVisualMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(v5, 1LL);
      v5 = 0LL;
    }
    else
    {
      *((_DWORD *)v5 + 4) |= 0x4000002u;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v5;
  return (unsigned int)v6;
}
