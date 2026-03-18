/*
 * XREFs of VidSchTerminateHwContext @ 0x1C0033120
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0030470 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchTerminateAdapter @ 0x1C00BE350 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002DD70 (McTemplateK0pqqqqqqqqppp.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C003078C (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 */

void __fastcall VidSchTerminateHwContext(_QWORD *P, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  _QWORD v6[4]; // [rsp+80h] [rbp-28h] BYREF

  if ( (P[6] & 1) != 0 )
  {
    if ( P[5] )
    {
      ((void (__fastcall *)(_QWORD))DxgCoreInterface[23])(*(_QWORD *)(*(_QWORD *)(P[2] + 24LL) + 8LL));
      P[5] = 0LL;
      if ( bTracingEnabled )
      {
        memset(v6, 0, sizeof(v6));
        v4 = P[1];
        if ( v4 )
        {
          v5 = *(_QWORD *)(v4 + 8);
          if ( !v5 )
            v5 = P[1];
        }
        else
        {
          v5 = 0LL;
        }
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp(
            *(unsigned __int16 *)(P[2] + 4LL),
            &EventDestroyContext,
            HIDWORD(v6[1]),
            v5,
            *(_WORD *)(P[2] + 4LL),
            1 << *((_DWORD *)P + 14),
            v6[0],
            SBYTE4(v6[0]),
            v6[1],
            SBYTE4(v6[1]),
            v6[2],
            3,
            P);
      }
    }
  }
  VidSchiDecrementHwContextReference((unsigned int *)P, 0LL, a3);
}
