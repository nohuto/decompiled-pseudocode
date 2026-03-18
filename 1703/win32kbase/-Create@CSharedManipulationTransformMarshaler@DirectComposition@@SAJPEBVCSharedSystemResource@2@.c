/*
 * XREFs of ?Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0081C18
 * Callers:
 *     CreateSharedManipulationTransformMarshaler @ 0x1C0081BE0 (CreateSharedManipulationTransformMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CManipulationTransformMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0021DD0 (-Initialize@CManipulationTransformMarshaler@DirectComposition@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedManipulationTransformMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedManipulationTransformMarshaler **a2)
{
  DirectComposition::CManipulationTransformMarshaler *v4; // rax
  DirectComposition::CManipulationTransformMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (DirectComposition::CManipulationTransformMarshaler *)Win32AllocPoolWithQuotaZInit(0x78uLL, 0x626D4344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x78uLL);
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &DirectComposition::CSharedManipulationTransformMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CManipulationTransformMarshaler::Initialize(v5);
    if ( v6 >= 0 )
    {
      v6 = ObReferenceObjectByPointer((char *)a1 - 24, 3u, ExCompositionObjectType, 0);
      if ( v6 >= 0 )
        *((_QWORD *)v5 + 14) = a1;
    }
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CManipulationTransformMarshaler *, __int64))(*(_QWORD *)v5 + 104LL))(
        v5,
        1LL);
      v5 = 0LL;
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
