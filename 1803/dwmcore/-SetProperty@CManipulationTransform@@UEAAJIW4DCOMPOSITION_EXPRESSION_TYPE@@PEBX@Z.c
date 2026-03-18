/*
 * XREFs of ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180037930
 * Callers:
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x180037AA4 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationTransform::SetProperty(CResource *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  unsigned __int64 v9; // rcx

  if ( a3 != 52 )
    goto LABEL_16;
  v6 = 0;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v7 = 164LL;
        break;
      case 2u:
        v7 = 176LL;
        break;
      case 3u:
        v7 = 188LL;
        break;
      default:
        goto LABEL_16;
    }
  }
  else
  {
    v7 = 152LL;
  }
  v8 = (char *)a1 + v7;
  if ( !(CResource *)((char *)a1 + v7) )
  {
LABEL_16:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xFAu);
    return v6;
  }
  v9 = *(_QWORD *)v8 - *(_QWORD *)a4;
  if ( *(_QWORD *)v8 == *(_QWORD *)a4 )
    v9 = *((unsigned int *)v8 + 2) - (unsigned __int64)*(unsigned int *)(a4 + 8);
  if ( v9 )
  {
    *(_QWORD *)v8 = *(_QWORD *)a4;
    *((_DWORD *)v8 + 2) = *(_DWORD *)(a4 + 8);
    *((_BYTE *)a1 + 264) = 1;
    CResource::NotifyOnChanged(a1, 0LL, 0LL);
    CResource::InvalidateAnimationSources(a1, a2);
    CResource::InvalidateAnimationSources(a1, 4u);
  }
  return v6;
}
