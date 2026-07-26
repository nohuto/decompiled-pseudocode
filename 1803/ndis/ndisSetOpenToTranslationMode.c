/*
 * XREFs of ndisSetOpenToTranslationMode @ 0x1C010E49C
 * Callers:
 *     ndisMOpenAdapter @ 0x1C01048C0 (ndisMOpenAdapter.c)
 * Callees:
 *     NdisInitializeEvent @ 0x1C0024200 (NdisInitializeEvent.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisSetOpenToTranslationMode(__int64 a1)
{
  __int64 v1; // rdi
  void *v3; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x90u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  *(_DWORD *)(a1 + 224) |= 0x10000000u;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 720));
  *(_DWORD *)(a1 + 736) = 2;
  NdisInitializeEvent((PNDIS_EVENT)(a1 + 744));
  *(_DWORD *)(a1 + 740) = 0;
  if ( *(_DWORD *)(v1 + 464) != 3 || (v3 = ndisMWanSend, (*(_DWORD *)(v1 + 120) & 0x20000) != 0) )
    v3 = ndisSendWithPause;
  *(_QWORD *)(a1 + 96) = v3;
  *(_QWORD *)(a1 + 168) = ndisSendPacketsWithPause;
  *(_QWORD *)(a1 + 112) = ndisSendCompleteWithPause;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x91u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
}
