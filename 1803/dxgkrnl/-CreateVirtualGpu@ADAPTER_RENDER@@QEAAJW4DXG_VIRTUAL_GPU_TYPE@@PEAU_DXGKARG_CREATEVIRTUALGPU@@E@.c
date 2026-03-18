/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0172F98
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C01746A0 (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C015998C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01735F4 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(ADAPTER_RENDER *a1, int a2, __int64 a3, unsigned __int8 a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // bp
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  signed int v23; // ebx
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-38h]
  struct DXGPROCESS *v26; // [rsp+30h] [rbp-28h] BYREF

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(a1);
  if ( (int)result >= 0 )
  {
    v10 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 4044LL);
    if ( (v10 & 0x400) != 0 && a4 )
    {
      v11 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v11 + 24) = 1094LL;
      WdLogEvent5_WdError(v11);
      return 3221225473LL;
    }
    else
    {
      v12 = 0LL;
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 4044LL) & 0x200) == 0 )
        v12 = a4;
      v13 = v12;
      if ( g_ForceSecureVirtualMachine )
        v13 = 1;
      if ( a2 == 1 )
        v14 = *((_QWORD *)a1 + 188);
      else
        v14 = *((_QWORD *)a1 + 187);
      if ( v14 )
      {
        if ( DXGPROCESS::GetCurrent(v12, v9) || (v18 = DXGPROCESS::CreateDxgProcess(&v26, 0LL, 0LL, 0LL), v18 >= 0) )
        {
          wil_details_FeaturePropertyCache_ReportUsageToService(
            (__int64)&Feature_IoMmuIsolation__private_propertyCache,
            14688597LL,
            (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005CAA0,
            1,
            v25);
          if ( v13
            && a2 == 1
            && ((v22 = *((_QWORD *)a1 + 2), (*(_DWORD *)(v22 + 1836) & 0x800) != 0)
              ? (v23 = ADAPTER_RENDER::EnableIoMmuIsolation(a1, 1, 1))
              : (v23 = (*(_DWORD *)(v22 + 2420) & 8) == 0 ? 0xC00000BB : 0),
                v23 < 0) )
          {
            v24 = WdLogNewEntry5_WdError(v22);
            *(_QWORD *)(v24 + 24) = v23;
            WdLogEvent5_WdError(v24);
            return (unsigned int)v23;
          }
          else
          {
            LOBYTE(v21) = v13;
            return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, a3, v21);
          }
        }
        else
        {
          v20 = WdLogNewEntry5_WdWarning(v17, v16, v19);
          *(_QWORD *)(v20 + 24) = 1124LL;
          WdLogEvent5_WdWarning(v20);
          return (unsigned int)v18;
        }
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v15 + 24) = 1110LL;
        WdLogEvent5_WdError(v15);
        return 3221225485LL;
      }
    }
  }
  return result;
}
