/*
 * XREFs of SiGetBiosSystemPartition @ 0x14077E0A0
 * Callers:
 *     SiGetSystemPartition @ 0x14057DB70 (SiGetSystemPartition.c)
 * Callees:
 *     wcsstr @ 0x1401606A0 (wcsstr.c)
 *     swprintf_s @ 0x140163370 (swprintf_s.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SiGetBiosSystemDisk @ 0x1405D35B4 (SiGetBiosSystemDisk.c)
 *     SiGetDriveLayoutInformation @ 0x14077D4F8 (SiGetDriveLayoutInformation.c)
 */

__int64 __fastcall SiGetBiosSystemPartition(wchar_t **a1, __int64 a2, __int64 a3, int a4)
{
  wchar_t *PoolWithTag; // rbp
  int BiosSystemDisk; // eax
  wchar_t *v7; // rdi
  int v8; // ebx
  int DriveLayoutInformation; // eax
  _DWORD *v10; // rsi
  wchar_t *v11; // rax
  __int64 v12; // rax
  SIZE_T v13; // rbx
  unsigned int v14; // edx
  _DWORD *v15; // rax
  unsigned int v16; // ecx
  wchar_t *Str; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = 0LL;
  PoolWithTag = 0LL;
  Str = 0LL;
  BiosSystemDisk = SiGetBiosSystemDisk(&Str, a2, a3, a4);
  v7 = Str;
  v8 = BiosSystemDisk;
  if ( BiosSystemDisk < 0 )
    goto LABEL_19;
  DriveLayoutInformation = SiGetDriveLayoutInformation(Str, &P);
  v10 = P;
  v8 = DriveLayoutInformation;
  if ( DriveLayoutInformation >= 0 )
  {
    if ( !*(_DWORD *)P )
    {
      v11 = wcsstr(v7, L"\\Partition0");
      if ( v11 )
        *v11 = 0;
      v12 = -1LL;
      do
        ++v12;
      while ( v7[v12] );
      v13 = (unsigned int)(2 * v12 + 42);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x4B505953u);
      if ( !PoolWithTag )
      {
        v8 = -1073741670;
        goto LABEL_14;
      }
      v14 = v10[1];
      v15 = v10 + 12;
      v16 = 0;
      if ( v14 )
      {
        while ( !*((_BYTE *)v15 + 33) )
        {
          ++v16;
          v15 += 36;
          if ( v16 >= v14 )
            goto LABEL_13;
        }
        swprintf_s(PoolWithTag, v13 >> 1, L"%s\\Partition%lu", v7, v15[6]);
        *a1 = PoolWithTag;
        v8 = 0;
        goto LABEL_14;
      }
    }
LABEL_13:
    v8 = -1073740718;
  }
LABEL_14:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v8 < 0 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_19:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
