/*
 * XREFs of DxgkLPMDisplayControl @ 0x1C01985B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C0038520 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C0038554 (-HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ.c)
 *     ?GetCaps@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_CAPS@@@Z @ 0x1C0197E84 (-GetCaps@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_CAPS@@@Z.c)
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0197F08 (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStart@LPMDisplayCtrl@@QEAAJXZ @ 0x1C0198114 (-LPMStart@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01981A4 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?SetIlluminance@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_ILLUMINANCE_ARGS@@@Z @ 0x1C01983B8 (-SetIlluminance@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_ILLUMINANCE_ARGS@@@Z.c)
 *     ?Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z @ 0x1C0198414 (-Update@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_PRESENT_ARGS@@@Z.c)
 */

__int64 __fastcall DxgkLPMDisplayControl(int *a1, struct _ERESOURCE *a2)
{
  LPMDisplayCtrl *v3; // rcx
  unsigned int v4; // ebx
  NTSTATUS v5; // edx
  LPMDisplayCtrl *v6; // rcx
  PFILE_OBJECT *v7; // r8
  int v8; // eax
  NTSTATUS Caps; // eax
  bool v10; // zf
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  v4 = 0;
  if ( !a1 )
  {
    v5 = -1073741811;
LABEL_23:
    v4 = v5;
    goto LABEL_24;
  }
  if ( !FileObject || !LPMDisplayCtrl::HasRegisteredInternalDisplay(v3) )
  {
    v5 = -1073741661;
    goto LABEL_23;
  }
  if ( !*((_DWORD *)v7 + 7) )
  {
    v5 = LPMDisplayCtrl::Initialize(v6);
    if ( v5 < 0 )
      goto LABEL_23;
    v7 = FileObject;
  }
  v8 = *a1;
  if ( *a1 == 1 )
  {
    Caps = LPMDisplayCtrl::GetCaps(v6, (struct _D3DKMT_LPMD_CAPS *)(a1 + 4));
LABEL_19:
    v5 = Caps;
    goto LABEL_21;
  }
  if ( v8 != 2 )
  {
    switch ( v8 )
    {
      case 3:
        *((_DWORD *)v7 + 13) = 2;
        Caps = LPMDisplayCtrl::LPMStop(v7);
        break;
      case 4:
        Caps = LPMDisplayCtrl::Update(v6, (struct _D3DKMT_LPMD_PRESENT_ARGS *)(a1 + 2));
        break;
      case 5:
        Caps = LPMDisplayCtrl::SetIlluminance(v6, (LPMDisplayCtrl **)a1 + 1);
        break;
      default:
        v5 = -1073741811;
        goto LABEL_21;
    }
    goto LABEL_19;
  }
  v10 = *((_DWORD *)v7 + 14) == 1;
  *((_DWORD *)v7 + 13) = 1;
  if ( v10 )
  {
    Caps = LPMDisplayCtrl::LPMStart(v6);
    goto LABEL_19;
  }
LABEL_21:
  a1[8] = v5;
LABEL_24:
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return v4;
}
