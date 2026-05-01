/*
 * XREFs of ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180114EA0
 * Callers:
 *     ?GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180114680 (-GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?Invoke@CFallbackWindow@@UEAAJXZ @ 0x180114930 (-Invoke@CFallbackWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ @ 0x180080934 (-InternalRelease@-$ComPtr@UIImmersiveApplicationArrayPrivate@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFallbackWindow::_GetVisibleApp(CFallbackWindow *this, struct IImmersiveApplication **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v9[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+30h] BYREF
  int v11; // [rsp+78h] [rbp+38h] BYREF
  __int64 v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  v9[1] = -2LL;
  *a2 = 0LL;
  v9[0] = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  v4 = (**v3)(v3, &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a, v9);
  if ( v4 >= 0 )
  {
    v13 = 0LL;
    v5 = v9[0];
    Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(&v13);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v13);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, &v10);
      if ( v4 >= 0 )
      {
        v4 = -2147023728;
        v6 = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            v12 = 0LL;
            v7 = v13;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
            if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL))(
                   v7,
                   v6,
                   &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                   &v12) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 64LL))(v12, &v11) >= 0
              && v11 )
            {
              break;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
            if ( ++v6 >= v10 )
              goto LABEL_11;
          }
          v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v12)(
                 v12,
                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                 a2);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        }
      }
    }
LABEL_11:
    Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  return (unsigned int)v4;
}
