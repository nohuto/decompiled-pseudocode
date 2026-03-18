/*
 * XREFs of rimIssueReads @ 0x1C0009E88
 * Callers:
 *     RIMReadInput @ 0x1C00095B0 (RIMReadInput.c)
 * Callees:
 *     RimInputTypeToDeviceType @ 0x1C0008EE0 (RimInputTypeToDeviceType.c)
 *     DeviceTypeToRimInputType @ 0x1C0009F40 (DeviceTypeToRimInputType.c)
 *     rimStartDeviceReadIfAllowed @ 0x1C0009F6C (rimStartDeviceReadIfAllowed.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 */

__int64 __fastcall rimIssueReads(__int64 a1)
{
  unsigned int IfAllowed; // ebp
  unsigned int v3; // esi
  int v4; // r15d
  __int64 i; // rdi
  unsigned __int8 v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // eax

  IfAllowed = 0;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_DWORD *)(a1 + 76) & DeviceTypeToRimInputType(v3);
      if ( v4 )
        break;
LABEL_4:
      if ( ++v3 > 2 )
        return IfAllowed;
    }
    for ( i = *(_QWORD *)(a1 + 552); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_4;
      v7 = *(_BYTE *)(i + 48);
      if ( v7 != 3 )
      {
        if ( v3 == 2 )
        {
          if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2LL) & *(_DWORD *)(a1 + 76)) == 0 )
            continue;
LABEL_11:
          IfAllowed = rimStartDeviceReadIfAllowed(a1, i);
          continue;
        }
        if ( v7 == (unsigned int)RimInputTypeToDeviceType(v4) )
          goto LABEL_11;
      }
    }
  }
  v8 = *(_QWORD *)(a1 + 552);
  while ( v8 )
  {
    v9 = rimStartDeviceReadIfAllowed(a1, v8);
    v8 = *(_QWORD *)(v8 + 40);
    IfAllowed = v9;
  }
  return IfAllowed;
}
