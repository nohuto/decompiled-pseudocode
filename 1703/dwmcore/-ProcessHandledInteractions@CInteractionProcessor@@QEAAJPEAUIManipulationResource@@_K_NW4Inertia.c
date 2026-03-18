/*
 * XREFs of ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18018EE50
 * Callers:
 *     ?ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTelemetryData@@PEAW4PointerResult@@@Z @ 0x180166DE0 (-ProcessHandledInteractions@CInteraction@@UEAAJ_K_NW4InertiaFrameType@@UManipulationThreadTeleme.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18018EC28 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x18018EC98 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x18018F1C0 (-ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTeleme.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessHandledInteractions(
        __int64 a1,
        struct IManipulationResource *a2,
        __int64 a3,
        bool a4,
        int a5,
        struct IManipulationTelemetryData *a6,
        _DWORD *a7)
{
  int v7; // r12d
  bool v11; // r15
  char v12; // dl
  unsigned __int8 v13; // dl
  __int64 v14; // rbx
  bool v15; // r9
  bool v16; // r9
  bool v17; // r8
  __int64 v18; // rax
  char v19; // cl
  char v20; // cl
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+38h] [rbp-99h]
  _OWORD v26[3]; // [rsp+40h] [rbp-91h] BYREF
  __int64 v27; // [rsp+70h] [rbp-61h]
  int v28; // [rsp+78h] [rbp-59h]
  _BYTE v29[64]; // [rsp+80h] [rbp-51h] BYREF

  v7 = 0;
  v25 = a3;
  if ( a7 )
    *a7 = 1;
  v11 = (*(_BYTE *)(a1 + 424) & 0x20) != 0 && *(_DWORD *)(a1 + 400) != 1
     || (*(unsigned __int8 (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 24LL))(a2);
  if ( !(*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 16LL))(a2)
    || (*(unsigned int (__fastcall **)(struct IManipulationResource *))(*(_QWORD *)a2 + 16LL))(a2) == 2
    && *(_DWORD *)(a1 + 404) == 2
    || v11 )
  {
    if ( a7 )
      *a7 = 2;
    v12 = *(_BYTE *)(a1 + 424);
    if ( (v12 & 0x10) == 0 )
    {
      v13 = (16 * a4) | v12 & 0xEF;
      *(_BYTE *)(a1 + 424) = v13;
      if ( !a5 )
      {
        v24 = 0LL;
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v24);
        CInteractionProcessor::GetInteractionContext((__int64 (__fastcall ****)(_QWORD))a1, *(_DWORD *)(a1 + 404), &v24);
        v14 = v24;
        if ( v24 )
        {
          memset_0(v26, 0, 0x3CuLL);
          if ( a4 )
          {
            if ( (*(_BYTE *)(a1 + 424) & 0x20) != 0
              && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 88LL))(v14, 0LL) )
              {
                if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64, _OWORD *))(*(_QWORD *)v14 + 112LL))(
                       v14,
                       *(_QWORD *)(a1 + 440),
                       v25,
                       a1 + 788,
                       v26) )
                {
                  CInteractionProcessor::ProcessOutput(
                    (CInteractionProcessor *)a1,
                    a2,
                    a4,
                    v15,
                    a6,
                    (struct InteractionOutput *)v26);
                }
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 120LL))(v14);
              }
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 72LL))(v14, 0LL);
            }
            v7 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v14 + 56LL))(v14, a1 + 788, v26);
            if ( v7 < 0 )
              goto LABEL_31;
            v17 = a4;
          }
          else
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 88LL))(v14, 0LL) )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 120LL))(v14);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 72LL))(v14, 0LL);
            }
            v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 40LL))(v14, v29);
            v17 = 0;
            v26[0] = *(_OWORD *)v18;
            v26[1] = *(_OWORD *)(v18 + 16);
            v26[2] = *(_OWORD *)(v18 + 32);
            v27 = *(_QWORD *)(v18 + 48);
            v28 = *(_DWORD *)(v18 + 56);
          }
          CInteractionProcessor::ProcessOutput(
            (CInteractionProcessor *)a1,
            a2,
            v17,
            v16,
            a6,
            (struct InteractionOutput *)v26);
        }
LABEL_31:
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v24);
        return (unsigned int)v7;
      }
      v19 = *(_BYTE *)(a1 + 425) & 1;
      LODWORD(v24) = 3;
      BYTE4(v24) = (v13 >> 6) | (4 * (v19 | 8));
      HIDWORD(v24) = (BYTE4(v24) ^ (unsigned __int8)(8 * CInteractionProcessor::GetRailsEnabled(a1, 0))) & 8 ^ BYTE4(v24);
      v20 = (BYTE4(v24) ^ (16 * CInteractionProcessor::GetRailsEnabled(a1, 1))) & 0x10 ^ BYTE4(v24);
      v21 = *(_QWORD *)a2;
      BYTE4(v24) = v20;
      (*(void (__fastcall **)(struct IManipulationResource *, __int64 *))(v21 + 8))(a2, &v24);
      if ( a5 == 2 )
      {
        v22 = *(_QWORD *)a2;
        LODWORD(v24) = 0;
        (*(void (__fastcall **)(struct IManipulationResource *, __int64 *))(v22 + 8))(a2, &v24);
      }
      *(_DWORD *)(a1 + 876) = a5;
    }
  }
  return (unsigned int)v7;
}
