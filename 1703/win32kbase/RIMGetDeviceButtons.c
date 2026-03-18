/*
 * XREFs of RIMGetDeviceButtons @ 0x1C000917C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C01068DC (RIMPopulatePointerDevice.c)
 * Callees:
 *     RIMPbuttonToCursor @ 0x1C00089AC (RIMPbuttonToCursor.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4 (rimHidP_GetSpecificButtonCaps.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     RIMValidatePTPButtons @ 0x1C0117EB0 (RIMValidatePTPButtons.c)
 */

__int64 __fastcall RIMGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v9; // r14d
  int v10; // r15d
  unsigned __int16 v11; // di
  __int64 v12; // rbp
  int SpecificButtonCaps; // edi
  __int64 v14; // rax
  unsigned int i; // r8d
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // edx
  int v25; // r8d
  int v26; // ecx
  bool v27; // zf
  __int64 v28; // rax
  int v29; // ecx
  unsigned int v30; // r9d
  int v31; // [rsp+78h] [rbp+10h]
  int v32; // [rsp+7Ch] [rbp+14h]

  v5 = (unsigned __int16)a4[23];
  a5 = (unsigned __int16)a4[23];
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *a4 != 5 )
    v11 = *(_WORD *)(a2 + 708);
  v12 = Win32AllocPool(72 * v5, 1701344082LL);
  if ( !v12 )
  {
    SpecificButtonCaps = -1073741668;
    goto LABEL_14;
  }
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0, 0, v11, 0, v12, (__int64)&a5, a3);
  if ( SpecificButtonCaps < 0 )
    goto LABEL_13;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
  {
    v14 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a2 + 696));
    *(_QWORD *)(a2 + 1592) = v14;
    if ( v14 )
    {
      v27 = *(_DWORD *)(a2 + 24) == 7;
      *(_DWORD *)(a2 + 1604) = *(_DWORD *)(a2 + 696);
      if ( v27 )
        SpecificButtonCaps = RIMValidatePTPButtons(v12, a5);
      if ( SpecificButtonCaps >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(a2 + 1604); *(_DWORD *)(*(_QWORD *)(a2 + 1592) + 4 * v17) = 1 )
        {
          ++*(_DWORD *)(a1 + 656);
          v16 = i++;
          v17 = 3 * v16;
          *(_DWORD *)(*(_QWORD *)(a2 + 1592) + 4 * v17 + 4) = *(_DWORD *)(a1 + 656);
        }
      }
      goto LABEL_12;
    }
LABEL_38:
    SpecificButtonCaps = -1073741668;
    goto LABEL_12;
  }
  v22 = a5;
  *(_DWORD *)(a2 + 1604) = 0;
  v23 = Win32AllocPoolZInit(12 * v22);
  *(_QWORD *)(a2 + 1592) = v23;
  if ( !v23 )
    goto LABEL_38;
  v24 = 0;
  if ( !a5 )
    goto LABEL_38;
  while ( v9 < 2 )
  {
    if ( *(_WORD *)(v12 + 72LL * v24) == 13 )
    {
      v25 = *(unsigned __int16 *)(v12 + 72LL * v24 + 56);
      if ( (unsigned __int16)(v25 - 60) <= 9u )
      {
        v26 = 577;
        if ( _bittest(&v26, v25 - 60) )
        {
          v27 = (_WORD)v25 == 66;
          if ( (_WORD)v25 == 66 )
            goto LABEL_29;
          if ( !v9 || *(_WORD *)(v12 + 72LL * (v9 - 1) + 56) == 66 )
          {
            v27 = (_WORD)v25 == 66;
LABEL_29:
            if ( v27 )
              v10 = 1;
            v28 = v9;
            ++*(_DWORD *)(a1 + 656);
            ++v9;
            v29 = *(_DWORD *)(a1 + 656);
            ++*(_DWORD *)(a2 + 1604);
            *(&v31 + v28) = v29;
          }
        }
      }
    }
    if ( ++v24 >= a5 )
      break;
  }
  if ( !v10 )
    goto LABEL_38;
  *(_DWORD *)(*(_QWORD *)(a2 + 1592) + 4LL) = v31;
  **(_DWORD **)(a2 + 1592) = RIMPbuttonToCursor(66);
  if ( v9 > v30 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 1592) + 16LL) = v32;
    *(_DWORD *)(*(_QWORD *)(a2 + 1592) + 12LL) = RIMPbuttonToCursor(69);
  }
LABEL_12:
  v18 = a5;
  *(_DWORD *)(a2 + 312) += a5;
  *(_DWORD *)(a2 + 1608) = v18;
LABEL_13:
  Win32FreePool(v12);
LABEL_14:
  v19 = *(_DWORD *)(a2 + 1608);
  if ( !v19 )
    SpecificButtonCaps = -1073741668;
  if ( SpecificButtonCaps != -1073741668 )
  {
    v20 = Win32AllocPool(2LL * v19, 1701344082LL);
    *(_QWORD *)(a2 + 1392) = v20;
    if ( !v20 )
      return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}
