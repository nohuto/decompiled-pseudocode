/*
 * XREFs of ?GetAllApplicationsByHostId@CImmersiveAppArray@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180080B40
 * Callers:
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180044950 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?IsEqualByHostId@CImmersiveApp@@UEAAJ_KPEAH@Z @ 0x18004CD80 (-IsEqualByHostId@CImmersiveApp@@UEAAJ_KPEAH@Z.c)
 *     ?GetAt@CImmersiveAppArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180080DC0 (-GetAt@CImmersiveAppArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetCount@CImmersiveAppArray@@UEAAJPEAI@Z @ 0x180080DF0 (-GetCount@CImmersiveAppArray@@UEAAJPEAI@Z.c)
 *     ?QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080E10 (-QueryInterface@CEnumerableObjectCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@CEnumerableObjectCollection@@UEAAKXZ @ 0x180080E30 (-Release@CEnumerableObjectCollection@@UEAAKXZ.c)
 *     ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z @ 0x180080F50 (-AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByHostId(
        CImmersiveAppArray *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  unsigned int v6; // esi
  char v7; // r15
  int v8; // edi
  char *v9; // rax
  CEnumerableObjectCollection *v10; // rbx
  __int64 (__fastcall *v11)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int (__fastcall *v13)(CEnumerableObjectCollection *__hidden); // rax
  CImmersiveAppArray *v14; // r14
  __int64 (__fastcall *v15)(CImmersiveAppArray *__hidden, unsigned int *); // rax
  int v16; // eax
  __int64 (__fastcall *v17)(CImmersiveAppArray *__hidden, unsigned int, const struct _GUID *, void **); // rax
  int v18; // eax
  struct IUnknown *v19; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rax
  int IsEqualByHostId; // eax
  __int64 (__fastcall *v22)(CEnumerableObjectCollection *__hidden, struct IUnknown *); // rax
  int v23; // eax
  __int64 (__fastcall *v24)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **); // rax
  int v25; // eax
  CEnumerableObjectCollection *v26; // rcx
  void (*v27)(void); // rax
  struct IUnknown *v29; // [rsp+30h] [rbp-20h] BYREF
  CEnumerableObjectCollection *v30[3]; // [rsp+38h] [rbp-18h] BYREF
  char *v31; // [rsp+A0h] [rbp+50h] BYREF
  int v32; // [rsp+A8h] [rbp+58h] BYREF

  v30[1] = (CEnumerableObjectCollection *)-2LL;
  v6 = 0;
  *a3 = 0LL;
  v7 = 0;
  v30[0] = 0LL;
  v8 = -2147024882;
  v9 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (CEnumerableObjectCollection *)v9;
  v31 = v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    *((_QWORD *)v9 + 1) = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    *((_QWORD *)v9 + 2) = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    *((_DWORD *)v9 + 6) = 1;
    *(_QWORD *)(v9 + 28) = 4LL;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = **(__int64 (__fastcall ***)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))v10;
    if ( v11 == CEnumerableObjectCollection::QueryInterface )
      Interface = CEnumerableObjectCollection::QueryInterface(
                    v10,
                    &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
                    (void **)v30);
    else
      Interface = v11(v10, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, (void **)v30);
    v8 = Interface;
    v13 = *(unsigned int (__fastcall **)(CEnumerableObjectCollection *__hidden))(*(_QWORD *)v10 + 16LL);
    if ( v13 == CEnumerableObjectCollection::Release )
      CEnumerableObjectCollection::Release(v10);
    else
      v13(v10);
  }
  if ( v8 >= 0 )
  {
    v14 = (CImmersiveAppArray *)((char *)this - 8);
    v15 = *(__int64 (__fastcall **)(CImmersiveAppArray *__hidden, unsigned int *))(*(_QWORD *)v14 + 24LL);
    v16 = v15 == CImmersiveAppArray::GetCount
        ? CImmersiveAppArray::GetCount(v14, (unsigned int *)&v31)
        : v15(v14, (unsigned int *)&v31);
    v8 = v16;
    if ( v16 >= 0 )
    {
      do
      {
        if ( v6 >= (unsigned int)v31 )
          break;
        v29 = 0LL;
        v17 = *(__int64 (__fastcall **)(CImmersiveAppArray *__hidden, unsigned int, const struct _GUID *, void **))(*(_QWORD *)v14 + 32LL);
        if ( v17 == CImmersiveAppArray::GetAt )
          v18 = CImmersiveAppArray::GetAt(v14, v6, &GUID_068fc85a_d4d0_45b0_ab39_311de750a277, (void **)&v29);
        else
          v18 = v17(v14, v6, &GUID_068fc85a_d4d0_45b0_ab39_311de750a277, (void **)&v29);
        v19 = v29;
        if ( v18 >= 0 )
        {
          AddRef = v29->lpVtbl[1].AddRef;
          if ( (char *)AddRef == (char *)CImmersiveApp::IsEqualByHostId )
          {
            IsEqualByHostId = CImmersiveApp::IsEqualByHostId((CImmersiveApp *)v29, a2, &v32);
          }
          else
          {
            IsEqualByHostId = ((__int64 (__fastcall *)(struct IUnknown *, __int64, int *))AddRef)(v29, a2, &v32);
            v19 = v29;
          }
          if ( IsEqualByHostId >= 0 && v32 )
          {
            v22 = *(__int64 (__fastcall **)(CEnumerableObjectCollection *__hidden, struct IUnknown *))(*(_QWORD *)v30[0] + 40LL);
            if ( v22 == CEnumerableObjectCollection::AddObject )
              v23 = CEnumerableObjectCollection::AddObject(v30[0], v19);
            else
              v23 = v22(v30[0], v19);
            v8 = v23;
            v7 = 1;
            v19 = v29;
          }
        }
        if ( v19 )
        {
          v29 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->Release)(v19);
        }
        ++v6;
      }
      while ( v8 >= 0 );
      if ( v8 >= 0 )
      {
        if ( !v7 )
          v8 = -2147319765;
        if ( v8 >= 0 )
        {
          v24 = **(__int64 (__fastcall ***)(CEnumerableObjectCollection *__hidden, const struct _GUID *, void **))v30[0];
          if ( v24 == CEnumerableObjectCollection::QueryInterface )
            v25 = CEnumerableObjectCollection::QueryInterface(
                    v30[0],
                    &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                    (void **)a3);
          else
            v25 = v24(v30[0], &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9, (void **)a3);
          v8 = v25;
        }
      }
    }
  }
  v26 = v30[0];
  if ( v30[0] )
  {
    v30[0] = 0LL;
    v27 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
    if ( (char *)v27 == (char *)CEnumerableObjectCollection::Release )
      CEnumerableObjectCollection::Release(v26);
    else
      v27();
  }
  return (unsigned int)v8;
}
