/*
 * XREFs of IrqLibpParseMadt @ 0x1C00AAD90
 * Callers:
 *     AcpiIrqLibConfigureLibrary @ 0x1C00AAC84 (AcpiIrqLibConfigureLibrary.c)
 * Callees:
 *     ProcessorAddInstance @ 0x1C00841F0 (ProcessorAddInstance.c)
 *     IcAddGicInstance @ 0x1C00A6080 (IcAddGicInstance.c)
 *     IcAddApicInstance @ 0x1C00AAEB0 (IcAddApicInstance.c)
 */

__int64 IrqLibpParseMadt()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  _BYTE *v3; // r8
  unsigned __int8 v4; // dl
  unsigned int v5; // ecx
  __int64 result; // rax
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
              goto LABEL_9;
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
LABEL_39:
              v5 = *(_DWORD *)(v1 + 4);
LABEL_8:
              result = ProcessorAddInstance(v5, -1);
LABEL_9:
              if ( (int)result < 0 )
                return result;
            }
            break;
          case 0xB:
            if ( v4 >= 0x28u && (*(_BYTE *)(v1 + 12) & 1) != 0 )
            {
              if ( (unsigned int)IrqLibGicVersion < 3 )
                goto LABEL_39;
              if ( v4 >= 0x4Cu )
              {
                v5 = (*(_QWORD *)(v1 + 68) >> 8) ^ (*(_DWORD *)(v1 + 68) ^ (*(_DWORD *)(v1 + 68) >> 8)) & 0xFFFFFF;
                goto LABEL_8;
              }
            }
            break;
          default:
            if ( *(_BYTE *)v1 == 12 && v4 >= 0x18u )
            {
              result = IcAddGicInstance(*(_DWORD *)(v1 + 16));
              goto LABEL_9;
            }
            break;
        }
      }
      else if ( v4 == 8 && (*(_BYTE *)(v1 + 4) & 1) != 0 )
      {
        v5 = *(unsigned __int8 *)(v1 + 3);
        goto LABEL_8;
      }
      v1 += *(unsigned __int8 *)(v1 + 1);
      v3 = (_BYTE *)(v1 + 2);
    }
    while ( v1 + 2 <= v2 );
  }
  return 0LL;
}
