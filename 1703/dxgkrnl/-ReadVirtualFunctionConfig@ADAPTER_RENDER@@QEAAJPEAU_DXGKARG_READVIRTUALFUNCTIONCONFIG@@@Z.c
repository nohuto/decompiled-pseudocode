/*
 * XREFs of ?ReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C002A89C
 * Callers:
 *     ?VirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C002B184 (-VirtualGpuDriverEscape@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 *     ?DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z @ 0x1C0041AB0 (-DpiDdiReadVirtualFunctionConfig@@YAJPEAX0GKK@Z.c)
 * Callees:
 *     DpReadDeviceSpace @ 0x1C0012B20 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?DdiReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z @ 0x1C002893C (-DdiReadVirtualFunctionConfig@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_READVIRTUALFUNCTIONCONFIG@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::ReadVirtualFunctionConfig(
        unsigned __int64 this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *a2)
{
  ULONG VirtualFunctionIndex; // eax
  struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *v3; // rbx
  ADAPTER_RENDER *v4; // rsi
  unsigned int v5; // ebp
  __int64 Offset; // rcx
  __int64 v7; // r15
  size_t Length; // r8
  __int64 v9; // rax
  _BYTE *v10; // rdx
  PVOID Data; // rcx
  unsigned int v12; // edi
  _BYTE *i; // r14
  ULONG v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rax
  _BYTE Src[168]; // [rsp+0h] [rbp-100h] BYREF
  ULONG v21; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]

  VirtualFunctionIndex = a2->VirtualFunctionIndex;
  v3 = a2;
  v4 = (ADAPTER_RENDER *)this;
  if ( VirtualFunctionIndex < *(_DWORD *)(this + 1128)
    && (this = VirtualFunctionIndex,
        (a2 = *(struct _DXGKARG_READVIRTUALFUNCTIONCONFIG **)(*((_QWORD *)v4 + 142) + 8LL * VirtualFunctionIndex)) != 0LL) )
  {
    if ( BYTE1(a2[5].Data) )
    {
      v5 = 0;
      if ( !g_PciConfig.VendorID )
      {
        *(_DWORD *)&g_PciConfig.VendorID = 9311252;
        dword_1C0070C34 = 1048583;
        qword_1C0070C38 = 50462720LL;
        qword_1C0070C40 = 0LL;
        qword_1C0070C48 = 0LL;
        qword_1C0070C50 = 0LL;
        dword_1C0070C58 = 0;
        qword_1C0070C5C = 0LL;
        qword_1C0070C64 = 64LL;
        dword_1C0070C6C = 0;
      }
      Offset = v3->Offset;
      v7 = *(_QWORD *)(*((_QWORD *)v4 + 2) + 192LL);
      if ( (unsigned int)Offset >= 0xC0 )
      {
        Length = v3->Length;
        if ( (unsigned int)(Length + Offset) <= 0xD0 )
        {
          v23 = 0LL;
          v9 = *(_QWORD *)(&a2->Length + 1);
          v10 = &Src[Offset];
          Data = v3->Data;
          v22 = v9;
          memmove(Data, v10, Length);
          return v5;
        }
      }
      v12 = 0;
      for ( i = v3->Data; v12 < v3->Length; ++v12 )
      {
        v14 = v12 + v3->Offset;
        if ( v14 < 0x100 )
        {
          if ( v14 >= 4 || (*(_DWORD *)(*((_QWORD *)v4 + 2) + 300LL) & 4) != 0 )
          {
            i[v12] = *((_BYTE *)&g_PciConfig.VendorID + v14);
          }
          else
          {
            v21 = 0;
            v5 = DpReadDeviceSpace(v7, 0LL, &i[v12], v14, 1u, &v21);
            if ( (v5 & 0x80000000) != 0 || v21 != 1 )
            {
              v17 = WdLogNewEntry5_WdError(v16, v15);
              *(_QWORD *)(v17 + 24) = v3->VirtualFunctionIndex;
              WdLogEvent5_WdError(v17);
              return v5;
            }
          }
        }
        else
        {
          i[v12] = 0;
        }
      }
      return v5;
    }
    else
    {
      return ADAPTER_RENDER::DdiReadVirtualFunctionConfig(v4, v3);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v19 + 24) = v3->VirtualFunctionIndex;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
}
