/*
 * XREFs of ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180028FB0
 * Callers:
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x180028DF8 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationTransform::SetProperty(CResource *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  _BYTE *v7; // rcx
  unsigned __int64 v8; // rdx

  v4 = 0;
  if ( a3 != 52 )
    goto LABEL_16;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v7 = (char *)a1 + 164;
        break;
      case 2u:
        v7 = (char *)a1 + 176;
        break;
      case 3u:
        v7 = (char *)a1 + 188;
        break;
      default:
        goto LABEL_16;
    }
  }
  else
  {
    v7 = (char *)a1 + 152;
  }
  if ( !v7 )
  {
LABEL_16:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x10Au);
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
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
    CResource::InvalidateAnimationSources(a1, a2);
    CResource::InvalidateAnimationSources(a1, 4u);
  }
  return v4;
}
