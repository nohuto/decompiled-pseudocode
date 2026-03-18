/*
 * XREFs of ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0182504
 * Callers:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateProcess(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        const struct _UNICODE_STRING *a3)
{
  unsigned __int16 Length; // cx
  unsigned int v5; // eax
  unsigned __int64 v7; // rbx
  char v8; // cl
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessWow64Process; // rax
  struct VMBCHANNEL__ *v13; // rcx
  struct _MDL *v15; // [rsp+28h] [rbp-D8h]
  unsigned int v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+48h] [rbp-B8h]
  int v19; // [rsp+4Ch] [rbp-B4h]
  int v20; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *v21; // [rsp+58h] [rbp-A8h]
  _WORD v22[261]; // [rsp+60h] [rbp-A0h] BYREF
  char v23; // [rsp+26Ah] [rbp+16Ah]
  unsigned int v24; // [rsp+270h] [rbp+170h] BYREF

  v23 &= 0xF8u;
  v17 = 0LL;
  Length = a3->Length;
  v5 = 520;
  v18 = 0;
  v19 = 1;
  v20 = 51;
  v21 = a2;
  if ( Length <= 0x208u )
    v5 = Length;
  v7 = v5;
  memmove(v22, a3->Buffer, v5);
  v8 = *((_BYTE *)a2 + 320) & 1 | (2 * (*((_BYTE *)a2 + 322) & 1));
  v22[v7 >> 1] = 0;
  LOBYTE(v9) = v23 & 0xFC | v8;
  v23 = v9;
  CurrentProcess = PsGetCurrentProcess(v9, v10);
  ProcessWow64Process = PsGetProcessWow64Process(CurrentProcess);
  v13 = *this;
  v16[0] = 8;
  v23 = (ProcessWow64Process != 0 ? 4 : 0) | v23 & 0xFB;
  if ( VmBusSendSyncMessage(v13, (struct DXGKVMB_COMMAND_BASE *)&v17, 0x230u, &v24, v16, v15) < 0 || v16[0] < 4 )
    return 0LL;
  else
    return v24;
}
