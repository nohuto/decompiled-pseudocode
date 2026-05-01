/*
 * XREFs of ?Release@?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@UEAAKXZ @ 0x18001D590
 * Callers:
 *     ??_E?$CTaskWrapper@V_lambda_d190757c23000f52f2ae5d43357c90b2_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001DA30 (--_E-$CTaskWrapper@V_lambda_d190757c23000f52f2ae5d43357c90b2_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001EAE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VF.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::Release(
        void *a1,
        const struct std::nothrow_t *a2)
{
  unsigned __int32 v3; // edi
  void *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rcx

  v3 = _InterlockedDecrement((volatile signed __int32 *)a1 + 12);
  if ( !v3 && a1 )
  {
    operator delete(*((void **)a1 + 4), a2);
    v4 = (void *)*((_QWORD *)a1 + 2);
    if ( v4 )
    {
      *((_QWORD *)a1 + 2) = 0LL;
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
      if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObjectArray,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObjectArray,Microsoft::WRL::FtmBase>::Release(v4);
      else
        v5();
    }
    v6 = *((_QWORD *)a1 + 1);
    if ( v6 )
    {
      *((_QWORD *)a1 + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  }
  return v3;
}
