/*
 * XREFs of bBMFDIFIMETRICS @ 0x1C02353AC
 * Callers:
 *     bBmfdLoadFont @ 0x1C023550C (bBmfdLoadFont.c)
 *     bConvertFontRes @ 0x1C02358DC (bConvertFontRes.c)
 *     bLoadNtFon @ 0x1C0236CEC (bLoadNtFon.c)
 * Callees:
 *     cFacesRes @ 0x1C0237034 (cFacesRes.c)
 *     bMappedViewStrlen @ 0x1C0238040 (bMappedViewStrlen.c)
 */

__int64 __fastcall bBMFDIFIMETRICS(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int *a5)
{
  unsigned int *v5; // r14
  unsigned __int64 v8; // r8
  unsigned int v9; // r11d
  int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // r12d
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax

  v5 = a5;
  if ( a5 )
    *a5 = 0;
  v8 = a4[2];
  if ( !v8 )
    v8 = *a4
       + ((*(unsigned __int8 *)(*a4 + 108LL) << 24) | *(unsigned __int8 *)(*a4 + 105LL) | (unsigned __int64)(*(unsigned __int16 *)(*a4 + 106LL) << 8));
  if ( (unsigned int)bMappedViewStrlen(a1, a2, v8, &a5) )
  {
    if ( (unsigned int *)((char *)a5 + 2) >= a5 )
    {
      v10 = -1;
      v11 = 2LL * (unsigned int)((_DWORD)a5 + 2);
      if ( v11 <= 0xFFFFFFFF && (int)v11 + 3 >= (unsigned int)v11 )
      {
        v12 = (v11 + 3) & 0xFFFFFFFC;
        v13 = -1;
        if ( v12 + 192 >= 0xC0 )
          v13 = v12 + 192;
        v14 = v13;
        if ( v12 < 0xFFFFFF40 )
        {
          v15 = cFacesRes(a4, (char *)a5 + 2) - 1;
          if ( !v15 )
            goto LABEL_18;
          v16 = 20LL * v15;
          if ( v16 <= 0xFFFFFFFF && (unsigned int)(v16 + 12) >= 0xC )
          {
            v17 = v13 + v16 + 12;
            if ( v17 >= v13 )
              v10 = v13 + v16 + 12;
            v13 = v10;
            if ( v17 >= v14 )
            {
LABEL_18:
              if ( v13 + 7 >= v13 )
              {
                v18 = (v13 + 7) & 0xFFFFFFF8;
                if ( a3 )
                {
                  *(_DWORD *)(a3 + 20) = v12;
                  *(_DWORD *)(a3 + 24) = v18;
                }
                if ( v5 )
                  *v5 = v18;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return v9;
}
