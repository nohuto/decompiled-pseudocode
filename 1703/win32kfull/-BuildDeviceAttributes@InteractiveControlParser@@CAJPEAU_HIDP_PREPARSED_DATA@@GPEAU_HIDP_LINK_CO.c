/*
 * XREFs of ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAU_HIDP_LINK_COLLECTION_NODE@@PEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C022441C
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C02244C0 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C02245E0 (-BuildDeviceShapeDescriptor@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C0224954 (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 */

__int64 __fastcall InteractiveControlParser::BuildDeviceAttributes(
        struct _HIDP_PREPARSED_DATA *a1,
        struct _HIDP_PREPARSED_DATA *a2,
        struct _HIDP_LINK_COLLECTION_NODE *a3,
        struct _INTERACTIVECTRL_CAPABILITIES *a4,
        struct InteractiveControlDevice *a5)
{
  __int64 result; // rax
  struct _HIDP_PREPARSED_DATA *v7; // rdx
  struct _INTERACTIVECTRL_CAPABILITIES *v8; // rbx
  struct _INTERACTIVECTRL_CAPABILITIES *v9; // rcx
  __int64 v10; // rdx
  struct _INTERACTIVECTRL_CAPABILITIES **v11; // rax

  result = InteractiveControlParser::BuildDeviceShapeDescriptor(a5, a2);
  if ( (int)result < 0 )
    result = 0LL;
  if ( *((_DWORD *)a4 + 18) )
  {
    result = InteractiveControlParser::FindDigitizerForDevice(a5, v7);
    if ( (int)result < 0 )
    {
      v8 = (struct _INTERACTIVECTRL_CAPABILITIES *)*((_QWORD *)a4 + 14);
      while ( v8 != (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a4 + 112) )
      {
        v9 = v8;
        v8 = *(struct _INTERACTIVECTRL_CAPABILITIES **)v8;
        if ( *((_DWORD *)v9 + 4) == 1 )
        {
          v10 = *(_QWORD *)v9;
          v11 = (struct _INTERACTIVECTRL_CAPABILITIES **)*((_QWORD *)v9 + 1);
          if ( *(struct _INTERACTIVECTRL_CAPABILITIES **)(*(_QWORD *)v9 + 8LL) != v9 || *v11 != v9 )
            __fastfail(3u);
          *v11 = (struct _INTERACTIVECTRL_CAPABILITIES *)v10;
          *(_QWORD *)(v10 + 8) = v11;
          --*((_DWORD *)a4 + *((int *)v9 + 4) + 17);
          --*((_DWORD *)a4 + 26);
          Win32FreePool(v9);
        }
      }
      return 0LL;
    }
  }
  return result;
}
