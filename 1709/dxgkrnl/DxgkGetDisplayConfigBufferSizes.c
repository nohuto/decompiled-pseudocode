/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x1C00D2B10
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E0E70 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C00D2EF8 (-GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z.c)
 *     DxgkGetPathsModality @ 0x1C00DF950 (DxgkGetPathsModality.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  int v11; // eax
  struct DXGGLOBAL *v12; // rax
  __int64 (__fastcall *v13)(struct DXGADAPTER *, void *); // rdx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  int PathsModality; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // [rsp+40h] [rbp+8h] BYREF
  int v20; // [rsp+50h] [rbp+18h] BYREF
  int v21; // [rsp+54h] [rbp+1Ch]

  v2 = (unsigned int)a1;
  v21 = 0;
  v20 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  result = QDC_CACHE::GetCahcedBufferSizes(*((QDC_CACHE **)Global + 117), (unsigned int)v2 & 0xFFFFFFEF, a2);
  if ( (int)result < 0 )
  {
    v10 = 1;
    if ( (v2 & 0x40000000) == 0 )
    {
      v11 = v2 & 7;
      if ( v11 == 1 )
      {
        v12 = DXGGLOBAL::GetGlobal(v7);
        v13 = CalcAllPathDisplayConfigBufferSizeCallback;
        goto LABEL_6;
      }
      if ( v11 == 2 )
      {
        v12 = DXGGLOBAL::GetGlobal(v7);
        v13 = (__int64 (__fastcall *)(struct DXGADAPTER *, void *))CalcActivePathDisplayConfigBufferSizeCallback;
LABEL_6:
        LODWORD(v14) = DXGGLOBAL::IterateAdaptersWithCallback(
                         (__int64)v12,
                         (__int64 (__fastcall *)(_QWORD *, __int64))v13,
                         (__int64)&v20,
                         1);
LABEL_7:
        if ( (int)v14 < 0 )
        {
LABEL_11:
          v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
          v15[4] = (int)v14;
          v15[3] = v2;
          v15[5] = *a2;
          WdLogEvent5_WdEvent(v15);
          return (unsigned int)v14;
        }
        v10 = v21;
LABEL_9:
        *a2 = v10;
        if ( !v10 )
          LODWORD(v14) = -1073741637;
        goto LABEL_11;
      }
      if ( v11 != 4 )
      {
        LODWORD(v14) = -1073741811;
        v18 = WdLogNewEntry5_WdWarning(v7, v6, v8);
        *(_QWORD *)(v18 + 24) = v2;
        WdLogEvent5_WdWarning(v18);
        goto LABEL_7;
      }
      PathsModality = DxgkGetPathsModality(15LL, 0LL, &v19);
      v14 = PathsModality;
      if ( PathsModality != -1073741789 )
      {
        v17 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v17 + 24) = v14;
        WdLogEvent5_WdError(v17);
        if ( (int)v14 >= 0 )
          LODWORD(v14) = -1073741823;
        return (unsigned int)v14;
      }
      v10 = v19;
    }
    LODWORD(v14) = 0;
    v21 = v10;
    goto LABEL_9;
  }
  return result;
}
