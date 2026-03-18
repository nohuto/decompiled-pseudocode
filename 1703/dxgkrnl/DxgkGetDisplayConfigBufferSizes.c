/*
 * XREFs of DxgkGetDisplayConfigBufferSizes @ 0x1C00F0CD0
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00A9978 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkGetPathsModality @ 0x1C00EE510 (DxgkGetPathsModality.c)
 *     ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x1C00F11F0 (-GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z.c)
 */

__int64 __fastcall DxgkGetDisplayConfigBufferSizes(__int64 a1, unsigned int *a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rcx
  struct DXGGLOBAL *v15; // rax
  __int64 (__fastcall *v16)(struct DXGADAPTER *, _DWORD *); // rdx
  int v17; // edi
  int v18; // eax
  _QWORD *v19; // rax
  int PathsModality; // eax
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int16 v25; // [rsp+20h] [rbp-20h] BYREF
  int v26; // [rsp+28h] [rbp-18h] BYREF
  __int64 v27; // [rsp+2Ch] [rbp-14h]

  v4 = (unsigned int)a1;
  v27 = 0LL;
  v26 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2, (__int64)a3, a4);
  result = QDC_CACHE::GetCahcedBufferSizes(*((QDC_CACHE **)Global + 117), v4, a2, a3);
  if ( (int)result < 0 )
  {
    v13 = 1;
    if ( (v4 & 0x40000000) != 0 )
    {
      v17 = 0;
      LODWORD(v27) = 1;
      v18 = 2;
LABEL_16:
      HIDWORD(v27) = v18;
      goto LABEL_9;
    }
    v14 = v4 & 7;
    if ( (_DWORD)v14 == 1 )
    {
      v15 = DXGGLOBAL::GetGlobal(v14, v9, v11, v12);
      v16 = CalcAllPathDisplayConfigBufferSizeCallback;
      goto LABEL_6;
    }
    if ( (_DWORD)v14 == 2 )
    {
      v15 = DXGGLOBAL::GetGlobal(v14, v9, v11, v12);
      v16 = CalcActivePathDisplayConfigBufferSizeCallback;
LABEL_6:
      v17 = DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)v15,
              (__int64 (__fastcall *)(_QWORD *, __int64))v16,
              (__int64)&v26,
              1LL);
LABEL_7:
      if ( v17 < 0 )
      {
LABEL_11:
        v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v10);
        v19[4] = v17;
        v19[3] = v4;
        v19[5] = *a2;
        v19[6] = *a3;
        WdLogEvent5_WdEvent(v19);
        return (unsigned int)v17;
      }
      v18 = HIDWORD(v27);
      v13 = v27;
LABEL_9:
      *a2 = v13;
      *a3 = v18;
      if ( !v13 )
        v17 = -1073741637;
      goto LABEL_11;
    }
    if ( (_DWORD)v14 != 4 )
    {
      v17 = -1073741811;
      v24 = WdLogNewEntry5_WdWarning(v14, v9, v11, v12);
      *(_QWORD *)(v24 + 24) = v4;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_7;
    }
    PathsModality = DxgkGetPathsModality(15LL, 0LL, &v25);
    v22 = PathsModality;
    if ( PathsModality == -1073741789 )
    {
      v13 = v25;
      v17 = 0;
      LODWORD(v27) = v25;
      v18 = 2 * v25;
      HIDWORD(v27) = v18;
      if ( (v4 & 0x18) == 0 )
        goto LABEL_9;
      v18 = 3 * v25;
      goto LABEL_16;
    }
    v23 = WdLogNewEntry5_WdError(v10, v21);
    *(_QWORD *)(v23 + 24) = v22;
    WdLogEvent5_WdError(v23);
    if ( (int)v22 >= 0 )
      LODWORD(v22) = -1073741823;
    return (unsigned int)v22;
  }
  return result;
}
