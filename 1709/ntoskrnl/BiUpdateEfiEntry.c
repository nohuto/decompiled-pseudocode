/*
 * XREFs of BiUpdateEfiEntry @ 0x14077D100
 * Callers:
 *     BiCreateEfiEntry @ 0x14077B3C8 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x14077BB1C (BiExportBcdObjects.c)
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     BiGetElement @ 0x140779470 (BiGetElement.c)
 *     BiCreateMergedBootEntry @ 0x14077B58C (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x14077C840 (BiModifyBootEntry.c)
 */

__int64 __fastcall BiUpdateEfiEntry(void *a1, const GUID *a2)
{
  _WORD *v2; // r14
  _DWORD *v4; // r15
  NTSTATUS v5; // ebx
  _DWORD *v6; // r12
  int v7; // eax
  _BOOT_ENTRY *v8; // rsi
  unsigned int v9; // eax
  _DWORD *v11; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v12; // [rsp+38h] [rbp-18h] BYREF
  void *Buf2; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+98h] [rbp+48h] BYREF
  HANDLE BcdObjectHandle; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  P = 0LL;
  v2 = 0LL;
  Buf2 = 0LL;
  v4 = 0LL;
  BcdObjectHandle = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v5 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  if ( v5 >= 0 )
  {
    BiGetElement(BcdObjectHandle, 0x12000004u, &P, &v14);
    if ( (a2[3].Data1 & 8) == 0 )
    {
      BiGetElement(BcdObjectHandle, 0x11000001u, &v11, &v14);
      BiGetElement(BcdObjectHandle, 0x12000002u, &v12, &v14);
      v4 = v11;
      v2 = v12;
    }
    v6 = *(_DWORD **)a2[2].Data4;
    v7 = BiCreateMergedBootEntry(v6, (char *)P, v4, v2, &Buf2);
    v5 = v7;
    if ( v7 == -1073741766 )
    {
      v5 = 0;
    }
    else if ( v7 >= 0 )
    {
      v8 = (_BOOT_ENTRY *)Buf2;
      v9 = v6[1];
      if ( v9 == *((_DWORD *)Buf2 + 1) && !memcmp(v6, Buf2, v9) || (v5 = BiModifyBootEntry(v8), v5 >= 0) )
      {
        ExFreePoolWithTag(v6, 0x4B444342u);
        *(_QWORD *)a2[2].Data4 = v8;
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
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v5;
}
