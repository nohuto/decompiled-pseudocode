/*
 * XREFs of ?Create@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0150D5C
 * Callers:
 *     CreateSharedWriteRemotingRenderTargetMarshaler @ 0x1C0150F20 (CreateSharedWriteRemotingRenderTargetMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedWriteRemotingRenderTargetMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedWriteRemotingRenderTargetMarshaler **a2)
{
  struct DirectComposition::CSharedWriteRemotingRenderTargetMarshaler *v4; // rax
  struct DirectComposition::CSharedWriteRemotingRenderTargetMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedWriteRemotingRenderTargetMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                                0x50uLL,
                                                                                0x6F644344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x50uLL);
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 4) |= 0x20u;
    *(_QWORD *)v5 = &DirectComposition::CSharedWriteRemotingRenderTargetMarshaler::`vftable';
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
      (*(void (__fastcall **)(struct DirectComposition::CSharedWriteRemotingRenderTargetMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 9) = a1;
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
