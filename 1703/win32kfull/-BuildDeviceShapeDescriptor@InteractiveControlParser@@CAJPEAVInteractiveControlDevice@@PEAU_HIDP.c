/*
 * XREFs of ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C02245E0
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C022441C (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_CO.c)
 * Callees:
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0224C88 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceShapeDescriptor(
        struct InteractiveControlDevice *a1,
        struct _HIDP_PREPARSED_DATA *a2)
{
  bool v3; // zf
  char *v4; // r14
  char *v5; // rdi
  char *v6; // rsi
  int ScaledComponentValue; // eax
  __int16 v8; // cx

  *((_DWORD *)a1 + 52) = 0;
  v3 = *((_DWORD *)a1 + 43) == 0;
  *((_DWORD *)a1 + 52) = 1;
  if ( v3 )
  {
    *((_DWORD *)a1 + 53) = 0;
    *((_DWORD *)a1 + 54) = 0;
    *((_DWORD *)a1 + 55) = 5800;
    *((_DWORD *)a1 + 56) = 5800;
  }
  else
  {
    *((_DWORD *)a1 + 53) = 0;
    v4 = (char *)a1 + 184;
    *((_DWORD *)a1 + 54) = 0;
    v5 = (char *)*((_QWORD *)a1 + 23);
    while ( v5 != v4 )
    {
      v6 = v5;
      v5 = *(char **)v5;
      if ( *((_DWORD *)v6 + 4) == 8 && *((_DWORD *)v6 + 25) )
      {
        ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(
                                 (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v6,
                                 *((_DWORD *)v6 + 17));
        if ( *((_DWORD *)a1 + 43) == 1 )
        {
          *((_DWORD *)a1 + 55) = ScaledComponentValue;
          *((_DWORD *)a1 + 56) = ScaledComponentValue;
          return 0LL;
        }
        v8 = *((_WORD *)v6 + 40);
        if ( v8 == 72 )
        {
          *((_DWORD *)a1 + 55) = ScaledComponentValue;
        }
        else if ( v8 == 73 )
        {
          *((_DWORD *)a1 + 56) = ScaledComponentValue;
        }
      }
    }
  }
  return 0LL;
}
