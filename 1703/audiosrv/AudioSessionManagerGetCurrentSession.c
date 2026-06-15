/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x18002D900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180021180 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002DAEC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerGetCurrentSession(
        CAudioSessionManager ***a1,
        const struct _GUID *a2,
        unsigned int a3,
        void **a4,
        unsigned __int16 **a5)
{
  CAudioSessionManager **v5; // r14
  unsigned __int16 **v6; // r12
  int v10; // ebx
  struct IUnknown *v11; // rcx
  unsigned int v12; // edi
  int v13; // ebx
  int v14; // esi
  unsigned int v15; // ebx
  CAudioSessionManager *v16; // rcx
  __int64 (__fastcall *v17)(CAudioSessionManager *, struct IAudioProcess *, const struct _GUID *, unsigned int, unsigned int, int, void **, unsigned __int16 **); // rax
  int v18; // eax
  struct IUnknown *v20; // [rsp+50h] [rbp-10h] BYREF
  struct IAudioProcess *v21; // [rsp+A0h] [rbp+40h] BYREF
  struct IUnknown *v22; // [rsp+B8h] [rbp+58h] BYREF

  v5 = *a1;
  v6 = a5;
  v20 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  *a5 = 0LL;
  *a4 = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 71LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, *v5);
  }
  v10 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL))(
          g_PolicyManager,
          0LL,
          &v21);
  if ( v10 < 0 )
    goto LABEL_26;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          *((_QWORD *)*v5 + 30),
          &v20);
  if ( v10 < 0 )
    goto LABEL_26;
  v11 = v22;
  if ( v22 != v20 )
  {
    ATL::AtlComQIPtrAssign(&v22, v20, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v11 = v22;
  }
  if ( !v11 )
  {
    v10 = -2147467262;
LABEL_26:
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetCurrentSession", 0x858u, v10);
    goto LABEL_18;
  }
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned __int16 ***))v11->lpVtbl[1].QueryInterface)(v11, &a5);
  if ( v10 < 0 )
    goto LABEL_26;
  v12 = a3 & 0x60000000;
  v13 = (a3 >> 28) & 1 | ~(unsigned __int8)(a3 >> 18) & 2;
  if ( (*(unsigned int (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v5[1] + 88LL))(v5[1]) )
    v12 = a3 & 0x40000000 | 0x20000000;
  v14 = a3 & 0x10000;
  v15 = (_DWORD)a5 == 1 ? v13 & 0xFFFFFFFD : v13 | 8;
  v16 = *v5;
  v17 = *(__int64 (__fastcall **)(CAudioSessionManager *, struct IAudioProcess *, const struct _GUID *, unsigned int, unsigned int, int, void **, unsigned __int16 **))(*(_QWORD *)*v5 + 112LL);
  v18 = v17 == CAudioSessionManager::GetCurrentSession
      ? CAudioSessionManager::GetCurrentSession(v16, v21, a2, v15, v12, v14 != 0, a4, v6)
      : ((__int64 (__fastcall *)(CAudioSessionManager *, struct IAudioProcess *, const struct _GUID *, _QWORD))v17)(
          v16,
          v21,
          a2,
          v15);
  v10 = v18;
  if ( v18 < 0 )
    goto LABEL_26;
LABEL_18:
  if ( v21 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v21 + 16LL))(v21);
    v21 = 0LL;
  }
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  return (unsigned int)v10;
}
