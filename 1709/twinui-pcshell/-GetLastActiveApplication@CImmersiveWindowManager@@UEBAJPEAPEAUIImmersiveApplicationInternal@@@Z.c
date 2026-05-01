/*
 * XREFs of ?GetLastActiveApplication@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180030060
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::GetLastActiveApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  unsigned int v4; // r8d
  __int64 *v5; // rax
  struct IImmersiveApplicationInternal *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = -2147319765;
  *a2 = 0LL;
  v7 = 0LL;
  if ( *((_BYTE *)this + 89) && *((_QWORD *)this + 8) )
  {
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v7);
    v4 = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 7))(
           **((_QWORD **)this + 7),
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           v5);
    *a2 = v7;
  }
  return v4;
}
