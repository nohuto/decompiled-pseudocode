/*
 * XREFs of QueryInertiaInfo @ 0x1C020A788
 * Callers:
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01ABF24 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     CachePTPInertiaInfo @ 0x1C01B0A40 (CachePTPInertiaInfo.c)
 *     QueryInertiaStatus @ 0x1C01B0DD0 (QueryInertiaStatus.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01CDCB4 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     DCEPtInRect @ 0x1C00F35E0 (DCEPtInRect.c)
 *     DCEHitTestWindow @ 0x1C01BF8F0 (DCEHitTestWindow.c)
 */

__int64 __fastcall QueryInertiaInfo(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int *v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( (*(_DWORD *)(a1 + 136) & 1) == 0 || a3 && a3 != *(_DWORD *)(a1 + 24) )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 120);
  if ( v7 )
  {
    v8 = ValidateHwnd(v7);
    v3 = v8;
    if ( !v8 || *(char *)(v8 + 60) < 0 || *(char *)(v8 + 59) < 0 )
      return 0LL;
  }
  if ( ((*(_DWORD *)(a1 + 136) & 4) == 0
     || (v12 = a2, (unsigned int)DCEHitTestWindow((int *)(a1 + 40), a1 + 56, (int *)&v12, 0LL)))
    && (!v3
     || IsCompositionInputWindow((struct tagWND *)v3)
     || ((v9 = *(_QWORD *)(v3 + 288), v10 = (int *)(v3 + 128), v12 = a2, !v9)
       ? (v11 = DCEPtInRect(v10, a2))
       : (v11 = DCEHitTestWindow(v10, v9, (int *)&v12, 0LL)),
         v11)) )
  {
    return a1;
  }
  else
  {
    return 0LL;
  }
}
