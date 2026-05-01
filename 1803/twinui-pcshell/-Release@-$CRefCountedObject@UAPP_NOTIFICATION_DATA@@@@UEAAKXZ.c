/*
 * XREFs of ?Release@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x18001D500
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_c35d5355421e51b91e1b7dc40faf7951_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001D470 (--_G-$CTaskWrapper@V_lambda_c35d5355421e51b91e1b7dc40faf7951_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001EAE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VF.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject<APP_NOTIFICATION_DATA>::Release(void *a1, const struct std::nothrow_t *a2)
{
  unsigned __int32 v3; // edi
  void *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rcx

  v3 = _InterlockedDecrement((volatile signed __int32 *)a1 + 10);
  if ( !v3 && a1 )
  {
    operator delete(*((void **)a1 + 1), a2);
    v4 = (void *)*((_QWORD *)a1 + 4);
    if ( v4 )
    {
      *((_QWORD *)a1 + 4) = 0LL;
      v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
      if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObjectArray,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObjectArray,Microsoft::WRL::FtmBase>::Release(v4);
      else
        v5();
    }
    v6 = *((_QWORD *)a1 + 3);
    if ( v6 )
    {
      *((_QWORD *)a1 + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  }
  return v3;
}
