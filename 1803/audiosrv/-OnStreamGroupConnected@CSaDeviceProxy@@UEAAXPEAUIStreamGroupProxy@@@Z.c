/*
 * XREFs of ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18001F0C0
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001D6B0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 * Callees:
 *     ?IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18001DFD0 (-IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18001F020 (-HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18001F030 (-IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupConnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  bool (__fastcall *v4)(CBaseStreamGroupProxy *); // rax
  bool IsFormatSensitive; // al
  int v6; // ebp
  bool (__fastcall *v7)(CBaseStreamGroupProxy *); // rax
  bool IsPeriodicitySensitive; // al
  bool (__fastcall *v9)(CBaseStreamGroupProxy *); // rax
  bool HasLazyRequest; // al
  int v11; // edi
  int v12; // ebx

  v4 = *(bool (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a2 + 232LL);
  if ( v4 == CBaseStreamGroupProxy::IsFormatSensitive )
    IsFormatSensitive = CBaseStreamGroupProxy::IsFormatSensitive(a2);
  else
    IsFormatSensitive = v4(a2);
  v6 = 0;
  if ( IsFormatSensitive
    || ((v7 = *(bool (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a2 + 224LL),
         v7 != CBaseStreamGroupProxy::IsPeriodicitySensitive)
      ? (IsPeriodicitySensitive = v7(a2))
      : (IsPeriodicitySensitive = CBaseStreamGroupProxy::IsPeriodicitySensitive(a2)),
        IsPeriodicitySensitive
     || ((v9 = *(bool (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)a2 + 240LL),
          v9 != CBaseStreamGroupProxy::HasLazyRequest)
       ? (HasLazyRequest = v9(a2))
       : (HasLazyRequest = CBaseStreamGroupProxy::HasLazyRequest(a2)),
         HasLazyRequest)) )
  {
    v11 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 240LL))(a2) != 0;
    v12 = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 224LL))(a2) != 0;
    LOBYTE(v6) = (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 232LL))(a2) != 0;
    *((_DWORD *)this + 21) += v12;
    *((_DWORD *)this + 22) += v6;
    *((_DWORD *)this + 23) += v11;
    *((_QWORD *)this + 12) = GetTickCount64();
  }
  ++*((_DWORD *)this + 20);
}
