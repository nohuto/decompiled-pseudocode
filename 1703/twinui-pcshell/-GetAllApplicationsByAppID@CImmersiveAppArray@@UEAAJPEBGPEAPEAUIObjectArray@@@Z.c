/*
 * XREFs of ?GetAllApplicationsByAppID@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x18002BED0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180023B20 (-CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByAppID(
        CImmersiveAppArray *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  char v6; // r15
  __int64 *v7; // rax
  const struct _GUID *v8; // rcx
  int Instance; // edi
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+50h] BYREF
  int v19; // [rsp+A8h] [rbp+58h] BYREF

  v17[1] = -2LL;
  *a3 = 0LL;
  v6 = 0;
  v17[0] = 0LL;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v17);
  Instance = CEnumerableObjectCollection::CreateInstance(v8, (void **)v7);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v18);
    v10 = 0;
    if ( Instance >= 0 )
    {
      do
      {
        if ( v10 >= v18 )
          break;
        v16 = 0LL;
        v11 = *(_QWORD *)this;
        v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v16);
        if ( (*(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *))(v11 + 32))(
               this,
               v10,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               v12) >= 0
          && (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v16 + 88LL))(v16, a2, &v19) >= 0
          && v19 )
        {
          Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17[0] + 40LL))(v17[0], v16);
          v6 = 1;
        }
        v13 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        ++v10;
      }
      while ( Instance >= 0 );
      if ( Instance >= 0 )
      {
        if ( !v6 )
          Instance = -2147319765;
        if ( Instance >= 0 )
          Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObjectArray **))v17[0])(
                       v17[0],
                       &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                       a3);
      }
    }
  }
  v14 = v17[0];
  if ( v17[0] )
  {
    v17[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)Instance;
}
