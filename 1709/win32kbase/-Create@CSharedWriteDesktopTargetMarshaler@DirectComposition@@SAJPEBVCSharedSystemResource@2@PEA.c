/*
 * XREFs of ?Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C008EA58
 * Callers:
 *     CreateSharedWriteDesktopTargetMarshaler @ 0x1C008EA20 (CreateSharedWriteDesktopTargetMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedWriteDesktopTargetMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedWriteDesktopTargetMarshaler **a2)
{
  struct DirectComposition::CSharedWriteDesktopTargetMarshaler *v4; // rax
  struct DirectComposition::CSharedWriteDesktopTargetMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedWriteDesktopTargetMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                         0x68uLL,
                                                                         0x67644344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x68uLL);
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 4) |= 0x20u;
    *(_QWORD *)v5 = &DirectComposition::CSharedWriteDesktopTargetMarshaler::`vftable';
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
      (*(void (__fastcall **)(struct DirectComposition::CSharedWriteDesktopTargetMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 12) = a1;
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
