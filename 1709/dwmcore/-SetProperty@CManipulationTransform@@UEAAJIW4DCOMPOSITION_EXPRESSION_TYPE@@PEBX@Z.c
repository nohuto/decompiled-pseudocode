/*
 * XREFs of ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B4A00
 * Callers:
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1800B4854 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::SetProperty(CGradientBrush *a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  _BYTE *v7; // rdx
  unsigned __int64 v8; // rcx

  v4 = 0;
  if ( a3 != 52 )
    goto LABEL_16;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v6 = 164LL;
        break;
      case 2:
        v6 = 176LL;
        break;
      case 3:
        v6 = 188LL;
        break;
      default:
        goto LABEL_16;
    }
  }
  else
  {
    v6 = 152LL;
  }
  v7 = (char *)a1 + v6;
  if ( !(CGradientBrush *)((char *)a1 + v6) )
  {
LABEL_16:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x10Au);
    return v4;
  }
  v8 = *(_QWORD *)v7 - *(_QWORD *)a4;
  if ( *(_QWORD *)v7 == *(_QWORD *)a4 )
    v8 = *((unsigned int *)v7 + 2) - (unsigned __int64)*(unsigned int *)(a4 + 8);
  if ( v8 )
  {
    *(_QWORD *)v7 = *(_QWORD *)a4;
    *((_DWORD *)v7 + 2) = *(_DWORD *)(a4 + 8);
    *((_BYTE *)a1 + 264) = 1;
    CResource::NotifyOnChanged(a1, 0, 0LL);
    CResource::InvalidateAnimationSources(a1);
    CResource::InvalidateAnimationSources(a1);
  }
  return v4;
}
