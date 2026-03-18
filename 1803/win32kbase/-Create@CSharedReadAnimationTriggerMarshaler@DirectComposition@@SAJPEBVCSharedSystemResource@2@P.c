/*
 * XREFs of ?Create@CSharedReadAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C015ED0C
 * Callers:
 *     CreateSharedReadAnimationTriggerMarshaler @ 0x1C015EDE0 (CreateSharedReadAnimationTriggerMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadAnimationTriggerMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadAnimationTriggerMarshaler **a2)
{
  struct DirectComposition::CSharedReadAnimationTriggerMarshaler *v4; // rax
  struct DirectComposition::CSharedReadAnimationTriggerMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadAnimationTriggerMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                           0x38uLL,
                                                                           0x75614344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x38uLL);
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadAnimationTriggerMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadAnimationTriggerMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 248LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadAnimationTriggerMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
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
