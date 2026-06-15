/*
 * XREFs of ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000EE30
 * Callers:
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180029A10 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000C800 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180036B89 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindStreamGroup(
        CDeviceGraphObjectsStore *this,
        const struct StreamGroupParams *a2,
        struct IStreamGroupProxy **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  CDeviceGraphObjectsStore *v4; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rdi
  unsigned int v8; // ebx
  Microsoft::WRL::Details::WeakReferenceImpl *v10; // rbx
  __int64 (__fastcall *v11)(volatile signed __int32 *); // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  unsigned __int16 *v15; // r14
  __int64 v16; // rsi
  const void *v17; // rax
  unsigned __int8 (__fastcall ***v18)(_QWORD); // rax
  __int64 (__fastcall *v19)(volatile signed __int32 *); // rax
  struct IStreamGroupProxy *v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64); // [rsp+28h] [rbp-38h] BYREF
  Microsoft::WRL::Details::WeakReferenceImpl *v22; // [rsp+30h] [rbp-30h] BYREF
  CDeviceGraphObjectsStore *v23; // [rsp+38h] [rbp-28h]
  _BYTE v24[16]; // [rsp+40h] [rbp-20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v23 = this;
  v4 = this;
  *a3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  for ( i = (Microsoft::WRL::Details::WeakReferenceImpl **)*((_QWORD *)v4 + 7);
        i != *((Microsoft::WRL::Details::WeakReferenceImpl ***)v4 + 8);
        ++i )
  {
    v10 = *i;
    v22 = v10;
    if ( v10 )
      (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v10 + 8LL))(v10);
    v21 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v22, (struct IInspectable **)&v21) < 0 || !v21 )
      goto LABEL_10;
    v20 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v21, (__int64)&v20) < 0
      || *((_QWORD *)a2 + 3) != (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 96LL))(v20) )
    {
      goto LABEL_30;
    }
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *, _BYTE *))(*(_QWORD *)v20 + 104LL))(v20, v24);
    v13 = *((_QWORD *)a2 + 4) - *v12;
    if ( !v13 )
      v13 = *((_QWORD *)a2 + 5) - v12[1];
    if ( v13
      || *((_DWORD *)a2 + 2) != (*(unsigned int (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 152LL))(v20) )
    {
LABEL_30:
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
LABEL_10:
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((CProcessSubmixProxy **)&v21);
      goto LABEL_11;
    }
    v14 = *((_QWORD *)a2 + 2);
    if ( *(_WORD *)(v14 + 16) == *(_WORD *)((*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20
                                                                                                  + 112LL))(v20)
                                          + 16) )
    {
      v15 = (unsigned __int16 *)*((_QWORD *)a2 + 2);
      v16 = v15[8];
      v17 = (const void *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 112LL))(v20);
      if ( !memcmp_0(v15, v17, v16 + 18)
        && *((_BYTE *)a2 + 49) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 128LL))(v20)
        && *((_BYTE *)a2 + 48) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 144LL))(v20)
        && *((_BYTE *)a2 + 50) == (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 248LL))(v20) )
      {
        v18 = (unsigned __int8 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v20 + 272LL))(v20);
        if ( *((_QWORD *)a2 + 7) )
        {
          if ( v18 && (**v18)(v18) )
          {
LABEL_33:
            *a3 = v20;
            v20 = 0LL;
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
            Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((CProcessSubmixProxy **)&v21);
            if ( v10 )
            {
              v19 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL);
              if ( v19 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v10);
              else
                v19((volatile signed __int32 *)v10);
            }
            break;
          }
        }
        else if ( !v18 )
        {
          goto LABEL_33;
        }
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v20);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((CProcessSubmixProxy **)&v21);
LABEL_11:
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL);
      if ( v11 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v10);
      else
        v11((volatile signed __int32 *)v10);
    }
    v4 = v23;
  }
  v8 = *a3 == 0LL ? 0x80070490 : 0;
  if ( v3 )
    LeaveCriticalSection(v3);
  return v8;
}
