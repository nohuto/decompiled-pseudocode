/*
 * XREFs of ?GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x18015987C
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180159300 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::GetImmersiveMonitorForNavigate(_QWORD *a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v8 = a1[28];
  if ( *a4 != v8 )
  {
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(a1[28]);
    v9 = *a4;
    *a4 = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = a1[27];
  if ( v10 && (unsigned __int64)((__int64)(a1[35] - a1[34]) >> 3) > 1 )
  {
    v16 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, bool, __int64, __int64 *))(*(_QWORD *)v10 + 104LL))(
            v10,
            a3 == 5,
            a2,
            &v16);
    v12 = v16;
    if ( v11 >= 0 && *a4 != v16 )
    {
      v13 = v16;
      if ( v16 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        v12 = v16;
      }
      v14 = *a4;
      *a4 = v13;
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, v12);
        v12 = v16;
      }
    }
    if ( v12 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return 0LL;
}
