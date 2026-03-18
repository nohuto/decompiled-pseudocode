/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x1C001E980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rcx
  unsigned __int16 v4; // ax
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4065;
  if ( *(_DWORD *)(v1 + 256) == 10 )
  {
    if ( *(_DWORD *)(v1 + 1732) >= 0xAu )
    {
      if ( *(_WORD *)(v1 + 1736) == 256 )
      {
        if ( *(_WORD *)(v1 + 1738) == 5 )
        {
          if ( *(_WORD *)(v1 + 1740) )
            return 4077;
          v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
          v4 = 69;
        }
        else
        {
          v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
          v4 = 68;
        }
      }
      else
      {
        v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
        v4 = 67;
      }
    }
    else
    {
      v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
      v4 = 66;
    }
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL);
    v4 = 65;
  }
  WPP_RECORDER_SF_(v3, 2u, 5u, v4, (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    McTemplateK0p(
      v5,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_PROPERTY_DESCRIPTOR_HEADER,
      (const GUID *)(v1 + 1516),
      *(_QWORD *)(v1 + 24));
  return v2;
}
