/*
 * XREFs of BiExportEfiBootManager @ 0x1407E4690
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x1407E49E0 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BcdOpenObject @ 0x140608384 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140608500 (BcdCloseObject.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 *     BiGetElement @ 0x1407E20DC (BiGetElement.c)
 *     BiDeleteEfiVariable @ 0x1407E4364 (BiDeleteEfiVariable.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1407E5010 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1407E52F8 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407E53CC (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1407E5550 (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x1407E55C0 (BiSetBootOptions.c)
 *     BiTranslateDisplayOrder @ 0x1407E5714 (BiTranslateDisplayOrder.c)
 *     BiTranslateObjectIdentifier @ 0x1407E5870 (BiTranslateObjectIdentifier.c)
 */

__int64 __fastcall BiExportEfiBootManager(void *a1, __int64 a2)
{
  void *v2; // r13
  ULONG v3; // edi
  ULONG *v4; // r14
  void *v5; // r15
  void *v6; // rsi
  NTSTATUS v7; // eax
  int v8; // ebx
  int Element; // eax
  PVOID PoolWithTag; // rax
  __int64 v11; // rbx
  int v12; // r15d
  unsigned int v13; // ebx
  int v14; // eax
  ULONG v15; // eax
  int v16; // eax
  int v17; // eax
  ULONG v19; // [rsp+20h] [rbp-39h] BYREF
  _DWORD Count[3]; // [rsp+24h] [rbp-35h] BYREF
  void *Buf1; // [rsp+30h] [rbp-29h] BYREF
  void *Buf2; // [rsp+38h] [rbp-21h] BYREF
  __int64 v23; // [rsp+40h] [rbp-19h]
  PVOID P; // [rsp+48h] [rbp-11h] BYREF
  ULONG *v25; // [rsp+50h] [rbp-9h] BYREF
  void *v26; // [rsp+58h] [rbp-1h] BYREF
  _DWORD *v27; // [rsp+60h] [rbp+7h] BYREF
  _BOOT_OPTIONS BootOptions; // [rsp+68h] [rbp+Fh] BYREF

  v23 = a2;
  Buf1 = 0LL;
  v26 = 0LL;
  v2 = 0LL;
  P = 0LL;
  v3 = 0;
  *(_QWORD *)&Count[1] = 0LL;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0LL;
  Buf2 = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v7 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, (PHANDLE)&Count[1]);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -1073741772 )
      v8 = 0;
    goto LABEL_46;
  }
  Element = BiGetElement(*(HANDLE *)&Count[1], 0x24000001u, &P, Count);
  v8 = Element;
  if ( Element >= 0 )
  {
    Count[0] >>= 4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * Count[0], 0x4B444342u);
    Buf1 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_44;
    }
    v11 = v23;
    BiTranslateDisplayOrder(v23, P, PoolWithTag, Count);
LABEL_10:
    v12 = BiQueryBootEntryOrder(&Buf2, &v19);
    v8 = BiHandleFirmwareDefaultEntry(v11, *(_QWORD *)&Count[1], &Buf1, Count);
    if ( v8 < 0 )
      goto LABEL_39;
    v13 = Count[0];
    if ( v12 < 0 || !Count[0] || v19 != Count[0] || memcmp(Buf1, Buf2, 4LL * Count[0]) )
    {
      v8 = BiSetBootEntryOrder((PULONG)Buf1, (PULONG)v13);
      if ( v8 < 0 )
        goto LABEL_39;
    }
    BootOptions.Length = 24;
    BootOptions.Version = 1;
    v14 = BiGetElement(*(HANDLE *)&Count[1], 0x25000004u, &v25, &v19);
    v4 = v25;
    v8 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -1073741275 )
        goto LABEL_39;
      v8 = BiDeleteEfiVariable(L"Timeout");
      if ( v8 < 0 )
        goto LABEL_39;
      BootOptions.Timeout = 0;
    }
    else
    {
      v15 = -1;
      v3 = 1;
      if ( *(_QWORD *)v25 <= 0xFFFFFFFFuLL )
        v15 = *v25;
      BootOptions.Timeout = v15;
    }
    v16 = BiGetElement(*(HANDLE *)&Count[1], 0x24000002u, &v26, &v19);
    v2 = v26;
    v8 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1073741275 )
      {
        v8 = BiDeleteEfiVariable(L"BootNext");
        if ( v8 >= 0 )
        {
          BootOptions.NextBootEntryId = 0;
LABEL_29:
          v19 = 0;
          v17 = BiQueryBootOptions(&v27, &v19);
          v6 = v27;
          if ( v17 >= 0 && *v27 == BootOptions.Version )
          {
            if ( (v3 & 1) != 0 && v27[2] == BootOptions.Timeout )
              v3 &= ~1u;
            if ( (v3 & 2) != 0 && v27[4] == BootOptions.NextBootEntryId )
              v3 &= ~2u;
          }
          if ( v3 )
            v8 = BiSetBootOptions(&BootOptions, v3);
        }
      }
    }
    else
    {
      v3 |= 2u;
      v8 = BiTranslateObjectIdentifier(v23, v26, &v19);
      if ( v8 >= 0 )
      {
        BootOptions.NextBootEntryId = v19;
        goto LABEL_29;
      }
    }
LABEL_39:
    if ( Buf1 )
      ExFreePoolWithTag(Buf1, 0x4B444342u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x4B444342u);
    v5 = Buf2;
    goto LABEL_44;
  }
  if ( Element == -1073741275 )
  {
    Count[0] = 0;
    v11 = v23;
    goto LABEL_10;
  }
LABEL_44:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
LABEL_46:
  if ( *(_QWORD *)&Count[1] )
    BcdCloseObject(*(HANDLE *)&Count[1]);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v8 < 0 )
    BiLogMessage(4LL, L"BiExportEfiBootManager failed: %x", (unsigned int)v8);
  return (unsigned int)v8;
}
