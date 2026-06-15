/*
 * XREFs of ?AERTMemoryShutdown@@YAJXZ @ 0x1800DDB18
 * Callers:
 *     DllMain @ 0x18003541C (DllMain.c)
 * Callees:
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x1800DD7F0 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x1800F01C8 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

__int64 AERTMemoryShutdown(void)
{
  void *v0; // rdx
  CAudioDGProcess *v1; // rcx
  unsigned __int64 v3; // [rsp+40h] [rbp-28h]
  unsigned __int64 v4; // [rsp+48h] [rbp-20h]
  WINBOOL fPending; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids);
  }
  if ( !InitOnceBeginInitialize(&gRTHeapInitOnce, 1u, &fPending, &Context) || fPending )
    goto LABEL_15;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids,
      Context);
  }
  AERTDestroyHeap(Context, v0);
  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
LABEL_16:
      if ( v1 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v1 + 7) & 0x40000) != 0
        && *((_BYTE *)v1 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v1 + 2), 0x19u, (__int64)&WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids);
      }
      goto LABEL_20;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids);
LABEL_15:
    v1 = WPP_GLOBAL_Control;
    goto LABEL_16;
  }
LABEL_20:
  AEWMILOG_MEMORY((unsigned int)v1, v0, 4u, 2u, 0LL, 0LL, 0LL, 0LL, v3, v4, 0LL);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids);
  }
  return 0LL;
}
