/*
 * XREFs of ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180065E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Ld @ 0x18003A7BC (WPP_SF_Ld.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NXZ @ 0x180051604 (-IsEnabled@CAppManagerTelemetry@@SA_NXZ.c)
 *     ??$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z @ 0x180066D48 (--$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskWindow::SetPresentationState(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+60h] [rbp+20h] BYREF
  int v18; // [rsp+70h] [rbp+30h] BYREF
  int v19; // [rsp+78h] [rbp+38h] BYREF

  v16[1] = -2LL;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xEu,
      &WPP_e01bdf00d25532a75c449ae819750f32_Traceguids,
      *(_DWORD *)(a1 + 136),
      a3);
  LOBYTE(v6) = CAppManagerTelemetry::IsEnabled();
  if ( (_BYTE)v6 )
  {
    v18 = a2;
    v17 = a3;
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    LOBYTE(v6) = CAppManagerTelemetry::SetPresentationState<unsigned int,unsigned int,unsigned int>(&v19, &v17, &v18);
  }
  *(_DWORD *)(a1 + 136) = a3;
  v16[0] = 0LL;
  if ( *(_QWORD *)(a1 + 48) )
  {
    v6 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 48))(
           *(_QWORD *)(a1 + 48),
           &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20,
           v16);
    if ( v6 >= 0 )
    {
      v7 = *(_DWORD *)(a1 + 136);
      if ( !v7 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 )
      {
        v12 = 0LL;
        v13 = 0LL;
        goto LABEL_19;
      }
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          v12 = 1LL;
LABEL_16:
          v13 = a2;
LABEL_19:
          LOBYTE(v6) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v16[0] + 24LL))(
                         v16[0],
                         v13,
                         v12);
          goto LABEL_20;
        }
        if ( v11 != 1 )
          goto LABEL_20;
      }
      v12 = 0LL;
      goto LABEL_16;
    }
  }
LABEL_20:
  v14 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    LOBYTE(v6) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v6;
}
