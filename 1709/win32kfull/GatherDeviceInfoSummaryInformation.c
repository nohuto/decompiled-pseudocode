/*
 * XREFs of GatherDeviceInfoSummaryInformation @ 0x1C0043A00
 * Callers:
 *     ?ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z @ 0x1C01AB324 (-ApplyRimDevBackedDeviceSummaryInfomation@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall GatherDeviceInfoSummaryInformation(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  const wchar_t *v13; // rcx
  int v14; // eax
  unsigned __int16 v15; // dx
  __int16 v16; // r8
  __int16 v17; // ax
  unsigned int v18; // edx

  if ( !*(_QWORD *)(a1 + 224) )
  {
    if ( *(_BYTE *)(a1 + 48) != 2 )
      return;
    goto LABEL_3;
  }
  v10 = *(unsigned __int8 *)(a1 + 48);
  if ( !v10 )
  {
    v16 = *(_WORD *)(a1 + 456);
    v17 = *(_WORD *)(a1 + 66);
    if ( (v17 & 0x20) != 0 )
      *(_WORD *)(a1 + 66) = v17 & 0xFFDF;
    ++*a2;
    v18 = *(unsigned __int16 *)(a1 + 458);
    if ( *a5 > v18 )
      v18 = *a5;
    *a5 = v18;
    if ( v16 < 0 )
    {
      *a4 = 1;
      v16 &= ~0x8000u;
    }
    if ( v16 == 32 || v16 == 64 || v16 == 256 )
      ++*a3;
    if ( ghMouseDevice == -1 )
      ghMouseDevice = *(_QWORD *)a1;
    return;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v13 = *(const wchar_t **)(a1 + 216);
    if ( !v13 || wcsncmp(v13, L"\\??\\Root#RDP", 0xCuLL) )
    {
      v14 = *(unsigned __int8 *)(a1 + 456);
      if ( v14 == 4 )
      {
        if ( *(_BYTE *)(a1 + 457) != 0xFF )
        {
LABEL_16:
          v15 = *((_WORD *)&gKeyboardInfo + 2);
          gKeyboardInfo = *(_OWORD *)(a1 + 456);
          *((_QWORD *)&gKeyboardInfo + 2) = *(_QWORD *)(a1 + 472);
          *((_DWORD *)&gKeyboardInfo + 6) = *(_DWORD *)(a1 + 480);
          if ( v15 > *((_WORD *)&gKeyboardInfo + 2) )
            *((_WORD *)&gKeyboardInfo + 2) = v15;
        }
      }
      else if ( (unsigned int)(v14 - 7) <= 1 )
      {
        goto LABEL_16;
      }
    }
    a7 = a6;
LABEL_3:
    ++*a7;
    return;
  }
  if ( v11 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 472);
      if ( v12 )
      {
        if ( (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 6 )
          ++*a2;
      }
    }
    goto LABEL_3;
  }
}
