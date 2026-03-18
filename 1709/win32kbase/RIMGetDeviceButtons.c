/*
 * XREFs of RIMGetDeviceButtons @ 0x1C00914CC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C01075C4 (RIMPopulatePointerDevice.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C001266C (rimHidP_GetSpecificButtonCaps.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMPbuttonToCursor @ 0x1C0091788 (RIMPbuttonToCursor.c)
 *     RIMValidatePTPButtons @ 0x1C0116DBC (RIMValidatePTPButtons.c)
 */

__int64 __fastcall RIMGetDeviceButtons(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        _WORD *a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v9; // ebp
  int v10; // r12d
  unsigned __int16 v11; // di
  struct _HIDP_BUTTON_CAPS *v12; // r14
  int SpecificButtonCaps; // edi
  void *v14; // rax
  bool v15; // zf
  unsigned int i; // r8d
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v23; // rax
  void *v24; // rax
  int v25; // edx
  USAGE UsageMin; // ax
  unsigned int v27; // r10d
  unsigned int v28; // r9d
  int v29; // ecx
  __int64 v30; // rax
  int v31; // [rsp+78h] [rbp+10h]
  int v32; // [rsp+7Ch] [rbp+14h]

  v5 = (unsigned __int16)a4[23];
  a5 = (unsigned __int16)a4[23];
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *a4 != 5 )
    v11 = *(_WORD *)(a2 + 688);
  v12 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72 * v5, 0x65687352u);
  if ( !v12 )
  {
    SpecificButtonCaps = -1073741668;
    goto LABEL_14;
  }
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 0, v11, 0, v12, (unsigned __int16 *)&a5, a3);
  if ( SpecificButtonCaps < 0 )
    goto LABEL_13;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
  {
    v14 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a2 + 680), 2019849042LL);
    *(_QWORD *)(a2 + 928) = v14;
    if ( v14 )
    {
      v15 = *(_DWORD *)(a2 + 24) == 7;
      *(_DWORD *)(a2 + 940) = *(_DWORD *)(a2 + 680);
      if ( v15 )
        SpecificButtonCaps = RIMValidatePTPButtons(v12, a5);
      if ( SpecificButtonCaps >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(a2 + 940); *(_DWORD *)(*(_QWORD *)(a2 + 928) + 4 * v18) = 1 )
        {
          ++*(_DWORD *)(a1 + 656);
          v17 = i++;
          v18 = 3 * v17;
          *(_DWORD *)(*(_QWORD *)(a2 + 928) + 4 * v18 + 4) = *(_DWORD *)(a1 + 656);
        }
      }
      goto LABEL_12;
    }
LABEL_36:
    SpecificButtonCaps = -1073741668;
    goto LABEL_12;
  }
  v23 = a5;
  *(_DWORD *)(a2 + 940) = 0;
  v24 = Win32AllocPoolZInit(12 * v23, 2019849042LL);
  *(_QWORD *)(a2 + 928) = v24;
  if ( !v24 )
    goto LABEL_36;
  v25 = 0;
  if ( !a5 )
    goto LABEL_36;
  while ( v9 < 2 )
  {
    if ( v12[v25].UsagePage == 13 )
    {
      UsageMin = v12[v25].Range.UsageMin;
      if ( UsageMin == 66 )
      {
        v10 = 1;
      }
      else if ( UsageMin != 69 && UsageMin != 60 || v9 && v12[v9 - 1].Range.UsageMin != 66 )
      {
        goto LABEL_27;
      }
      v29 = ++*(_DWORD *)(a1 + 656);
      v30 = v9++;
      ++*(_DWORD *)(a2 + 940);
      *(&v31 + v30) = v29;
    }
LABEL_27:
    if ( ++v25 >= a5 )
      break;
  }
  if ( !v10 )
    goto LABEL_36;
  *(_DWORD *)(*(_QWORD *)(a2 + 928) + 4LL) = v31;
  **(_DWORD **)(a2 + 928) = RIMPbuttonToCursor(66LL);
  if ( v9 > v28 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 928) + 16LL) = v32;
    *(_DWORD *)(*(_QWORD *)(a2 + 928) + 12LL) = RIMPbuttonToCursor(v27);
  }
LABEL_12:
  v19 = a5;
  *(_DWORD *)(a2 + 296) += a5;
  *(_DWORD *)(a2 + 944) = v19;
LABEL_13:
  Win32FreePool((__int64)v12);
LABEL_14:
  v20 = *(_DWORD *)(a2 + 944);
  if ( !v20 )
    SpecificButtonCaps = -1073741668;
  if ( SpecificButtonCaps != -1073741668 )
  {
    v21 = Win32AllocPool(2LL * v20, 0x65687352u);
    *(_QWORD *)(a2 + 728) = v21;
    if ( !v21 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}
