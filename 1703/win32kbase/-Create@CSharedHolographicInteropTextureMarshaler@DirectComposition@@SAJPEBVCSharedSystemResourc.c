/*
 * XREFs of ?Create@CSharedHolographicInteropTextureMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C014FFCC
 * Callers:
 *     CreateSharedHolographicInteropTextureMarshaler @ 0x1C01501A0 (CreateSharedHolographicInteropTextureMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedHolographicInteropTextureMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedHolographicInteropTextureMarshaler **a2)
{
  struct DirectComposition::CSharedHolographicInteropTextureMarshaler *v4; // rax
  struct DirectComposition::CSharedHolographicInteropTextureMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedHolographicInteropTextureMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                                0x58uLL,
                                                                                0x73684344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x58uLL);
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 4) |= 0x20u;
    *(_QWORD *)v5 = &DirectComposition::CSharedHolographicInteropTextureMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = ObReferenceObjectByPointer((char *)a1 - 24, 3u, ExCompositionObjectType, 0);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedHolographicInteropTextureMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 10) = a1;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  result = (unsigned int)v6;
  *a2 = v5;
  return result;
}
