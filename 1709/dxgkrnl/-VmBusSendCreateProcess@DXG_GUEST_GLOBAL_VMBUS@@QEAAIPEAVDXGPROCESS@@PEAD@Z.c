/*
 * XREFs of ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEAD@Z @ 0x1C0195D38
 * Callers:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateProcess(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        char *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // rbx
  char v9; // cl
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessWow64Process; // rax
  struct VMBCHANNEL__ *v15; // rcx
  struct _MDL *v17; // [rsp+28h] [rbp-58h]
  unsigned int v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  int v20; // [rsp+40h] [rbp-40h]
  int v21; // [rsp+44h] [rbp-3Ch]
  int v22; // [rsp+48h] [rbp-38h]
  struct DXGPROCESS *v23; // [rsp+50h] [rbp-30h]
  _BYTE v24[17]; // [rsp+58h] [rbp-28h] BYREF
  char v25; // [rsp+69h] [rbp-17h]
  unsigned int v26; // [rsp+70h] [rbp-10h] BYREF

  v19 = 0LL;
  v20 = 0;
  v25 &= 0xF8u;
  v5 = -1LL;
  v21 = 1;
  v6 = -1LL;
  v22 = 48;
  v23 = a2;
  do
    ++v6;
  while ( a3[v6] );
  v7 = 16;
  if ( (unsigned int)v6 <= 0x10 )
  {
    do
      ++v5;
    while ( a3[v5] );
    v7 = v5;
  }
  v8 = v7;
  memmove(v24, a3, v7);
  v9 = *((_BYTE *)a2 + 306) & 1;
  v10 = *((_BYTE *)a2 + 304) & 1;
  v24[v8] = 0;
  LOBYTE(v11) = v25 & 0xFC | v10 | (2 * v9);
  v25 = v11;
  CurrentProcess = PsGetCurrentProcess(v11, v12);
  ProcessWow64Process = PsGetProcessWow64Process(CurrentProcess);
  v15 = *this;
  v18 = 8;
  v25 = (ProcessWow64Process != 0 ? 4 : 0) | v25 & 0xFB;
  if ( VmBusSendSyncMessage(v15, (struct DXGKVMB_COMMAND_BASE *)&v19, 0x38u, &v26, &v18, v17) < 0 || v18 < 4 )
    return 0LL;
  else
    return v26;
}
