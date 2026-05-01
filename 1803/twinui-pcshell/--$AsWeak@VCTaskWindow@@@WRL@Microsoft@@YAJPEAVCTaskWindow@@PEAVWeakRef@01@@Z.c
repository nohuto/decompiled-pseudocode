/*
 * XREFs of ??$AsWeak@VCTaskWindow@@@WRL@Microsoft@@YAJPEAVCTaskWindow@@PEAVWeakRef@01@@Z @ 0x18006F300
 * Callers:
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x1800472EC (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWindow@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B2A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWindo.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWindow@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18001B470 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskWin.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<CTaskWindow>(
        __int64 (__fastcall ***a1)(__int64 a1, __int64 a2, __int64 *a3),
        __int64 *a2)
{
  __int64 (__fastcall **v2)(__int64, __int64, __int64 *); // rax
  __int64 (__fastcall *v4)(__int64, __int64, __int64 *); // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rax
  int WeakReference; // eax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  void (__fastcall *v12)(__int64); // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp+10h] BYREF
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF

  v2 = *a1;
  v16 = 0LL;
  v4 = *v2;
  if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::QueryInterface )
    v5 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::QueryInterface(
           (__int64)a1,
           (__int64)&GUID_00000038_0000_0000_c000_000000000046,
           &v16);
  else
    v5 = v4((__int64)a1, (__int64)&GUID_00000038_0000_0000_c000_000000000046, &v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v15 = 0LL;
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL);
    if ( v7 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::GetWeakReference )
      WeakReference = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::GetWeakReference(
                        v16,
                        &v15);
    else
      WeakReference = v7(v16, &v15);
    v9 = v15;
    v6 = WeakReference;
    if ( WeakReference >= 0 )
    {
      v10 = v15;
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v9 = v15;
      }
      v11 = *a2;
      *a2 = v10;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, v9);
        v9 = v15;
      }
      v6 = 0;
    }
    if ( v9 )
    {
      v15 = 0LL;
      v12 = *(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL);
      if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v9);
      else
        v12(v9);
    }
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v6;
}
