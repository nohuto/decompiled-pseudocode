/*
 * XREFs of IrqLibpParseMadt @ 0x1C009C8B8
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C009C690 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     ProcessorAddInstance @ 0x1C008E0EC (ProcessorAddInstance.c)
 *     IcAddGicInstance @ 0x1C0091D5C (IcAddGicInstance.c)
 *     IcAddApicInstance @ 0x1C009CF50 (IcAddApicInstance.c)
 */

__int64 IrqLibpParseMadt()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  _BYTE *v3; // r8
  unsigned __int8 v4; // dl
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned __int8 v7; // al
  __int16 v8; // ax
  bool v9; // cf
  __int64 v10; // rax

  v0 = *((_QWORD *)AcpiInformation + 4);
  v1 = v0 + 44;
  v2 = v0 + *(unsigned int *)(v0 + 4);
  v3 = (_BYTE *)(v0 + 46);
  if ( v0 + 46 <= v2 )
  {
    do
    {
      v4 = *(_BYTE *)(v1 + 1);
      if ( v4 < 2u || v1 + (unsigned __int64)v4 > v2 )
        return 0LL;
      if ( *(_BYTE *)v1 )
      {
        switch ( *(_BYTE *)v1 )
        {
          case 1:
            if ( v4 == 12 )
            {
              result = IcAddApicInstance(*(unsigned int *)(v1 + 8));
              goto LABEL_35;
            }
            break;
          case 2:
            if ( v4 == 10 && !*v3 )
            {
              v7 = *(_BYTE *)(v1 + 3);
              if ( v7 < 0x10u )
              {
                *((_DWORD *)&IsaVectorOverrides + 2 * v7) = *(_DWORD *)(v1 + 4);
                v8 = *(_WORD *)(v1 + 8);
                if ( (v8 & 0xF) != 0 )
                {
                  v9 = (v8 & 3u) < 2;
                  v10 = *(unsigned __int8 *)(v1 + 3);
                  if ( v9 )
                    *((_BYTE *)&IsaVectorOverrides + 8 * v10 + 4) = 0;
                  else
                    *((_BYTE *)&IsaVectorOverrides + 8 * v10 + 4) = 2;
                  if ( (*(_BYTE *)(v1 + 8) & 8) != 0 )
                    *((_BYTE *)&IsaVectorOverrides + 8 * *(unsigned __int8 *)(v1 + 3) + 4) |= 1u;
                }
              }
            }
            break;
          case 9:
            if ( v4 == 16 && (*(_BYTE *)(v1 + 8) & 1) != 0 )
            {
LABEL_19:
              v6 = *(_DWORD *)(v1 + 4);
              goto LABEL_34;
            }
            break;
          case 0xB:
            if ( v4 >= 0x28u && (*(_BYTE *)(v1 + 12) & 1) != 0 )
            {
              if ( (unsigned int)IrqLibGicVersion < 3 )
                goto LABEL_19;
              if ( v4 >= 0x4Cu )
              {
                v6 = (*(_QWORD *)(v1 + 68) >> 8) ^ (*(_QWORD *)(v1 + 68) ^ (*(_QWORD *)(v1 + 68) >> 8)) & 0xFFFFFF;
                goto LABEL_34;
              }
            }
            break;
          default:
            if ( *(_BYTE *)v1 == 12 && v4 >= 0x18u )
            {
              result = IcAddGicInstance(*(_DWORD *)(v1 + 16));
              goto LABEL_35;
            }
            break;
        }
      }
      else if ( v4 == 8 && (*(_BYTE *)(v1 + 4) & 1) != 0 )
      {
        v6 = *(unsigned __int8 *)(v1 + 3);
LABEL_34:
        result = ProcessorAddInstance(v6, -1);
LABEL_35:
        if ( (int)result < 0 )
          return result;
      }
      v1 += *(unsigned __int8 *)(v1 + 1);
      v3 = (_BYTE *)(v1 + 2);
    }
    while ( v1 + 2 <= v2 );
  }
  return 0LL;
}
