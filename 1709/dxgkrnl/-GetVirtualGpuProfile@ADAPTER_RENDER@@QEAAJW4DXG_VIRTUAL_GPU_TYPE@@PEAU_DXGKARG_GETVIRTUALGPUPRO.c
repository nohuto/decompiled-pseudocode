/*
 * XREFs of ?GetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z @ 0x1C0189434
 * Callers:
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C018A10C (DxgkDdiGetVirtualGpuProfile.c)
 * Callees:
 *     ?DdiGetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z @ 0x1C018BA3C (-DdiGetVirtualGpuProfile@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETVIRTUALGPUPROFILE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuProfile(ADAPTER_RENDER *a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rax
  __int64 v7; // rax

  if ( (_DWORD)a2 == 1 )
  {
    a3[1] = 2304;
    *((_QWORD *)a3 + 1) = 1000000000LL;
    *((_QWORD *)a3 + 2) = 1000000000LL;
    *((_QWORD *)a3 + 4) = 1000000000LL;
    *((_QWORD *)a3 + 5) = 1000000000LL;
    *((_QWORD *)a3 + 6) = -1LL;
    *((_QWORD *)a3 + 7) = -1LL;
    *((_QWORD *)a3 + 9) = -1LL;
    *((_QWORD *)a3 + 10) = -1LL;
    *((_QWORD *)a3 + 11) = 1000000000LL;
    *((_QWORD *)a3 + 12) = 1000000000LL;
    *((_QWORD *)a3 + 14) = 1000000000LL;
    *((_QWORD *)a3 + 15) = 1000000000LL;
    *((_QWORD *)a3 + 16) = 1000000000LL;
    *((_QWORD *)a3 + 17) = 1000000000LL;
    *((_QWORD *)a3 + 19) = 1000000000LL;
    *((_QWORD *)a3 + 20) = 1000000000LL;
    *((_QWORD *)a3 + 3) = 0LL;
    *((_QWORD *)a3 + 8) = 0LL;
    *((_QWORD *)a3 + 13) = 0LL;
    *((_QWORD *)a3 + 18) = 0LL;
    if ( !*a3 )
    {
      if ( *((_QWORD *)a1 + 154) )
      {
        v5 = WdLogNewEntry5_WdWarning(-1LL, 1000000000LL, a3);
        *(_QWORD *)(v5 + 24) = *a3;
        WdLogEvent5_WdWarning(v5);
        *a3 = *(_DWORD *)(*((_QWORD *)a1 + 154) + 12LL);
      }
    }
    return 0LL;
  }
  else
  {
    if ( !*a3 && *((_QWORD *)a1 + 153) )
    {
      v7 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v7 + 24) = *a3;
      WdLogEvent5_WdWarning(v7);
      *a3 = *(_DWORD *)(*((_QWORD *)a1 + 153) + 12LL);
    }
    return ADAPTER_RENDER::DdiGetVirtualGpuProfile(a1, (struct _DXGKARG_GETVIRTUALGPUPROFILE *)a3);
  }
}
