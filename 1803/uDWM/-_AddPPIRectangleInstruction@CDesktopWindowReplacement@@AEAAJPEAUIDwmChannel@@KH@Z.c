/*
 * XREFs of ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z @ 0x1800759DC
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x1800311D0 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180003E28 (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18006E7C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CDesktopWindowReplacement::_AddPPIRectangleInstruction(
        CDesktopWindowReplacement *this,
        struct IDwmChannel *a2)
{
  int SystemMetrics; // ebx
  const char *v5; // r9
  unsigned int LastError; // ebx
  int v7; // eax
  __int64 v8; // rdx
  struct CSolidRectangleInstruction *v9; // rdx
  __int128 v10; // xmm1
  struct CSolidRectangleInstruction *v12; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+28h] [rbp-28h]
  __int128 v14; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v12 = 0LL;
  *(float *)&v14 = (float)(GetSystemMetrics(76) + 10);
  *((float *)&v14 + 2) = *(float *)&v14 + 4.0;
  SystemMetrics = GetSystemMetrics(79);
  if ( SystemMetrics )
  {
    *(_QWORD *)&v13 = 0x3F8000003F800000LL;
    *((_QWORD *)&v13 + 1) = 0x3F8000003F800000LL;
    *((float *)&v14 + 1) = (float)(SystemMetrics + GetSystemMetrics(77) - 14);
    *((float *)&v14 + 3) = *((float *)&v14 + 1) + 4.0;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v12);
    v7 = CSolidRectangleInstruction::Create(a2, &v12);
    LastError = v7;
    if ( v7 >= 0 )
    {
      v9 = v12;
      v10 = v13;
      *((_OWORD *)v12 + 2) = v14;
      *((_OWORD *)v9 + 1) = v10;
      v7 = CRenderDataVisual::AddInstruction(this, v9);
      LastError = v7;
      if ( v7 >= 0 )
      {
        LastError = 0;
        goto LABEL_9;
      }
      v8 = 112LL;
    }
    else
    {
      v8 = 109LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x62,
                  (__int64)"windows\\dwm\\udwm\\desktopmanager.cpp",
                  v5);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v12);
  return LastError;
}
