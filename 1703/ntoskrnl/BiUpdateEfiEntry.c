/*
 * XREFs of BiUpdateEfiEntry @ 0x140738988
 * Callers:
 *     BiCreateEfiEntry @ 0x140736E78 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x14073753C (BiExportBcdObjects.c)
 * Callees:
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     BiGetElement @ 0x1407351D4 (BiGetElement.c)
 *     BiCreateMergedBootEntry @ 0x140737008 (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x1407381C8 (BiModifyBootEntry.c)
 */

__int64 __fastcall BiUpdateEfiEntry(__int64 a1, __int64 a2)
{
  _WORD *v2; // r14
  _DWORD *v4; // r15
  int v5; // ebx
  _DWORD *v6; // r12
  int v7; // eax
  struct _BOOT_ENTRY *v8; // rsi
  unsigned int v9; // eax
  _DWORD *v11; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v12; // [rsp+38h] [rbp-18h] BYREF
  void *Buf2; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+98h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  P = 0LL;
  v2 = 0LL;
  Buf2 = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v5 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &Handle);
  if ( v5 >= 0 )
  {
    BiGetElement((__int64)Handle, 0x12000004u, &P, &v14);
    if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
    {
      BiGetElement((__int64)Handle, 0x11000001u, &v11, &v14);
      BiGetElement((__int64)Handle, 0x12000002u, &v12, &v14);
      v4 = v11;
      v2 = v12;
    }
    v6 = *(_DWORD **)(a2 + 40);
    v7 = BiCreateMergedBootEntry(v6, (char *)P, v4, v2, &Buf2);
    v5 = v7;
    if ( v7 == -1073741766 )
    {
      v5 = 0;
    }
    else if ( v7 >= 0 )
    {
      v8 = (struct _BOOT_ENTRY *)Buf2;
      v9 = v6[1];
      if ( v9 == *((_DWORD *)Buf2 + 1) && !memcmp(v6, Buf2, v9) || (v5 = BiModifyBootEntry(v8), v5 >= 0) )
      {
        ExFreePoolWithTag(v6, 0x4B444342u);
        *(_QWORD *)(a2 + 40) = v8;
      }
      else
      {
        ExFreePoolWithTag(v8, 0x4B444342u);
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0x4B444342u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x4B444342u);
  }
  if ( Handle )
    BcdCloseObject(Handle);
  return (unsigned int)v5;
}
