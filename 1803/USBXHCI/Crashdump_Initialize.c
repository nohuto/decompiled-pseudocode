/*
 * XREFs of Crashdump_Initialize @ 0x1C00377F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Crashdump_InitializeWithControllerReset @ 0x1C0037D08 (Crashdump_InitializeWithControllerReset.c)
 *     Crashdump_InitializeWithoutControllerReset @ 0x1C0037F24 (Crashdump_InitializeWithoutControllerReset.c)
 *     Crashdump_Register_BiosHandoff @ 0x1C0038B30 (Crashdump_Register_BiosHandoff.c)
 *     Crashdump_Register_LogRHPortInfo @ 0x1C0038CC8 (Crashdump_Register_LogRHPortInfo.c)
 */

__int64 __fastcall Crashdump_Initialize(_BYTE *Address)
{
  unsigned int v2; // ebx
  __int128 v3; // xmm0
  unsigned int v4; // edi
  unsigned int v5; // ebx
  const char *v6; // r9
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // ebx
  __int128 *v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  __int64 **v17; // rbx
  int v18; // eax
  int v19; // eax
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: Begin\n");
  v2 = **(_DWORD **)(*(_QWORD *)Address + 24LL);
  v3 = *(_OWORD *)(Address + 8);
  Address[624] = 0;
  v4 = HIBYTE(v2);
  v5 = HIWORD(v2);
  v6 = "HS";
  v7 = *((_DWORD *)Address + 131) == 2;
  Address[627] = v4;
  if ( !v7 )
    v6 = "SS";
  Address[628] = v5;
  v8 = *((_DWORD *)Address + 136);
  v21 = v3;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device speed: %s, RootHub port #: %u\n", v6, v8);
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: xHCI version: 0x%x.0x%x, ContextSize: %u, ScratchpadBuffers: %u, DeviceSlots: %u\n",
    v4,
    (unsigned __int8)v5,
    (*(_DWORD *)(*(_QWORD *)Address + 104LL) >> 2) & 1,
    *((_DWORD *)Address + 7),
    *((_DWORD *)Address + 6));
  v9 = 0;
  v10 = &v21;
  do
  {
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Device Flag[%d]:  0x%I64X\n", v9++, *(_QWORD *)v10);
    v10 = (__int128 *)((char *)v10 + 8);
  }
  while ( v9 < 2 );
  v11 = *((_DWORD *)Address + 146);
  if ( v11 == 2 )
  {
    *((_DWORD *)Address + 146) = 3;
    v11 = 3;
  }
  if ( ((v11 - 1) & 0xFFFFFFFB) == 0 )
  {
    Address[626] = 1;
    v12 = Crashdump_InitializeWithoutControllerReset(Address);
    if ( v12 < 0 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_InitializeWithoutControllerReset failed with error 0x%X\n", v12);
      v13 = Crashdump_InitializeWithControllerReset(Address);
      v14 = v13;
      if ( v13 < 0 )
        goto LABEL_25;
    }
  }
  v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)Address + 32LL) + 4LL);
  if ( (v15 & 0x800) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is not ready, cannot continue.\n");
LABEL_16:
    v14 = -1073741823;
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_VerifyRegisterState failed with error 0x%X\n", 3221225473LL);
    goto LABEL_26;
  }
  if ( (v15 & 4) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Host System Error bit is set, cannot continue.\n");
    goto LABEL_16;
  }
  if ( (v15 & 0x1000) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: xHC is in an error state, cannot continue.\n");
    goto LABEL_16;
  }
  v16 = *((_DWORD *)Address + 146);
  v14 = 0;
  if ( !v16 || v16 == 3 )
  {
    Crashdump_Register_LogRHPortInfo(Address, *((unsigned int *)Address + 136));
    if ( *((_DWORD *)Address + 146) == 3 )
    {
      v17 = (__int64 **)*((_QWORD *)Address + 62);
      if ( *v17 != (__int64 *)v17 )
      {
        do
        {
          memset(v17[2], 0, *((unsigned int *)v17 + 10));
          v17 = (__int64 **)*v17;
        }
        while ( *v17 != *((__int64 **)Address + 62) );
      }
      v18 = Crashdump_Register_BiosHandoff(Address);
      if ( v18 < 0 )
        DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_BiosHandoff failed with error 0x%X\n", v18);
    }
    v13 = Crashdump_InitializeWithControllerReset(Address);
    v14 = v13;
    if ( v13 < 0 )
LABEL_25:
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: Crashdump_InitializeWithControllerReset failed with error 0x%X\n",
        (unsigned int)v13);
  }
LABEL_26:
  v19 = *((_DWORD *)Address + 146);
  Address[625] = 0;
  if ( v19 == 1 )
  {
    *((_DWORD *)Address + 146) = 2;
    v19 = 2;
  }
  if ( v19 == 5 )
  {
    *((_DWORD *)Address + 146) = 2;
    if ( (v3 & 2) != 0 || Address[624] )
      goto LABEL_34;
    Address[625] = 1;
    v19 = 2;
  }
  if ( v19 == 3 )
    *((_DWORD *)Address + 146) = 4;
LABEL_34:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Initialize: End 0x%X\n", v14);
  return v14;
}
