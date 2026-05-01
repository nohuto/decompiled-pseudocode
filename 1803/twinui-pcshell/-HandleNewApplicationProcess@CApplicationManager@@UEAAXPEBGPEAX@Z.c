/*
 * XREFs of ?HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z @ 0x180108080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180107140 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::HandleNewApplicationProcess(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        void *a3)
{
  struct IObjectArray *v6; // rbx
  __int64 v7[2]; // [rsp+30h] [rbp-10h] BYREF
  int v8; // [rsp+60h] [rbp+20h] BYREF
  struct IObjectArray *v9; // [rsp+78h] [rbp+38h] BYREF

  v7[1] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v9);
  if ( (int)CApplicationManager::GetAllApplicationsByAppIDSafe((CApplicationManager *)((char *)this + 96), a2, &v9) >= 0
    && ((int (__fastcall *)(struct IObjectArray *, int *))v9->lpVtbl->GetCount)(v9, &v8) >= 0
    && v8 == 1 )
  {
    v7[0] = 0LL;
    v6 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
    if ( ((int (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))v6->lpVtbl->GetAt)(
           v6,
           0LL,
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           v7) >= 0 )
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7[0] + 128LL))(v7[0], a3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v9);
}
