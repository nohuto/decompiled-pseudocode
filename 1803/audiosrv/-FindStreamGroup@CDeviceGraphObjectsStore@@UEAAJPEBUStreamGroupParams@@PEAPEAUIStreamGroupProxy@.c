/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18001BE50
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180019FB0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B680 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800973E4 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  const struct StreamGroupParams *v6; // r15
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rdi
  __int64 (__fastcall *v8)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rdx
  unsigned int v9; // ebx
  Microsoft::WRL::Details::WeakReferenceImpl *v11; // rbx
  struct IInspectable *v12; // rcx
  __int64 (__fastcall *v13)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **); // rax
  int v14; // eax
  void (__fastcall *v15)(Microsoft::WRL::Details::WeakReferenceImpl *); // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  unsigned __int16 *v19; // r15
  __int64 v20; // r14
  const void *v21; // rax
  char v22; // al
  unsigned __int8 (__fastcall ***v23)(_QWORD); // rax
  struct IStreamGroupProxy *v24; // [rsp+20h] [rbp-30h] BYREF
  struct IInspectable *v25; // [rsp+28h] [rbp-28h] BYREF
  const struct StreamGroupParams *v26; // [rsp+30h] [rbp-20h]
  char v27[16]; // [rsp+38h] [rbp-18h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v26 = a2;
  *a3 = 0LL;
  v6 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)this + 8); ; ++i )
  {
    v8 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve;
    if ( i == *((Microsoft::WRL::Details::WeakReferenceImpl ***)this + 9) )
      break;
    v11 = *i;
    if ( *i )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, __int64 (__fastcall *)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **)))(*(_QWORD *)v11 + 8LL))(
        *i,
        Microsoft::WRL::Details::WeakReferenceImpl::Resolve);
      v8 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve;
    }
    v12 = 0LL;
    v25 = 0LL;
    if ( !v11
      || ((v13 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **))(*(_QWORD *)v11 + 24LL),
           v13 != Microsoft::WRL::Details::WeakReferenceImpl::Resolve)
        ? (v14 = v13(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v25))
        : (v14 = Microsoft::WRL::Details::WeakReferenceImpl::Resolve(
                   v11,
                   &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                   &v25)),
          v12 = v25,
          v14 < 0) )
    {
      if ( v12 )
      {
        v25 = 0LL;
        ((void (__fastcall *)(struct IInspectable *, __int64 (__fastcall *)(Microsoft::WRL::Details::WeakReferenceImpl *, const struct _GUID *, struct IInspectable **)))v12->lpVtbl->Release)(
          v12,
          v8);
      }
LABEL_15:
      if ( !v11 )
        continue;
      v15 = *(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v11 + 16LL);
      if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          v11,
          v8);
        continue;
      }
LABEL_30:
      v15(v11);
      continue;
    }
    if ( !v25 )
      goto LABEL_15;
    v24 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v25, &v24) < 0
      || *((_QWORD *)v6 + 3) != (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v24 + 96LL))(v24) )
    {
      goto LABEL_29;
    }
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *, char *))(*(_QWORD *)v24 + 104LL))(v24, v27);
    v17 = *((_QWORD *)v6 + 4) - *v16;
    if ( !v17 )
      v17 = *((_QWORD *)v6 + 5) - v16[1];
    if ( v17
      || *((_DWORD *)v6 + 2) != (*(unsigned int (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v24 + 152LL))(v24) )
    {
LABEL_29:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v25);
      v15 = *(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v11 + 16LL);
      goto LABEL_30;
    }
    v18 = *((_QWORD *)v6 + 2);
    if ( *(_WORD *)(v18 + 16) == *(_WORD *)((*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v24
                                                                                                  + 112LL))(v24)
                                          + 16) )
    {
      v19 = (unsigned __int16 *)*((_QWORD *)v6 + 2);
      v20 = v19[8];
      v21 = (const void *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v24 + 112LL))(v24);
      if ( memcmp_0(v19, v21, v20 + 18) )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v25);
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v11 + 16LL))(v11);
        v6 = v26;
        continue;
      }
      v22 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v24 + 128LL))(v24);
      v6 = v26;
      if ( *((_BYTE *)v26 + 49) == v22
        && *((_BYTE *)v6 + 48) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v24 + 144LL))(v24)
        && *((_BYTE *)v6 + 50) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v24 + 248LL))(v24) )
      {
        v23 = (unsigned __int8 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v24 + 272LL))(v24);
        if ( *((_QWORD *)v6 + 7) )
        {
          if ( v23 && (**v23)(v23) )
          {
LABEL_36:
            *a3 = v24;
            v24 = 0LL;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
            Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v25);
            (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v11 + 16LL))(v11);
            break;
          }
        }
        else if ( !v23 )
        {
          goto LABEL_36;
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v25);
    (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v9 = -2147023728;
  if ( *a3 )
    v9 = 0;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v9;
}
