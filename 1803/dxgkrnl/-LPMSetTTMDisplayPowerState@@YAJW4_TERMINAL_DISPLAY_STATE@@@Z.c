/*
 * XREFs of ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C01A816C
 * Callers:
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C01D0820 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C003323C (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ?HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ @ 0x1C0033270 (-HasRegisteredInternalDisplay@LPMDisplayCtrl@@QEAAHXZ.c)
 *     ?Initialize@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01A7E54 (-Initialize@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStart@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01A8218 (-LPMStart@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C01A82A8 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 */

__int64 __fastcall LPMSetTTMDisplayPowerState(int a1, struct _ERESOURCE *a2)
{
  LPMDisplayCtrl *v3; // rcx
  NTSTATUS v4; // ebx
  PFILE_OBJECT *v5; // rdx
  LPMDisplayCtrl *v6; // rcx
  NTSTATUS v7; // eax
  PERESOURCE Resource; // [rsp+38h] [rbp+10h] BYREF

  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  v4 = 0;
  if ( !FileObject || !LPMDisplayCtrl::HasRegisteredInternalDisplay(v3) )
  {
    v4 = -1073741661;
    goto LABEL_18;
  }
  *((_DWORD *)v5 + 14) = a1;
  if ( !*((_DWORD *)v5 + 7) )
  {
    v4 = LPMDisplayCtrl::Initialize(v6);
    if ( v4 < 0 )
      goto LABEL_18;
    v5 = FileObject;
  }
  if ( !a1 )
  {
LABEL_14:
    if ( !*((_DWORD *)v5 + 9) )
      goto LABEL_18;
    v7 = LPMDisplayCtrl::LPMStop(v5);
LABEL_16:
    v4 = v7;
    goto LABEL_18;
  }
  if ( a1 != 1 )
  {
    if ( a1 <= 1 || a1 > 3 )
    {
      v4 = -1073741811;
      goto LABEL_18;
    }
    goto LABEL_14;
  }
  if ( *((_DWORD *)v5 + 13) == 1 && !*((_DWORD *)v5 + 9) )
  {
    v7 = LPMDisplayCtrl::LPMStart(v6);
    goto LABEL_16;
  }
LABEL_18:
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
