/*
 * XREFs of ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18000CA54
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180029A10 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18002A098 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800945F0 (-OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18000CFF0 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStr.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<IStreamGroupProxy>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int v4; // ebx
  __int64 (__fastcall *v5)(__int64, __int64 *); // rax
  int WeakReference; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64); // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp+10h] BYREF
  __int64 v14; // [rsp+40h] [rbp+20h] BYREF

  v2 = *a1;
  v14 = 0LL;
  v4 = (*v2)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v14);
  if ( v4 >= 0 )
  {
    v13 = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::GetWeakReference )
      WeakReference = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::GetWeakReference(
                        v14,
                        &v13);
    else
      WeakReference = v5(v14, &v13);
    v7 = v13;
    v4 = WeakReference;
    if ( WeakReference >= 0 )
    {
      v8 = v13;
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v7 = v13;
      }
      v9 = *a2;
      *a2 = v8;
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 16LL))(v9, v7);
        v7 = v13;
      }
      v4 = 0;
    }
    if ( v7 )
    {
      v13 = 0LL;
      v10 = *(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL);
      if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v7);
      else
        v10(v7);
    }
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v4;
}
