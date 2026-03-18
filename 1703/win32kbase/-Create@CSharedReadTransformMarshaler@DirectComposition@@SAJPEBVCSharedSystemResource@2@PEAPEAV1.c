/*
 * XREFs of ?Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C000C4B4
 * Callers:
 *     CreateSharedReadTransformMarshaler @ 0x1C000C460 (CreateSharedReadTransformMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadTransformMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadTransformMarshaler **a2)
{
  struct DirectComposition::CSharedReadTransformMarshaler *v4; // rax
  struct DirectComposition::CSharedReadTransformMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadTransformMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x38uLL);
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadTransformMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadTransformMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 240LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadTransformMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
